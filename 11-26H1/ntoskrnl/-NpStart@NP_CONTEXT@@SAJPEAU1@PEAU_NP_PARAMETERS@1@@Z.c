/*
 * XREFs of ?NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z @ 0x1403EDCD4
 * Callers:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@K@Z @ 0x1403EDA98 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@K@Z.c)
 * Callees:
 *     SmAllocEx @ 0x1403EEAF0 (SmAllocEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NP_CONTEXT::NpStart(struct NP_CONTEXT *a1, struct NP_CONTEXT::_NP_PARAMETERS *a2)
{
  PVOID *v4; // rdx
  __int64 v5; // r9
  _QWORD *v6; // r8
  __int128 v7; // xmm1
  __int64 v8; // xmm0_8
  unsigned int v9; // ebx
  PVOID *v10; // rcx
  _QWORD *v12; // rax
  __int64 v13; // r10
  PVOID P[2]; // [rsp+20h] [rbp-10h] BYREF

  P[1] = P;
  P[0] = 0LL;
  while ( 1 )
  {
    v4 = (PVOID *)P[1];
    v5 = *(_QWORD *)P[1];
    if ( *(_QWORD *)P[1] >= (unsigned __int64)*((unsigned int *)a2 + 1) )
      break;
    v12 = (_QWORD *)SmAllocEx(4096LL, 1884188019LL, 0xFFFFFFFFLL);
    if ( !v12 )
    {
      v9 = -1073741670;
      goto LABEL_9;
    }
    *v12 = *(_QWORD *)P[1] + 1LL;
    *(_QWORD *)P[1] = v12;
    P[1] = v12;
  }
  v6 = (_QWORD *)((char *)a1 + 64);
  if ( v5 )
  {
    v13 = v5 + **((_QWORD **)a1 + 9);
    *(_QWORD *)P[1] = *v6;
    *v6 = P[0];
    if ( *((struct NP_CONTEXT **)a1 + 9) == (struct NP_CONTEXT *)((char *)a1 + 64) )
      *((PVOID *)a1 + 9) = P[1];
    **((_QWORD **)a1 + 9) = v13;
    P[1] = P;
    P[0] = 0LL;
    v4 = P;
  }
  v7 = *((_OWORD *)a2 + 1);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  v8 = *((_QWORD *)a2 + 4);
  *((_OWORD *)a1 + 1) = v7;
  *((_QWORD *)a1 + 4) = v8;
  v9 = 0;
  while ( v4 != P )
  {
    v10 = (PVOID *)P[0];
    P[0] = *(PVOID *)P[0];
    if ( v10 == v4 )
    {
      P[0] = 0LL;
      P[1] = P;
    }
    else
    {
      *v4 = (char *)*v4 - 1;
    }
    ExFreePoolWithTag(v10, 0);
LABEL_9:
    v4 = (PVOID *)P[1];
  }
  return v9;
}
