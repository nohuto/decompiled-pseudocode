/*
 * XREFs of AslFileAllocAndGetAttributes @ 0x140892080
 * Callers:
 *     SdbpCheckAllAttributes @ 0x140B47B94 (SdbpCheckAllAttributes.c)
 * Callees:
 *     Feature_Arm64XMatching__private_IsEnabledDeviceUsageNoInline @ 0x140719C24 (Feature_Arm64XMatching__private_IsEnabledDeviceUsageNoInline.c)
 *     AslpFileLargeEnsureLargeFileMapping @ 0x1407805D8 (AslpFileLargeEnsureLargeFileMapping.c)
 *     AslFileMappingEnsure @ 0x14088EDE8 (AslFileMappingEnsure.c)
 *     AslpFileGetChecksumAttributes @ 0x140892980 (AslpFileGetChecksumAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x140892D10 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetExeWrapperAttribute @ 0x140893204 (AslpFileGetExeWrapperAttribute.c)
 *     AslpFileGetFileKindDetailAttribute @ 0x14089338C (AslpFileGetFileKindDetailAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x140893414 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x1408935BC (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameAttribute @ 0x140893D28 (AslpFileGetPeExportNameAttribute.c)
 *     AslpFileGetVersionAttributes @ 0x140893E0C (AslpFileGetVersionAttributes.c)
 *     AslpFileIsArm64XBinary @ 0x140894CA4 (AslpFileIsArm64XBinary.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslFileAllocAndGetAttributes(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int FileKindDetailAttribute; // ebx
  __int64 v6; // rdx
  __int64 i; // r8
  __int64 v8; // rcx
  unsigned int v9; // edx
  _DWORD *v10; // r8
  bool v11; // zf
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  bool v15; // zf
  unsigned int v16; // ecx
  int v17; // eax
  const char *v18; // r9
  int v19; // r8d
  int v20; // ebp
  __int64 j; // r13
  int VersionAttributes; // eax
  __int64 v23; // rax
  int IsArm64XBinary; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int8 v29; // [rsp+88h] [rbp+20h] BYREF

  if ( a3 )
  {
    if ( *(_DWORD *)(a2 + 64) == 1 )
    {
      v6 = 0LL;
      for ( i = 0LL; ; i += 32LL )
      {
        v8 = a1 + 32 * v6;
        if ( !v6 )
        {
          *(_DWORD *)(a1 + 24) |= 1u;
          *(_QWORD *)(a1 + 16) = 0LL;
          goto LABEL_12;
        }
        if ( v6 == 17 )
          break;
        if ( v6 == 28 )
        {
          *(_DWORD *)(a1 + 920) |= 1u;
          *(_QWORD *)(a1 + 912) = 1LL;
LABEL_12:
          *(_DWORD *)(a1 + i) = 2;
          *(_QWORD *)(v8 + 8) = 4LL;
          goto LABEL_13;
        }
        *(_DWORD *)(v8 + 24) = *(_DWORD *)(a1 + i + 24) | 2;
LABEL_13:
        if ( ++v6 >= 36 )
          return 0;
      }
      *(_DWORD *)(a1 + 568) |= 1u;
      *(_QWORD *)(a1 + 560) = 0LL;
      goto LABEL_12;
    }
    if ( *(_DWORD *)(a2 + 80) )
    {
      v9 = 0;
      v10 = (_DWORD *)(a1 + 24);
      do
      {
        if ( v9 > 0x10 )
        {
          if ( v9 > 0x1C )
          {
            if ( v9 != 29 && v9 != 30 && v9 != 31 )
            {
              v16 = v9 - 33;
              v15 = v9 == 33;
              goto LABEL_38;
            }
          }
          else if ( v9 != 28 && v9 != 17 && v9 != 18 && v9 != 19 )
          {
            v16 = v9 - 22;
            v15 = v9 == 22;
            goto LABEL_38;
          }
        }
        else if ( v9 != 16 )
        {
          if ( v9 > 9 )
          {
            v11 = v9 == 10;
            v12 = v9 - 10;
          }
          else
          {
            if ( v9 == 9 || v9 == 1 )
              goto LABEL_41;
            v12 = v9 - 3;
            v11 = v9 == 3;
          }
          if ( !v11 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              v14 = v13 - 1;
              if ( v14 )
              {
                v16 = v14 - 1;
                v15 = v16 == 0;
LABEL_38:
                if ( !v15 && v16 - 1 >= 2 )
                  *v10 |= 2u;
              }
            }
          }
        }
LABEL_41:
        ++v9;
        v10 += 8;
      }
      while ( (int)v9 < 36 );
    }
    v17 = AslFileMappingEnsure(a2);
    FileKindDetailAttribute = v17;
    if ( v17 == -1073741801 )
    {
      if ( !*(_DWORD *)(a2 + 80) )
      {
        FileKindDetailAttribute = AslpFileLargeEnsureLargeFileMapping(a1, a2);
        if ( FileKindDetailAttribute < 0 )
        {
          v18 = "AslpFileLargeEnsureLargeFileMapping failed [%x]";
          v19 = 599;
LABEL_46:
          AslLogCallPrintf(1, (unsigned int)"AslFileAllocAndGetAttributes", v19, (_DWORD)v18);
          return (unsigned int)FileKindDetailAttribute;
        }
        goto LABEL_49;
      }
    }
    else if ( v17 >= 0 )
    {
LABEL_49:
      v20 = 0;
      for ( j = 0LL; ; j += 32LL )
      {
        if ( v20 >= 36 )
          return 0;
        if ( ((a3 >> v20) & 1) != 0 && (*(_DWORD *)(a1 + j + 24) & 3) == 0 )
        {
          if ( v20 > 18 )
          {
            if ( v20 > 27 )
            {
              switch ( v20 )
              {
                case 28:
                  FileKindDetailAttribute = AslpFileGetFileKindDetailAttribute(a1, a2);
                  if ( FileKindDetailAttribute < 0 )
                  {
                    v18 = "AslpFileGetFileKindDetailAttribute failed [%x]";
                    v19 = 694;
                    goto LABEL_46;
                  }
                  break;
                case 29:
                case 30:
                case 31:
                  goto LABEL_116;
                case 32:
LABEL_115:
                  v26 = *(_QWORD *)(a2 + 24);
                  *(_DWORD *)(a1 + 1048) |= 1u;
                  *(_DWORD *)(a1 + 24) |= 1u;
                  *(_QWORD *)(a1 + 16) = (unsigned int)v26;
                  *(_DWORD *)(a1 + 1024) = 3;
                  *(_QWORD *)(a1 + 1032) = 8LL;
                  *(_QWORD *)(a1 + 1040) = v26;
                  *(_DWORD *)a1 = 2;
                  *(_QWORD *)(a1 + 8) = 4LL;
                  break;
                case 33:
                  goto LABEL_116;
                case 34:
                  goto LABEL_92;
                default:
                  if ( !(unsigned int)Feature_Arm64XMatching__private_IsEnabledDeviceUsageNoInline() )
                    goto LABEL_110;
                  v29 = 0;
                  IsArm64XBinary = AslpFileIsArm64XBinary(&v29, a2);
                  if ( IsArm64XBinary < 0 )
                  {
                    if ( IsArm64XBinary != -2147483614 )
                      AslLogCallPrintf(
                        1,
                        (unsigned int)"AslFileAllocAndGetAttributes",
                        730,
                        (unsigned int)"AslpFileIsArm64XBinary failed [%x]");
LABEL_110:
                    *(_DWORD *)(a1 + 1144) |= 2u;
                    break;
                  }
                  v25 = v29;
                  *(_DWORD *)(a1 + 1144) |= 1u;
                  *(_QWORD *)(a1 + 1136) = v25;
                  *(_DWORD *)(a1 + 1120) = 0;
                  *(_QWORD *)(a1 + 1128) = 1LL;
                  break;
              }
            }
            else
            {
              switch ( v20 )
              {
                case 27:
                  FileKindDetailAttribute = AslpFileGetClrVersionAttribute(a1, a2);
                  if ( FileKindDetailAttribute < 0 )
                  {
                    v18 = "AslpFileGetClrVersionAttribute failed [%x]";
                    v19 = 765;
                    goto LABEL_46;
                  }
                  break;
                case 19:
                  goto LABEL_116;
                case 20:
                case 21:
                  FileKindDetailAttribute = AslpFileGetHeaderAttributesNE(a1, a2);
                  if ( FileKindDetailAttribute < 0 )
                  {
                    v18 = "AslpFileGetHeaderAttributesNE failed [%x]";
                    v19 = 775;
                    goto LABEL_46;
                  }
                  break;
                case 22:
                  goto LABEL_116;
                case 23:
                  FileKindDetailAttribute = AslpFileGetPeExportNameAttribute(a1, a2);
                  if ( FileKindDetailAttribute < 0 )
                  {
                    v18 = "AslpFileGetPeExportNameAttribute failed [%x]";
                    v19 = 756;
                    goto LABEL_46;
                  }
                  break;
                case 24:
                  goto LABEL_65;
                case 25:
                  FileKindDetailAttribute = AslpFileGetExeWrapperAttribute(a1, a2);
                  if ( FileKindDetailAttribute < 0 )
                  {
                    v18 = "AslpFileGetExeWrapperAttribute failed [%x]";
                    v19 = 747;
                    goto LABEL_46;
                  }
                  break;
                default:
                  goto LABEL_92;
              }
            }
          }
          else
          {
            if ( v20 == 18 )
              goto LABEL_116;
            if ( v20 <= 9 )
            {
              if ( v20 == 9 )
                goto LABEL_65;
              if ( !v20 )
                goto LABEL_115;
              if ( v20 != 1 )
              {
                if ( v20 != 2 )
                {
                  if ( v20 != 3 && v20 != 4 && v20 != 5 && v20 != 6 && (unsigned int)(v20 - 7) > 1 )
                    return (unsigned int)-1073741595;
LABEL_65:
                  VersionAttributes = AslpFileGetVersionAttributes(a1, a2);
                  if ( VersionAttributes <= -1073741688 || (unsigned int)(VersionAttributes + 1073741684) <= 0x3FFFFF73 )
                    AslLogCallPrintf(
                      1,
                      (unsigned int)"AslFileAllocAndGetAttributes",
                      666,
                      (unsigned int)"AslpFileGetVersionAttributes failed [%x]");
                  goto LABEL_119;
                }
LABEL_92:
                FileKindDetailAttribute = AslpFileGetChecksumAttributes(a1, a2);
                if ( FileKindDetailAttribute < 0 )
                {
                  v18 = "AslpFileGetChecksumAttributes failed [%x]";
                  v19 = 786;
                  goto LABEL_46;
                }
                goto LABEL_119;
              }
LABEL_116:
              FileKindDetailAttribute = AslpFileGetHeaderAttributesPE(a1, a2);
              if ( FileKindDetailAttribute < 0 )
              {
                v18 = "AslpFileGetHeaderAttributesPE failed [%x]";
                v19 = 710;
                goto LABEL_46;
              }
              goto LABEL_119;
            }
            if ( v20 == 10 || v20 == 11 || v20 == 12 || v20 == 13 || v20 == 14 || v20 == 15 || v20 == 16 )
              goto LABEL_65;
            switch ( *(_DWORD *)(a2 + 64) )
            {
              case 4:
                v23 = 1LL;
                break;
              case 5:
                v23 = 2LL;
                break;
              case 6:
                v23 = 3LL;
                break;
              default:
                v23 = 0LL;
                break;
            }
            *(_DWORD *)(a1 + 568) |= 1u;
            *(_DWORD *)(a1 + 544) = 2;
            *(_QWORD *)(a1 + 552) = 4LL;
            *(_QWORD *)(a1 + 560) = v23;
          }
        }
LABEL_119:
        ++v20;
      }
    }
    v18 = "AslFileMappingEnsure failed [%x]";
    v19 = 603;
    goto LABEL_46;
  }
  return 0;
}
