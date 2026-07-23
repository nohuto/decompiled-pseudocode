/*
 * XREFs of PpmTranslateIdleAccounting @ 0x1404D26A0
 * Callers:
 *     PpmEventTraceProcessorIdleAccounting @ 0x1404D2440 (PpmEventTraceProcessorIdleAccounting.c)
 *     PpmWmiFireIdleAccountingEvent @ 0x14060FAB0 (PpmWmiFireIdleAccountingEvent.c)
 * Callees:
 *     PpmConvertTimeTo @ 0x1404239FC (PpmConvertTimeTo.c)
 */

ULONGLONG __fastcall PpmTranslateIdleAccounting(__int64 a1, __int64 a2, ULONGLONG *a3)
{
  int *v3; // r9
  unsigned int v5; // ecx
  ULONGLONG result; // rax
  unsigned __int64 v7; // r13
  _DWORD *v8; // rdi
  __int64 v9; // r15
  _DWORD *v10; // rbx
  _DWORD *v11; // rsi
  _DWORD *v12; // r14
  __int64 v13; // rbp
  int v14; // eax
  _DWORD *v15; // rsi
  __int64 v16; // rbp
  int v17; // eax
  unsigned int v18; // r14d
  unsigned int v19; // eax
  __int64 v20; // r9
  _DWORD *v21; // r8

  v3 = *(int **)(a1 + 8);
  v5 = *v3;
  *(_DWORD *)a2 = *v3;
  *(_DWORD *)(a2 + 4) = v3[1];
  *(_DWORD *)(a2 + 8) = v3[2];
  *(_DWORD *)(a2 + 12) = v3[3];
  result = *((_QWORD *)v3 + 2);
  *(_QWORD *)(a2 + 16) = result;
  v7 = *((_QWORD *)v3 + 3);
  if ( v5 )
  {
    v8 = v3 + 224;
    v9 = v5;
    v10 = (_DWORD *)(a2 + 72);
    do
    {
      v7 += *((_QWORD *)v8 - 107);
      *(v10 - 10) = *(v8 - 211) + *(v8 - 212) + *(v8 - 210);
      *(v10 - 9) = *(v8 - 211);
      *(v10 - 5) = *(v8 - 212);
      *(v10 - 8) = *(v8 - 209);
      *((_QWORD *)v10 - 6) = PpmConvertTimeTo(*((_QWORD *)v8 - 107), 0xF4240uLL);
      *(v10 - 7) = PpmConvertTimeTo(*((_QWORD *)v8 - 104), 0xF4240uLL);
      *(v10 - 6) = PpmConvertTimeTo(*((_QWORD *)v8 - 103), 0xF4240uLL);
      v11 = v8 - 132;
      v12 = v10 - 1;
      v13 = 16LL;
      do
      {
        *(_QWORD *)(v12 - 3) = PpmConvertTimeTo(*((_QWORD *)v11 - 1), 0xF4240uLL);
        *(v12 - 1) = PpmConvertTimeTo(*(_QWORD *)v11, 0xF4240uLL);
        *v12 = PpmConvertTimeTo(*((_QWORD *)v11 + 1), 0xF4240uLL);
        v12 += 6;
        v14 = v11[4];
        v11 += 8;
        *(v12 - 5) = v14;
        --v13;
      }
      while ( v13 );
      v15 = v8 - 164;
      v16 = 4LL;
      do
      {
        v17 = v15[4];
        if ( v17 )
        {
          *v10 += v17;
          *((_QWORD *)v10 - 2) += PpmConvertTimeTo(*((_QWORD *)v15 - 1), 0xF4240uLL);
          v18 = PpmConvertTimeTo(*(_QWORD *)v15, 0xF4240uLL);
          v19 = PpmConvertTimeTo(*((_QWORD *)v15 + 1), 0xF4240uLL);
          if ( *(v10 - 2) > v18 )
            *(v10 - 2) = v18;
          if ( *(v10 - 1) < v19 )
            *(v10 - 1) = v19;
        }
        v15 += 8;
        --v16;
      }
      while ( v16 );
      LODWORD(result) = *(v10 - 8);
      v20 = 6LL;
      v21 = v8;
      do
      {
        result = (unsigned int)(*v21 + result);
        v21 += 8;
        *(v10 - 8) = result;
        --v20;
      }
      while ( v20 );
      v8 += 256;
      v10 += 104;
      --v9;
    }
    while ( v9 );
  }
  if ( a3 )
  {
    result = PpmConvertTimeTo(v7, 0xF4240uLL);
    *a3 = result;
  }
  return result;
}
