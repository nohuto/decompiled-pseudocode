/*
 * XREFs of ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1403ED790
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x1403EE368 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 * Callees:
 *     RtlGetCompressionWorkSpaceSize @ 0x1403EDA40 (RtlGetCompressionWorkSpaceSize.c)
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@K@Z @ 0x1403EDA98 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@K@Z.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 */

NTSTATUS __fastcall ST_STORE<SM_TRAITS>::StStart(__int64 a1, int *a2)
{
  int v4; // edx
  unsigned int v5; // r8d
  unsigned int v6; // eax
  NTSTATUS result; // eax
  int v8; // ecx
  int v9; // edx
  __int64 v10; // rsi
  void *Pool3; // rax
  unsigned int *v12; // rsi
  __int64 v13; // rcx
  unsigned int *v14; // r14
  unsigned int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // r9
  int v20; // [rsp+58h] [rbp+10h] BYREF

  v4 = *a2;
  if ( (_BYTE)v4 )
    return -1073741637;
  v5 = a2[2];
  if ( !v5 || ((v5 - 1) & v5) != 0 || v5 - 4096 > 0x1F000 )
    return -1073741453;
  v6 = a2[3];
  if ( !v6
    || v6 > 0x40000
    || (v4 & 0x100) != 0
    || *((_BYTE *)a2 + 3)
    || (v4 & 0x600) == 0x600
    || (v4 & 0x300000) == 0x100000
    || (v4 & 0x800000) != 0 && (v4 & 0x200000) == 0
    || (v4 & 0x420000) == 0x400000 )
  {
    return -1073741811;
  }
  v8 = 0;
  if ( v5 > 0x10 )
  {
    do
      ++v8;
    while ( 16 << v8 < v5 );
  }
  *(_DWORD *)(a1 + 28) = v8;
  *(_DWORD *)(a1 + 32) = 1 << v8;
  v9 = (1 << v8) - 1;
  *(_DWORD *)(a1 + 24) = v9;
  if ( a2[2] == 0x20000 )
    *(_DWORD *)(a1 + 32) = v9;
  if ( (*a2 & 0x100000) == 0 )
    *(_DWORD *)(a1 + 40) = 4;
  *(_DWORD *)(a1 + 36) = 256;
  if ( a2[3] > (unsigned int)(1 << (32 - v8)) )
    return -1073741306;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 16) = *((_QWORD *)a2 + 2);
  v10 = (unsigned int)(2 * a2[3]);
  Pool3 = (void *)ExAllocatePool3(64LL, v10, 1951624563LL, &stru_140E27C48.Header.WaitListHead.Blink, 1);
  *(_QWORD *)(a1 + 48) = Pool3;
  if ( !Pool3 )
    return -1073741670;
  memset_0(Pool3, 0, (unsigned int)v10);
  v12 = (unsigned int *)(a1 + 2168);
  v13 = a2[6];
  *(_DWORD *)(a1 + 2176) = v13;
  v14 = (unsigned int *)(a1 + 2172);
  result = RtlGetCompressionWorkSpaceSize(word_140017648[v13], (PULONG)(a1 + 2172), (PULONG)(a1 + 2168));
  if ( result < 0 )
    return result;
  v15 = *v14;
  if ( *v14 <= *v12 )
    v15 = *v12;
  if ( v15 )
  {
    v16 = ExAllocatePool3(64LL, v15, 1951624563LL, &stru_140E27C48.Header.WaitListHead.Blink, 1);
    *(_QWORD *)(a1 + 2160) = v16;
    if ( !v16 )
      return -1073741670;
  }
  v17 = ExAllocatePool3(
          64LL,
          (-(__int64)((*a2 & 0x8000) != 0) & 0x1000) + 4096,
          1951624563LL,
          &stru_140E27C48.Header.WaitListHead.Blink,
          1);
  *(_QWORD *)(a1 + 2208) = v17;
  if ( !v17 )
    return -1073741670;
  v18 = *a2;
  v19 = (unsigned int)a2[3];
  v20 = 2;
  if ( (v18 & 0x20000) != 0 )
    v20 = (v18 & 0x400000) == 0 ? 3 : 0;
  result = ST_STORE<SM_TRAITS>::StDmStart(a1, a1 + 64, &v20, v19);
  if ( result >= 0 )
    return 0;
  return result;
}
