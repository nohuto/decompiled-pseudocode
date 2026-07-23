/*
 * XREFs of ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020F10C
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020C690 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x14020D4D4 (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 * Callees:
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x140391408 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     MmAreMdlPagesCached @ 0x140449210 (MmAreMdlPagesCached.c)
 *     PsSetSystemPagePriorityThread @ 0x140479948 (PsSetSystemPagePriorityThread.c)
 *     PsRevertToUserPagePriorityThread @ 0x140481AA0 (PsRevertToUserPagePriorityThread.c)
 *     ?StDmCompletePendingReads@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@KPEAK@Z @ 0x140641514 (-StDmCompletePendingReads@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageRetrieve(__int64 a1, _QWORD *a2, __int64 a3)
{
  char *v3; // r12
  int v4; // r14d
  int v5; // eax
  __int64 v8; // xmm1_8
  struct _KTHREAD *CurrentThread; // r15
  int v11; // ebx
  __int128 v12; // xmm0
  char *v13; // rsi
  int v14; // eax
  unsigned __int8 v15; // r8
  int v16; // ecx
  int v17; // r10d
  char *v18; // rax
  int v20; // eax
  int v21; // edx
  __int64 v22; // rcx
  unsigned int v23; // edx
  __int128 v24; // [rsp+38h] [rbp-20h] BYREF
  __int64 v25; // [rsp+48h] [rbp-10h]
  int v27; // [rsp+A8h] [rbp+50h]
  unsigned int v28; // [rsp+B0h] [rbp+58h] BYREF
  unsigned int v29; // [rsp+B8h] [rbp+60h]

  v3 = (char *)(a2 + 3);
  v4 = 0;
  v5 = (unsigned __int8)*(_DWORD *)(a3 + 8);
  *(_BYTE *)(a3 + 8) = 0;
  v8 = *(_QWORD *)(a3 + 24);
  v28 = 0;
  CurrentThread = 0LL;
  v29 = 8;
  v11 = 0;
  v27 = v5;
  v12 = *(_OWORD *)(a3 + 8);
  v25 = v8;
  v24 = v12;
  if ( a2[51] && !(unsigned int)MmAreMdlPagesCached(*(_QWORD *)(a3 + 16)) )
    *(_DWORD *)(a3 + 8) |= 0x400u;
  if ( (*(_DWORD *)(a1 + 776) & 0x20000) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v29 = PsSetSystemPagePriorityThread(CurrentThread, 0LL);
  }
  v13 = v3;
  a2[52] = &v24;
  while ( 1 )
  {
    while ( 1 )
    {
      *(_OWORD *)v13 = 0LL;
      *((_QWORD *)v13 + 2) = 0LL;
      if ( (v11 & 2) != 0 )
        *((_QWORD *)v13 + 1) = 1LL;
      v14 = ST_STORE<SM_TRAITS>::StDmpSinglePageRetrieve(a1, a2, a3, v13);
      if ( v14 == -1073741552 || v14 == -2147483634 && (v11 & 2) != 0 )
      {
        v17 = a1;
        v18 = v3 + 384;
        a2[55] = *(_QWORD *)(*(_QWORD *)(a1 + 792) + 2488LL) - 1LL;
        goto LABEL_27;
      }
      if ( v14 < 0 )
      {
        v4 = v14;
        v18 = v3 + 384;
LABEL_29:
        v17 = a1;
LABEL_27:
        v16 = v27;
        goto LABEL_15;
      }
      v15 = v24 + 1;
      LODWORD(v24) = v24 & 0xFFFFFF00 | (unsigned __int8)(v24 + 1);
      if ( v14 == 259 )
      {
        v11 |= 2u;
        v18 = v3 + 384;
        v13 += 24;
        if ( v13 == v3 + 384 )
          goto LABEL_29;
      }
      v16 = v27;
      if ( v15 == v27 )
        break;
      LODWORD(v25) = v25 + 1;
    }
    v17 = a1;
    v18 = v3 + 384;
LABEL_15:
    if ( v13 != v3 && v18 )
    {
      if ( (unsigned __int8)v24 == v16 || v4 < 0 )
        v11 |= 1u;
      v20 = ST_STORE<SM_TRAITS>::StDmCompletePendingReads(v17, (int)v13 - 24, (_DWORD)a2, a3, v11 & 1, (__int64)&v28);
      if ( v20 < 0 )
        v4 = v20;
      v21 = ((int)v13 - (int)v3) / 24;
      v22 = 24LL * v28;
      v13 -= v22;
      v23 = v21 - v28;
      if ( v23 )
        memmove(v3, &v3[v22], 24LL * v23);
      else
        v11 &= ~2u;
    }
    if ( (unsigned __int8)v24 == v27 )
      break;
    if ( v4 < 0 )
      goto LABEL_18;
    LODWORD(v25) = (unsigned __int8)v24 + *(_DWORD *)(a3 + 24);
  }
  v4 = 0;
LABEL_18:
  if ( (unsigned __int8)*(_DWORD *)(a3 + 8) != (unsigned __int8)v24 )
    *(_BYTE *)(a3 + 8) = v24;
  if ( v29 != 8 )
  {
    if ( !CurrentThread )
      CurrentThread = KeGetCurrentThread();
    PsRevertToUserPagePriorityThread(CurrentThread, v29);
  }
  return (unsigned int)v4;
}
