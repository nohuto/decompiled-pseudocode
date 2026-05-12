/*
 * XREFs of IsOutstandingRequestInNvmeControllerQueueEx @ 0x14012B134
 * Callers:
 *     NvmeControllerResetRecovery @ 0x14012BD30 (NvmeControllerResetRecovery.c)
 * Callees:
 *     <none>
 */

char __fastcall IsOutstandingRequestInNvmeControllerQueueEx(__int64 a1, __int64 a2)
{
  unsigned int v3; // r9d
  unsigned int i; // r8d
  unsigned __int64 v5; // rdx

  v3 = *(_DWORD *)(a2 + 124);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 88) + 136LL) & 2) == 0 )
    --v3;
  for ( i = 0; i < v3; ++i )
  {
    v5 = (unsigned __int64)i << 7;
    if ( (*(_BYTE *)(v5 + *(_QWORD *)(a2 + 32) + 60) & 1) != 0
      && (*(_BYTE *)(*(_QWORD *)(a2 + 32) + v5 + 60) & 0x40) == 0 )
    {
      return 1;
    }
  }
  return 0;
}
