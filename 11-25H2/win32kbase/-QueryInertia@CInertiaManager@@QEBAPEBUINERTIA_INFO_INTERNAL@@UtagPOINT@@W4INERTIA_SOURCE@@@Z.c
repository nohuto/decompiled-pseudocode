/*
 * XREFs of ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1400DA130
 * Callers:
 *     ?CacheInertia@CPTPProcessor@@AEAAXXZ @ 0x1400D9F58 (-CacheInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?QueryInertiaStatus@CInertiaManager@@QEBA_NXZ @ 0x1400DA0E4 (-QueryInertiaStatus@CInertiaManager@@QEBA_NXZ.c)
 *     ?EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z @ 0x140211228 (-EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z.c)
 *     ?EndInertia@CInertiaManager@@QEAA_NXZ @ 0x140212150 (-EndInertia@CInertiaManager@@QEAA_NXZ.c)
 *     ?EndInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z @ 0x1402122A0 (-EndInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z.c)
 *     ?StopInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z @ 0x14021263C (-StopInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z.c)
 *     ?HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA?AW4InertiaEndSuppressionResult@2@_K@Z @ 0x140220F9C (-HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA-AW4InertiaEndSuppressionResult@2@_K@Z.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x1400379C0 (HMAssignmentUnlock.c)
 *     ApiSetEditionQueryInertiaWorker @ 0x1400DA298 (ApiSetEditionQueryInertiaWorker.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1400DA318 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall CInertiaManager::QueryInertia(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  char v4; // di
  __int64 v8; // rdi
  __int64 v10; // rdx
  char v11; // dl
  char v12; // dl
  bool v13; // dl
  _DWORD v14[20]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+70h] [rbp-58h] BYREF
  int v16; // [rsp+7Ch] [rbp-4Ch]

  v3 = *(_DWORD *)(a1 + 192);
  v4 = 1;
  if ( (v3 & 1) == 0 || (v10 = *(_QWORD *)(a1 + 128)) == 0 )
  {
    v4 = (unsigned __int8)(v3 & 0x10) >> 4;
    goto LABEL_3;
  }
  CInputDest::CInputDest(v14, v10, 2 - (unsigned int)((v3 & 0x40) != 0), 1LL);
  if ( !v14[0] )
    goto LABEL_19;
  if ( v16 == 1 )
  {
    v11 = *(_BYTE *)(v15 + 28);
  }
  else
  {
    if ( v16 != 2 )
      goto LABEL_15;
    v11 = *(_BYTE *)(*(_QWORD *)(v15 + 40) + 20LL);
  }
  if ( v11 >= 0 )
  {
LABEL_15:
    if ( v16 == 1 )
    {
      v12 = *(_BYTE *)(v15 + 27);
    }
    else
    {
      if ( v16 != 2 )
        goto LABEL_22;
      v12 = *(_BYTE *)(*(_QWORD *)(v15 + 40) + 19LL);
    }
    if ( v12 < 0 )
      goto LABEL_19;
LABEL_22:
    if ( (*(_DWORD *)(a1 + 192) & 2) != 0 )
    {
      v13 = 0;
      if ( v16 == 1 )
      {
        v13 = *(_QWORD *)(v15 + 64) != 0LL;
      }
      else if ( v16 == 2 && (*(_QWORD *)(v15 + 264) || *(_QWORD *)(*(_QWORD *)(v15 + 16) + 1496LL)) )
      {
        v13 = 1;
      }
      v4 = v13;
    }
    goto LABEL_20;
  }
LABEL_19:
  v4 = 0;
LABEL_20:
  if ( v16 )
    HMAssignmentUnlock(&v15);
LABEL_3:
  if ( !v4 )
    return 0LL;
  if ( (a3 & *(_DWORD *)(a1 + 32)) == 0 )
    return 0LL;
  v8 = a1 + 8;
  if ( !(unsigned int)ApiSetEditionQueryInertiaWorker(a2, a1 + 8) )
    return 0LL;
  return v8;
}
