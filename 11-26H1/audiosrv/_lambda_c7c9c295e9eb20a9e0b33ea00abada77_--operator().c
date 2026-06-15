/*
 * XREFs of _lambda_c7c9c295e9eb20a9e0b33ea00abada77_::operator() @ 0x180137350
 * Callers:
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_c7c9c295e9eb20a9e0b33ea00abada77___ @ 0x1801328C0 (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_c7c9c295e9eb20a9e0b33ea00abad.c)
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180032B60 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     _lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator() @ 0x1800333A0 (_lambda_5789e60fd85b99cd3c89d9f341e01d71_--operator().c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_c7c9c295e9eb20a9e0b33ea00abada77_::operator()(__int64 a1, struct tWAVEFORMATEX *a2, bool *a3)
{
  _QWORD *v3; // rax
  int v7; // ebx
  CConnectorProcessingModeCharacteristics ***v8; // rcx
  bool v10; // [rsp+50h] [rbp+8h] BYREF
  int v11; // [rsp+60h] [rbp+18h] BYREF

  *a3 = 0;
  v3 = *(_QWORD **)a1;
  v11 = 0;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *))(*(_QWORD *)*v3 + 24LL))(
         *v3,
         **(_QWORD **)(a1 + 8),
         ***(unsigned int ***)(a1 + 8),
         &v11);
  if ( v7 >= 0 )
  {
    if ( v11 )
    {
      v8 = *(CConnectorProcessingModeCharacteristics ****)(a1 + 16);
      v10 = 0;
      lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator()(v8, &a2->wFormatTag, &v10);
      if ( v10 )
      {
        v7 = CloneWaveFormat(a2, **(struct tWAVEFORMATEX ****)(a1 + 24));
        *a3 = v7 >= 0;
      }
    }
  }
  return (unsigned int)v7;
}
