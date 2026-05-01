/*
 * XREFs of ?HampHostGetStateSummary@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_HOST_STATE_SUMMARY@@@Z @ 0x180078F78
 * Callers:
 *     ?HamSrvQueryPackageState@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAT_HAM_EXTERNAL_STATE_SUMMARY@@PEAPEAU_HAM_HOST_STATE_SUMMARY@@PEAK@Z @ 0x180066CA4 (-HamSrvQueryPackageState@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAT_HAM_EXTERNAL_STATE_SUMMARY@@PEAPEAU.c)
 *     ?HamSrvQueryHostStateSummary@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_HOST_STATE_SUMMARY@@@Z @ 0x18007A8E0 (-HamSrvQueryHostStateSummary@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_HOST_STATE_SUMMARY@@@Z.c)
 * Callees:
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003DE80 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIsRunnable@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18005C31C (-HampHostIsRunnable@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x18007F90C (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

void __fastcall HampHostGetStateSummary(struct _RM_HAM_ACTIVITY_HOST *a1, struct _HAM_HOST_STATE_SUMMARY *a2)
{
  __int64 v4; // rcx
  _OWORD *v5; // rdx
  _OWORD *v6; // rax
  __int128 v7; // xmm1
  __int64 v8; // rcx
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // ecx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  __int64 v16; // rcx
  unsigned int v17; // edx
  int IsRunnable; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // [rsp+30h] [rbp+8h] BYREF
  int v22; // [rsp+38h] [rbp+10h] BYREF

  memset_0(a2, 0, 0x238uLL);
  v4 = 4LL;
  v5 = (_OWORD *)((char *)a2 + 16);
  v6 = (_OWORD *)((char *)a1 + 24);
  do
  {
    *v5 = *v6;
    v5[1] = v6[1];
    v5[2] = v6[2];
    v5[3] = v6[3];
    v5[4] = v6[4];
    v5[5] = v6[5];
    v5[6] = v6[6];
    v5 += 8;
    v7 = v6[7];
    v6 += 8;
    *(v5 - 1) = v7;
    --v4;
  }
  while ( v4 );
  *v5 = *v6;
  v5[1] = v6[1];
  *((_QWORD *)v5 + 4) = *((_QWORD *)v6 + 4);
  HampHostAcquireLockSharedEx(a1, 0);
  v8 = 1384LL;
  if ( a1 )
    v8 = (__int64)a1 + 1328;
  v9 = *(_DWORD *)v8;
  v10 = *((_DWORD *)a2 + 3);
  if ( v9 )
    v11 = ((unsigned __int8)v10 ^ (unsigned __int8)(v9 - 1)) & 7 ^ v10;
  else
    v11 = v10 & 0xFFFFFFF8;
  *((_DWORD *)a2 + 3) = v11;
  if ( !*((_BYTE *)a1 + 592) )
    *((_DWORD *)a2 + 3) = v11 | 8;
  v12 = 1376LL;
  if ( a1 )
    v12 = (__int64)a1 + 1320;
  *(_QWORD *)a2 = *(_QWORD *)v12;
  v13 = *((_DWORD *)a2 + 2) ^ (*((_DWORD *)a2 + 2) ^ (*((unsigned __int16 *)a1 + 340) >> 1)) & 7;
  *((_DWORD *)a2 + 2) = v13;
  v14 = v13 ^ ((unsigned __int8)v13 ^ (unsigned __int8)(*((unsigned __int16 *)a1 + 340) >> 1)) & 0x18;
  *((_DWORD *)a2 + 2) = v14;
  v15 = v14 ^ ((unsigned __int16)v14 ^ (unsigned __int16)(8 * *((_WORD *)a1 + 340))) & 0x200;
  v16 = 616LL;
  *((_DWORD *)a2 + 2) = v15;
  if ( a1 )
    v16 = (__int64)a1 + 560;
  if ( *(_DWORD *)v16 != 2 )
  {
    v17 = v15 & 0xFFFFFF1F | 0x80;
LABEL_21:
    *((_DWORD *)a2 + 2) = v17;
    goto LABEL_22;
  }
  v22 = 0;
  v21 = 0;
  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v22, (union _RM_OPTIMIZATION_STATE *)&v21);
  if ( (((unsigned __int16)v22 ^ (unsigned __int16)v21) & 0x180) != 0 )
  {
    IsRunnable = HampHostIsRunnable(a1);
    v19 = *((_DWORD *)a2 + 2);
    if ( IsRunnable )
      v17 = v19 & 0xFFFFFF1F | 0x20;
    else
      v17 = v19 & 0xFFFFFF1F | 0x40;
    goto LABEL_21;
  }
  *((_DWORD *)a2 + 2) &= 0xFFFFFF1F;
  v17 = *((_DWORD *)a2 + 2);
LABEL_22:
  v20 = v17 ^ ((unsigned __int16)v17 ^ (unsigned __int16)((unsigned __int16)(*((_QWORD *)a1 + 84) >> 3) << 8)) & 0x100;
  *((_DWORD *)a2 + 2) = v20;
  *((_DWORD *)a2 + 2) = v20 ^ ((unsigned __int16)v20 ^ (unsigned __int16)(*((_QWORD *)a1 + 83) >> 49 << 10)) & 0x400;
  HampHostReleaseLockSharedEx(a1);
}
