/*
 * XREFs of AslpFileGetImageNtHeader @ 0x18009C570
 * Callers:
 *     AslFileMappingGetImageTypeEx @ 0x18009A6EC (AslFileMappingGetImageTypeEx.c)
 *     AslpFileGetClrVersion @ 0x18009B834 (AslpFileGetClrVersion.c)
 *     AslpFileGetExeWrapper @ 0x18009BD0C (AslpFileGetExeWrapper.c)
 *     AslpFileGetImageResourceDirectoryRoot @ 0x18009C63C (AslpFileGetImageResourceDirectoryRoot.c)
 *     AslpFileGetNtHeaderAttributes @ 0x18009C808 (AslpFileGetNtHeaderAttributes.c)
 *     AslpFileGetVersionBlockFromResourceRoot @ 0x18009D1B0 (AslpFileGetVersionBlockFromResourceRoot.c)
 *     AslpFileIsArm64XBinary @ 0x18009D7D0 (AslpFileIsArm64XBinary.c)
 *     AslpFileQueryExportName @ 0x18009DEA0 (AslpFileQueryExportName.c)
 *     AslpImageRvaToVa @ 0x18009E75C (AslpImageRvaToVa.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetImageNtHeader(_QWORD *a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // r8

  if ( *(_DWORD *)(a2 + 56) == 6 )
  {
    v4 = *(_QWORD *)(a2 + 32);
    v5 = *(int *)(v4 + 60);
    if ( *(_QWORD *)(a2 + 24) < (unsigned __int64)(v5 + 264) || *(_QWORD *)(a2 + 40) < (unsigned __int64)(v5 + 264) )
    {
      v3 = -1073741701;
      AslLogCallPrintf(1LL, "AslpFileGetImageNtHeader", 3777LL, "File mapping invalid [%x]", -1073741701);
    }
    else
    {
      *a1 = v4 + v5;
      return 0;
    }
  }
  else
  {
    v3 = -1073741637;
    AslLogCallPrintf(1LL, "AslpFileGetImageNtHeader", 3758LL, "File mapping not a PE [%x]", -1073741637);
  }
  return v3;
}
