/*
 * XREFs of PepPerfControlHandler @ 0x14000D1E0
 * Callers:
 *     <none>
 * Callees:
 *     PepNotifyPerfSet @ 0x14000D11C (PepNotifyPerfSet.c)
 *     PepPerformanceFromPercentage @ 0x14000D548 (PepPerformanceFromPercentage.c)
 */

void __fastcall PepPerfControlHandler(__int64 a1, unsigned int *a2, __int64 a3, char a4)
{
  int v5; // edi
  unsigned int *v6; // r9
  unsigned int v8; // r10d
  unsigned int v9; // r14d
  int v10; // ebp
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  int v15; // r9d
  int v16; // r10d
  char v17; // r11

  if ( (_BYTE)a3 )
  {
    v5 = 0;
    v6 = a2;
    if ( !a4 )
    {
      v8 = a2[7];
      v9 = a2[6];
      if ( *((_BYTE *)a2 + 72) )
      {
        v10 = 0;
      }
      else
      {
        v5 = *(_DWORD *)(a1 + 60);
        v10 = PepPerformanceFromPercentage(a1, a2[8], a3, a2);
      }
      v11 = *(_QWORD *)(a1 + 48);
      PepPerformanceFromPercentage(a1, v8, a3, *v6);
      v14 = PepPerformanceFromPercentage(a1, v9, v12, v13);
      PepNotifyPerfSet(v11, v14, v16, v15, v10, v5, v17);
    }
  }
}
