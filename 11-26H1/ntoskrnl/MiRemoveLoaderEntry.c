/*
 * XREFs of MiRemoveLoaderEntry @ 0x140429F78
 * Callers:
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     RtlRemoveInvertedFunctionTable @ 0x14042A148 (RtlRemoveInvertedFunctionTable.c)
 *     MmUnlockLoadedModuleListExclusive @ 0x14042A1AC (MmUnlockLoadedModuleListExclusive.c)
 *     MmLockLoadedModuleListExclusive @ 0x14052F5A4 (MmLockLoadedModuleListExclusive.c)
 */

__int64 __fastcall MiRemoveLoaderEntry(_QWORD *a1)
{
  char v2; // al
  __int64 v3; // rdx
  char v4; // di
  _QWORD *v5; // rcx
  __int64 v6; // rcx

  if ( (MiFlags & 0x100000) == 0 )
    RtlRemoveInvertedFunctionTable(a1[6]);
  v2 = MmLockLoadedModuleListExclusive();
  v3 = *a1;
  v4 = v2;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v5 = (_QWORD *)a1[1], (_QWORD *)*v5 != a1) )
    __fastfail(3u);
  *v5 = v3;
  *(_QWORD *)(v3 + 8) = v5;
  RtlAvlRemoveNode((unsigned __int64 *)&stru_140E2D2D0.SuspendEvent.Header.WaitListHead, (__int64)(a1 + 26));
  LOBYTE(v6) = v4;
  return MmUnlockLoadedModuleListExclusive(v6);
}
