/*
 * XREFs of ?CDragVisualAcc_CreateInstance@@YAJPEAUIDragVisual@@AEBU_GUID@@PEAPEAX@Z @ 0x180526374
 * Callers:
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x180521CB8 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18022DF84 (--1-$MakeAllocator@VNonAgileDispatcher@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawElementProviderSimple@@UIRawElementProviderFragment@@UIRawElementProviderFragmentRoot@@UIDragProvider@@UIDragVisualAcc@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180518E50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRa_ea_180518E50.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawElementProviderSimple@@UIRawElementProviderFragment@@UIRawElementProviderFragmentRoot@@UIDragProvider@@UIDragVisualAcc@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawElementProviderSimple@@UIRawElementProviderFragment@@UIRawElementProviderFragmentRoot@@UIDragProvider@@UIDragVisualAcc@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180525C14 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIR_ea_180525C14.c)
 *     ??0CDragVisualAcc@@QEAA@PEAUIDragVisual@@@Z @ 0x180525D94 (--0CDragVisualAcc@@QEAA@PEAUIDragVisual@@@Z.c)
 */

__int64 __fastcall CDragVisualAcc_CreateInstance(struct IDragVisual *a1, const struct _GUID *a2, void **a3)
{
  __int64 v5; // rbx
  void *v6; // rax
  CDragVisualAcc *v7; // rax
  unsigned int v8; // edi
  volatile int *v9; // rdx
  void *v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = (void *)a2;
  *a3 = 0LL;
  v5 = 0LL;
  v6 = operator new(0xF0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v6;
  if ( v6 )
  {
    v7 = CDragVisualAcc::CDragVisualAcc((CDragVisualAcc *)v6, a1);
    v11 = 0LL;
    v5 = (__int64)v7;
  }
  Microsoft::WRL::Details::MakeAllocator<NonAgileDispatcher>::~MakeAllocator<NonAgileDispatcher>(&v11);
  if ( v5 )
  {
    v8 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawElementProviderSimple,IRawElementProviderFragment,IRawElementProviderFragmentRoot,IDragProvider,IDragVisualAcc>>(
           v5,
           &GUID_959cb746_add4_483a_8acd_059d06f3798a,
           a3);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawElementProviderSimple,IRawElementProviderFragment,IRawElementProviderFragmentRoot,IDragProvider,IDragVisualAcc>::Release(
      v5,
      v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v8;
}
