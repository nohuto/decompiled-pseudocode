/*
 * XREFs of RaidGetStorageAdapterSerialNumberProperty @ 0x1401B5A80
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1401B69C8 (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaCallMiniportAdapterControl @ 0x14000EF30 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x140010D4C (RaidIsAdapterControlSupported.c)
 *     RtlStringCchCopyW @ 0x14004278C (RtlStringCchCopyW.c)
 *     RtlStringCchLengthA @ 0x14006E000 (RtlStringCchLengthA.c)
 *     RtlStringCchLengthW @ 0x14006E05C (RtlStringCchLengthW.c)
 *     RtlUnicodeStringCopyString @ 0x14006E0B8 (RtlUnicodeStringCopyString.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

signed int __fastcall RaidGetStorageAdapterSerialNumberProperty(__int64 a1, _DWORD *a2, unsigned __int64 *a3)
{
  unsigned __int64 v6; // rax
  _WORD *v7; // rbx
  _WORD *v8; // r8
  __int64 v9; // rdx
  _WORD *v10; // rax
  signed int result; // eax
  size_t v12; // rsi
  wchar_t *Pool; // rax
  size_t pcchLength; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-D8h] BYREF
  struct _STRING SourceString; // [rsp+38h] [rbp-C8h] BYREF
  int v17; // [rsp+50h] [rbp-B0h]
  int v18; // [rsp+54h] [rbp-ACh]
  char v19; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t psz[131]; // [rsp+59h] [rbp-A7h] BYREF
  wchar_t pszSrc[128]; // [rsp+160h] [rbp+60h] BYREF

  memset_0(&v19, 0, 0x104uLL);
  pcchLength = 0LL;
  DestinationString = 0LL;
  SourceString = 0LL;
  if ( !RaidIsAdapterControlSupported(a1 + 376, 17) )
    return -1073741637;
  v6 = *a3;
  if ( *a3 < 8 )
  {
    *a3 = 0LL;
    return -1073741789;
  }
  *a2 = 264;
  a2[1] = 264;
  if ( v6 < 0x108 )
  {
    *a3 = 8LL;
    return 0;
  }
  v7 = a2 + 2;
  *a3 = 0LL;
  memset_0(v7, 0, 0x100uLL);
  v8 = *(_WORD **)(a1 + 5144);
  if ( v8 )
  {
    v9 = 128LL;
    do
    {
      if ( v9 == -2147483518 )
        break;
      if ( !*v8 )
        break;
      *v7++ = *v8++;
      --v9;
    }
    while ( v9 );
    v10 = v7 - 1;
    if ( v9 )
      v10 = v7;
    *v10 = 0;
    result = v9 == 0 ? 0x80000005 : 0;
    if ( v9 )
LABEL_12:
      *a3 = 264LL;
  }
  else
  {
    v17 = 1;
    v18 = 268;
    result = RaCallMiniportAdapterControl(a1 + 376);
    if ( result >= 0 )
    {
      result = v19 == 1
             ? RtlStringCchLengthW(psz, 0x7FFFFFFFuLL, &pcchLength)
             : RtlStringCchLengthA((STRSAFE_PCNZCH)psz, 0x7FFFFFFFuLL, &pcchLength);
      if ( result >= 0 )
      {
        v12 = pcchLength;
        if ( pcchLength - 1 > 0x7E )
          return -1073739509;
        DestinationString.Buffer = pszSrc;
        DestinationString.MaximumLength = 256;
        if ( v19 == 1 )
        {
          result = RtlUnicodeStringCopyString(&DestinationString, psz);
        }
        else
        {
          RtlInitAnsiString(&SourceString, (PCSZ)psz);
          result = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 0);
        }
        if ( result >= 0 )
        {
          result = RtlStringCchCopyW(v7, 0x80uLL, pszSrc);
          if ( result >= 0 )
          {
            Pool = (wchar_t *)RaidAllocatePool(64LL, 2 * v12 + 2, 1413833042LL, *(_QWORD *)(a1 + 8));
            *(_QWORD *)(a1 + 5144) = Pool;
            if ( Pool )
              RtlStringCchCopyW(Pool, v12 + 1, pszSrc);
            result = 0;
            goto LABEL_12;
          }
        }
      }
    }
  }
  return result;
}
