/*
 * XREFs of PopFanSetNoiseImpact @ 0x1407DEF20
 * Callers:
 *     PopFanRemove @ 0x1407DEED0 (PopFanRemove.c)
 *     PopFanWorker @ 0x140B36AD0 (PopFanWorker.c)
 *     PopFanSetupRpmBuckets @ 0x140B37048 (PopFanSetupRpmBuckets.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFanSetNoiseImpact(__int64 a1, char a2)
{
  if ( *(_BYTE *)(a1 + 88) != a2 )
  {
    *(_BYTE *)(a1 + 88) = a2;
    if ( a2 )
      _InterlockedIncrement(&dword_140F102A8);
    else
      _InterlockedDecrement(&dword_140F102A8);
  }
}
