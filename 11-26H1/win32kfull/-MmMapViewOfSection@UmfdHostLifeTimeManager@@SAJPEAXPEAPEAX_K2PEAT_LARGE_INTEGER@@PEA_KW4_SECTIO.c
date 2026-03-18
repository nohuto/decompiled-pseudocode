/*
 * XREFs of ?MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTION_INHERIT@@KK4@Z @ 0x1401E6A60
 * Callers:
 *     UmfdHostLifeTimeManager_MmMapViewOfSection @ 0x1401E6A00 (UmfdHostLifeTimeManager_MmMapViewOfSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UmfdHostLifeTimeManager::MmMapViewOfSection(
        void *a1,
        void **a2,
        __int64 a3,
        __int64 a4,
        union _LARGE_INTEGER *a5,
        unsigned __int64 *a6,
        enum _SECTION_INHERIT a7,
        unsigned int a8,
        unsigned int a9,
        unsigned __int64 *a10)
{
  struct W32_PUSH_LOCK *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rbx
  unsigned int v22; // esi

  v14 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96) + 24240LL);
  GreAcquirePushLockShared(v14);
  if ( *(_BYTE *)(*(_QWORD *)(W32GetSessionState(v16, v15, v17) + 96) + 24272LL) )
  {
    v21 = *(_QWORD *)(W32GetSessionState(v19, v18, v20) + 96);
    v22 = MmMapViewOfSection(a1, *(_QWORD *)(v21 + 24176), a2, a3, a4, a5, a6, a7, a8, a9);
    *a10 = *(_QWORD *)(v21 + 24168);
    if ( v14 )
      GreReleasePushLockShared(v14);
    return v22;
  }
  else
  {
    if ( v14 )
      GreReleasePushLockShared(v14);
    return 3221225473LL;
  }
}
