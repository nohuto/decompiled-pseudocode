/*
 * XREFs of WheapInitializeDeferredErrorSources @ 0x1406D88F0
 * Callers:
 *     WheaConfigureErrorSource @ 0x140C05E90 (WheaConfigureErrorSource.c)
 * Callees:
 *     WheapCallErrorSourceInitialize @ 0x1406DA8CC (WheapCallErrorSourceInitialize.c)
 *     WheapInitializeErrorSource @ 0x14084D8E4 (WheapInitializeErrorSource.c)
 */

__int64 __fastcall WheapInitializeDeferredErrorSources(int a1)
{
  int v1; // edi
  __int64 i; // rbx

  v1 = 0;
  for ( i = qword_140EEF0D8; v1 < dword_140EEF0CC; ++v1 )
  {
    if ( *(_DWORD *)(i + 104) == a1
      && *(_BYTE *)(i + 88)
      && *(_DWORD *)(i + 108) == 1
      && (int)WheapInitializeErrorSource(i) >= 0 )
    {
      *(_DWORD *)(i + 108) = 2;
      if ( (int)WheapCallErrorSourceInitialize(i, 1LL) >= 0 )
        *(_BYTE *)(i + 88) = 0;
      else
        *(_DWORD *)(i + 108) = 1;
    }
    i = *(_QWORD *)i;
  }
  return 0LL;
}
