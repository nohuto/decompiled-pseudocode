/*
 * XREFs of KiConnectSecondaryInterrupt @ 0x1404318E8
 * Callers:
 *     KeConnectInterrupt @ 0x140431458 (KeConnectInterrupt.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     KiReleaseSecondaryPassiveConnectLock @ 0x140430298 (KiReleaseSecondaryPassiveConnectLock.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x1404302BC (KiAcquireSecondaryPassiveConnectLock.c)
 *     KiInsertInterruptObjectOrdered @ 0x1404305F8 (KiInsertInterruptObjectOrdered.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x1404309BC (KiAcquireSecondaryInterruptConnectLock.c)
 */

__int64 __fastcall KiConnectSecondaryInterrupt(__int64 a1)
{
  char v2; // si
  unsigned int v3; // r8d
  __int64 v4; // rdx
  char v5; // bp
  unsigned __int8 v6; // cl
  unsigned __int8 v7; // al
  __int64 v8; // rdi
  __int64 v10; // r10
  __int64 v11; // r10
  unsigned __int8 v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = 0;
  if ( !BYTE1(KiDpcCorralLock.Timer.TimerListEntry.Flink) )
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
  v8 = KiDpcCorralLock.Timer.DueTime.QuadPart + 48 * v4;
  KiAcquireSecondaryPassiveConnectLock(v8);
  KiAcquireSecondaryInterruptConnectLock((PKSPIN_LOCK)v8, &v12);
  if ( !*(_BYTE *)(a1 + 95) )
  {
    v10 = *(_QWORD *)(v8 + 40);
    if ( v10 )
    {
      if ( !*(_BYTE *)(a1 + 100) )
        goto LABEL_14;
      if ( !*(_BYTE *)(v10 + 100) )
        goto LABEL_14;
      if ( *(_DWORD *)(v10 + 108) != *(_DWORD *)(a1 + 108) )
        goto LABEL_14;
      v5 = 1;
      v2 = 1;
      KiInsertInterruptObjectOrdered(*(_QWORD *)(v8 + 40), a1);
      if ( *(_BYTE *)(v11 + 93) || !*(_BYTE *)(a1 + 93) )
        goto LABEL_14;
    }
    else
    {
      v5 = 1;
      *(_QWORD *)(a1 + 16) = a1 + 8;
      *(_QWORD *)(a1 + 8) = a1 + 8;
      *(_BYTE *)(v8 + 32) = 0;
    }
    *(_QWORD *)(v8 + 40) = a1;
LABEL_14:
    *(_BYTE *)(a1 + 95) = 1;
  }
  HalpReleaseHighLevelLock((KSPIN_LOCK *)v8, v12);
  KiReleaseSecondaryPassiveConnectLock(v8);
  if ( !v5 )
    return 3221225711LL;
  return v2 != 0 ? 0x127 : 0;
}
