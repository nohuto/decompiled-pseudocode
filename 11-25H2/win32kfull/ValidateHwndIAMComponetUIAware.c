/*
 * XREFs of ValidateHwndIAMComponetUIAware @ 0x14015C728
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x14024E5B0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     ??1CDisableILCheckAuto@@QEAA@XZ @ 0x14001BB60 (--1CDisableILCheckAuto@@QEAA@XZ.c)
 *     ??0CDisableILCheckAuto@@QEAA@XZ @ 0x14001BB78 (--0CDisableILCheckAuto@@QEAA@XZ.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x14001D970 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IAMThreadAccessGranted @ 0x14015C7E0 (IAMThreadAccessGranted.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x14015CE44 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

__int64 __fastcall ValidateHwndIAMComponetUIAware(__int64 a1)
{
  const struct tagWND *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagWND *Host; // rdi
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  CDisableILCheckAuto::CDisableILCheckAuto((CDisableILCheckAuto *)v11);
  v2 = (const struct tagWND *)ValidateHwnd(a1);
  v5 = PtiCurrent(v4, v3);
  if ( (unsigned int)IAMThreadAccessGranted(v5)
    || v2
    && (unsigned int)CoreWindowProp::IsComponent(v2, v6)
    && (Host = CoreWindowProp::GetHost(v2)) != 0LL
    && *(_QWORD *)(*((_QWORD *)Host + 2) + 464LL) == *((_QWORD *)PtiCurrent(v9, v8) + 58) )
  {
    CDisableILCheckAuto::~CDisableILCheckAuto((CDisableILCheckAuto *)v11);
    return (__int64)v2;
  }
  else
  {
    CDisableILCheckAuto::~CDisableILCheckAuto((CDisableILCheckAuto *)v11);
    return ValidateHwnd(a1);
  }
}
