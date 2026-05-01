/*
 * XREFs of ?HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x18000C624
 * Callers:
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AC00 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180022DE4 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18002365C (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECUTION_STATE@@K@Z @ 0x18003FBB0 (-HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECU.c)
 * Callees:
 *     ?HampManagerIssueStateChangeNotifications@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD@@K@Z @ 0x18003B6D4 (-HampManagerIssueStateChangeNotifications@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_STATE_CHANGE_.c)
 *     ?HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18006E324 (-HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall HampAppCommitStateSummary(struct _HAM_APPLICATION *a1, union _HAM_EXTERNAL_STATE_SUMMARY *a2)
{
  _OWORD *v4; // rax
  _OWORD *v5; // r8
  __int64 v6; // r9
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  int v18; // r8d
  int v19; // r9d
  unsigned int v20; // edx
  __int16 v21; // r9
  __int64 v22; // rcx
  unsigned int v23; // r8d
  _DWORD v24[2]; // [rsp+20h] [rbp-238h] BYREF
  _BYTE v25[464]; // [rsp+28h] [rbp-230h] BYREF
  __int128 v26; // [rsp+1F8h] [rbp-60h]
  __int128 v27; // [rsp+208h] [rbp-50h]
  __int128 v28; // [rsp+218h] [rbp-40h]
  __int128 v29; // [rsp+228h] [rbp-30h]
  int v30; // [rsp+238h] [rbp-20h]
  int v31; // [rsp+23Ch] [rbp-1Ch]

  memset_0(v25, 0, 0x214uLL);
  v4 = (_OWORD *)((char *)a1 + 96);
  v5 = v25;
  v6 = 3LL;
  do
  {
    v7 = v4[1];
    *v5 = *v4;
    v8 = v4[2];
    v5[1] = v7;
    v9 = v4[3];
    v5[2] = v8;
    v10 = v4[4];
    v5[3] = v9;
    v11 = v4[5];
    v5[4] = v10;
    v12 = v4[6];
    v5[5] = v11;
    v13 = v4[7];
    v4 += 8;
    v5[6] = v12;
    v5 += 8;
    *(v5 - 1) = v13;
    --v6;
  }
  while ( v6 );
  v14 = v4[1];
  *v5 = *v4;
  v15 = v4[2];
  v5[1] = v14;
  v16 = v4[3];
  v5[2] = v15;
  v17 = v4[4];
  v5[3] = v16;
  v5[4] = v17;
  v18 = *(_DWORD *)a2;
  v24[0] = 0;
  v19 = *((_DWORD *)a1 + 155);
  v20 = (((unsigned __int8)v18 ^ (unsigned __int8)v19) & 0xE0) != 0;
  if ( (((unsigned __int8)v18 ^ *((_BYTE *)a1 + 620)) & 7) != 0
    || (((unsigned __int8)v18 ^ (unsigned __int8)v19) & 0x18) != 0
    || (((unsigned __int16)v18 ^ (unsigned __int16)v19) & 0x100) != 0
    || (((unsigned __int16)v18 ^ (unsigned __int16)v19) & 0x200) != 0 )
  {
    v20 |= 2u;
  }
  *((_DWORD *)a1 + 155) = v18;
  v21 = v18 ^ v19;
  v22 = *((_QWORD *)a1 + 11);
  v24[1] = v18;
  v23 = v20 | 4;
  if ( (v21 & 0x400) == 0 )
    v23 = v20;
  v26 = *(_OWORD *)(v22 + 228);
  v27 = *(_OWORD *)(v22 + 244);
  v28 = *(_OWORD *)(v22 + 260);
  v29 = *(_OWORD *)(v22 + 276);
  v30 = *(_DWORD *)(v22 + 292);
  v31 = *(_DWORD *)(v22 + 296);
  HampManagerIssueStateChangeNotifications(
    (struct _HOST_ACTIVITY_MANAGER *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v22 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 120)
                                                 + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                    - 392),
    (struct _HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD *)v24,
    v23);
  HampPkgPushUpdate(*((struct _HAM_PACKAGE **)a1 + 11));
}
