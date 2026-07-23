/*
 * XREFs of AslpFileGetExeWrapper @ 0x140892FA0
 * Callers:
 *     AslpFileGetExeWrapperAttribute @ 0x140893204 (AslpFileGetExeWrapperAttribute.c)
 * Callees:
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     AslpFileGetImageNtHeader @ 0x14089382C (AslpFileGetImageNtHeader.c)
 *     AslpFileHasActiveMarkWrapper @ 0x140894A24 (AslpFileHasActiveMarkWrapper.c)
 *     AslpFileHasSecuromWrapper @ 0x140894BDC (AslpFileHasSecuromWrapper.c)
 *     AslpHasStarForceWrapper @ 0x14089576C (AslpHasStarForceWrapper.c)
 *     AslpImageFirstSectionUma @ 0x140895834 (AslpImageFirstSectionUma.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetExeWrapper(_DWORD *a1, __int64 a2)
{
  int ImageNtHeader; // ebx
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r15
  unsigned int *v9; // rdi
  unsigned __int16 v10; // [rsp+70h] [rbp+8h] BYREF
  int v11; // [rsp+78h] [rbp+10h] BYREF
  unsigned int *v12; // [rsp+80h] [rbp+18h] BYREF

  v11 = 0;
  *a1 = 0;
  v12 = 0LL;
  v10 = 0;
  if ( *(_QWORD *)(a2 + 24) >= 0x100000000uLL )
    return 0LL;
  ImageNtHeader = AslpFileGetImageNtHeader(&v12, a2);
  if ( ImageNtHeader >= 0 )
  {
    v6 = (unsigned __int64)v12;
    if ( MmIsUserAddress((unsigned __int64)v12) )
    {
      if ( (unsigned __int16)RtlReadUShortFromUser((unsigned __int16 *)(v6 + 24)) != 267 )
        return 0LL;
    }
    else if ( *(_WORD *)(v6 + 24) != 267 )
    {
      return 0LL;
    }
    v7 = AslpImageFirstSectionUma(&v10, &v12, a2);
    v8 = v7;
    if ( !v7 )
    {
      ImageNtHeader = -1073741701;
      AslLogCallPrintf(1, (unsigned int)"AslpFileGetExeWrapper", 3869, (unsigned int)"AslpImageFirstSectionUma failed");
      return (unsigned int)ImageNtHeader;
    }
    if ( (unsigned int)AslpFileHasSecuromWrapper(v7, v10) )
    {
      *a1 = 1;
      return 0;
    }
    v9 = v12;
    ImageNtHeader = AslpFileHasActiveMarkWrapper(&v11, v12, a2);
    if ( ImageNtHeader < 0 )
    {
      if ( ImageNtHeader == -1073741275 )
        AslLogCallPrintf(
          2,
          (unsigned int)"AslpFileGetExeWrapper",
          3893,
          (unsigned int)"AslpFileHasActiveMarkWrapper failed (FileSize: %I64u) [%x]");
      else
        AslLogCallPrintf(
          1,
          (unsigned int)"AslpFileGetExeWrapper",
          3895,
          (unsigned int)"AslpFileHasActiveMarkWrapper failed [%x]");
      return (unsigned int)ImageNtHeader;
    }
    if ( v11 )
    {
      *a1 = 2;
      return 0;
    }
    if ( MmIsUserAddress((unsigned __int64)v9) )
    {
      if ( (unsigned int)RtlReadULongFromUser(v9) != 17744
        || RtlReadUCharFromUser((char *)v9 + 26) != 83
        || RtlReadUCharFromUser((char *)v9 + 27) != 82 )
      {
        goto LABEL_29;
      }
    }
    else if ( *v9 != 17744 || *((_BYTE *)v9 + 26) != 83 || *((_BYTE *)v9 + 27) != 82 )
    {
LABEL_29:
      if ( (unsigned int)AslpHasStarForceWrapper(v8, v10) )
        *a1 = 4;
      return 0;
    }
    *a1 = 3;
    return 0;
  }
  AslLogCallPrintf(1, (unsigned int)"AslpFileGetExeWrapper", 3833, (unsigned int)"AslpFileGetImageNtHeader failed [%x]");
  return (unsigned int)ImageNtHeader;
}
