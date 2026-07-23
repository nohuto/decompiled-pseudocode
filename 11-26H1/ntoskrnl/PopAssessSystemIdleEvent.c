/*
 * XREFs of PopAssessSystemIdleEvent @ 0x1409F77C8
 * Callers:
 *     PopIsSystemIdle @ 0x1409F76FC (PopIsSystemIdle.c)
 * Callees:
 *     PopDiagTraceSystemIdleEventAssessment @ 0x1409F785C (PopDiagTraceSystemIdleEventAssessment.c)
 */

__int64 __fastcall PopAssessSystemIdleEvent(int *a1, unsigned int a2, unsigned __int64 *a3)
{
  unsigned __int64 v5; // r8
  unsigned int v6; // ebx
  int v7; // r9d
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  int v10; // ecx

  v5 = a2;
  v6 = 0;
  v7 = MEMORY[0xFFFFF78000000008];
  LOBYTE(v7) = *((_BYTE *)a1 + 16);
  v8 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  v9 = MEMORY[0xFFFFF78000000008] / 0x989680uLL - *((_QWORD *)a1 + 1);
  if ( (_BYTE)v7 )
  {
    *a3 = -1LL;
  }
  else
  {
    *a3 = v9;
    if ( (_DWORD)v5 )
      v6 = v9 < v5;
    else
      v6 = 2;
  }
  *((_QWORD *)a1 + 3) = v8;
  v10 = *a1;
  *((_QWORD *)a1 + 4) = v9;
  *((_QWORD *)a1 + 5) = v5;
  *((_BYTE *)a1 + 48) = v7;
  a1[13] = v6;
  PopDiagTraceSystemIdleEventAssessment(v10, v9, v5, v7, v6);
  return v6;
}
