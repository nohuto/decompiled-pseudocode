/*
 * XREFs of _lambda_2d57628cd8490ef0d12835f9ba011710_::operator() @ 0x18007BAEC
 * Callers:
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_2d57628cd8490ef0d12835f9ba011710___ @ 0x18007B8C8 (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_2d57628cd8490ef0d12835f9ba011.c)
 * Callees:
 *     _lambda_53e50f4d36d820af02fa3fa8c2905d02_::operator() @ 0x18000CEE8 (_lambda_53e50f4d36d820af02fa3fa8c2905d02_--operator().c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180032B60 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_2d57628cd8490ef0d12835f9ba011710_::operator()(
        _QWORD **a1,
        const struct tWAVEFORMATEX *a2,
        bool *a3)
{
  int v6; // ebx
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0;
  *a3 = 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *))(*(_QWORD *)**a1 + 24LL))(
         **a1,
         *a1[1],
         *(unsigned int *)*a1[1],
         &v8);
  if ( v6 >= 0 && v8 && lambda_53e50f4d36d820af02fa3fa8c2905d02_::operator()(a1[2], a2) )
  {
    v6 = CloneWaveFormat(a2, (struct tWAVEFORMATEX **)*a1[3]);
    *a3 = v6 >= 0;
  }
  return (unsigned int)v6;
}
