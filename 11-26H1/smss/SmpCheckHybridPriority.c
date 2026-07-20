/*
 * XREFs of SmpCheckHybridPriority @ 0x14000EEBC
 * Callers:
 *     SmpCreatePagefileOnVolume @ 0x14000F6B8 (SmpCreatePagefileOnVolume.c)
 *     SmpCreateWorkingSetSwapPagingFile @ 0x1400103C0 (SmpCreateWorkingSetSwapPagingFile.c)
 * Callees:
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

NTSTATUS __fastcall SmpCheckHybridPriority(int a1, _DWORD *a2, int *a3)
{
  NTSTATUS result; // eax
  char *v7; // rcx
  __int64 v8; // rdx
  int v9; // ebx
  __int64 i; // rcx
  __int64 v11; // rax
  _DWORD *v12; // rcx
  unsigned int v13; // ecx
  ULONG ResultLength; // [rsp+30h] [rbp-50h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+38h] [rbp-48h] BYREF
  __int128 KeyValueInformation; // [rsp+48h] [rbp-38h] BYREF
  __int128 v17; // [rsp+58h] [rbp-28h] BYREF
  int v18; // [rsp+68h] [rbp-18h]

  *(_QWORD *)&ValueName.Length = 3014700LL;
  ResultLength = 0;
  ValueName.Buffer = L"PagefileHybridPriority";
  v18 = 0;
  KeyValueInformation = 0LL;
  v17 = 0LL;
  result = NtQueryValueKey(
             SmpMmKey,
             &ValueName,
             KeyValuePartialInformationAlign64,
             &KeyValueInformation,
             0x24u,
             &ResultLength);
  if ( result < 0 )
    return result;
  if ( (_QWORD)KeyValueInformation != 0x1800000003LL )
    return -1073741275;
  v7 = (char *)&KeyValueInformation + 12;
  v8 = 20LL;
  do
  {
    *v7++ ^= BYTE8(KeyValueInformation);
    --v8;
  }
  while ( v8 );
  if ( HIDWORD(KeyValueInformation) != 3 )
    return -1073741701;
  if ( BYTE4(v17) > 1u )
    return -1073741701;
  v9 = DWORD2(KeyValueInformation);
  DWORD2(KeyValueInformation) = 0;
  DWORD2(KeyValueInformation) = RtlComputeCrc32(0, (PUCHAR)&KeyValueInformation + 8, 0x18u);
  if ( DWORD2(KeyValueInformation) != v9 )
    return -1073741701;
  for ( i = 0LL; (unsigned int)i < BYTE4(v17); i = (unsigned int)(i + 1) )
  {
    if ( !(unsigned __int16)*((_DWORD *)&v17 + 2 * i + 3) || (unsigned __int16)*((_DWORD *)&v17 + 2 * i + 3) >= 0xFFu )
      return -1073741701;
  }
  v11 = 0LL;
  if ( BYTE4(v17) )
  {
    v12 = (_DWORD *)&v17 + 2;
    while ( *v12 != a1 )
    {
      v11 = (unsigned int)(v11 + 1);
      v12 += 2;
      if ( (unsigned int)v11 >= BYTE4(v17) )
        goto LABEL_17;
    }
    goto LABEL_18;
  }
LABEL_17:
  if ( (unsigned int)v11 >= BYTE4(v17) )
    return -1073741275;
LABEL_18:
  v13 = *((_DWORD *)&v17 + 2 * v11 + 3);
  *a2 = (unsigned __int16)v13;
  if ( a3 )
    *a3 = HIWORD(v13) & 1;
  return 0;
}
