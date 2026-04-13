/*
 * XREFs of ??$ActivateInstance@V?$ComPtr@UIProcessContextualSuggestionsEvent@ContentManagement@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIProcessContextualSuggestionsEvent@ContentManagement@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180023AC8
 * Callers:
 *     ?EnableContextualSuggestions@ContentManagement@@YAJE@Z @ 0x18002E7BC (-EnableContextualSuggestions@ContentManagement@@YAJE@Z.c)
 * Callees:
 *     memcmp_0 @ 0x180021E99 (memcmp_0.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033C28 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<ContentManagement::IProcessContextualSuggestionsEvent>>(
        __int64 a1,
        _QWORD *a2)
{
  int v4; // edi
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  *a2 = 0LL;
  v6 = 0LL;
  v4 = RoActivateInstance(a1, &v6);
  if ( v4 >= 0 )
  {
    if ( !memcmp_0(&GUID_8d90e3e1_f1d7_4681_aec8_5c436a53c1d4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, 0x10uLL) )
    {
      *a2 = v6;
    }
    else
    {
      v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v6)(
             v6,
             &GUID_8d90e3e1_f1d7_4681_aec8_5c436a53c1d4,
             a2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return (unsigned int)v4;
}
