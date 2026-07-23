/*
 * XREFs of RtlpHpSegMgrApplyLargePagePolicy @ 0x140468B24
 * Callers:
 *     RtlpHpSegMgrCommitInitiate @ 0x140468900 (RtlpHpSegMgrCommitInitiate.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlpHpSegMgrApplyLargePagePolicy(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rdx
  unsigned __int64 v3; // r9
  unsigned __int64 Blink; // r8
  signed __int64 v6; // rdx
  bool v7; // zf
  signed __int64 v8; // rax

  v1 = *(_BYTE *)(a1 + 13) & 7;
  if ( v1 <= 1 )
  {
    if ( (*(_BYTE *)(a1 + 13) & 8) == 0 )
    {
      v2 = *(__int16 *)(a1 + 22);
      v3 = *(_QWORD *)(v2 + a1 + 64) + *(_QWORD *)(v2 + a1 + 48);
      if ( v3 < *(_QWORD *)(v2 + a1 + 80) )
      {
        if ( v3 >= *(_QWORD *)(v2 + a1 + 72) )
          return *(_QWORD *)(v2 + a1 + 56) + *(_QWORD *)(v2 + a1 + 40) >= ((v3 * *(unsigned __int8 *)(v2 + a1 + 88)) << 9)
                                                                        / 0x64;
        return 1LL;
      }
    }
    return 0LL;
  }
  if ( v1 == 2 )
    return 0LL;
  if ( v1 == 3 )
    return 1LL;
  Blink = (unsigned __int64)PspTlsContext.WaitBlock[1].WaitListEntry.Blink;
  do
  {
    v6 = Blink ^ (Blink >> 12) ^ ((Blink ^ (Blink >> 12)) << 25) ^ ((Blink ^ (Blink >> 12) ^ ((Blink ^ (Blink >> 12)) << 25)) >> 27);
    v8 = _InterlockedCompareExchange64(
           (volatile signed __int64 *)&PspTlsContext.WaitBlock[1].WaitListEntry.Blink,
           v6,
           Blink);
    v7 = Blink == v8;
    Blink = v8;
  }
  while ( !v7 );
  return -(int)v6 & 1;
}
