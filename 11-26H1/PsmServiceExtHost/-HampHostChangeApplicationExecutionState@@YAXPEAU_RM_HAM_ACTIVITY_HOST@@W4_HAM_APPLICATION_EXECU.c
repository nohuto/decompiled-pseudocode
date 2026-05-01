/*
 * XREFs of ?HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECUTION_STATE@@K@Z @ 0x18003FBB0
 * Callers:
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AC00 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18003F560 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x18000C624 (-HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180023F34 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180026554 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18003FDD0 (-HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18003FE24 (-HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x18003FE90 (-HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 */

void __fastcall HampHostChangeApplicationExecutionState(__int64 a1, int a2, char a3)
{
  __int64 v3; // r9
  struct _HAM_APPLICATION *v6; // rbx
  char v7; // bp
  _DWORD *v8; // r8
  _DWORD *v9; // r9
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rbx
  char v13; // al
  int v14; // [rsp+30h] [rbp+8h] BYREF

  v3 = 616LL;
  if ( a1 )
    v3 = a1 + 560;
  if ( *(_DWORD *)v3 == 2 )
  {
    if ( !*(_BYTE *)(a1 + 592) && (a3 & 1) != 0 )
    {
      v12 = *(_QWORD *)(a1 + 1056);
      HampWakeContextAcquireLockExclusive((struct _HAM_HOST_WAKE_CONTEXT *)v12);
      v13 = *(_BYTE *)(v12 + 184);
      *(_BYTE *)(v12 + 185) |= 0x10u;
      *(_BYTE *)(v12 + 184) = v13 ^ (v13 ^ (16 * a2)) & 0x70;
      HampWakeContextQueueWorker((struct _HAM_HOST_WAKE_CONTEXT *)v12);
      HampWakeContextReleaseLockExclusive((struct _HAM_HOST_WAKE_CONTEXT *)v12);
    }
    v6 = *(struct _HAM_APPLICATION **)(a1 + 792);
    v7 = *(_BYTE *)(a1 + 592);
    HampAppAcquireLockExclusive(v6);
    v8 = (_DWORD *)((char *)v6 + 616);
    v9 = (_DWORD *)((char *)v6 + 620);
    if ( v7 )
      v10 = *v8 >> 25;
    else
      v10 = *v9 >> 5;
    v11 = v10 & 7;
    if ( v11 == a2 || v11 == 4 && a2 )
      goto LABEL_12;
    switch ( a2 )
    {
      case 0:
        break;
      case 1:
      case 2:
        if ( v11 == 3 )
        {
LABEL_12:
          HampAppReleaseLockExclusive(v6);
          return;
        }
        break;
      case 3:
        break;
      default:
        goto LABEL_12;
    }
    if ( v7 )
    {
      *v8 ^= (*v8 ^ (a2 << 25)) & 0xE000000;
    }
    else
    {
      v14 = *v9 ^ (*v9 ^ (32 * a2)) & 0xE0;
      HampAppCommitStateSummary(v6, (union _HAM_EXTERNAL_STATE_SUMMARY *)&v14);
    }
    goto LABEL_12;
  }
}
