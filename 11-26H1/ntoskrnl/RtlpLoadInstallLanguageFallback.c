/*
 * XREFs of RtlpLoadInstallLanguageFallback @ 0x1408A7868
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x1408A9C44 (_RtlpMuiRegLoadInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1408A9D74 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     _MuiRegAllocArray @ 0x14072028C (_MuiRegAllocArray.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlCultureNameToLCID @ 0x140779FB0 (RtlCultureNameToLCID.c)
 *     LdrpOpenKey @ 0x1408063C8 (LdrpOpenKey.c)
 *     LdrpQueryValueKey @ 0x140B3C6C8 (LdrpQueryValueKey.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpLoadInstallLanguageFallback(__int64 a1, _WORD *a2, _WORD *a3)
{
  WCHAR *v5; // rsi
  WCHAR *v6; // rax
  NTSTATUS v7; // ebx
  __int64 v8; // r8
  const WCHAR *v9; // rdi
  const WCHAR *v10; // rcx
  WCHAR i; // ax
  __int64 v13; // [rsp+30h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  int v16; // [rsp+80h] [rbp+30h] BYREF
  int v17; // [rsp+98h] [rbp+48h]

  Handle = 0LL;
  v16 = 0;
  v5 = 0LL;
  DestinationString = 0LL;
  if ( a1 && a2 && a3 )
  {
    v6 = (WCHAR *)MuiRegAllocArray(a1, 0xACu);
    v5 = v6;
    if ( v6 )
    {
      memset_0(v6, 0, 0x158uLL);
      *a2 = 0;
      v17 = 0;
      *a3 = 0;
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
      v7 = LdrpOpenKey(&DestinationString, 0LL, v8, &Handle);
      if ( v7 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"InstallLanguageFallback");
        LODWORD(v13) = 344;
        v7 = LdrpQueryValueKey(Handle, &DestinationString, (__int64)&v13);
        if ( v7 >= 0 )
        {
          if ( v17 != 1 )
            goto LABEL_9;
          v9 = v5;
          v10 = v5 + 1;
          while ( *v9 )
          {
            if ( *v9 == 44 )
            {
              *v9 = 0;
              v9 = v10;
              for ( i = *v10; i == 32; i = *v9 )
                ++v9;
              break;
            }
            ++v9;
            ++v10;
          }
          RtlInitUnicodeString(&DestinationString, v5);
          if ( RtlCultureNameToLCID(&DestinationString.Length, &v16) )
          {
            *a2 = v16;
            if ( *v9 )
            {
              RtlInitUnicodeString(&DestinationString, v9);
              if ( RtlCultureNameToLCID(&DestinationString.Length, &v16) )
              {
                *a3 = v16;
              }
              else
              {
                v7 = -1073741823;
                *a2 = 0;
              }
            }
          }
          else
          {
LABEL_9:
            v7 = -1073741823;
          }
        }
      }
    }
    else
    {
      v7 = -1073741801;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v7;
}
