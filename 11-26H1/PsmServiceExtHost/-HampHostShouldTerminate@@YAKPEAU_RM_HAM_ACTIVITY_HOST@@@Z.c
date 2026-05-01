/*
 * XREFs of ?HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000BB40
 * Callers:
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AC00 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z @ 0x18000C220 (-HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z.c)
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000CEE0 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x18007F90C (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

__int64 __fastcall HampHostShouldTerminate(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  unsigned __int64 v2; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v4; // rcx
  char *v5; // rax
  char v6; // cl
  int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  v8 = 0;
  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v7, (union _RM_OPTIMIZATION_STATE *)&v8);
  v2 = *((_QWORD *)a1 + 83);
  if ( ((v2 >> 16) & 3) == 0 )
    return 0LL;
  if ( ((*((_QWORD *)a1 + 83) >> 16) & 3LL) == 1 )
  {
    if ( (v7 & 0x80u) != 0 && (v8 & 0x80u) == 0 && (v2 & 0x40000000000LL) == 0 )
    {
      v4 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 76);
      v5 = 0LL;
      if ( v4 != (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 608) )
        goto LABEL_15;
      while ( v5 )
      {
        if ( (v5[552] & 0x48) == 0 )
        {
          v6 = v5[562];
          if ( (v6 == 3 || v6 == 2 && (unsigned __int8)v5[563] >= 5u) && (*((_DWORD *)v5 + 28) & 0x2000) != 0 )
            return 0LL;
        }
        v4 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)v5 + 12);
        if ( v4 == (struct _RM_HAM_ACTIVITY_HOST *)(*((_QWORD *)v5 + 10) + 608LL) )
          v5 = 0LL;
        else
LABEL_15:
          v5 = (char *)v4 - 96;
      }
      return 1LL;
    }
    return 0LL;
  }
  if ( ((*((_QWORD *)a1 + 83) >> 16) & 3LL) != 2 )
    return ((*((_QWORD *)a1 + 83) >> 16) & 3LL) == 3;
  return (v2 & 0x8000000000000LL) == 0;
}
