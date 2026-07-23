/*
 * XREFs of RtlpHpLfhContextMetadataFree @ 0x180063B00
 * Callers:
 *     RtlpHpLfhPrivateSlotShutdown @ 0x18006251C (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpLfhContextTlsCleanup @ 0x1800645D0 (RtlpHpLfhContextTlsCleanup.c)
 *     RtlpHpLfhContextPrivateHeatMapCreate @ 0x18007219C (RtlpHpLfhContextPrivateHeatMapCreate.c)
 * Callees:
 *     RtlpHpLfhContextLockExtension @ 0x180071B4C (RtlpHpLfhContextLockExtension.c)
 */

void __fastcall RtlpHpLfhContextMetadataFree(_RTL_SRWLOCK *a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rbx

  v3 = a3;
  v4 = a2 + 16;
  if ( a3 != 3 )
    v4 = a2;
  RtlpHpLfhContextLockExtension();
  if ( (_DWORD)v3 == 1 )
  {
    if ( (_RTL_SRWLOCK *)v4 == &a1[24] )
      NT_ASSERT("HeatMap != &LfhContext->HeatMap");
    if ( *(_BYTE *)(v4 + 250) )
      NT_ASSERT("HeatMap->OnFreeList == 0");
    *(_BYTE *)(v4 + 250) = 1;
  }
  *(_RTL_SRWLOCK *)v4 = a1[v3 + 17];
  a1[v3 + 17].Value = v4;
  RtlReleaseSRWLockExclusive(a1 + 16);
}
