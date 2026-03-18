/*
 * XREFs of KiConnectSecondaryInterrupt @ 0x1404247F8
 * Callers:
 *     KeConnectInterrupt @ 0x140424368 (KeConnectInterrupt.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x1402C4DEC (HalpReleaseHighLevelLock.c)
 *     KiReleaseSecondaryPassiveConnectLock @ 0x1404231A8 (KiReleaseSecondaryPassiveConnectLock.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x1404231CC (KiAcquireSecondaryPassiveConnectLock.c)
 *     KiInsertInterruptObjectOrdered @ 0x140423508 (KiInsertInterruptObjectOrdered.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x1404238CC (KiAcquireSecondaryInterruptConnectLock.c)
 */

__int64 __fastcall KiConnectSecondaryInterrupt(__int64 a1)
{
  char v2; // si
  unsigned int v3; // r8d
  __int64 v4; // rdx
  char v5; // bp
  unsigned __int8 v6; // cl
  unsigned __int8 v7; // al
  struct _LIST_ENTRY *v8; // rdi
  struct _LIST_ENTRY *Blink; // r10
  __int64 v11; // r10
  unsigned __int8 v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = 0;
  if ( !KiDpcCorralLock.WaitBlockFill6[88] )
    return 3221225473LL;
  v2 = 0;
  v3 = *(_DWORD *)(a1 + 96);
  v4 = (unsigned int)(*(_DWORD *)(a1 + 88) - 256);
  v5 = 0;
  if ( (unsigned int)v4 > 0xFF )
    return 3221225711LL;
  v6 = *(_BYTE *)(a1 + 92);
  if ( v6 > 0xCu )
    return 3221225711LL;
  if ( v3 >= (unsigned int)KeNumberProcessors_0 )
    return 3221225711LL;
  v7 = *(_BYTE *)(a1 + 93);
  if ( v7 < v6 )
  {
    if ( v7 )
      return 3221225711LL;
  }
  v8 = &KiDpcCorralLock.WaitBlock[2].WaitListEntry.Flink[3 * v4];
  KiAcquireSecondaryPassiveConnectLock((__int64)v8);
  KiAcquireSecondaryInterruptConnectLock((PKSPIN_LOCK)v8, &v12);
  if ( !*(_BYTE *)(a1 + 95) )
  {
    Blink = v8[2].Blink;
    if ( Blink )
    {
      if ( !*(_BYTE *)(a1 + 100) )
        goto LABEL_14;
      if ( !BYTE4(Blink[6].Flink) )
        goto LABEL_14;
      if ( HIDWORD(Blink[6].Blink) != *(_DWORD *)(a1 + 108) )
        goto LABEL_14;
      v5 = 1;
      v2 = 1;
      KiInsertInterruptObjectOrdered((__int64)v8[2].Blink, a1);
      if ( *(_BYTE *)(v11 + 93) || !*(_BYTE *)(a1 + 93) )
        goto LABEL_14;
    }
    else
    {
      v5 = 1;
      *(_QWORD *)(a1 + 16) = a1 + 8;
      *(_QWORD *)(a1 + 8) = a1 + 8;
      LOBYTE(v8[2].Flink) = 0;
    }
    v8[2].Blink = (struct _LIST_ENTRY *)a1;
LABEL_14:
    *(_BYTE *)(a1 + 95) = 1;
  }
  HalpReleaseHighLevelLock((KSPIN_LOCK *)v8, v12);
  KiReleaseSecondaryPassiveConnectLock((__int64)v8);
  if ( !v5 )
    return 3221225711LL;
  return v2 != 0 ? 0x127 : 0;
}
