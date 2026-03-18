/*
 * XREFs of CmpVEExecuteVirtualStoreParseLogic @ 0x140AF47D8
 * Callers:
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 * Callees:
 *     RtlUnicodeStringCat @ 0x1403E4700 (RtlUnicodeStringCat.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringCopy @ 0x14043D5D0 (RtlUnicodeStringCopy.c)
 *     CmpVirtualBranchIsReplicated @ 0x1408B1674 (CmpVirtualBranchIsReplicated.c)
 *     CmpFindPathByNameEx @ 0x1408B1924 (CmpFindPathByNameEx.c)
 *     CmpBlockHiveWrites @ 0x1408B1DD0 (CmpBlockHiveWrites.c)
 *     CmpUnblockHiveWrites @ 0x140ADEA78 (CmpUnblockHiveWrites.c)
 *     CmVirtualKCBToRealPath @ 0x140AF49A0 (CmVirtualKCBToRealPath.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpVEExecuteVirtualStoreParseLogic(__int64 a1, UNICODE_STRING *a2, _DWORD *a3, UNICODE_STRING *a4)
{
  __int64 v6; // rsi
  int v9; // ebx
  unsigned int Length; // edx
  wchar_t *v11; // rcx
  __int64 v12; // r9
  char PathByName; // bl
  __int64 v15; // r9
  wchar_t *Buffer; // rcx
  unsigned int v17; // [rsp+30h] [rbp-40h] BYREF
  __int64 v18; // [rsp+38h] [rbp-38h] BYREF
  ULONG_PTR v19; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING v20; // [rsp+48h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  char v22; // [rsp+B0h] [rbp+40h] BYREF

  v22 = 0;
  v19 = 0LL;
  v17 = 0;
  v6 = 0LL;
  DestinationString = 0LL;
  v18 = 0LL;
  v20 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v20, 0LL);
  *a3 |= 8u;
  if ( CmpVirtualBranchIsReplicated(a1, a2, &v22) )
    goto LABEL_20;
  v9 = CmVirtualKCBToRealPath(a1, &DestinationString);
  if ( v9 < 0 )
    goto LABEL_14;
  if ( a2->Length + (unsigned int)DestinationString.Length + 2 > 0xFFFF )
  {
    v9 = -1073741811;
    goto LABEL_14;
  }
  v20.MaximumLength = a2->Length + DestinationString.Length + 2;
  v20.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
  if ( !v20.Buffer )
  {
    v9 = -1073741670;
    goto LABEL_14;
  }
  RtlUnicodeStringCopy(&v20, &DestinationString);
  Length = v20.Length;
  if ( (unsigned int)v20.Length + 2 <= v20.MaximumLength )
  {
    v20.Length += 2;
    v20.Buffer[(unsigned __int64)Length >> 1] = 92;
  }
  RtlUnicodeStringCat(&v20, a2);
  if ( (*a3 & 1) != 0 && v22 )
  {
    v9 = CmpBlockHiveWrites(0LL, 16, &v18);
    if ( v9 >= 0 )
    {
      PathByName = CmpFindPathByNameEx(0LL, (__m128i *)&v20, 0LL, 16, &v17, &v19);
      CmpUnblockHiveWrites(0LL, 16LL, v18, v15);
      if ( PathByName )
      {
        Buffer = a4->Buffer;
        if ( Buffer )
          ExFreePoolWithTag(Buffer, 0);
        *a4 = v20;
        RtlInitUnicodeString(&v20, 0LL);
        v9 = 260;
        goto LABEL_14;
      }
LABEL_20:
      v9 = -1073741199;
      goto LABEL_14;
    }
    v6 = v18;
  }
  else
  {
    if ( *(_WORD *)(a1 + 12) <= 4u )
      goto LABEL_20;
    v11 = a4->Buffer;
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
    *a4 = v20;
    RtlInitUnicodeString(&v20, 0LL);
    v9 = 260;
  }
  if ( v6 )
    CmpUnblockHiveWrites(0LL, 16LL, v6, v12);
LABEL_14:
  if ( v20.Buffer )
    ExFreePoolWithTag(v20.Buffer, 0);
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  return (unsigned int)v9;
}
