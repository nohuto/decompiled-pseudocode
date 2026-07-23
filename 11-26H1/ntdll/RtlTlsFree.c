/*
 * XREFs of RtlTlsFree @ 0x1800732F0
 * Callers:
 *     RtlpHpEnvTlsAlloc @ 0x180072460 (RtlpHpEnvTlsAlloc.c)
 *     RtlpHpLfhContextCleanup @ 0x180072B10 (RtlpHpLfhContextCleanup.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     RtlClearBits @ 0x1800733C0 (RtlClearBits.c)
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 */

__int64 __fastcall RtlTlsFree(ULONG StartingIndex)
{
  struct _PEB *v1; // rsi
  ULONG v2; // ebx
  _RTL_BITMAP *TlsExpansionBitmap; // rsi
  unsigned int v4; // edi
  ULONG ThreadInformation; // [rsp+30h] [rbp+8h] BYREF

  ThreadInformation = StartingIndex;
  v1 = NtCurrentPeb();
  v2 = StartingIndex;
  if ( StartingIndex >= 0x40 )
  {
    v2 = StartingIndex - 64;
    if ( StartingIndex - 64 >= 0x400 )
      return 3221225485LL;
    TlsExpansionBitmap = v1->TlsExpansionBitmap;
  }
  else
  {
    TlsExpansionBitmap = v1->TlsBitmap;
  }
  RtlEnterCriticalSection(&FastPebLock);
  if ( v2 < TlsExpansionBitmap->SizeOfBitMap
    && _bittest((const signed __int32 *)&TlsExpansionBitmap->Buffer[(unsigned __int64)v2 >> 5], v2 & 0x1F)
    && (v4 = 0, NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadZeroTlsCell, &ThreadInformation, 4u) >= 0) )
  {
    RtlClearBits(TlsExpansionBitmap, v2, 1u);
  }
  else
  {
    v4 = -1073741811;
  }
  RtlLeaveCriticalSection(&FastPebLock);
  return v4;
}
