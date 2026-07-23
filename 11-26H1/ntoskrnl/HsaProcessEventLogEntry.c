/*
 * XREFs of HsaProcessEventLogEntry @ 0x1405ACC30
 * Callers:
 *     HsaIommuEventLogWorkerRoutine @ 0x1405AC7D0 (HsaIommuEventLogWorkerRoutine.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall HsaProcessEventLogEntry(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  ULONG_PTR v3; // r9
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  ULONG_PTR result; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  int v16; // ecx
  char v17; // r9
  int v18; // eax
  int v19; // r11d
  int v20; // ecx

  v3 = *(_QWORD *)a2;
  v4 = *(_QWORD *)a2 >> 60;
  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  v5 = v4 - 1;
  if ( !v5 )
    goto LABEL_24;
  v6 = v5 - 1;
  if ( v6 )
  {
    v7 = v6 - 3;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        result = v8 - 1;
        if ( result )
        {
          if ( result != 1 )
            return result;
          *(_WORD *)(a3 + 18) = v3;
          *(_WORD *)(a3 + 16) = *(_WORD *)(BugCheckParameter2 + 160);
          result = v3 & 0x100000000000000LL;
          v10 = (v3 & 0x100000000000000LL | (v3 >> 4) & 0xE0000000000000LL) >> 53;
          if ( !v10 || (v11 = v10 - 1) == 0 || (v12 = v11 - 1) == 0 || (v13 = v12 - 1) == 0 || (v14 = v13 - 1) == 0 )
          {
LABEL_14:
            result = *(_QWORD *)(a2 + 8);
            v16 = *(_DWORD *)(a3 + 4) | 2;
            v17 = (*(_BYTE *)(a3 + 4) | 2) ^ BYTE6(v3);
            *(_DWORD *)a3 = 6;
            *(_QWORD *)(a3 + 8) = result;
            *(_DWORD *)(a3 + 4) = v16 ^ v17 & 1;
            return result;
          }
          v15 = v14 - 1;
          if ( v15 )
          {
            if ( v15 - 1 > 1 )
              return result;
            goto LABEL_14;
          }
LABEL_17:
          *(_DWORD *)a3 = 8;
          return result;
        }
      }
    }
LABEL_24:
    KeBugCheckEx(0x5Cu, 0x502uLL, BugCheckParameter2, v3, *(_QWORD *)(a2 + 8));
  }
  *(_WORD *)(a3 + 18) = *(_WORD *)a2;
  result = *(unsigned __int16 *)(BugCheckParameter2 + 160);
  *(_WORD *)(a3 + 16) = result;
  if ( (v3 & 0x8000000000000LL) != 0 )
    goto LABEL_17;
  if ( (v3 & 0x100000000000000LL) != 0 )
  {
    *(_DWORD *)a3 = 7;
  }
  else
  {
    v18 = *(_DWORD *)(a3 + 4);
    *(_DWORD *)a3 = 6;
    v19 = v18 ^ ((unsigned __int8)v18 ^ BYTE6(v3)) & 1 ^ ((unsigned __int16)(v18 ^ ((unsigned __int8)v18 ^ BYTE6(v3)) & 1) ^ (unsigned __int16)(HIWORD(v3) << 8)) & 0x100;
    v20 = *(unsigned __int16 *)(a2 + 4);
    if ( (v3 & 0x1000000000000LL) != 0 )
      *(_DWORD *)(a3 + 20) = v20 | *(_DWORD *)a2 & 0xF0000;
    else
      *(_DWORD *)(a3 + 24) = v20;
    result = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a3 + 8) = result;
    *(_DWORD *)(a3 + 4) = v19 ^ ((unsigned __int8)v19 ^ (unsigned __int8)(2 * (v3 >> 52))) & 2;
  }
  return result;
}
