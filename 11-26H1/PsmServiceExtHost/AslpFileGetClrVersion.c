/*
 * XREFs of AslpFileGetClrVersion @ 0x18009B834
 * Callers:
 *     AslpFileGetClrVersionAttribute @ 0x18009B9F4 (AslpFileGetClrVersionAttribute.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslpFileGetImageNtHeader @ 0x18009C570 (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x18009E75C (AslpImageRvaToVa.c)
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
 */

__int64 __fastcall AslpFileGetClrVersion(_BYTE *a1, __int64 a2)
{
  unsigned int *v4; // rdi
  int ImageNtHeader; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rax
  const char *v10; // r9
  __int64 v11; // r8
  _DWORD *v12; // rax
  __int64 v13; // rbx
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = 0LL;
  v4 = 0LL;
  *a1 = 0;
  ImageNtHeader = AslpFileGetImageNtHeader(&v15, a2);
  v6 = ImageNtHeader;
  if ( ImageNtHeader >= 0 )
  {
    v7 = v15;
    if ( *(_WORD *)(v15 + 24) == 267 )
    {
      v4 = (unsigned int *)(v15 + 232);
    }
    else if ( *(_WORD *)(v15 + 24) == 523 )
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
      v12 = (_DWORD *)AslpImageRvaToVa(v7, a2, *(unsigned int *)(v9 + 8));
      if ( v12 )
      {
        if ( *v12 != 1112167234 )
        {
          v6 = -1073741637;
          v10 = "Invalid COR20 Metadata signature encountered";
          v11 = 5723LL;
          goto LABEL_13;
        }
        v13 = (unsigned int)v12[3];
        if ( (unsigned __int64)(v13 - 1) <= 0xFE )
        {
          memcpy_0(a1, v12 + 4, (unsigned int)v13);
          a1[v13] = 0;
          return 0;
        }
        v10 = "CLR version string null or too long";
        v11 = 5735LL;
      }
      else
      {
        v10 = "Invalid COR20 Metadata virtual address encountered";
        v11 = 5713LL;
      }
    }
    else
    {
      v10 = "Invalid COM Descriptor virtual address encountered";
      v11 = 5693LL;
    }
    v6 = -1073741701;
LABEL_13:
    AslLogCallPrintf(1LL, "AslpFileGetClrVersion", v11, v10);
    return v6;
  }
  AslLogCallPrintf(1LL, "AslpFileGetClrVersion", 5664LL, "AslpFileGetImageNtHeader failed [%x]", ImageNtHeader);
  return v6;
}
