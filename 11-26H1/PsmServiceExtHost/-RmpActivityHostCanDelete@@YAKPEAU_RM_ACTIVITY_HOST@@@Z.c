/*
 * XREFs of ?RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180027234
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180024AB0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180026C18 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x18007F90C (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

_BOOL8 __fastcall RmpActivityHostCanDelete(struct _RM_ACTIVITY_HOST *a1)
{
  bool v1; // sf
  int v3; // r8d
  unsigned int v4; // edx
  __int64 v5; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = *((int *)a1 + 6) < 0;
  v7 = 0;
  v8 = 0;
  if ( v1 )
    return 0LL;
  v3 = 0;
  v4 = 0;
  do
  {
    v5 = (int)v4++;
    v3 += *((_DWORD *)a1 + 6 * v5 + 284);
  }
  while ( v4 < 2 );
  if ( v3 )
    return 0LL;
  if ( *((_QWORD *)a1 + 82) )
    return 0LL;
  RmHamHostGetCurrentState(
    (struct _RM_ACTIVITY_HOST *)((char *)a1 + 56),
    (union _RM_OPTIMIZATION_STATE *)&v7,
    (union _RM_OPTIMIZATION_STATE *)&v8);
  return !v8 && (v7 & 0x80u) != 0 && (v7 & 0x100) != 0 && (*((_BYTE *)a1 + 728) & 2) == 0 && !*((_QWORD *)a1 + 138);
}
