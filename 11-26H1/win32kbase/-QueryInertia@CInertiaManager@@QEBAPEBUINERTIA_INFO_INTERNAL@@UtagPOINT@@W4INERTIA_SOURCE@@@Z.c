/*
 * XREFs of ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x140126220
 * Callers:
 *     ?CacheInertia@CPTPProcessor@@AEAAXXZ @ 0x140126090 (-CacheInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?EndInertia@CInertiaManager@@QEAA_NXZ @ 0x1401B0814 (-EndInertia@CInertiaManager@@QEAA_NXZ.c)
 *     ?EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z @ 0x140218C18 (-EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z.c)
 *     ?EndInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z @ 0x140219374 (-EndInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z.c)
 *     ?StopInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z @ 0x1402194D4 (-StopInertiaAtPoint@CInertiaManager@@QEAA_NUtagPOINT@@0W4INERTIA_SOURCE@@@Z.c)
 *     ?HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA?AW4InertiaEndSuppressionResult@2@_K@Z @ 0x140223A5C (-HandleMake@InertiaEndSuppression@CMouseProcessor@@QEAA-AW4InertiaEndSuppressionResult@2@_K@Z.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1400CE8A8 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ApiSetEditionQueryInertiaWorker @ 0x140126384 (ApiSetEditionQueryInertiaWorker.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall CInertiaManager::QueryInertia(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  char v4; // di
  int v5; // eax
  bool v9; // zf
  __int64 v11; // rdx
  bool v12; // cl
  __int64 v13[10]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+70h] [rbp-58h] BYREF
  int v15; // [rsp+7Ch] [rbp-4Ch]

  v3 = a1 + 8;
  v4 = 1;
  v5 = *(_DWORD *)(a1 + 192);
  if ( (v5 & 1) == 0 || (v11 = *(_QWORD *)(a1 + 128)) == 0 )
  {
    v9 = (v5 & 0x10) == 0;
    goto LABEL_3;
  }
  CInputDest::CInputDest(v13, v11, 2 - ((v5 & 0x40) != 0), 1);
  if ( !LODWORD(v13[0]) )
    goto LABEL_17;
  if ( v15 == 1 )
  {
    if ( *(char *)(v14 + 28) < 0 )
      goto LABEL_17;
  }
  else if ( v15 == 2 && *(char *)(*(_QWORD *)(v14 + 40) + 20LL) < 0 )
  {
    goto LABEL_17;
  }
  if ( v15 != 1 )
  {
    if ( v15 == 2 && *(char *)(*(_QWORD *)(v14 + 40) + 19LL) < 0 )
      goto LABEL_17;
LABEL_21:
    if ( (*(_DWORD *)(a1 + 192) & 2) != 0 )
    {
      v12 = 0;
      if ( v15 == 1 )
      {
        v12 = *(_QWORD *)(v14 + 64) != 0LL;
      }
      else if ( v15 == 2 && (*(_QWORD *)(v14 + 264) || *(_QWORD *)(*(_QWORD *)(v14 + 16) + 1496LL)) )
      {
        v12 = 1;
      }
      v4 = v12;
    }
    goto LABEL_18;
  }
  if ( *(char *)(v14 + 27) >= 0 )
    goto LABEL_21;
LABEL_17:
  v4 = 0;
LABEL_18:
  if ( v15 )
    HMAssignmentUnlock(&v14);
  v9 = v4 == 0;
LABEL_3:
  if ( v9 || (a3 & *(_DWORD *)(a1 + 32)) == 0 || !(unsigned int)ApiSetEditionQueryInertiaWorker(a2, v3) )
    return 0LL;
  return v3;
}
