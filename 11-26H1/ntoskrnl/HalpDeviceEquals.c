/*
 * XREFs of HalpDeviceEquals @ 0x140C123C4
 * Callers:
 *     HalpKdEnumerateDebuggingDevices @ 0x140C12590 (HalpKdEnumerateDebuggingDevices.c)
 * Callees:
 *     wcsncmp @ 0x1405381A0 (wcsncmp.c)
 */

char __fastcall HalpDeviceEquals(__int64 a1, __int64 a2)
{
  struct _LIST_ENTRY *Flink; // rbx
  int Blink_high; // edx
  int v5; // esi
  char v6; // cl
  char v7; // al
  char v8; // cl
  char v9; // al
  __int16 v10; // cx
  __int16 Blink; // ax
  bool v12; // r8
  int Flink_high; // eax
  int v14; // ecx
  bool v15; // al
  __int16 v16; // cx
  __int16 v17; // ax
  __int16 v18; // cx
  __int16 v19; // ax
  unsigned int v20; // eax
  int v21; // ecx
  char v22; // cl
  __int16 v23; // ax
  __int16 v24; // cx
  __int16 v25; // ax
  __int16 v26; // cx

  Flink = HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink;
  Blink_high = HIDWORD(HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink[13].Blink);
  v5 = *(_DWORD *)(a2 + 220);
  if ( Blink_high == 2 )
  {
LABEL_5:
    if ( (v5 & 0xFFFFFFFD) == 0 )
    {
      v6 = *(_BYTE *)(a2 + 14);
      v7 = BYTE6(HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink->Blink);
      if ( v7 == v6 || v7 == -1 || v6 == -1 )
      {
        v8 = *(_BYTE *)(a2 + 15);
        v9 = HIBYTE(HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink->Blink);
        if ( (v9 == v8 || v9 == -1 || v8 == -1)
          && (HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink->Flink == (struct _LIST_ENTRY *)*(_DWORD *)a2
           || HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink->Flink == (struct _LIST_ENTRY *)-1LL
           || *(_DWORD *)a2 == -1) )
        {
          v10 = *(_WORD *)(a2 + 8);
          Blink = (__int16)HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink->Blink;
          v12 = Blink == v10 || Blink == -1 || v10 == -1;
          Flink_high = HIDWORD(HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink->Flink);
          v14 = *(_DWORD *)(a2 + 4);
          v15 = Flink_high == v14 || Flink_high == -1 || v14 == -1;
          if ( v12 && v15 )
            return 1;
        }
      }
    }
    if ( Blink_high == 1 || v5 == 2 )
    {
      v16 = *(_WORD *)(a2 + 204);
      v17 = WORD2(HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink[12].Blink);
      if ( v17 == v16 || v17 == -1 || v16 == -1 )
      {
        v18 = *(_WORD *)(a2 + 206);
        v19 = HIWORD(HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink[12].Blink);
        if ( v19 == v18 || v19 == -1 || v18 == -1 )
        {
          v20 = (unsigned int)HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink[14].Blink;
          if ( v20 == -1 )
            return 1;
          v21 = *(_DWORD *)(a2 + 232);
          if ( v21 == -1
            || v20 == v21
            && !wcsncmp(
                  (const wchar_t *)HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink[14].Flink,
                  *(const wchar_t **)(a2 + 224),
                  v20) )
          {
            return 1;
          }
        }
      }
    }
    v22 = 0;
    if ( v5 != 3 || HIDWORD(Flink[13].Blink) != *(_DWORD *)(a2 + 220) )
      return v22;
    if ( ((v23 = *(_WORD *)(a2 + 204), v24 = WORD2(Flink[12].Blink), v24 == v23) || v24 == -1 || v23 == -1)
      && ((v25 = *(_WORD *)(a2 + 206), v26 = HIWORD(Flink[12].Blink), v26 == v25) || v26 == -1 || v25 == -1) )
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
  if ( v5 == 2 || Blink_high == v5 )
  {
    v5 = HIDWORD(HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink[13].Blink);
    goto LABEL_5;
  }
  return 0;
}
