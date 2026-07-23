/*
 * XREFs of ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x140397560
 * Callers:
 *     ?SmStLockVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z @ 0x140395C2C (-SmStLockVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KPEAT_SM_VIRTUAL_REGION@@PEAXK@Z.c)
 *     ?SmStAllocateVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140395F94 (-SmStAllocateVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x140396AB0 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x1403ECB64 (-StDmCombineBufferProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE.c)
 * Callees:
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14020C608 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ?SmStReleaseStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14027EAF0 (-SmStReleaseStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStHelperSendCommand(__int64 a1, int a2, __int64 a3, char a4)
{
  __int64 v7; // rsi
  NTSTATUS v9; // eax
  __int64 v10; // r12
  volatile signed __int32 *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // xmm1_8
  __int64 v18; // rcx
  LARGE_INTEGER v19; // rax
  LARGE_INTEGER *Timeout; // r13
  struct _KEVENT *v21; // r12
  unsigned int v22; // ebx
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  volatile signed __int32 v25; // eax
  __int64 v27; // rbx
  struct _KEVENT *v28; // rbx
  char v29; // al
  LARGE_INTEGER v30; // [rsp+30h] [rbp-38h] BYREF
  int v32; // [rsp+88h] [rbp+20h]

  v30.QuadPart = 0LL;
  v7 = 2864LL;
  v9 = 0;
  v10 = 2840LL;
  if ( a2 != 4 )
    v7 = 2720LL;
  v11 = (volatile signed __int32 *)(a1 + v7);
  if ( *v11 )
  {
    if ( (a4 & 1) == 0 && (*v11 & 1) == 0 )
      return (unsigned int)-1073741650;
    v27 = 2840LL;
    if ( a2 != 4 )
      v27 = 2696LL;
    v28 = (struct _KEVENT *)(a1 + v27);
    v9 = KeWaitForSingleObject(v28, Executive, 0, 0, 0LL);
    if ( !v9 )
    {
      KeResetEvent(v28);
      v29 = *v11 & 2;
      *v11 = 0;
      v9 = v29 != 0 ? 0xC0000120 : 0;
    }
  }
  if ( v9 == -1073741650 )
  {
    return (unsigned int)-1073741650;
  }
  else
  {
    v12 = 2866LL;
    v13 = 2872LL;
    if ( a2 != 4 )
      v12 = 2722LL;
    *(_WORD *)(v12 + a1) = a2;
    if ( a3 )
    {
      v14 = 2872LL;
      v15 = *(_OWORD *)(a3 + 16);
      if ( a2 != 4 )
        v14 = 2728LL;
      *(_OWORD *)(v14 + a1) = *(_OWORD *)a3;
      v16 = *(_OWORD *)(a3 + 32);
      *(_OWORD *)(v14 + a1 + 16) = v15;
      v17 = *(_QWORD *)(a3 + 48);
      *(_OWORD *)(v14 + a1 + 32) = v16;
      *(_QWORD *)(v14 + a1 + 48) = v17;
    }
    v18 = 2816LL;
    if ( a2 != 4 )
      v18 = 2672LL;
    KeSetEvent((PRKEVENT)(a1 + v18), 0, 0);
    if ( (a4 & 2) != 0 )
    {
      Timeout = 0LL;
    }
    else
    {
      v19.QuadPart = -1000000LL;
      if ( *(_BYTE *)(a1 + 2470) > 1u )
        v19.QuadPart = -5000000LL;
      v30 = v19;
      if ( (a4 & 8) != 0 )
        v30.QuadPart = v19.QuadPart / 4;
      Timeout = &v30;
    }
    SMKM_STORE<SM_TRAITS>::SmStReleaseStoreLockExclusive(a1);
    v32 = a4 & 4;
    if ( a2 != 4 )
      v10 = 2696LL;
    v21 = (struct _KEVENT *)(a1 + v10);
    while ( 1 )
    {
      v22 = KeWaitForSingleObject(v21, Executive, 0, 0, Timeout);
      if ( !v22 )
        break;
      if ( !v32 )
        goto LABEL_28;
      if ( (*v11 & 1) == 0 && (_InterlockedCompareExchange(v11, *v11 | 2, *v11) & 1) == 0 )
      {
        v22 = -1073741536;
        goto LABEL_28;
      }
    }
    KeResetEvent(v21);
    if ( a3 )
    {
      if ( a2 != 4 )
        v13 = 2728LL;
      v23 = *(_OWORD *)(v13 + a1 + 16);
      *(_OWORD *)a3 = *(_OWORD *)(v13 + a1);
      v24 = *(_OWORD *)(v13 + a1 + 32);
      *(_OWORD *)(a3 + 16) = v23;
      *(_QWORD *)&v23 = *(_QWORD *)(v13 + a1 + 48);
      *(_OWORD *)(a3 + 32) = v24;
      *(_QWORD *)(a3 + 48) = v23;
    }
    v25 = *v11;
    *v11 = 0;
    v22 = (v25 & 2) != 0 ? 0xC0000120 : 0;
LABEL_28:
    SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(a1);
  }
  return v22;
}
