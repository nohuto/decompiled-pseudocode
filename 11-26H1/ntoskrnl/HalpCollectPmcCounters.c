/*
 * XREFs of HalpCollectPmcCounters @ 0x140312900
 * Callers:
 *     <none>
 * Callees:
 *     HalpDisableInterrupts @ 0x1403129A0 (HalpDisableInterrupts.c)
 */

__int64 __fastcall HalpCollectPmcCounters(void *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r11
  char v7; // r10
  _QWORD *v8; // rbx
  _QWORD *v9; // r8
  char v10; // di
  __int64 v11; // r11
  int v12; // ecx
  __int64 v13; // rbx
  int v14; // ecx
  unsigned __int64 v15; // rdx
  unsigned int v16; // ecx
  __int64 v17; // rdi
  _QWORD *v18; // r9
  int v19; // ecx
  int v20; // ecx
  __int64 v21; // r10
  unsigned int v22; // ecx
  __int64 v23; // rdx

  if ( a1 )
  {
    result = (__int64)&HalpSampleProfilingCounters;
    if ( a1 == &HalpSampleProfilingCounters )
      return result;
    result = HalpDisableInterrupts(a1, a2, a1);
    v6 = 0LL;
    v7 = result;
    if ( !*(_DWORD *)(v4 + 20) )
    {
LABEL_4:
      if ( !v7 )
        return result;
      goto LABEL_5;
    }
    while ( 1 )
    {
      v12 = *(_DWORD *)(v4 + 40 * v6 + 44);
      v13 = v4 + 40 * v6;
      if ( !v12 )
        break;
      v14 = v12 - 1;
      if ( v14 )
      {
        if ( v14 != 1 )
          break;
        v15 = __readmsr(*(_DWORD *)(v13 + 48));
      }
      else
      {
        v15 = __readpmc(*(_DWORD *)(v13 + 48));
      }
LABEL_19:
      v16 = *(_DWORD *)(v13 + 60);
      if ( v16 == 64 )
      {
        *(_QWORD *)(v13 + 32) = v15;
        result = v15;
      }
      else
      {
        if ( v16 < 0x40 )
          v17 = (1LL << v16) - 1;
        else
          v17 = -1LL;
        *(_QWORD *)(v13 + 32) += v17 & (v15 - *(_QWORD *)(v13 + 24));
        result = *(_QWORD *)(v13 + 32);
      }
      *(_QWORD *)(v13 + 24) = v15;
      if ( v5 )
        *(_QWORD *)(v5 + 8 * v6) = result;
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= *(_DWORD *)(v4 + 20) )
        goto LABEL_4;
    }
    v15 = 0LL;
    goto LABEL_19;
  }
  LODWORD(v2) = KeGetPcr()->Prcb.Number;
  v8 = (_QWORD *)(HalpCounterSetInfo + 24 * v2);
  result = HalpDisableInterrupts(0LL, 3 * v2, 0LL);
  v9 = (_QWORD *)*v8;
  v10 = result;
  if ( (_QWORD *)*v8 != v8 )
  {
    while ( 1 )
    {
      v11 = 0LL;
      if ( *((_DWORD *)v9 + 5) )
        break;
LABEL_42:
      v9 = (_QWORD *)*v9;
      if ( v9 == v8 )
        goto LABEL_8;
    }
    while ( 1 )
    {
      v18 = &v9[5 * v11];
      v19 = *((_DWORD *)v18 + 11);
      if ( !v19 )
        break;
      v20 = v19 - 1;
      if ( v20 )
      {
        if ( v20 != 1 )
          break;
        result = __readmsr(*((_DWORD *)v18 + 12));
        v21 = result;
      }
      else
      {
        result = __readpmc(*((_DWORD *)v18 + 12));
        v21 = result;
      }
LABEL_35:
      v22 = *((_DWORD *)v18 + 15);
      if ( v22 == 64 )
      {
        v18[4] = v21;
      }
      else
      {
        if ( v22 < 0x40 )
          v23 = (1LL << v22) - 1;
        else
          v23 = -1LL;
        result = v23 & (v21 - v18[3]);
        v18[4] += result;
      }
      v11 = (unsigned int)(v11 + 1);
      v18[3] = v21;
      if ( (unsigned int)v11 >= *((_DWORD *)v9 + 5) )
        goto LABEL_42;
    }
    v21 = 0LL;
    goto LABEL_35;
  }
LABEL_8:
  if ( v10 )
LABEL_5:
    _enable();
  return result;
}
