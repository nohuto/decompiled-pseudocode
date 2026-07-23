/*
 * XREFs of HalpDeviceEquals @ 0x140C183C4
 * Callers:
 *     HalpKdEnumerateDebuggingDevices @ 0x140C18590 (HalpKdEnumerateDebuggingDevices.c)
 * Callees:
 *     wcsncmp @ 0x14053A620 (wcsncmp.c)
 */

char __fastcall HalpDeviceEquals(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v4; // edx
  int v5; // esi
  char v6; // cl
  char v7; // al
  char v8; // cl
  char v9; // al
  __int16 v10; // cx
  __int16 v11; // ax
  bool v12; // r8
  int v13; // eax
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

  v2 = *(_QWORD *)&HalpDeviceBlockUnblockPushLock.Timer.Header.Lock;
  v4 = *(_DWORD *)(*(_QWORD *)&HalpDeviceBlockUnblockPushLock.Timer.Header.Lock + 220LL);
  v5 = *(_DWORD *)(a2 + 220);
  if ( v4 == 2 )
  {
LABEL_5:
    if ( (v5 & 0xFFFFFFFD) == 0 )
    {
      v6 = *(_BYTE *)(a2 + 14);
      v7 = *(_BYTE *)(*(_QWORD *)&HalpDeviceBlockUnblockPushLock.Timer.Header.Lock + 14LL);
      if ( v7 == v6 || v7 == -1 || v6 == -1 )
      {
        v8 = *(_BYTE *)(a2 + 15);
        v9 = *(_BYTE *)(*(_QWORD *)&HalpDeviceBlockUnblockPushLock.Timer.Header.Lock + 15LL);
        if ( (v9 == v8 || v9 == -1 || v8 == -1)
          && (**(_DWORD **)&HalpDeviceBlockUnblockPushLock.Timer.Header.Lock == *(_DWORD *)a2
           || **(_DWORD **)&HalpDeviceBlockUnblockPushLock.Timer.Header.Lock == -1
           || *(_DWORD *)a2 == -1) )
        {
          v10 = *(_WORD *)(a2 + 8);
          v11 = *(_WORD *)(*(_QWORD *)&HalpDeviceBlockUnblockPushLock.Timer.Header.Lock + 8LL);
          v12 = v11 == v10 || v11 == -1 || v10 == -1;
          v13 = *(_DWORD *)(*(_QWORD *)&HalpDeviceBlockUnblockPushLock.Timer.Header.Lock + 4LL);
          v14 = *(_DWORD *)(a2 + 4);
          v15 = v13 == v14 || v13 == -1 || v14 == -1;
          if ( v12 && v15 )
            return 1;
        }
      }
    }
    if ( v4 == 1 || v5 == 2 )
    {
      v16 = *(_WORD *)(a2 + 204);
      v17 = *(_WORD *)(*(_QWORD *)&HalpDeviceBlockUnblockPushLock.Timer.Header.Lock + 204LL);
      if ( v17 == v16 || v17 == -1 || v16 == -1 )
      {
        v18 = *(_WORD *)(a2 + 206);
        v19 = *(_WORD *)(*(_QWORD *)&HalpDeviceBlockUnblockPushLock.Timer.Header.Lock + 206LL);
        if ( v19 == v18 || v19 == -1 || v18 == -1 )
        {
          v20 = *(_DWORD *)(*(_QWORD *)&HalpDeviceBlockUnblockPushLock.Timer.Header.Lock + 232LL);
          if ( v20 == -1 )
            return 1;
          v21 = *(_DWORD *)(a2 + 232);
          if ( v21 == -1
            || v20 == v21
            && !wcsncmp(
                  *(const wchar_t **)(*(_QWORD *)&HalpDeviceBlockUnblockPushLock.Timer.Header.Lock + 224LL),
                  *(const wchar_t **)(a2 + 224),
                  v20) )
          {
            return 1;
          }
        }
      }
    }
    v22 = 0;
    if ( v5 != 3 || *(_DWORD *)(v2 + 220) != *(_DWORD *)(a2 + 220) )
      return v22;
    if ( ((v23 = *(_WORD *)(a2 + 204), v24 = *(_WORD *)(v2 + 204), v24 == v23) || v24 == -1 || v23 == -1)
      && ((v25 = *(_WORD *)(a2 + 206), v26 = *(_WORD *)(v2 + 206), v26 == v25) || v26 == -1 || v25 == -1) )
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
  if ( v5 == 2 || v4 == v5 )
  {
    v5 = *(_DWORD *)(*(_QWORD *)&HalpDeviceBlockUnblockPushLock.Timer.Header.Lock + 220LL);
    goto LABEL_5;
  }
  return 0;
}
