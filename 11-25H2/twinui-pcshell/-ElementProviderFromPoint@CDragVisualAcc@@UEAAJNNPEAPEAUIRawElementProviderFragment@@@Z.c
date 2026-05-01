/*
 * XREFs of ?ElementProviderFromPoint@CDragVisualAcc@@UEAAJNNPEAPEAUIRawElementProviderFragment@@@Z @ 0x1805264C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawElementProviderSimple@@UIRawElementProviderFragment@@UIRawElementProviderFragmentRoot@@UIDragProvider@@UIDragVisualAcc@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawElementProviderSimple@@UIRawElementProviderFragment@@UIRawElementProviderFragmentRoot@@UIDragProvider@@UIDragVisualAcc@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180525C14 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIR_ea_180525C14.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDragVisualAcc::ElementProviderFromPoint(
        CDragVisualAcc *this,
        double a2,
        double a3,
        struct IRawElementProviderFragment **a4)
{
  unsigned __int64 v6; // rbp
  int v7; // edi
  unsigned __int64 i; // rbx
  __int64 v9; // rcx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, struct IRawElementProviderFragment **); // rcx
  __int64 v12; // [rsp+40h] [rbp+8h]

  *a4 = 0LL;
  v6 = *((_QWORD *)this + 25);
  v7 = -2147220991;
  if ( *((_DWORD *)this + 8) == 2 )
  {
    for ( i = 0LL; i < v6; ++i )
    {
      v9 = *(_QWORD *)(*((_QWORD *)this + 24) + 8 * i);
      HIDWORD(v12) = (int)a3;
      LODWORD(v12) = (int)a2;
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 32LL))(v9, v12) )
      {
        v10 = *(__int64 (__fastcall ****)(_QWORD, GUID *, struct IRawElementProviderFragment **))(*((_QWORD *)this + 24)
                                                                                                + 8 * i);
        v7 = (**v10)(v10, &GUID_f7063da8_8359_439c_9297_bbc5299a7d87, a4);
      }
      if ( v7 >= 0 )
        return (unsigned int)v7;
    }
  }
  return (unsigned int)Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawElementProviderSimple,IRawElementProviderFragment,IRawElementProviderFragmentRoot,IDragProvider,IDragVisualAcc>>(
                         (__int64)this - 16,
                         &GUID_f7063da8_8359_439c_9297_bbc5299a7d87,
                         a4);
}
