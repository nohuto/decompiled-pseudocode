/*
 * XREFs of ?HampManagerQuerySystemState@@YAXPEAU_HAM_SYSTEM_STATE@@@Z @ 0x18007BF20
 * Callers:
 *     ?HampActCanBeStarted@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x18000C808 (-HampActCanBeStarted@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampManagerSystemStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18007C460 (-HampManagerSystemStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?BackgroundAccessStateChanged@CBackgroundAccessStateChangedListener@@UEAAJPEBG0W4BACKGROUND_ACCESS_STATE@@@Z @ 0x18008AC30 (-BackgroundAccessStateChanged@CBackgroundAccessStateChangedListener@@UEAAJPEBG0W4BACKGROUND_ACCE.c)
 * Callees:
 *     <none>
 */

void __fastcall HampManagerQuerySystemState(struct _HAM_SYSTEM_STATE *a1)
{
  int v2; // edi
  int v3; // [rsp+58h] [rbp+28h] BYREF
  int v4; // [rsp+60h] [rbp+30h] BYREF
  __int64 v5; // [rsp+68h] [rbp+38h] BYREF

  v3 = 4;
  *(_DWORD *)a1 = 0;
  v2 = 0;
  v4 = 0;
  v5 = 0LL;
  NtQueryWnfStateData(&qword_1800E1B58, 0LL, 0LL, &v4, &v5, &v3);
  if ( v3 == 4 )
  {
    if ( (_DWORD)v5 == -1 )
      v2 = 2;
    *(_DWORD *)a1 &= ~2u;
    *(_DWORD *)a1 |= v2;
  }
  v3 = 8;
  NtQueryWnfStateData(&unk_1800E1B60, 0LL, 0LL, &v4, &v5, &v3);
  if ( v3 == 8 )
    *(_DWORD *)a1 ^= (*(_DWORD *)a1 ^ ((unsigned int)v5 >> 1)) & 1;
}
