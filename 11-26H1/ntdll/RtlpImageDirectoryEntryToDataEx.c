/*
 * XREFs of RtlpImageDirectoryEntryToDataEx @ 0x180045A20
 * Callers:
 *     RtlComputeImportTableHash @ 0x180121A80 (RtlComputeImportTableHash.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180047040 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x18007F890 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned __int64 a1,
        char a2,
        unsigned __int16 a3,
        _DWORD *a4,
        __int64 a5)
{
  __int64 *v5; // r14
  unsigned int v6; // ebx
  __int64 v7; // rsi
  unsigned __int64 v8; // r10
  char v9; // bp
  unsigned __int64 v11; // rdi
  __int64 result; // rax
  __int64 v13; // r9
  __int16 v14; // ax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r10
  unsigned int v18; // r8d
  unsigned int v19; // r11d
  _DWORD *v20; // rdx
  char v21; // r9
  unsigned int v22; // ecx
  unsigned __int64 v23; // rax
  char v24; // cl
  int v25; // ecx

  v5 = (__int64 *)a5;
  v6 = 0;
  v7 = a3;
  v8 = a1 & 1;
  v9 = a2;
  a5 = 0LL;
  *v5 = 0LL;
  v11 = a1;
  if ( (a1 & 2) != 0 || (a1 & 1) != 0 )
  {
    v11 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v24 = 0;
    if ( !v8 )
      v24 = a2;
    v9 = v24;
  }
  result = RtlImageNtHeaderEx(1LL, v11, 0LL, &a5);
  v13 = a5;
  if ( a5 )
  {
    v14 = *(_WORD *)(a5 + 24);
    if ( v14 == 267 )
    {
      if ( (unsigned int)v7 < *(_DWORD *)(a5 + 116) )
      {
        v17 = *(unsigned int *)(a5 + 8 * v7 + 120);
        if ( !(_DWORD)v17 )
          return (unsigned int)-1073741822;
        *a4 = *(_DWORD *)(a5 + 8 * v7 + 124);
        if ( v9 || (unsigned int)v17 < *(_DWORD *)(v13 + 84) )
        {
          *v5 = v11 + v17;
          return v6;
        }
        v18 = 0;
        v19 = *(unsigned __int16 *)(v13 + 6);
        v20 = (_DWORD *)(v13 + *(unsigned __int16 *)(v13 + 20) + 24LL);
        v21 = 0;
        while ( v18 < v19 )
        {
          v22 = v20[3];
          if ( (unsigned int)v17 >= v22 && (unsigned int)v17 < v20[4] + v22 )
          {
            v21 = 1;
            break;
          }
          v20 += 10;
          ++v18;
        }
        if ( !v21 )
          v20 = 0LL;
        if ( !v20 )
        {
          *v5 = 0LL;
          return (unsigned int)-1073741811;
        }
        v23 = v11 + (unsigned int)v20[5] - (unsigned __int64)(unsigned int)v20[3];
        *v5 = v23 + v17;
        if ( v23 + v17 )
          return v6;
      }
    }
    else if ( v14 == 523 && (unsigned int)v7 < *(_DWORD *)(a5 + 132) )
    {
      v15 = *(unsigned int *)(a5 + 8 * v7 + 136);
      if ( (_DWORD)v15 )
      {
        *a4 = *(_DWORD *)(a5 + 8 * v7 + 140);
        if ( v9 || (unsigned int)v15 < *(_DWORD *)(v13 + 84) )
        {
          v16 = v11 + v15;
        }
        else
        {
          v16 = RtlAddressInSectionTable(v13, v11, (unsigned int)v15);
          v25 = 0;
          if ( !v16 )
            v25 = -1073741811;
          v6 = v25;
        }
        *v5 = v16;
        return v6;
      }
      return (unsigned int)-1073741822;
    }
    return (unsigned int)-1073741811;
  }
  return result;
}
