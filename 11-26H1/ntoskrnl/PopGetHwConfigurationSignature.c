/*
 * XREFs of PopGetHwConfigurationSignature @ 0x140C0EC5C
 * Callers:
 *     PopAllocateHiberContext @ 0x140B75B48 (PopAllocateHiberContext.c)
 * Callees:
 *     MmUnmapIoSpace @ 0x140345690 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 *     HalGetMemoryCachingRequirements @ 0x1404915D0 (HalGetMemoryCachingRequirements.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x140728680 (ZwQuerySystemInformation.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopGetHwConfigurationSignature(_BYTE *a1)
{
  void *v1; // rbx
  unsigned int v3; // edi
  unsigned int v4; // r14d
  _DWORD *Pool2; // rax
  _DWORD *v6; // rsi
  unsigned int v7; // eax
  __int64 v8; // rbx
  _DWORD *v9; // rax
  ULONG ReturnLength; // [rsp+20h] [rbp-30h] BYREF
  int v12; // [rsp+24h] [rbp-2Ch] BYREF
  _DWORD SystemInformation[3]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v14; // [rsp+34h] [rbp-1Ch]

  v1 = 0LL;
  v12 = 0;
  *a1 = 0;
  v14 = 0LL;
  SystemInformation[0] = 1094930505;
  SystemInformation[1] = 1;
  SystemInformation[2] = 1346584902;
  v3 = 0;
  ReturnLength = 0;
  v4 = 4;
  if ( ZwQuerySystemInformation(SystemFirmwareTableInformation, SystemInformation, 0x14u, &ReturnLength) == -1073741789 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
    v6 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = 1094930505;
      Pool2[1] = 1;
      Pool2[2] = 1346584902;
      Pool2[3] = ReturnLength - 16;
      if ( ZwQuerySystemInformation(SystemFirmwareTableInformation, Pool2, ReturnLength, &ReturnLength) >= 0
        && *((_BYTE *)v6 + 24) >= 5u )
      {
        v7 = v6[13];
        if ( v7 )
        {
          v8 = v7;
          HalGetMemoryCachingRequirements(v7, 64LL, &v12);
          if ( v12 != 1 )
          {
            v4 = 516;
            if ( v12 == 2 )
              v4 = 1028;
          }
          v9 = (_DWORD *)MmMapIoSpaceEx(v8, 64LL, v4);
          v1 = v9;
          if ( *v9 == 1396916550 )
          {
            v3 = v9[2];
            *a1 = 1;
          }
        }
      }
      ExFreePoolWithTag(v6, 0x206D654Du);
      if ( v1 )
        MmUnmapIoSpace(v1, 0x40uLL);
    }
  }
  return v3;
}
