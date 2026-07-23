/*
 * XREFs of ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x14020B514
 * Callers:
 *     ?StLazyWorkMgrResetIdle@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z @ 0x14020B940 (-StLazyWorkMgrResetIdle@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14020BEAC (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14020C690 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StLazyWorkMgrSetSchedule@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x14042E5B0 (-StLazyWorkMgrSetSchedule@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StLazyWorkMgrRunExpiredWork(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int64 v3; // r10
  __int64 v4; // r9
  unsigned __int64 *v7; // r8
  char v8; // al
  char v9; // cl
  unsigned __int64 v10; // rdx
  unsigned __int64 v12; // rsi
  bool v13; // cc
  unsigned int v14; // ecx
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int128 v16; // [rsp+30h] [rbp-18h]

  v2 = 0;
  v3 = a1 + 120;
  v4 = 0LL;
  v7 = (unsigned __int64 *)a1;
  if ( a1 < a1 + 120 )
  {
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      v10 = v7[1];
      if ( v10 != -1LL )
      {
        v12 = *(_QWORD *)(a1 + 136);
        v13 = *v7 <= v12;
        if ( *v7 <= v12 )
          goto LABEL_11;
        if ( v10 <= a2 )
          break;
      }
LABEL_4:
      v4 = (unsigned int)(v4 + 1);
      v7 += 3;
      v8 = v4;
      v9 = v4;
      if ( (unsigned __int64)v7 >= v3 )
        goto LABEL_5;
    }
    v13 = *v7 <= v12;
LABEL_11:
    if ( v13 )
      v9 = v8;
    *v7 = -1LL;
    v7[1] = -1LL;
    v2 |= 1 << v9;
    goto LABEL_4;
  }
LABEL_5:
  v15 = 0LL;
  LODWORD(v15) = 6;
  *(_DWORD *)(a1 + 176) |= 1u;
  v16 = 0LL;
  DWORD2(v15) = 1;
  while ( v2 )
  {
    _BitScanForward(&v14, v2);
    LODWORD(v16) = v14;
    v2 &= ~(1 << v14);
    ((void (__fastcall *)(unsigned __int64, char *, unsigned __int64 *, __int64, _QWORD))ST_STORE<SM_TRAITS>::StWorkItemProcess)(
      a1 - 2216,
      (char *)&v15 + 1,
      v7,
      v4,
      v15);
  }
  *(_DWORD *)(a1 + 176) &= ~1u;
  return ST_STORE<SM_TRAITS>::StLazyWorkMgrSetSchedule(a1, 0LL, v7, v4);
}
