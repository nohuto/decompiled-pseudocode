/*
 * XREFs of ?_FindRegionForDisplay@CInputConfig@@AEAA_NAEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@AEBUCInputSpace@@AEBUtagQDC_DATA@@PEAPEAUCInputSpaceRegion@@@Z @ 0x1401F832C
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1401F7EA8 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 * Callees:
 *     ?LockExclusivelyHeld@CInputConfig@@SA_NXZ @ 0x1401479E0 (-LockExclusivelyHeld@CInputConfig@@SA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ @ 0x1401F7A80 (-ModifiableRegion@Iter@CInputSpace@@QEAAPEAUCInputSpaceRegion@@XZ.c)
 */

char __fastcall CInputConfig::_FindRegionForDisplay(
        CInputConfig *this,
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        const struct CInputSpace *a3,
        const struct tagQDC_DATA *a4,
        struct CInputSpaceRegion **a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct CInputSpaceRegion *v11; // rsi
  __int64 v12; // rbx
  unsigned int v13; // r8d
  unsigned int v14; // r9d
  unsigned int v15; // eax
  _QWORD **v16; // r12
  PERESOURCE *v17; // r14
  struct _ERESOURCE *v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // rdi
  _QWORD *v21; // rcx
  struct CInputSpaceRegion *v22; // rax
  struct _ERESOURCE *v23; // rcx
  _QWORD v25[4]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v26; // [rsp+70h] [rbp+8h]
  unsigned int v27; // [rsp+94h] [rbp+2Ch]

  if ( !CInputConfig::LockExclusivelyHeld((__int64)this, (__int64)a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 623);
  v11 = 0LL;
  v12 = *((_QWORD *)a2 + 2);
  v13 = 0;
  v14 = *(_DWORD *)a4;
  v15 = *((_DWORD *)a2 + 6);
  *a5 = 0LL;
  v27 = HIDWORD(v12);
  v26 = v15;
  if ( v14 )
  {
    v8 = *((_QWORD *)a4 + 1);
    while ( 1 )
    {
      v9 = 216LL * v13;
      if ( *(_DWORD *)(v9 + v8 + 116) == *((_DWORD *)a2 + 29) && *(_DWORD *)(v9 + v8 + 120) == *((_DWORD *)a2 + 30) )
        break;
      if ( ++v13 >= v14 )
        goto LABEL_10;
    }
    v12 = *(_QWORD *)(v9 + v8 + 16);
    v27 = HIDWORD(v12);
    v26 = *(_DWORD *)(v9 + v8 + 24);
  }
LABEL_10:
  v16 = (_QWORD **)((char *)a3 + 1456);
  v17 = (PERESOURCE *)(W32GetUserSessionState(v9, v8) + 18640);
  v18 = *v17;
  v25[0] = v17;
  ExEnterCriticalRegionAndAcquireResourceShared(v18);
  v20 = *v16;
  v25[1] = v16;
  while ( 1 )
  {
    v21 = 0LL;
    v25[2] = v20;
    if ( v20 != v16 )
      v21 = v20 + 2;
    if ( !v21 )
      break;
    v22 = CInputSpace::Iter::ModifiableRegion((CInputSpace::Iter *)v25, v19);
    v19 = *((unsigned int *)v22 + 6);
    if ( *((_QWORD *)a2 + 2) == *((_QWORD *)v22 + 3) && *((_DWORD *)a2 + 6) == *((_DWORD *)v22 + 8) )
    {
      v23 = *v17;
      *a5 = v22;
      ExReleaseResourceAndLeaveCriticalRegion(v23);
      return 1;
    }
    if ( (_DWORD)v12 == (_DWORD)v19 && __PAIR64__(v26, v27) == *(_QWORD *)((char *)v22 + 28) )
      v11 = v22;
    v20 = (_QWORD *)*v20;
  }
  ExReleaseResourceAndLeaveCriticalRegion(*v17);
  if ( v11 )
  {
    *a5 = v11;
    return 1;
  }
  return 0;
}
