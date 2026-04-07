/*
 * XREFs of ??$Create@VCVisualProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCVisualProxy@@@Z @ 0x180082DC4
 * Callers:
 *     ?CreateVisualProxy@CCompositor@@QEAAJPEAPEAVCVisualProxy@@@Z @ 0x180082CA0 (-CreateVisualProxy@CCompositor@@QEAAJPEAPEAVCVisualProxy@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180084EB4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180085D34 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CVisualProxy@@QEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x1800DE4B8 (--0CVisualProxy@@QEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CResourceProxy::Create<CVisualProxy>(__int64 a1, CBaseObject **a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v6; // edi
  void *v8; // rax
  CBaseObject *v9; // rax
  int v10; // eax
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v13; // [rsp+40h] [rbp+8h] BYREF
  CBaseObject *v14; // [rsp+50h] [rbp+18h] BYREF
  void *v15; // [rsp+58h] [rbp+20h]

  v4 = 0;
  v14 = 0LL;
  v13 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)a1 + 72LL))(a1, 23LL, &v13);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = DefaultHeap::AllocClear(0x28uLL);
    v15 = v8;
    if ( v8 )
      v9 = (CBaseObject *)CVisualProxy::CVisualProxy(v8, a1, v13, 23LL);
    else
      v9 = 0LL;
    v14 = v9;
    if ( v9 )
    {
      v14 = 0LL;
      *a2 = v9;
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 96LL))(a1, v13);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x21,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\Resource.h",
          (const char *)(unsigned int)v10,
          v11);
      v4 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\Resource.h",
        (const char *)0x8007000ELL,
        v11);
    }
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v14);
    return v4;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\Resource.h",
      (const char *)(unsigned int)v5,
      v11);
    return v6;
  }
}
