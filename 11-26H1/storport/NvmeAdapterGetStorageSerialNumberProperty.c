/*
 * XREFs of NvmeAdapterGetStorageSerialNumberProperty @ 0x14019D030
 * Callers:
 *     NvmeAdapterStorageQueryProperty @ 0x14018377C (NvmeAdapterStorageQueryProperty.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RtlStringCchCopyW @ 0x14004278C (RtlStringCchCopyW.c)
 *     RtlStringCchLengthA @ 0x14006E000 (RtlStringCchLengthA.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

NTSTATUS __fastcall NvmeAdapterGetStorageSerialNumberProperty(__int64 *a1, wchar_t *a2, unsigned int *a3)
{
  unsigned int v6; // eax
  NTSTATUS result; // eax
  wchar_t *v8; // r14
  const wchar_t *v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  size_t v13; // rdi
  wchar_t *Pool; // rax
  size_t pcchLength; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING v16; // [rsp+28h] [rbp-D8h] BYREF
  struct _STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v18[2]; // [rsp+50h] [rbp-B0h] BYREF
  char v19; // [rsp+58h] [rbp-A8h]
  char psz[16]; // [rsp+59h] [rbp-A7h] BYREF
  int v21; // [rsp+69h] [rbp-97h]
  char v22; // [rsp+6Dh] [rbp-93h]
  char v23; // [rsp+6Eh] [rbp-92h]
  char v24; // [rsp+6Fh] [rbp-91h]
  char v25; // [rsp+70h] [rbp-90h]
  char v26; // [rsp+71h] [rbp-8Fh]
  char v27; // [rsp+72h] [rbp-8Eh]
  wchar_t pszSrc[128]; // [rsp+160h] [rbp+60h] BYREF

  memset_0(v18, 0, 0x10CuLL);
  v6 = *a3;
  pcchLength = 0LL;
  v16 = 0LL;
  DestinationString = 0LL;
  if ( v6 < 8 )
  {
    *a3 = 0;
    return -1073741789;
  }
  *(_DWORD *)a2 = 264;
  *((_DWORD *)a2 + 1) = 264;
  if ( v6 < 0x108 )
  {
    *a3 = 8;
    return 0;
  }
  v8 = a2 + 4;
  *a3 = 0;
  memset_0(a2 + 4, 0, 0x100uLL);
  v9 = (const wchar_t *)a1[133];
  if ( v9 )
  {
    result = RtlStringCchCopyW(a2 + 4, 0x80uLL, v9);
    if ( result < 0 )
      return result;
    goto LABEL_17;
  }
  v10 = a1[144];
  v18[0] = 1;
  v18[1] = 268;
  v11 = *(_QWORD *)(v10 + 592);
  if ( !v11 )
    return -1073741637;
  *(_OWORD *)psz = *(_OWORD *)(v11 + 4);
  v21 = *(_DWORD *)(v11 + 20);
  v22 = 95;
  v12 = *(unsigned __int16 *)(v11 + 78);
  v27 = 0;
  v19 = 0;
  v26 = `RaidHexFromUshort'::`2'::hexDigits[v12 & 0xF];
  v25 = `RaidHexFromUshort'::`2'::hexDigits[(unsigned __int8)v12 >> 4];
  v24 = `RaidHexFromUshort'::`2'::hexDigits[((unsigned int)v12 >> 8) & 0xF];
  v23 = `RaidHexFromUshort'::`2'::hexDigits[v12 >> 12];
  result = RtlStringCchLengthA(psz, 0x100uLL, &pcchLength);
  if ( result < 0 )
    return result;
  v13 = pcchLength;
  if ( pcchLength - 1 > 0x7E )
    return -1073739509;
  v16.MaximumLength = 256;
  v16.Buffer = pszSrc;
  RtlInitAnsiString(&DestinationString, psz);
  result = RtlAnsiStringToUnicodeString(&v16, &DestinationString, 0);
  if ( result >= 0 )
  {
    result = RtlStringCchCopyW(v8, 0x80uLL, pszSrc);
    if ( result >= 0 )
    {
      Pool = (wchar_t *)RaidAllocatePool(64LL, 2 * v13 + 2, 1413833042LL, a1[1]);
      a1[133] = (__int64)Pool;
      if ( Pool )
        RtlStringCchCopyW(Pool, v13 + 1, pszSrc);
      result = 0;
LABEL_17:
      *a3 = 264;
    }
  }
  return result;
}
