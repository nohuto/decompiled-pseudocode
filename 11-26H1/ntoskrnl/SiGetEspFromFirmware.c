/*
 * XREFs of SiGetEspFromFirmware @ 0x14089B4EC
 * Callers:
 *     SiGetEfiSystemDevice @ 0x14089B348 (SiGetEfiSystemDevice.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     ZwEnumerateBootEntries @ 0x140729CA0 (ZwEnumerateBootEntries.c)
 *     ZwQueryBootEntryOrder @ 0x14072A920 (ZwQueryBootEntryOrder.c)
 *     ZwQueryBootOptions @ 0x14072A940 (ZwQueryBootOptions.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     SiGetDeviceNumberInformation @ 0x14089AD84 (SiGetDeviceNumberInformation.c)
 *     SiBootEntryGetNtFilePath @ 0x14089B1B4 (SiBootEntryGetNtFilePath.c)
 *     SiGetEfiBootEntryById @ 0x14089B328 (SiGetEfiBootEntryById.c)
 *     SiIsValidWindowsBootEntry @ 0x14089B8B0 (SiIsValidWindowsBootEntry.c)
 *     BiAcquirePrivilege @ 0x1409A2D48 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x1409A2DFC (BiReleasePrivilege.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiGetEspFromFirmware(int a1, void *a2, ULONG a3)
{
  ULONG v3; // r14d
  void *v4; // r15
  ULONG *v5; // r12
  int *v6; // r13
  wchar_t *v7; // rdi
  wchar_t *v8; // rsi
  __int64 result; // rax
  signed int DeviceNumberInformation; // ebx
  void *Pool2; // rax
  _BOOT_OPTIONS *v12; // rax
  ULONG v13; // r14d
  unsigned int *EfiBootEntryById; // rax
  unsigned int *v15; // r14
  int NtFilePath; // eax
  char IsValidWindowsBootEntry; // al
  ULONG v18; // r14d
  ULONG *v19; // rax
  ULONG v20; // ebx
  unsigned int *v21; // rax
  unsigned int *v22; // r14
  int v23; // eax
  _WORD *v24; // rdx
  __int64 v25; // rax
  ULONG v26; // eax
  unsigned int v27; // [rsp+30h] [rbp-28h] BYREF
  int v28; // [rsp+34h] [rbp-24h] BYREF
  PVOID v29; // [rsp+38h] [rbp-20h] BYREF
  PVOID P; // [rsp+40h] [rbp-18h] BYREF
  _QWORD v31[2]; // [rsp+48h] [rbp-10h] BYREF
  ULONG BufferLength; // [rsp+B0h] [rbp+58h] BYREF
  ULONG Count; // [rsp+B8h] [rbp+60h] BYREF

  BufferLength = a3;
  v3 = 0;
  Count = 0;
  v4 = 0LL;
  v27 = 0;
  v5 = 0LL;
  v28 = 0;
  v6 = 0LL;
  v31[0] = 0LL;
  v7 = 0LL;
  P = 0LL;
  v8 = 0LL;
  v29 = 0LL;
  result = BiAcquirePrivilege(22LL, v31);
  if ( (int)result >= 0 )
  {
    BufferLength = 0;
    DeviceNumberInformation = ZwEnumerateBootEntries(0LL, &BufferLength);
    if ( DeviceNumberInformation == -1073741789 )
    {
      while ( v3 < BufferLength )
      {
        if ( v4 )
          ExFreePoolWithTag(v4, 0);
        Pool2 = (void *)ExAllocatePool2(0x100uLL);
        v4 = Pool2;
        if ( !Pool2 )
          goto LABEL_11;
        v3 = BufferLength;
        DeviceNumberInformation = ZwEnumerateBootEntries(Pool2, &BufferLength);
        if ( DeviceNumberInformation != -1073741789 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      if ( DeviceNumberInformation >= 0 )
      {
        if ( BufferLength )
        {
          BufferLength = 24;
          while ( 1 )
          {
            if ( v6 )
              ExFreePoolWithTag(v6, 0);
            v12 = (_BOOT_OPTIONS *)ExAllocatePool2(0x100uLL);
            v6 = (int *)v12;
            if ( !v12 )
              break;
            v13 = BufferLength;
            DeviceNumberInformation = ZwQueryBootOptions(v12, &BufferLength);
            if ( DeviceNumberInformation != -1073741789 || v13 >= BufferLength )
            {
              if ( DeviceNumberInformation < 0 )
                goto LABEL_44;
              EfiBootEntryById = SiGetEfiBootEntryById((unsigned int *)v4, v6[3]);
              v15 = EfiBootEntryById;
              if ( EfiBootEntryById
                && (NtFilePath = SiBootEntryGetNtFilePath((__int64)EfiBootEntryById, (_FILE_PATH **)&P),
                    v7 = (wchar_t *)P,
                    DeviceNumberInformation = NtFilePath,
                    NtFilePath >= 0) )
              {
                IsValidWindowsBootEntry = SiIsValidWindowsBootEntry(v15, P);
                v18 = 0;
                if ( IsValidWindowsBootEntry )
                  goto LABEL_44;
                ExFreePoolWithTag(v7, 0);
                v7 = 0LL;
              }
              else
              {
                v18 = 0;
              }
              DeviceNumberInformation = ZwQueryBootEntryOrder(0LL, &Count);
              if ( DeviceNumberInformation == -1073741789 )
              {
                while ( v18 < Count )
                {
                  if ( v5 )
                    ExFreePoolWithTag(v5, 0);
                  v19 = (ULONG *)ExAllocatePool2(0x100uLL);
                  v5 = v19;
                  if ( !v19 )
                    goto LABEL_11;
                  v18 = Count;
                  DeviceNumberInformation = ZwQueryBootEntryOrder(v19, &Count);
                  if ( DeviceNumberInformation != -1073741789 )
                    break;
                }
              }
              if ( !DeviceNumberInformation )
              {
                if ( !Count )
                  goto LABEL_10;
                v20 = 0;
                do
                {
                  v21 = SiGetEfiBootEntryById((unsigned int *)v4, v5[v20]);
                  v22 = v21;
                  if ( v21 )
                  {
                    v23 = SiBootEntryGetNtFilePath((__int64)v21, (_FILE_PATH **)&v29);
                    v8 = (wchar_t *)v29;
                    if ( v23 >= 0 && (unsigned __int8)SiIsValidWindowsBootEntry(v22, v29) )
                    {
                      if ( v7 )
                      {
                        if ( wcsicmp(v7 + 6, v8 + 6) )
                        {
                          DeviceNumberInformation = -1073740719;
                          goto LABEL_44;
                        }
                      }
                      else
                      {
                        v7 = v8;
                        v29 = 0LL;
                        v8 = 0LL;
                      }
                    }
                    if ( v8 )
                    {
                      ExFreePoolWithTag(v8, 0);
                      v8 = 0LL;
                      v29 = 0LL;
                    }
                  }
                  ++v20;
                }
                while ( v20 < Count );
                DeviceNumberInformation = v7 == 0LL ? 0xC0000225 : 0;
              }
              goto LABEL_44;
            }
          }
LABEL_11:
          DeviceNumberInformation = -1073741801;
        }
        else
        {
LABEL_10:
          DeviceNumberInformation = -1073741275;
        }
      }
    }
LABEL_44:
    BiReleasePrivilege(v31);
    if ( DeviceNumberInformation >= 0 )
    {
      if ( v7 )
      {
        if ( a1 )
        {
          v24 = v7 + 6;
          v25 = -1LL;
          do
            ++v25;
          while ( v24[v25] );
          v26 = 2 * v25 + 2;
          BufferLength = v26;
          if ( v26 <= 0x6A )
            memmove(a2, v24, v26);
          else
            DeviceNumberInformation = -1073741789;
        }
        else
        {
          DeviceNumberInformation = SiGetDeviceNumberInformation(v7 + 6, &v27, &v28);
          if ( DeviceNumberInformation >= 0 )
            DeviceNumberInformation = RtlStringCbPrintfW(
                                        (NTSTRSAFE_PWSTR)a2,
                                        0x6AuLL,
                                        L"\\Device\\Harddisk%lu\\Partition%lu",
                                        v27,
                                        0LL);
        }
      }
      else
      {
        DeviceNumberInformation = -1073741823;
      }
    }
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    return (unsigned int)DeviceNumberInformation;
  }
  return result;
}
