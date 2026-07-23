/*
 * XREFs of CmpVEExecuteVirtualStoreParseLogic @ 0x140AF6E78
 * Callers:
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 * Callees:
 *     RtlUnicodeStringCat @ 0x1403E78F0 (RtlUnicodeStringCat.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringCopy @ 0x14042FE80 (RtlUnicodeStringCopy.c)
 *     CmpVirtualBranchIsReplicated @ 0x1408B7C80 (CmpVirtualBranchIsReplicated.c)
 *     CmpFindPathByNameEx @ 0x1408B7F30 (CmpFindPathByNameEx.c)
 *     CmpBlockHiveWrites @ 0x1408B83AC (CmpBlockHiveWrites.c)
 *     CmpUnblockHiveWrites @ 0x140ADBC68 (CmpUnblockHiveWrites.c)
 *     CmVirtualKCBToRealPath @ 0x140AF7040 (CmVirtualKCBToRealPath.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpVEExecuteVirtualStoreParseLogic(__int64 a1, UNICODE_STRING *a2, _DWORD *a3, UNICODE_STRING *a4)
{
  char *v6; // rsi
  int v9; // ebx
  unsigned int Length; // edx
  wchar_t *v11; // rcx
  char PathByName; // bl
  wchar_t *Buffer; // rcx
  unsigned int v15; // [rsp+30h] [rbp-40h] BYREF
  char *v16; // [rsp+38h] [rbp-38h] BYREF
  ULONG_PTR v17; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING v18; // [rsp+48h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  char v20; // [rsp+B0h] [rbp+40h] BYREF

  v20 = 0;
  v17 = 0LL;
  v15 = 0;
  v6 = 0LL;
  DestinationString = 0LL;
  v16 = 0LL;
  v18 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v18, 0LL);
  *a3 |= 8u;
  if ( CmpVirtualBranchIsReplicated(a1, a2, &v20) )
    goto LABEL_20;
  v9 = CmVirtualKCBToRealPath(a1, &DestinationString);
  if ( v9 < 0 )
    goto LABEL_14;
  if ( a2->Length + (unsigned int)DestinationString.Length + 2 > 0xFFFF )
  {
    v9 = -1073741811;
    goto LABEL_14;
  }
  v18.MaximumLength = a2->Length + DestinationString.Length + 2;
  v18.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
  if ( !v18.Buffer )
  {
    v9 = -1073741670;
    goto LABEL_14;
  }
  RtlUnicodeStringCopy(&v18, &DestinationString);
  Length = v18.Length;
  if ( (unsigned int)v18.Length + 2 <= v18.MaximumLength )
  {
    v18.Length += 2;
    v18.Buffer[(unsigned __int64)Length >> 1] = 92;
  }
  RtlUnicodeStringCat(&v18, a2);
  if ( (*a3 & 1) != 0 && v20 )
  {
    v9 = CmpBlockHiveWrites(0LL, 16, &v16);
    if ( v9 >= 0 )
    {
      PathByName = CmpFindPathByNameEx(0LL, (__m128i *)&v18, 0LL, 16, &v15, &v17);
      CmpUnblockHiveWrites(0LL, 16, v16);
      if ( PathByName )
      {
        Buffer = a4->Buffer;
        if ( Buffer )
          ExFreePoolWithTag(Buffer, 0);
        *a4 = v18;
        RtlInitUnicodeString(&v18, 0LL);
        v9 = 260;
        goto LABEL_14;
      }
LABEL_20:
      v9 = -1073741199;
      goto LABEL_14;
    }
    v6 = v16;
  }
  else
  {
    if ( *(_WORD *)(a1 + 12) <= 4u )
      goto LABEL_20;
    v11 = a4->Buffer;
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
    *a4 = v18;
    RtlInitUnicodeString(&v18, 0LL);
    v9 = 260;
  }
  if ( v6 )
    CmpUnblockHiveWrites(0LL, 16, v6);
LABEL_14:
  if ( v18.Buffer )
    ExFreePoolWithTag(v18.Buffer, 0);
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  return (unsigned int)v9;
}
