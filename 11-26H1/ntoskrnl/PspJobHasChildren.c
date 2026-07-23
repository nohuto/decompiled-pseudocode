/*
 * XREFs of PspJobHasChildren @ 0x140B0BAE0
 * Callers:
 *     PspConvertSiloToServerSilo @ 0x1407F46EC (PspConvertSiloToServerSilo.c)
 *     PsInsertPermanentSiloContextEx @ 0x140A4BD94 (PsInsertPermanentSiloContextEx.c)
 *     PspCreateSilo @ 0x140B0B9E8 (PspCreateSilo.c)
 * Callees:
 *     <none>
 */

char __fastcall PspJobHasChildren(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(_DWORD *)(a1 + 212) || *(_QWORD *)(a1 + 1288) != a1 + 1288 )
    return 1;
  return v1;
}
