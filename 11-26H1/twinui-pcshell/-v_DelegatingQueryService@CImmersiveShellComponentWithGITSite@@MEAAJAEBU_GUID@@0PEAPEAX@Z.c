/*
 * XREFs of ?v_DelegatingQueryService@CImmersiveShellComponentWithGITSite@@MEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18018EA50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveShellComponentWithGITSite::v_DelegatingQueryService(
        CImmersiveShellComponentWithGITSite *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  unsigned int Service; // ebx
  IUnknown *v8; // rcx
  IUnknown *punk; // [rsp+20h] [rbp-18h] BYREF

  punk = 0LL;
  (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 5) + 32LL))(
    (char *)this - 40,
    &GUID_00000000_0000_0000_c000_000000000046,
    &punk);
  Service = IUnknown_QueryService(punk, a2, a3, a4);
  v8 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v8->lpVtbl->Release)(v8);
  }
  return Service;
}
