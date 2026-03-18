/*
 * XREFs of SiGetEspFromFirmware @ 0x1408950EC
 * Callers:
 *     SiGetEfiSystemDevice @ 0x140894F48 (SiGetEfiSystemDevice.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140433060 (RtlStringCbPrintfW.c)
 *     _wcsicmp @ 0x140536570 (_wcsicmp.c)
 *     ZwEnumerateBootEntries @ 0x1407250D0 (ZwEnumerateBootEntries.c)
 *     ZwQueryBootEntryOrder @ 0x140725D50 (ZwQueryBootEntryOrder.c)
 *     ZwQueryBootOptions @ 0x140725D70 (ZwQueryBootOptions.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     SiGetDeviceNumberInformation @ 0x140894984 (SiGetDeviceNumberInformation.c)
 *     SiBootEntryGetNtFilePath @ 0x140894DB4 (SiBootEntryGetNtFilePath.c)
 *     SiGetEfiBootEntryById @ 0x140894F28 (SiGetEfiBootEntryById.c)
 *     SiIsValidWindowsBootEntry @ 0x1408954B0 (SiIsValidWindowsBootEntry.c)
 *     BiAcquirePrivilege @ 0x1409D1D68 (BiAcquirePrivilege.c)
 *     BiReleasePrivilege @ 0x1409D1E1C (BiReleasePrivilege.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiGetEspFromFirmware(int a1, void *a2, unsigned int a3)
{
  unsigned int v3; // r14d
  void *v4; // r15
  void *v5; // r12
  int *v6; // r13
  wchar_t *v7; // rdi
  wchar_t *v8; // rsi
  __int64 result; // rax
  signed int BootOptions; // ebx
  __int64 Pool2; // rax
  __int64 v12; // rax
  unsigned int v13; // r14d
  unsigned int *EfiBootEntryById; // rax
  unsigned int *v15; // r14
  int NtFilePath; // eax
  char IsValidWindowsBootEntry; // al
  unsigned int v18; // r14d
  __int64 v19; // rax
  unsigned int v20; // ebx
  unsigned int *v21; // rax
  unsigned int *v22; // r14
  int v23; // eax
  _WORD *v24; // rdx
  __int64 v25; // rax
  unsigned int v26; // eax
  unsigned int v27; // [rsp+30h] [rbp-28h] BYREF
  int v28; // [rsp+34h] [rbp-24h] BYREF
  PVOID v29; // [rsp+38h] [rbp-20h] BYREF
  PVOID P; // [rsp+40h] [rbp-18h] BYREF
  _QWORD v31[2]; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v34; // [rsp+B0h] [rbp+58h] BYREF
  unsigned int v35; // [rsp+B8h] [rbp+60h] BYREF

  v34 = a3;
  v3 = 0;
  v35 = 0;
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
    v34 = 0;
    BootOptions = ZwEnumerateBootEntries(0LL, (__int64)&v34);
    if ( BootOptions == -1073741789 )
    {
      while ( v3 < v34 )
      {
        if ( v4 )
          ExFreePoolWithTag(v4, 0);
        Pool2 = ExAllocatePool2(0x100uLL);
        v4 = (void *)Pool2;
        if ( !Pool2 )
          goto LABEL_11;
        v3 = v34;
        BootOptions = ZwEnumerateBootEntries(Pool2, (__int64)&v34);
        if ( BootOptions != -1073741789 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      if ( BootOptions >= 0 )
      {
        if ( v34 )
        {
          v34 = 24;
          while ( 1 )
          {
            if ( v6 )
              ExFreePoolWithTag(v6, 0);
            v12 = ExAllocatePool2(0x100uLL);
            v6 = (int *)v12;
            if ( !v12 )
              break;
            v13 = v34;
            BootOptions = ZwQueryBootOptions(v12, (__int64)&v34);
            if ( BootOptions != -1073741789 || v13 >= v34 )
            {
              if ( BootOptions < 0 )
                goto LABEL_44;
              EfiBootEntryById = SiGetEfiBootEntryById((unsigned int *)v4, v6[3]);
              v15 = EfiBootEntryById;
              if ( EfiBootEntryById
                && (NtFilePath = SiBootEntryGetNtFilePath((__int64)EfiBootEntryById, &P),
                    v7 = (wchar_t *)P,
                    BootOptions = NtFilePath,
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
              BootOptions = ZwQueryBootEntryOrder(0LL, (__int64)&v35);
              if ( BootOptions == -1073741789 )
              {
                while ( v18 < v35 )
                {
                  if ( v5 )
                    ExFreePoolWithTag(v5, 0);
                  v19 = ExAllocatePool2(0x100uLL);
                  v5 = (void *)v19;
                  if ( !v19 )
                    goto LABEL_11;
                  v18 = v35;
                  BootOptions = ZwQueryBootEntryOrder(v19, (__int64)&v35);
                  if ( BootOptions != -1073741789 )
                    break;
                }
              }
              if ( !BootOptions )
              {
                if ( !v35 )
                  goto LABEL_10;
                v20 = 0;
                do
                {
                  v21 = SiGetEfiBootEntryById((unsigned int *)v4, *((_DWORD *)v5 + v20));
                  v22 = v21;
                  if ( v21 )
                  {
                    v23 = SiBootEntryGetNtFilePath((__int64)v21, &v29);
                    v8 = (wchar_t *)v29;
                    if ( v23 >= 0 && (unsigned __int8)SiIsValidWindowsBootEntry(v22, v29) )
                    {
                      if ( v7 )
                      {
                        if ( wcsicmp(v7 + 6, v8 + 6) )
                        {
                          BootOptions = -1073740719;
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
                while ( v20 < v35 );
                BootOptions = v7 == 0LL ? 0xC0000225 : 0;
              }
              goto LABEL_44;
            }
          }
LABEL_11:
          BootOptions = -1073741801;
        }
        else
        {
LABEL_10:
          BootOptions = -1073741275;
        }
      }
    }
LABEL_44:
    BiReleasePrivilege(v31);
    if ( BootOptions >= 0 )
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
          v34 = v26;
          if ( v26 <= 0x6A )
            memmove(a2, v24, v26);
          else
            BootOptions = -1073741789;
        }
        else
        {
          BootOptions = SiGetDeviceNumberInformation(v7 + 6, &v27, &v28);
          if ( BootOptions >= 0 )
            BootOptions = RtlStringCbPrintfW(
                            (NTSTRSAFE_PWSTR)a2,
                            0x6AuLL,
                            L"\\Device\\Harddisk%lu\\Partition%lu",
                            v27,
                            0LL);
        }
      }
      else
      {
        BootOptions = -1073741823;
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
    return (unsigned int)BootOptions;
  }
  return result;
}
