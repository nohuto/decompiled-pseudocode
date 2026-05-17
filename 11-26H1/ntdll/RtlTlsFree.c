/*
 * XREFs of RtlTlsFree @ 0x180094120
 * Callers:
 *     RtlpHpEnvTlsAlloc @ 0x180092F08 (RtlpHpEnvTlsAlloc.c)
 *     RtlpHpLfhContextCleanup @ 0x180093938 (RtlpHpLfhContextCleanup.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlClearBits @ 0x1800941F0 (RtlClearBits.c)
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 */

__int64 __fastcall RtlTlsFree(unsigned int a1)
{
  struct _PEB *v1; // rsi
  unsigned int v2; // ebx
  _RTL_BITMAP *TlsExpansionBitmap; // rsi
  unsigned int v4; // edi
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  v1 = NtCurrentPeb();
  v2 = a1;
  if ( a1 >= 0x40 )
  {
    v2 = a1 - 64;
    if ( a1 - 64 >= 0x400 )
      return 3221225485LL;
    TlsExpansionBitmap = v1->TlsExpansionBitmap;
  }
  else
  {
    TlsExpansionBitmap = v1->TlsBitmap;
  }
  RtlEnterCriticalSection((__int64)&FastPebLock);
  if ( v2 < TlsExpansionBitmap->SizeOfBitMap
    && _bittest((const signed __int32 *)&TlsExpansionBitmap->Buffer[(unsigned __int64)v2 >> 5], v2 & 0x1F)
    && (v4 = 0, (int)NtSetInformationThread(-2LL, 10LL, &v6, 4LL) >= 0) )
  {
    RtlClearBits(TlsExpansionBitmap, v2, 1LL);
  }
  else
  {
    v4 = -1073741811;
  }
  RtlLeaveCriticalSection((__int64)&FastPebLock);
  return v4;
}
