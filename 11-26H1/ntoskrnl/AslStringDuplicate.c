/*
 * XREFs of AslStringDuplicate @ 0x1409D8BA8
 * Callers:
 *     SdbpGetManifestedMergeStubAlloc @ 0x140887580 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1408893C0 (SdbpCheckMatchingRegistryValue.c)
 *     AslRegistryGetString @ 0x14088E7F0 (AslRegistryGetString.c)
 *     AslFileMappingCreateFromImageView @ 0x14088EC98 (AslFileMappingCreateFromImageView.c)
 *     AslPathToSystemPath @ 0x14088FB9C (AslPathToSystemPath.c)
 *     AslRegWildcardFindFirst @ 0x140890AC8 (AslRegWildcardFindFirst.c)
 *     AslpFileVerQueryBlock @ 0x1409D7CBC (AslpFileVerQueryBlock.c)
 *     AslFileMappingCreate @ 0x140A37E7C (AslFileMappingCreate.c)
 * Callees:
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     RtlStringCchLengthW @ 0x1404509C0 (RtlStringCchLengthW.c)
 *     RtlULongLongMult @ 0x14045E560 (RtlULongLongMult.c)
 *     RtlStringCchCopyW @ 0x140464504 (RtlStringCchCopyW.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlWideStringLengthFromUser @ 0x1407821B4 (RtlWideStringLengthFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     AslAlloc @ 0x1409D8260 (AslAlloc.c)
 */

__int64 __fastcall AslStringDuplicate(_QWORD *a1, unsigned __int16 *a2)
{
  void *v4; // rdi
  __int64 v5; // rcx
  bool IsUserAddress; // r13
  size_t v7; // r15
  NTSTATUS v8; // ebx
  void *v9; // rax
  size_t pcchLength; // [rsp+38h] [rbp-40h] BYREF
  void *v12; // [rsp+40h] [rbp-38h]
  bool v13; // [rsp+90h] [rbp+18h]
  ULONGLONG pullResult; // [rsp+98h] [rbp+20h] BYREF

  pcchLength = 0LL;
  pullResult = 0LL;
  v4 = 0LL;
  v12 = 0LL;
  IsUserAddress = MmIsUserAddress((unsigned __int64)a1);
  if ( IsUserAddress )
    RtlWriteULong64ToUser(a1, 0LL);
  else
    *a1 = 0LL;
  if ( !a2 )
  {
LABEL_24:
    v8 = 0;
    goto LABEL_25;
  }
  v13 = MmIsUserAddress((unsigned __int64)a2);
  if ( v13 )
  {
    pcchLength = RtlWideStringLengthFromUser(a2);
  }
  else
  {
    v8 = RtlStringCchLengthW(a2, 0x7FFFFFFFuLL, &pcchLength);
    if ( v8 < 0 )
      goto LABEL_10;
  }
  v7 = pcchLength + 1;
  if ( pcchLength + 1 < pcchLength )
  {
    v7 = -1LL;
    v8 = -1073741675;
  }
  else
  {
    v8 = 0;
  }
  pcchLength = v7;
  if ( v8 >= 0 )
  {
    v8 = RtlULongLongMult(v7, 2uLL, &pullResult);
    if ( v8 >= 0 )
    {
      v9 = (void *)AslAlloc();
      v4 = v9;
      v12 = v9;
      if ( !v9 )
      {
        v8 = -1073741801;
        AslLogCallPrintf(1LL, (__int64)"AslStringDuplicate");
        goto LABEL_25;
      }
      if ( v13 )
      {
        RtlCopyFromUser(v9, a2, pullResult);
LABEL_18:
        if ( IsUserAddress )
        {
          LODWORD(pullResult) = 1;
          RtlWriteULong64ToUser(a1, (__int64)v4);
        }
        else
        {
          LODWORD(pullResult) = 0;
          *a1 = v4;
        }
        v4 = 0LL;
        v12 = 0LL;
        goto LABEL_24;
      }
      v8 = RtlStringCchCopyW((NTSTRSAFE_PWSTR)v9, v7, a2);
      if ( v8 >= 0 )
        goto LABEL_18;
    }
  }
LABEL_10:
  AslLogCallPrintf(1LL, (__int64)"AslStringDuplicate");
LABEL_25:
  AslFree(v5, v4);
  return (unsigned int)v8;
}
