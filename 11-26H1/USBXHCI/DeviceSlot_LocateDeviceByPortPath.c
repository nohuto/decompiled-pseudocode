/*
 * XREFs of DeviceSlot_LocateDeviceByPortPath @ 0x140046A4C
 * Callers:
 *     Crashdump_InitializeDeviceContext @ 0x140050EC8 (Crashdump_InitializeDeviceContext.c)
 * Callees:
 *     XilDeviceSlot_GetUsbDeviceHandleArray @ 0x14001C340 (XilDeviceSlot_GetUsbDeviceHandleArray.c)
 */

__int64 __fastcall DeviceSlot_LocateDeviceByPortPath(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // edi
  unsigned int v7; // esi
  __int64 v8; // rbp
  unsigned int v9; // eax

  v6 = 1;
  v7 = 0;
  while ( v6 <= *(_DWORD *)(a1 + 96) )
  {
    v8 = *(_QWORD *)(XilDeviceSlot_GetUsbDeviceHandleArray(a1) + 8LL * v6);
    if ( v8 )
    {
      v9 = *(_DWORD *)(v8 + 36);
      if ( v9 == *(_DWORD *)(a2 + 4)
        && RtlCompareMemory((const void *)(v8 + 44), (const void *)(a2 + 12), 4LL * v9) == 4LL * v9 )
      {
        *a3 = v8;
        return v7;
      }
    }
    ++v6;
  }
  return (unsigned int)-1073741275;
}
