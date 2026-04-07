/*
 * XREFs of ??$Create@VCCursorVisualProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCCursorVisualProxy@@@Z @ 0x1800A7050
 * Callers:
 *     ?CreateCursorVisualProxy@CCompositor@@QEAAJPEAPEAVCCursorVisualProxy@@@Z @ 0x1800A7F7C (-CreateCursorVisualProxy@CCompositor@@QEAAJPEAPEAVCCursorVisualProxy@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CCursorVisualProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800A9750 (--0CCursorVisualProxy@@QEAA@PEAUIDwmChannel@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CResourceProxy::Create<CCursorVisualProxy>(struct IDwmChannel *a1, CCursorVisualProxy **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  CCursorVisualProxy *v8; // rax
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF
  CBaseObject *v13; // [rsp+50h] [rbp+18h] BYREF
  CCursorVisualProxy *v14; // [rsp+58h] [rbp+20h]

  v13 = 0LL;
  v12 = 0;
  v4 = (*(__int64 (__fastcall **)(struct IDwmChannel *, __int64, unsigned int *))(*(_QWORD *)a1 + 72LL))(a1, 4LL, &v12);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v8 = (CCursorVisualProxy *)DefaultHeap::AllocClear(0x28uLL);
    v14 = v8;
    if ( v8 )
      v8 = CCursorVisualProxy::CCursorVisualProxy(v8, a1, v12);
    v13 = v8;
    if ( v8 )
    {
      v13 = 0LL;
      *a2 = v8;
      v5 = 0;
      goto LABEL_11;
    }
    v9 = (*(__int64 (__fastcall **)(struct IDwmChannel *, _QWORD))(*(_QWORD *)a1 + 96LL))(a1, v12);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x21,
        (int)"clientcore\\windows\\dwm\\udwm\\Resource.h",
        (const char *)(unsigned int)v9);
    v5 = -2147024882;
    v6 = 2147942414LL;
    v7 = 34LL;
  }
  else
  {
    v6 = (unsigned int)v4;
    v7 = 28LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"clientcore\\windows\\dwm\\udwm\\Resource.h",
    (const char *)v6);
LABEL_11:
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v13);
  return v5;
}
