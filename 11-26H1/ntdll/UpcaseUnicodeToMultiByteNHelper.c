/*
 * XREFs of UpcaseUnicodeToMultiByteNHelper @ 0x18009F460
 * Callers:
 *     RtlUpcaseUnicodeToOemN @ 0x18009F1E0 (RtlUpcaseUnicodeToOemN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UpcaseUnicodeToMultiByteNHelper(
        _BYTE *a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned __int16 *a4,
        unsigned int a5)
{
  unsigned int v5; // r11d
  _WORD *WideCharTable; // rsi
  int v9; // ebp
  __int64 v11; // r12
  unsigned __int16 *MultiByteTable; // r14
  __int64 i; // r15
  __int64 v14; // rax
  unsigned __int16 v15; // dx
  __int64 v16; // r8
  unsigned __int16 v17; // r9
  __int16 v18; // r8
  unsigned int v19; // eax

  v5 = a5;
  WideCharTable = GlobalRtlNlsState.WideCharTable;
  v9 = (int)a1;
  v11 = qword_1801C5038;
  MultiByteTable = GlobalRtlNlsState.MultiByteTable;
  for ( i = qword_1801C5020; v5; --v5 )
  {
    if ( !a2 )
      break;
    v14 = *a4++;
    v15 = WideCharTable[v14];
    v16 = *(unsigned __int16 *)(i + 2 * ((unsigned __int64)v15 >> 8));
    if ( (_WORD)v16 )
      v17 = GlobalRtlNlsState.DBCSOffsets[v16 + (unsigned __int8)v15];
    else
      v17 = MultiByteTable[(unsigned __int8)v15];
    if ( v17 >= 0x61u )
    {
      if ( v17 > 0x7Au )
      {
        if ( v11 && v17 >= 0xC0u )
          v17 += *(_WORD *)(v11
                          + 2LL
                          * ((v17 & 0xF)
                           + (unsigned int)*(unsigned __int16 *)(v11
                                                               + 2LL
                                                               * (((v17 >> 4) & 0xF)
                                                                + (unsigned int)*(unsigned __int16 *)(v11 + 2 * ((unsigned __int64)v17 >> 8))))));
      }
      else
      {
        v17 -= 32;
      }
    }
    v18 = WideCharTable[v17];
    if ( HIBYTE(v18) )
    {
      v19 = a2--;
      if ( v19 < 2 )
        break;
      *a1++ = HIBYTE(v18);
    }
    *a1 = v18;
    --a2;
    ++a1;
  }
  if ( a3 )
    *a3 = (_DWORD)a1 - v9;
  return a2 < v5 ? 0x80000005 : 0;
}
