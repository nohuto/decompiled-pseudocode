/*
 * XREFs of ?HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z @ 0x18003F860
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000CEE0 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003F9C0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180040204 (-HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x18007F90C (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

void __fastcall HampHostInvalidateActivities(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  int v8; // edi
  struct _HAM_ACTIVITY *FirstActivity; // rbx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  _DWORD v14[10]; // [rsp+20h] [rbp-28h] BYREF
  int v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = 0;
  v14[0] = 0;
  v8 = 0;
  if ( (*(_QWORD *)(a1 + 664) & 0x10000000000LL) == 0 )
  {
    RmHamHostGetCurrentState(
      (struct _RM_HAM_ACTIVITY_HOST *)a1,
      (union _RM_OPTIMIZATION_STATE *)&v15,
      (union _RM_OPTIMIZATION_STATE *)v14);
    if ( ((v15 & 0x80u) == 0 || SLOBYTE(v14[0]) < 0) && ((v15 & 0x100) == 0 || (v14[0] & 0x100) != 0) )
    {
      v13 = *(_QWORD *)(a1 + 664);
      if ( (v13 & 0x800000000LL) == 0 && ((v13 & 0x40000000000LL) == 0 || (v13 & 0x30000) == 0) )
        v8 = 1;
    }
  }
  FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)a1);
  while ( FirstActivity )
  {
    if ( (*((_BYTE *)FirstActivity + 552) & 8) == 0
      && *((_QWORD *)FirstActivity + 64)
      && ((a4 & 1) == 0 || (*((_DWORD *)FirstActivity + 28) & 0x10000) != 0) )
    {
      HampActInvalidateAndNotify(FirstActivity, a2);
      v12 = *((_QWORD *)FirstActivity + 9);
      if ( v12 )
      {
        if ( *(_BYTE *)(v12 + 40) == 2 )
          *((_QWORD *)FirstActivity + 64) = a3;
      }
    }
    v10 = *((_QWORD *)FirstActivity + 12);
    v11 = *((_QWORD *)FirstActivity + 10);
    FirstActivity = 0LL;
    if ( v10 != v11 + 608 )
      FirstActivity = (struct _HAM_ACTIVITY *)(v10 - 96);
  }
  HampHostCheckUpdateSuspendWaitState((struct _RM_HAM_ACTIVITY_HOST *)a1, v8);
}
