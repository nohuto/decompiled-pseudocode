/*
 * XREFs of ?ProcessSetAnimationController@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETANIMATIONCONTROLLER@@@Z @ 0x1801AA9FC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetAnimationController(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_KEYFRAMEANIMATION_SETANIMATIONCONTROLLER *a3)
{
  unsigned int v3; // eax
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_DWORD *)a3 + 2);
  if ( v3
    && v3 < *((_DWORD *)a2 + 7)
    && (v5 = *((_DWORD *)a2 + 6) * v3, v6 = *((_QWORD *)a2 + 5), v7 = (unsigned int)v5, *(_DWORD *)(v5 + v6))
    && (v9 = *(_QWORD *)(v5 + v6 + 8)) != 0
    && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 64LL))(v9, 4LL)
    && (v10 = *(_QWORD *)(v7 + v6 + 8)) != 0
    && !*((_QWORD *)this + 35) )
  {
    *((_QWORD *)this + 35) = v10;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E2,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframeanimation.cpp",
      (const char *)0x88980402LL);
    return 2291663874LL;
  }
}
