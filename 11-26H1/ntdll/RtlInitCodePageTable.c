/*
 * XREFs of RtlInitCodePageTable @ 0x1800D5450
 * Callers:
 *     RtlpInitCodePageTables @ 0x1800D52E0 (RtlpInitCodePageTables.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlInitCodePageTable(unsigned __int16 *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned __int16 v5; // r11
  unsigned __int16 *v6; // r10
  __int64 v7; // r8
  __int16 v8; // ax

  v3 = 0LL;
  if ( a1 && a1[1] != 0xFDE9 )
  {
    v4 = *a1;
    v5 = a1[v4] + v4;
    v6 = &a1[v4];
    *(_WORD *)(a2 + 2) = a1[2];
    *(_WORD *)(a2 + 4) = a1[3];
    *(_WORD *)(a2 + 6) = a1[4];
    *(_WORD *)(a2 + 8) = a1[5];
    *(_WORD *)(a2 + 10) = a1[6];
    *(_QWORD *)(a2 + 14) = *(_QWORD *)(a1 + 7);
    *(_DWORD *)(a2 + 22) = *(_DWORD *)(a1 + 11);
    *(_QWORD *)(a2 + 32) = &a1[v4 + 1];
    v7 = v6[257] != 0 ? 514LL : 2LL;
    if ( *(unsigned __int16 *)((char *)v6 + v7 + 514) )
    {
      v8 = 1;
      v3 = (__int64)v6 + v7 + 516;
    }
    else
    {
      v8 = 0;
    }
    *(_QWORD *)(a2 + 56) = v3;
    *(_WORD *)(a2 + 12) = v8;
    *(_QWORD *)(a2 + 40) = &a1[v5 + 1];
    *(_WORD *)a2 = a1[1];
  }
  else
  {
    *(_OWORD *)a2 = Utf8TableInfo;
    *(_OWORD *)(a2 + 16) = xmmword_1801C6060;
    *(_OWORD *)(a2 + 32) = xmmword_1801C6070;
    *(_OWORD *)(a2 + 48) = unk_1801C6080;
  }
}
