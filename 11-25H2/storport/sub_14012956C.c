/*
 * XREFs of sub_14012956C @ 0x14012956C
 * Callers:
 *     sub_1400D3B1C @ 0x1400D3B1C (sub_1400D3B1C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14012956C(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax

  v2 = *(_QWORD *)(a2 + 184);
  if ( *(_WORD *)(v2 + 16) < 0x38u || !*(_WORD *)(v2 + 18) )
    return 3221225485LL;
  v3 = *(_QWORD *)(v2 + 24);
  *(_QWORD *)(v3 + 40) = 0LL;
  *(_QWORD *)(v3 + 8) = a1;
  *(_QWORD *)(v3 + 16) = StorPortFreeDeviceBase;
  *(_QWORD *)(v3 + 24) = StorPortFreeDeviceBase;
  *(_QWORD *)(v3 + 48) = sub_140127EC0;
  *(_DWORD *)v3 = 65592;
  return 0LL;
}
