/*
 * XREFs of AslpFileGetImageNtHeader @ 0x14088D430
 * Callers:
 *     AslFileMappingGetImageTypeEx @ 0x140888D50 (AslFileMappingGetImageTypeEx.c)
 *     AslpFileGetClrVersion @ 0x14088C754 (AslpFileGetClrVersion.c)
 *     AslpFileGetExeWrapper @ 0x14088CBA4 (AslpFileGetExeWrapper.c)
 *     AslpFileGetImageResourceDirectoryRoot @ 0x14088D570 (AslpFileGetImageResourceDirectoryRoot.c)
 *     AslpFileGetNtHeaderAttributes @ 0x14088D740 (AslpFileGetNtHeaderAttributes.c)
 *     AslpFileGetVersionBlockFromResourceRoot @ 0x14088E12C (AslpFileGetVersionBlockFromResourceRoot.c)
 *     AslpFileIsArm64XBinary @ 0x14088E8A8 (AslpFileIsArm64XBinary.c)
 *     AslpFileQueryExportName @ 0x14088EF6C (AslpFileQueryExportName.c)
 *     AslpImageFirstSectionUma @ 0x14088F438 (AslpImageFirstSectionUma.c)
 * Callees:
 *     MmIsUserAddress @ 0x14044E7C0 (MmIsUserAddress.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
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
