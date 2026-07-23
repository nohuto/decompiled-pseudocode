/*
 * XREFs of AslpImageRvaToVa @ 0x140895A08
 * Callers:
 *     AslFileMappingGetImageTypeEx @ 0x14088F14C (AslFileMappingGetImageTypeEx.c)
 *     AslpFileGetClrVersion @ 0x140892B50 (AslpFileGetClrVersion.c)
 *     AslpFileGetImageResourceDirectoryRoot @ 0x14089396C (AslpFileGetImageResourceDirectoryRoot.c)
 *     AslpFileGetVersionBlockFromResourceRoot @ 0x140894528 (AslpFileGetVersionBlockFromResourceRoot.c)
 *     AslpFileIsArm64XBinary @ 0x140894CA4 (AslpFileIsArm64XBinary.c)
 *     AslpFileQueryExportName @ 0x140895368 (AslpFileQueryExportName.c)
 * Callees:
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     AslpImageRvaToSectionUma @ 0x140895930 (AslpImageRvaToSectionUma.c)
 */

__int64 __fastcall AslpImageRvaToVa(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v6; // rax
  unsigned int *v7; // r14
  unsigned int *v8; // rbx
  int ULongFromUser; // ebx
  unsigned int v10; // ecx
  unsigned __int64 v11; // [rsp+48h] [rbp+20h] BYREF

  if ( a3 )
  {
    if ( *(_BYTE *)(a2 + 59) )
    {
      if ( (unsigned __int64)a3 < *(_QWORD *)(a2 + 40) )
        return a3 + *(_QWORD *)(a2 + 32);
    }
    else
    {
      v11 = a1;
      v6 = AslpImageRvaToSectionUma(&v11, a3, a2);
      if ( v6 )
      {
        v7 = (unsigned int *)(v6 + 20);
        v8 = (unsigned int *)(v6 + 12);
        if ( MmIsUserAddress(v6) )
        {
          ULongFromUser = RtlReadULongFromUser(v8);
          v10 = a3 - ULongFromUser + RtlReadULongFromUser(v7);
        }
        else
        {
          v10 = a3 + *v7 - *v8;
        }
        if ( (unsigned __int64)v10 < *(_QWORD *)(a2 + 24) )
          return v10 + *(_QWORD *)(a2 + 32);
      }
    }
  }
  return 0LL;
}
