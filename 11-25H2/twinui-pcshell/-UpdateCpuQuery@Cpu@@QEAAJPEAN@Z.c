/*
 * XREFs of ?UpdateCpuQuery@Cpu@@QEAAJPEAN@Z @ 0x180356FB4
 * Callers:
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18034C598 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     memcpy_s_0 @ 0x1800F1820 (memcpy_s_0.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     swscanf_s @ 0x1802D3238 (swscanf_s.c)
 *     ?CalcProcessorUtilityPercentage@Cpu@@QEAAN_K0@Z @ 0x180356AB8 (-CalcProcessorUtilityPercentage@Cpu@@QEAAN_K0@Z.c)
 *     ?ParseBuffer@Cpu@@QEAAJPEAXPEAKPEAPEAUPCW_INSTANCE_BUFFER@@@Z @ 0x180356DC8 (-ParseBuffer@Cpu@@QEAAJPEAXPEAKPEAPEAUPCW_INSTANCE_BUFFER@@@Z.c)
 */

__int64 __fastcall Cpu::UpdateCpuQuery(Cpu *this, double *a2)
{
  void *v2; // rdx
  Cpu *v3; // rcx
  unsigned int v4; // edi
  __int64 v5; // r10
  struct PCW_INSTANCE_BUFFER *v6; // rsi
  __int64 v7; // r12
  struct PCW_INSTANCE_BUFFER *v8; // r14
  double *v9; // rdi
  int v10; // eax
  unsigned int *v11; // r15
  int v12; // ebx
  unsigned int *v13; // r13
  unsigned int *v14; // r15
  unsigned int *v15; // r13
  unsigned int v17; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v18; // [rsp+24h] [rbp-3Ch] BYREF
  unsigned int v19; // [rsp+28h] [rbp-38h]
  struct PCW_INSTANCE_BUFFER *v20; // [rsp+30h] [rbp-30h] BYREF
  struct PCW_INSTANCE_BUFFER *v21; // [rsp+38h] [rbp-28h] BYREF
  double *v22; // [rsp+40h] [rbp-20h]
  int v23; // [rsp+48h] [rbp-18h] BYREF
  int v24; // [rsp+4Ch] [rbp-14h] BYREF
  int Destination; // [rsp+50h] [rbp-10h] BYREF

  v22 = a2;
  v2 = (void *)*((_QWORD *)this + 2);
  v17 = 0;
  v18 = 0;
  v20 = 0LL;
  v21 = 0LL;
  v23 = 0;
  v24 = 0;
  Destination = 0;
  v4 = Cpu::ParseBuffer(this, v2, &v17, &v20);
  if ( !v4 )
  {
    v19 = Cpu::ParseBuffer(v3, *(void **)(v5 + 24), &v18, &v21);
    v4 = v19;
    if ( !v19 && v18 == v17 && v17 )
    {
      v6 = v20;
      v7 = v17;
      v8 = v21;
      v9 = v22;
      do
      {
        v10 = swscanf_s((const wchar_t *const)v6 + 8, L"%u,%u", &v24, &v23);
        v11 = (unsigned int *)((char *)v6 + *((unsigned int *)v6 + 2));
        v12 = v10;
        v13 = (unsigned int *)((char *)v8 + *((unsigned int *)v8 + 2));
        memcpy_s_0(&Destination, 4uLL, v11 + 2, *((unsigned __int16 *)v11 + 3));
        v14 = (unsigned int *)((char *)v11 + *v11);
        v15 = (unsigned int *)((char *)v13 + *v13);
        if ( !v12 )
          *v9 = fmin(
                  100.0,
                  Cpu::CalcProcessorUtilityPercentage(
                    (Cpu *)*v14,
                    *((_QWORD *)v14 + 1) - *((_QWORD *)v15 + 1),
                    *(unsigned int *)((char *)v14 + *v14 + 8) - *(unsigned int *)((char *)v15 + *v15 + 8)));
        v8 = (struct PCW_INSTANCE_BUFFER *)((char *)v8 + *(unsigned int *)v8);
        v6 = (struct PCW_INSTANCE_BUFFER *)((char *)v6 + *(unsigned int *)v6);
        --v7;
      }
      while ( v7 );
      return v19;
    }
  }
  return v4;
}
