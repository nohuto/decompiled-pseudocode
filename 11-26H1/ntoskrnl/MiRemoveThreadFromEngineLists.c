/*
 * XREFs of MiRemoveThreadFromEngineLists @ 0x140502E5C
 * Callers:
 *     MiBackgroundZeroNodePages @ 0x140491210 (MiBackgroundZeroNodePages.c)
 *     MiInsertNewZeroThread @ 0x14050FC38 (MiInsertNewZeroThread.c)
 * Callees:
 *     MiDecrementZeroEngineThread @ 0x1402F5CAC (MiDecrementZeroEngineThread.c)
 *     MiUnlinkZeroThreadFromActiveDomain @ 0x1402F5D74 (MiUnlinkZeroThreadFromActiveDomain.c)
 */

void __fastcall MiRemoveThreadFromEngineLists(_QWORD *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbp
  _QWORD *v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx

  v1 = a1[10];
  v3 = *(_QWORD *)(v1 + 136);
  MiUnlinkZeroThreadFromActiveDomain((__int64)a1);
  v4 = a1 + 20;
  if ( a1[20] )
  {
    MiDecrementZeroEngineThread((__int64)a1);
    v5 = *v4;
    if ( *(_QWORD **)(*v4 + 8LL) == v4 )
    {
      v6 = (_QWORD *)a1[21];
      if ( (_QWORD *)*v6 == v4 )
      {
        *v6 = v5;
        *(_QWORD *)(v5 + 8) = v6;
        if ( !a1[9] )
        {
LABEL_7:
          --*(_DWORD *)(v1 + 4);
          return;
        }
        v7 = *(_QWORD **)(v3 + 224);
        if ( *v7 == v3 + 216 )
        {
          *v4 = v3 + 216;
          a1[21] = v7;
          *v7 = v4;
          *(_QWORD *)(v3 + 224) = v4;
          goto LABEL_7;
        }
      }
    }
    __fastfail(3u);
  }
}
