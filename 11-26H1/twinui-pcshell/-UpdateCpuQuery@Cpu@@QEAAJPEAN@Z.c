/*
 * XREFs of ?UpdateCpuQuery@Cpu@@QEAAJPEAN@Z @ 0x18035D8C0
 * Callers:
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180350550 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     memcpy_s_0 @ 0x1800F4030 (memcpy_s_0.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     swscanf_s @ 0x1802CA12C (swscanf_s.c)
 *     ?CalcProcessorUtilityPercentage@Cpu@@QEAAN_K0@Z @ 0x18035D3A8 (-CalcProcessorUtilityPercentage@Cpu@@QEAAN_K0@Z.c)
 *     ?ParseBuffer@Cpu@@QEAAJPEAXPEAKPEAPEAUPCW_INSTANCE_BUFFER@@@Z @ 0x18035D6C4 (-ParseBuffer@Cpu@@QEAAJPEAXPEAKPEAPEAUPCW_INSTANCE_BUFFER@@@Z.c)
 */

__int64 __fastcall Cpu::UpdateCpuQuery(Cpu *this, double *a2)
{
  void *v2; // rdx
  Cpu *v3; // rcx
  __int64 v4; // r10
  unsigned int v5; // r14d
  struct PCW_INSTANCE_BUFFER *v6; // r15
  __int64 v7; // r13
  struct PCW_INSTANCE_BUFFER *v8; // r12
  double *v9; // r14
  int v10; // eax
  unsigned int *v11; // rbx
  int v12; // esi
  unsigned int *v13; // rdi
  unsigned int *v14; // r9
  unsigned int v16; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v17; // [rsp+24h] [rbp-3Ch] BYREF
  unsigned int v18; // [rsp+28h] [rbp-38h]
  struct PCW_INSTANCE_BUFFER *v19; // [rsp+30h] [rbp-30h] BYREF
  struct PCW_INSTANCE_BUFFER *v20; // [rsp+38h] [rbp-28h] BYREF
  double *v21; // [rsp+40h] [rbp-20h]
  int v22; // [rsp+48h] [rbp-18h] BYREF
  int v23; // [rsp+4Ch] [rbp-14h] BYREF
  int Destination; // [rsp+50h] [rbp-10h] BYREF

  v21 = a2;
  v2 = (void *)*((_QWORD *)this + 2);
  v16 = 0;
  v17 = 0;
  v19 = 0LL;
  v20 = 0LL;
  v22 = 0;
  v23 = 0;
  Destination = 0;
  v5 = Cpu::ParseBuffer(this, v2, &v16, &v19);
  if ( !v5 )
  {
    v18 = Cpu::ParseBuffer(v3, *(void **)(v4 + 24), &v17, &v20);
    v5 = v18;
    if ( !v18 && v17 == v16 && v16 )
    {
      v6 = v19;
      v7 = v16;
      v8 = v20;
      v9 = v21;
      do
      {
        v10 = swscanf_s((const wchar_t *const)v6 + 8, L"%u,%u", &v23, &v22);
        v11 = (unsigned int *)((char *)v6 + *((unsigned int *)v6 + 2));
        v12 = v10;
        v13 = (unsigned int *)((char *)v8 + *((unsigned int *)v8 + 2));
        memcpy_s_0(&Destination, 4uLL, v11 + 2, *((unsigned __int16 *)v11 + 3));
        if ( !v12 )
        {
          v14 = (unsigned int *)((char *)v11 + *v11);
          *v9 = fmin(
                  100.0,
                  Cpu::CalcProcessorUtilityPercentage(
                    (Cpu *)*v14,
                    *((_QWORD *)v14 + 1) - *(_QWORD *)((char *)v13 + *v13 + 8),
                    *(unsigned int *)((char *)v14 + *v14 + 8)
                  - *(unsigned int *)((char *)v13 + *v13 + *(unsigned int *)((char *)v13 + *v13) + 8)));
        }
        v8 = (struct PCW_INSTANCE_BUFFER *)((char *)v8 + *(unsigned int *)v8);
        v6 = (struct PCW_INSTANCE_BUFFER *)((char *)v6 + *(unsigned int *)v6);
        --v7;
      }
      while ( v7 );
      return v18;
    }
  }
  return v5;
}
