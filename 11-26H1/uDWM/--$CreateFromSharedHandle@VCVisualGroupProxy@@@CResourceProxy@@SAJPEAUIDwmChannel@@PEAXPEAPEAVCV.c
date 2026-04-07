/*
 * XREFs of ??$CreateFromSharedHandle@VCVisualGroupProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAXPEAPEAVCVisualGroupProxy@@@Z @ 0x1800A7C88
 * Callers:
 *     ?CreateVisualGroupProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualGroupProxy@@@Z @ 0x1800A802C (-CreateVisualGroupProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualGroupProxy@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CVisualGroupProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800DE490 (--0CVisualGroupProxy@@QEAA@PEAUIDwmChannel@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CResourceProxy::CreateFromSharedHandle<CVisualGroupProxy>(
        struct IDwmChannel *a1,
        __int64 a2,
        CBaseObject **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  CBaseObject *v9; // rax
  CBaseObject *v10; // rax
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CBaseObject *v14; // [rsp+58h] [rbp+20h] BYREF

  v14 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct IDwmChannel *, __int64, __int64))(*(_QWORD *)a1 + 88LL))(a1, a2, 25LL);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = (unsigned int)v5;
    v8 = 54LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"clientcore\\windows\\dwm\\udwm\\Resource.h",
      (const char *)v7);
    goto LABEL_11;
  }
  v9 = (CBaseObject *)DefaultHeap::AllocClear(0x20uLL);
  v14 = v9;
  if ( !v9 )
  {
    v14 = 0LL;
    goto LABEL_7;
  }
  v10 = CVisualGroupProxy::CVisualGroupProxy(v9, a1, 0);
  v14 = v10;
  if ( !v10 )
  {
LABEL_7:
    v11 = (*(__int64 (__fastcall **)(struct IDwmChannel *, _QWORD))(*(_QWORD *)a1 + 96LL))(a1, 0LL);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3B,
        (int)"clientcore\\windows\\dwm\\udwm\\Resource.h",
        (const char *)(unsigned int)v11);
    v6 = -2147024882;
    v7 = 2147942414LL;
    v8 = 60LL;
    goto LABEL_10;
  }
  v14 = 0LL;
  *a3 = v10;
  v6 = 0;
LABEL_11:
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v14);
  return v6;
}
