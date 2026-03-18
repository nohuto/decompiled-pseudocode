/*
 * XREFs of PopFanSetNoiseImpact @ 0x1407DB030
 * Callers:
 *     PopFanRemove @ 0x1407DAFE0 (PopFanRemove.c)
 *     PopFanWorker @ 0x140B348C0 (PopFanWorker.c)
 *     PopFanSetupRpmBuckets @ 0x140B34E38 (PopFanSetupRpmBuckets.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFanSetNoiseImpact(__int64 a1, char a2)
{
  if ( *(_BYTE *)(a1 + 88) != a2 )
  {
    *(_BYTE *)(a1 + 88) = a2;
    if ( a2 )
      _InterlockedIncrement(&dword_140F10EA8);
    else
      _InterlockedDecrement(&dword_140F10EA8);
  }
}
