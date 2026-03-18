/*
 * XREFs of RtlpHpLfhContextEnable @ 0x1406396AC
 * Callers:
 *     RtlpHpHeapCreate @ 0x140638298 (RtlpHpHeapCreate.c)
 *     RtlpHpHeapEnableLFH @ 0x140638888 (RtlpHpHeapEnableLFH.c)
 * Callees:
 *     RtlpHpEnvTlsAlloc @ 0x140639084 (RtlpHpEnvTlsAlloc.c)
 */

__int64 __fastcall RtlpHpLfhContextEnable(__int64 a1, int *a2)
{
  unsigned int v4; // edx
  int v5; // eax
  int v7; // [rsp+40h] [rbp+18h]

  if ( (RtlpHpLfhPerfFlags & 0x10000) != 0 )
  {
    return 0;
  }
  else
  {
    v5 = RtlpHpEnvTlsAlloc();
    v4 = 0;
    if ( v5 )
    {
      *(_DWORD *)(a1 + 84) = v5;
      if ( (RtlpHpLfhPerfFlags & 0x10000) == 0 )
      {
        if ( (RtlpHpLfhPerfFlags & 4) != 0 && (PspTlsContext.WaitBlockFill5[32] & 4) != 0 )
          *(_WORD *)(a1 + 80) |= 1u;
        v7 = *a2;
        LOWORD(v7) = *a2 - 15;
        *(_DWORD *)(a1 + 76) = v7;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v4;
}
