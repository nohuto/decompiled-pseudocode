/*
 * XREFs of ?HampActSystemResourceCleanup@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800131F8
 * Callers:
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x1800126A4 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180016FA4 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampSystemJobIoAttributionStop@@YAXPEAX@Z @ 0x180013400 (-HampSystemJobIoAttributionStop@@YAXPEAX@Z.c)
 *     ?HampSystemActivationClientDeactivate@@YAXPEAX@Z @ 0x18001397C (-HampSystemActivationClientDeactivate@@YAXPEAX@Z.c)
 *     ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x18002A22C (-RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z.c)
 */

void __fastcall HampActSystemResourceCleanup(struct _HAM_ACTIVITY *a1)
{
  __int64 v1; // rdi
  unsigned __int64 v3; // rdx
  void *v4; // rcx
  DWORD v5; // esi
  __int64 v6; // rbp
  _QWORD *Value; // rdi
  int v8; // eax
  DWORD v9; // ecx
  __int64 v10; // rdi
  __int64 *v11; // rax
  __int64 v12; // r8
  bool v13; // zf
  DWORD v14; // ebp
  __int64 v15; // rsi
  _QWORD *v16; // rdi
  __int64 v17; // rbx
  __int64 *v18; // rax
  __int64 v19; // r8

  v1 = *((_QWORD *)a1 + 11);
  v3 = *(_QWORD *)(v1 + 16);
  if ( v3 != -1LL )
  {
    RmSrvResourceSetReleaseResources(a1, v3);
    *(_QWORD *)(v1 + 16) = -1LL;
  }
  v4 = (void *)*((_QWORD *)a1 + 63);
  if ( v4 )
  {
    HampSystemActivationClientDeactivate(v4);
    *((_QWORD *)a1 + 63) = 0LL;
  }
  v5 = HampLockTrackerId;
  v6 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v5) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(v6);
  *(_DWORD *)(v6 + 8) = GetCurrentThreadId();
  v8 = *((_DWORD *)a1 + 138);
  if ( (v8 & 0x80u) != 0 )
  {
    v9 = HampLockTrackerId;
    v10 = *((_QWORD *)a1 + 10);
    *((_DWORD *)a1 + 138) = v8 & 0xFFFFFF7F;
    if ( v9 != -1 )
    {
      v11 = (__int64 *)TlsGetValue(v9);
      v12 = *v11;
      if ( (*v11 & 2) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      v13 = v11[2]-- == 1;
      if ( v13 )
        *v11 = v12 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    *(_DWORD *)(v10 + 8) = 0;
    RtlReleaseSRWLockExclusive(v10);
    HampSystemJobIoAttributionStop(*(HANDLE *)(*((_QWORD *)a1 + 10) + 576LL));
    v14 = HampLockTrackerId;
    v15 = *((_QWORD *)a1 + 10);
    if ( HampLockTrackerId != -1 )
    {
      v16 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v14) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
      *v16 |= 2uLL;
      ++v16[2];
    }
    RtlAcquireSRWLockExclusive(v15);
    *(_DWORD *)(v15 + 8) = GetCurrentThreadId();
  }
  v17 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    v18 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v19 = *v18;
    if ( (*v18 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v13 = v18[2]-- == 1;
    if ( v13 )
      *v18 = v19 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_DWORD *)(v17 + 8) = 0;
  RtlReleaseSRWLockExclusive(v17);
}
