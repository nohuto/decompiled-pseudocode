/*
 * XREFs of AslStringDuplicate @ 0x1409E3DCC
 * Callers:
 *     SdbpGetManifestedMergeStubAlloc @ 0x140881180 (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140882FC0 (SdbpCheckMatchingRegistryValue.c)
 *     AslRegistryGetString @ 0x1408883F4 (AslRegistryGetString.c)
 *     AslFileMappingCreateFromImageView @ 0x14088889C (AslFileMappingCreateFromImageView.c)
 *     AslPathToSystemPath @ 0x1408897A0 (AslPathToSystemPath.c)
 *     AslRegWildcardFindFirst @ 0x14088A6CC (AslRegWildcardFindFirst.c)
 *     AslFileMappingCreate @ 0x1409E3894 (AslFileMappingCreate.c)
 *     AslpFileVerQueryBlock @ 0x1409E5068 (AslpFileVerQueryBlock.c)
 * Callees:
 *     MmIsUserAddress @ 0x14044E7C0 (MmIsUserAddress.c)
 *     RtlStringCchLengthW @ 0x140459140 (RtlStringCchLengthW.c)
 *     RtlULongLongMult @ 0x1404655A0 (RtlULongLongMult.c)
 *     RtlStringCchCopyW @ 0x14046AD84 (RtlStringCchCopyW.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     RtlWideStringLengthFromUser @ 0x14077F6B4 (RtlWideStringLengthFromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     AslAlloc @ 0x1409E4C90 (AslAlloc.c)
 *     AslFree @ 0x1409E6BD8 (AslFree.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslStringDuplicate(__int64 *a1, unsigned __int16 *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  bool IsUserAddress; // r13
  size_t v7; // r15
  NTSTATUS v8; // ebx
  const char *v9; // r9
  int v10; // r8d
  __int64 v11; // rcx
  void *v12; // rax
  size_t pcchLength; // [rsp+38h] [rbp-40h] BYREF
  void *v15; // [rsp+40h] [rbp-38h]
  bool v16; // [rsp+90h] [rbp+18h]
  ULONGLONG pullResult; // [rsp+98h] [rbp+20h] BYREF

  pcchLength = 0LL;
  pullResult = 0LL;
  v4 = 0LL;
  v15 = 0LL;
  IsUserAddress = MmIsUserAddress((unsigned __int64)a1);
  if ( IsUserAddress )
    RtlWriteULong64ToUser(a1, 0LL);
  else
    *a1 = 0LL;
  if ( !a2 )
    goto LABEL_27;
  v16 = MmIsUserAddress((unsigned __int64)a2);
  if ( v16 )
  {
    pcchLength = RtlWideStringLengthFromUser(a2);
LABEL_7:
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
    if ( v8 < 0 )
    {
      v9 = "SIZE_T arithmetic failed [%x]";
      v10 = 602;
      goto LABEL_11;
    }
    v8 = RtlULongLongMult(v7, 2uLL, &pullResult);
    if ( v8 < 0 )
    {
      v9 = "SIZE_T arithmetic failed [%x]";
      v10 = 608;
      goto LABEL_11;
    }
    v12 = (void *)AslAlloc(v11, pullResult);
    v4 = (__int64)v12;
    v15 = v12;
    if ( !v12 )
    {
      v8 = -1073741801;
      AslLogCallPrintf(1, (unsigned int)"AslStringDuplicate", 615, (unsigned int)"Out of memory");
      goto LABEL_28;
    }
    if ( v16 )
    {
      RtlCopyFromUser(v12, a2, pullResult);
    }
    else
    {
      v8 = RtlStringCchCopyW((NTSTRSAFE_PWSTR)v12, v7, a2);
      if ( v8 < 0 )
      {
        v9 = "RtlStringCchCopyW failed [%x]";
        v10 = 632;
        goto LABEL_11;
      }
    }
    if ( IsUserAddress )
    {
      LODWORD(pullResult) = 1;
      RtlWriteULong64ToUser(a1, v4);
    }
    else
    {
      LODWORD(pullResult) = 0;
      *a1 = v4;
    }
    v4 = 0LL;
    v15 = 0LL;
LABEL_27:
    v8 = 0;
    goto LABEL_28;
  }
  v8 = RtlStringCchLengthW(a2, 0x7FFFFFFFuLL, &pcchLength);
  if ( v8 >= 0 )
    goto LABEL_7;
  v9 = "RtlStringCchLengthW failed [%x]";
  v10 = 590;
LABEL_11:
  AslLogCallPrintf(1, (unsigned int)"AslStringDuplicate", v10, (_DWORD)v9);
LABEL_28:
  AslFree(v5, v4);
  return (unsigned int)v8;
}
