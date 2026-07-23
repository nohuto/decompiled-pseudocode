/*
 * XREFs of AslpFileGetClrVersion @ 0x140892B50
 * Callers:
 *     AslpFileGetClrVersionAttribute @ 0x140892D10 (AslpFileGetClrVersionAttribute.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     AslpFileGetImageNtHeader @ 0x14089382C (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x140895A08 (AslpImageRvaToVa.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetClrVersion(_BYTE *a1, __int64 a2)
{
  unsigned int *v4; // rdi
  int ImageNtHeader; // ebx
  __int64 v6; // rbx
  __int16 v7; // ax
  __int64 v8; // r8
  __int64 v9; // rax
  const char *v10; // r9
  int v11; // r8d
  _DWORD *v12; // rax
  __int64 v13; // rbx
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = 0LL;
  v4 = 0LL;
  *a1 = 0;
  ImageNtHeader = AslpFileGetImageNtHeader(&v15, a2);
  if ( ImageNtHeader >= 0 )
  {
    v6 = v15;
    v7 = *(_WORD *)(v15 + 24);
    if ( v7 == 267 )
    {
      v4 = (unsigned int *)(v15 + 232);
    }
    else if ( v7 == 523 )
    {
      v4 = (unsigned int *)(v15 + 248);
    }
    if ( !v4 )
      return (unsigned int)-1073741701;
    v8 = *v4;
    if ( !(_DWORD)v8 || v4[1] < 0x48 )
      return (unsigned int)-1073741701;
    v9 = AslpImageRvaToVa(v15, a2, v8);
    if ( v9 )
    {
      if ( *(_WORD *)(v9 + 4) != 2 )
        return (unsigned int)-1073741637;
      v12 = (_DWORD *)AslpImageRvaToVa(v6, a2, *(unsigned int *)(v9 + 8));
      if ( v12 )
      {
        if ( *v12 != 1112167234 )
        {
          ImageNtHeader = -1073741637;
          v10 = "Invalid COR20 Metadata signature encountered";
          v11 = 5723;
          goto LABEL_13;
        }
        v13 = (unsigned int)v12[3];
        if ( (unsigned __int64)(v13 - 1) <= 0xFE )
        {
          memmove(a1, v12 + 4, (unsigned int)v13);
          a1[v13] = 0;
          return 0;
        }
        v10 = "CLR version string null or too long";
        v11 = 5735;
      }
      else
      {
        v10 = "Invalid COR20 Metadata virtual address encountered";
        v11 = 5713;
      }
    }
    else
    {
      v10 = "Invalid COM Descriptor virtual address encountered";
      v11 = 5693;
    }
    ImageNtHeader = -1073741701;
LABEL_13:
    AslLogCallPrintf(1, (unsigned int)"AslpFileGetClrVersion", v11, (_DWORD)v10);
    return (unsigned int)ImageNtHeader;
  }
  AslLogCallPrintf(1, (unsigned int)"AslpFileGetClrVersion", 5664, (unsigned int)"AslpFileGetImageNtHeader failed [%x]");
  return (unsigned int)ImageNtHeader;
}
