/*
 * XREFs of USBHwGetCaptureRequestSize @ 0x14002D38C
 * Callers:
 *     USBDeviceStart @ 0x140040220 (USBDeviceStart.c)
 * Callees:
 *     RegistryReadPnPKeyValue @ 0x14002D584 (RegistryReadPnPKeyValue.c)
 */

__int64 __fastcall USBHwGetCaptureRequestSize(__int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 v3; // rcx
  unsigned int v5; // ebx
  PVOID v6; // rcx
  unsigned int v7; // eax
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0;
  v3 = *(_QWORD *)(a1 + 32);
  P = 0LL;
  v5 = 10;
  if ( (int)RegistryReadPnPKeyValue(v3, L"CapturePacketsPerUrb", a3, &P) >= 0 )
  {
    v6 = P;
    v7 = *(_DWORD *)P;
    if ( *(_DWORD *)P >= 3u )
    {
      if ( v7 > 0xA )
        v7 = 10;
      v5 = v7;
    }
    else
    {
      v5 = 3;
    }
    *a2 = 1;
    ExFreePool(v6);
  }
  return v5;
}
