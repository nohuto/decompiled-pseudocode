/*
 * XREFs of IoGetAdapterCryptoEngineExtension @ 0x1404A5C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IoGetAdapterCryptoEngineExtension(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) < 0 || !v2 || *(char *)(v2 + 2) >= 0 )
    return 3221226021LL;
  *a2 = *(_QWORD *)(a1 + 200) + 40LL;
  return 0LL;
}
