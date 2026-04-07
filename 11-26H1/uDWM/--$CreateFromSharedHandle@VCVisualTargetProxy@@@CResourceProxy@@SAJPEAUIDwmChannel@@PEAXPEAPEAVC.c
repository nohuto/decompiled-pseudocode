/*
 * XREFs of ??$CreateFromSharedHandle@VCVisualTargetProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAXPEAPEAVCVisualTargetProxy@@@Z @ 0x18008426C
 * Callers:
 *     ?CreateVisualTargetProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualTargetProxy@@@Z @ 0x18008425C (-CreateVisualTargetProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualTargetProxy@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CVisualTargetProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800DE5A4 (--0CVisualTargetProxy@@QEAA@PEAUIDwmChannel@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CResourceProxy::CreateFromSharedHandle<CVisualTargetProxy>(
        struct IDwmChannel *a1,
        __int64 a2,
        CBaseObject **a3)
{
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v7; // esi
  CBaseObject *v9; // rax
  CBaseObject *v10; // rax
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF
  CBaseObject *v14; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0;
  v14 = 0LL;
  v13 = 0;
  v6 = (*(__int64 (__fastcall **)(struct IDwmChannel *, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 88LL))(
         a1,
         a2,
         23LL,
         0LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36,
      (int)"clientcore\\windows\\dwm\\udwm\\Resource.h",
      (const char *)(unsigned int)v6);
    return v7;
  }
  v9 = (CBaseObject *)DefaultHeap::AllocClear(0x20uLL);
  v14 = v9;
  if ( !v9 )
  {
    v14 = 0LL;
    goto LABEL_7;
  }
  v10 = CVisualTargetProxy::CVisualTargetProxy(v9, a1, v13);
  v14 = v10;
  if ( !v10 )
  {
LABEL_7:
    v11 = (*(__int64 (__fastcall **)(struct IDwmChannel *, _QWORD))(*(_QWORD *)a1 + 96LL))(a1, v13);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3B,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\Resource.h",
        (const char *)(unsigned int)v11,
        (int)&v13);
    v5 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C,
      (int)"clientcore\\windows\\dwm\\udwm\\Resource.h",
      (const char *)0x8007000ELL);
    goto LABEL_10;
  }
  v14 = 0LL;
  *a3 = v10;
LABEL_10:
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v14);
  return v5;
}
