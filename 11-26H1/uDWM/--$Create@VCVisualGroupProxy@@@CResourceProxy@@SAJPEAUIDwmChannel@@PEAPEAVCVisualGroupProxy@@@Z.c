/*
 * XREFs of ??$Create@VCVisualGroupProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCVisualGroupProxy@@@Z @ 0x1800A7A70
 * Callers:
 *     ?CreateVisualGroupProxy@CCompositor@@QEAAJPEAPEAVCVisualGroupProxy@@@Z @ 0x1800A801C (-CreateVisualGroupProxy@CCompositor@@QEAAJPEAPEAVCVisualGroupProxy@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CVisualGroupProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800DE490 (--0CVisualGroupProxy@@QEAA@PEAUIDwmChannel@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CResourceProxy::Create<CVisualGroupProxy>(struct IDwmChannel *a1, CBaseObject **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  CBaseObject *v8; // rax
  CBaseObject *v9; // rax
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v13; // [rsp+30h] [rbp+8h] BYREF
  CBaseObject *v14; // [rsp+40h] [rbp+18h] BYREF

  v14 = 0LL;
  v13 = 0;
  v4 = (*(__int64 (__fastcall **)(struct IDwmChannel *, __int64, unsigned int *))(*(_QWORD *)a1 + 72LL))(a1, 25LL, &v13);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = (unsigned int)v4;
    v7 = 28LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"clientcore\\windows\\dwm\\udwm\\Resource.h",
      (const char *)v6);
    goto LABEL_11;
  }
  v8 = (CBaseObject *)DefaultHeap::AllocClear(0x20uLL);
  v14 = v8;
  if ( !v8 )
  {
    v14 = 0LL;
    goto LABEL_7;
  }
  v9 = CVisualGroupProxy::CVisualGroupProxy(v8, a1, v13);
  v14 = v9;
  if ( !v9 )
  {
LABEL_7:
    v10 = (*(__int64 (__fastcall **)(struct IDwmChannel *, _QWORD))(*(_QWORD *)a1 + 96LL))(a1, v13);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x21,
        (int)"clientcore\\windows\\dwm\\udwm\\Resource.h",
        (const char *)(unsigned int)v10);
    v5 = -2147024882;
    v6 = 2147942414LL;
    v7 = 34LL;
    goto LABEL_10;
  }
  v14 = 0LL;
  *a2 = v9;
  v5 = 0;
LABEL_11:
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v14);
  return v5;
}
