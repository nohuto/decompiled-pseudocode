/*
 * XREFs of Amd64CheckCoreEventConstraints @ 0x1405A5D4C
 * Callers:
 *     Amd64AllocateCounter @ 0x1405A5A1C (Amd64AllocateCounter.c)
 * Callees:
 *     <none>
 */

char __fastcall Amd64CheckCoreEventConstraints(int a1, int a2, unsigned __int64 a3, _BYTE *a4)
{
  _BYTE *v5; // rbx
  int v7; // edx
  int v8; // r8d
  int v9; // r10d
  int v10; // r10d
  int v11; // eax
  __int64 v12; // rcx

  v5 = a4;
  if ( KeGetCurrentPrcb()->CpuType < 0x17u || ((unsigned __int8)a3 | (a3 >> 24) & 0xF00) != 3 )
  {
    *a4 = 0;
    return 1;
  }
  if ( ((1 << a1) & 0x15) == 0 )
    return 0;
  LODWORD(a4) = KeGetPcr()->Prcb.Number;
  v7 = 0;
  v8 = 0;
  v9 = a2 - 1;
  if ( v9 )
  {
    v10 = v9 - 99;
    if ( v10 )
    {
      if ( v10 != 1 )
        goto LABEL_17;
      if ( *(_QWORD *)(KiProcessorBlock[(_QWORD)a4] + 88) == -48LL )
        v8 = 0;
      else
        v8 = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[(_QWORD)a4] + 88) + 52LL);
    }
    if ( *(_QWORD *)(KiProcessorBlock[(_QWORD)a4] + 88) == -24LL )
      v11 = 0;
    else
      v11 = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[(_QWORD)a4] + 88) + 28LL);
    v8 += v11;
  }
  v12 = *(_QWORD *)(KiProcessorBlock[(_QWORD)a4] + 88);
  if ( v12 )
    v7 = *(_DWORD *)(v12 + 4);
  v8 += v7;
LABEL_17:
  if ( __readmsr(*((_DWORD *)&xmmword_140F879E0 + (unsigned int)(v8 + a1 + 1))) )
    return 0;
  *v5 = 1;
  return 1;
}
