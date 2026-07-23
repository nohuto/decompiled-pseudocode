/*
 * XREFs of AslpFileGetImageNtHeader @ 0x14089382C
 * Callers:
 *     AslFileMappingGetImageTypeEx @ 0x14088F14C (AslFileMappingGetImageTypeEx.c)
 *     AslpFileGetClrVersion @ 0x140892B50 (AslpFileGetClrVersion.c)
 *     AslpFileGetExeWrapper @ 0x140892FA0 (AslpFileGetExeWrapper.c)
 *     AslpFileGetImageResourceDirectoryRoot @ 0x14089396C (AslpFileGetImageResourceDirectoryRoot.c)
 *     AslpFileGetNtHeaderAttributes @ 0x140893B3C (AslpFileGetNtHeaderAttributes.c)
 *     AslpFileGetVersionBlockFromResourceRoot @ 0x140894528 (AslpFileGetVersionBlockFromResourceRoot.c)
 *     AslpFileIsArm64XBinary @ 0x140894CA4 (AslpFileIsArm64XBinary.c)
 *     AslpFileQueryExportName @ 0x140895368 (AslpFileQueryExportName.c)
 *     AslpImageFirstSectionUma @ 0x140895834 (AslpImageFirstSectionUma.c)
 * Callees:
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetImageNtHeader(_QWORD *a1, __int64 a2)
{
  unsigned int v4; // ebx
  int *v5; // rsi
  __int64 v6; // rcx
  _BYTE v8[64]; // [rsp+40h] [rbp-68h] BYREF

  memset_0(v8, 0, sizeof(v8));
  if ( *(_DWORD *)(a2 + 64) == 6 )
  {
    v5 = *(int **)(a2 + 32);
    v4 = 0;
    if ( MmIsUserAddress((unsigned __int64)v5) )
    {
      RtlCopyFromUser(v8, v5, 0x40uLL);
      v5 = (int *)v8;
    }
    v6 = v5[15];
    if ( *(_QWORD *)(a2 + 24) < (unsigned __int64)(v6 + 264) || *(_QWORD *)(a2 + 40) < (unsigned __int64)(v6 + 264) )
    {
      v4 = -1073741701;
      AslLogCallPrintf(1, (unsigned int)"AslpFileGetImageNtHeader", 3777, (unsigned int)"File mapping invalid [%x]");
    }
    else
    {
      *a1 = *(_QWORD *)(a2 + 32) + v6;
    }
  }
  else
  {
    v4 = -1073741637;
    AslLogCallPrintf(1, (unsigned int)"AslpFileGetImageNtHeader", 3758, (unsigned int)"File mapping not a PE [%x]");
  }
  return v4;
}
