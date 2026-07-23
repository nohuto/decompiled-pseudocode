/*
 * XREFs of ?SmCompressCtxCreateThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS@1@PEAU_SM_COMPRESS_CONTEXT@1@K@Z @ 0x1403EEA28
 * Callers:
 *     ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAKP6AXPEAX@Z@Z @ 0x1403EE8AC (-SmCompressCtxCreateThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     SmAllocEx @ 0x1403EEAF0 (SmAllocEx.c)
 */

_QWORD *__fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThreadParams(__int64 a1, int a2)
{
  struct _EX_RUNDOWN_REF *v2; // r14
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned int *v7; // rdi
  __int64 v8; // r8
  _QWORD *v9; // rax

  v2 = (struct _EX_RUNDOWN_REF *)(a1 + 144);
  v5 = 0LL;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 144)) )
  {
    v6 = 40LL;
    v7 = (unsigned int *)(a1 + 164);
    if ( a2 )
      v6 = *v7 + 4136LL;
    v8 = *(unsigned int *)(a1 + 168);
    LODWORD(v8) = v8 | 0x80000000;
    v9 = (_QWORD *)SmAllocEx(v6, 1950575987LL, v8);
    if ( v9 )
    {
      v9[1] = 0LL;
      v9[2] = 0LL;
      v9[3] = 0LL;
      v9[4] = 0LL;
      *v9 = a1;
      if ( a2 )
      {
        v9[3] = v9 + 5;
        v9[4] = (char *)v9 + *v7 + 40;
      }
      return v9;
    }
    else
    {
      ExReleaseRundownProtection_0(v2);
    }
  }
  return (_QWORD *)v5;
}
