/*
 * XREFs of ?HampSystemQueryHostJobHandle@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAX@Z @ 0x1800613A8
 * Callers:
 *     ?HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800611CC (-HampHostAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HampSystemQueryHostJobHandle(struct _RM_HAM_ACTIVITY_HOST *a1, void **a2)
{
  __int64 v3; // r9
  __int64 v4; // r8
  int v5; // ebx
  void *v6; // rcx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v3 = 1208LL;
  v4 = 48LL;
  if ( a1 )
  {
    v3 = (__int64)a1 + 1152;
    v4 = (__int64)a1 - 8;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, void **))(*(_QWORD *)(*(_QWORD *)v4 + 40LL) + 112LL))(*(_QWORD *)v3, &v8);
  if ( v5 < 0 )
  {
    v6 = v8;
  }
  else
  {
    v6 = 0LL;
    *a2 = v8;
    v5 = 0;
    v8 = 0LL;
  }
  if ( v6 )
    NtClose(v6);
  return (unsigned int)v5;
}
