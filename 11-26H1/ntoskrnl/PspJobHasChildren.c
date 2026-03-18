/*
 * XREFs of PspJobHasChildren @ 0x140B09D20
 * Callers:
 *     PspConvertSiloToServerSilo @ 0x1407EEB8C (PspConvertSiloToServerSilo.c)
 *     PsInsertPermanentSiloContextEx @ 0x140A30E34 (PsInsertPermanentSiloContextEx.c)
 *     PspCreateSilo @ 0x140B09C28 (PspCreateSilo.c)
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
