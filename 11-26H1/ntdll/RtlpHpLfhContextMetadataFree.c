/*
 * XREFs of RtlpHpLfhContextMetadataFree @ 0x180096160
 * Callers:
 *     RtlpHpLfhContextPrivateHeatMapCreate @ 0x180093238 (RtlpHpLfhContextPrivateHeatMapCreate.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x180094B78 (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhContextTlsCleanup @ 0x180097710 (RtlpHpLfhContextTlsCleanup.c)
 * Callees:
 *     RtlpHpLfhContextLockExtension @ 0x1800973B4 (RtlpHpLfhContextLockExtension.c)
 */

struct _TEB *__fastcall RtlpHpLfhContextMetadataFree(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  __int64 v4; // rbx

  v3 = a3;
  v4 = a2 + 16;
  if ( a3 != 3 )
    v4 = a2;
  RtlpHpLfhContextLockExtension(a1, a2);
  if ( (_DWORD)v3 == 1 )
  {
    if ( v4 == a1 + 192 )
      NT_ASSERT("HeatMap != &LfhContext->HeatMap");
    if ( *(_BYTE *)(v4 + 250) )
      NT_ASSERT("HeatMap->OnFreeList == 0");
    *(_BYTE *)(v4 + 250) = 1;
  }
  *(_QWORD *)v4 = *(_QWORD *)(a1 + 8 * v3 + 136);
  *(_QWORD *)(a1 + 8 * v3 + 136) = v4;
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 128));
}
