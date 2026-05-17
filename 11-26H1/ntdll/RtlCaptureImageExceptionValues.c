/*
 * XREFs of RtlCaptureImageExceptionValues @ 0x1800821B0
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x1800818F4 (RtlInsertInvertedFunctionTable.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x18007F890 (RtlAddressInSectionTable.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x1800C2DC0 (RtlpImageDirectoryEntryToData32.c)
 */

__int64 __fastcall RtlCaptureImageExceptionValues(unsigned __int64 a1, _QWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // rbx
  unsigned __int64 v6; // rdi
  bool v7; // bp
  int v8; // eax
  __int64 v9; // rcx
  __int16 v10; // ax
  __int64 v11; // rdx
  __int64 result; // rax
  int v13; // ecx
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  _DWORD *v15; // [rsp+68h] [rbp+10h] BYREF

  v14 = 0LL;
  v3 = 0LL;
  v15 = 0LL;
  v6 = a1;
  v7 = 1;
  if ( (a1 & 2) != 0 || (a1 & 1) != 0 )
  {
    v6 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v7 = !(a1 & 1);
  }
  v8 = RtlImageNtHeaderEx(1, v6, 0LL, &v14);
  v9 = v14;
  if ( !v14 )
  {
LABEL_10:
    if ( v8 >= 0 )
      goto LABEL_12;
    goto LABEL_11;
  }
  v10 = *(_WORD *)(v14 + 24);
  if ( v10 == 267 )
  {
    v8 = RtlpImageDirectoryEntryToData32(v6, v7, 3, (_DWORD)a3, v14, (__int64)&v15);
    v3 = v15;
    goto LABEL_10;
  }
  if ( v10 == 523 )
  {
    if ( *(_DWORD *)(v14 + 132) <= 3u )
    {
      v8 = -1073741811;
    }
    else
    {
      v11 = *(unsigned int *)(v14 + 160);
      if ( (_DWORD)v11 )
      {
        *a3 = *(_DWORD *)(v14 + 164);
        if ( v7 || (unsigned int)v11 < *(_DWORD *)(v9 + 84) )
        {
          v3 = (_DWORD *)(v6 + v11);
          v8 = 0;
        }
        else
        {
          v3 = RtlAddressInSectionTable(v9, v6, v11);
          v13 = 0;
          if ( !v3 )
            v13 = -1073741811;
          v8 = v13;
        }
      }
      else
      {
        v8 = -1073741822;
      }
    }
    goto LABEL_10;
  }
LABEL_11:
  v3 = 0LL;
LABEL_12:
  result = 0LL;
  *a2 = v3;
  if ( !v3 )
    *a3 = 0;
  return result;
}
