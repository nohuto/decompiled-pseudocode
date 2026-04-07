/*
 * XREFs of ??$CreateFromSharedHandle@VCVisualProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAXPEAPEAVCVisualProxy@@@Z @ 0x18008266C
 * Callers:
 *     ?CreateVisualProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualProxy@@@Z @ 0x180081B28 (-CreateVisualProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualProxy@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CVisualProxy@@QEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x1800DE4B8 (--0CVisualProxy@@QEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CResourceProxy::CreateFromSharedHandle<CVisualProxy>(
        __int64 a1,
        __int64 a2,
        CBaseObject **a3,
        __int64 a4)
{
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // esi
  void *v10; // rax
  CBaseObject *v11; // rax
  int v12; // eax
  unsigned int *v13; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v15; // [rsp+60h] [rbp+8h] BYREF
  CBaseObject *v16; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  v16 = 0LL;
  v15 = 0;
  v13 = &v15;
  LOBYTE(a4) = 1;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 88LL))(a1, a2, 23LL, a4);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = DefaultHeap::AllocClear(0x28uLL);
    if ( v10 )
      v11 = (CBaseObject *)CVisualProxy::CVisualProxy(v10, a1, v15, 23LL);
    else
      v11 = 0LL;
    v16 = v11;
    if ( v11 )
    {
      v16 = 0LL;
      *a3 = v11;
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 96LL))(a1, v15);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3B,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\Resource.h",
          (const char *)(unsigned int)v12,
          (int)&v15);
      v6 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\Resource.h",
        (const char *)0x8007000ELL,
        (int)v13);
    }
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v16);
    return v6;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\Resource.h",
      (const char *)(unsigned int)v7,
      (int)&v15);
    return v8;
  }
}
