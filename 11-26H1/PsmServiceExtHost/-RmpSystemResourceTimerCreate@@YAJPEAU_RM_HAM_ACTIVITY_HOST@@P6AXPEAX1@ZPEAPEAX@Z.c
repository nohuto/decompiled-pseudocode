/*
 * XREFs of ?RmpSystemResourceTimerCreate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@P6AXPEAX1@ZPEAPEAX@Z @ 0x18006387C
 * Callers:
 *     ?HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800611CC (-HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmpSystemResourceTimerCreate(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        void (*a2)(void *, void *),
        void **a3)
{
  char *v3; // rax
  bool v6; // zf
  __int64 v7; // rcx
  __int64 v8; // r9

  v3 = (char *)a1 + 1152;
  v6 = a1 == 0LL;
  v7 = 1208LL;
  v8 = 48LL;
  if ( !v6 )
  {
    v7 = (__int64)v3;
    v8 = (__int64)a1 - 8;
  }
  return (*(__int64 (__fastcall **)(_QWORD, void (*)(void *, void *), struct _RM_HAM_ACTIVITY_HOST *, void **))(*(_QWORD *)(*(_QWORD *)v8 + 40LL) + 168LL))(
           *(_QWORD *)v7,
           a2,
           a1,
           a3);
}
