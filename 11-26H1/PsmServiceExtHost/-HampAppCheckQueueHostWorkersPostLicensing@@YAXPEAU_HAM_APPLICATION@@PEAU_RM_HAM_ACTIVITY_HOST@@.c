/*
 * XREFs of ?HampAppCheckQueueHostWorkersPostLicensing@@YAXPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180060D68
 * Callers:
 *     ?HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800256C0 (-HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800094B0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     CempLockAcquireExclusive @ 0x180022DB0 (CempLockAcquireExclusive.c)
 *     ?HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18002685C (-HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x180026F0C (-HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 */

void __fastcall HampAppCheckQueueHostWorkersPostLicensing(
        struct _HAM_APPLICATION *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2)
{
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  __int64 v4; // rbx
  DWORD v5; // esi
  _QWORD *Value; // rdi
  __int64 *v7; // rax
  __int64 v8; // rdx

  for ( i = HampAppGetFirstHost(a1); ; i = HampAppGetNextHost((struct _RM_HAM_ACTIVITY_HOST *)v4) )
  {
    v4 = (__int64)i;
    if ( !i )
      break;
    if ( i != a2 )
    {
      v5 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        Value = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v5) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
        *Value |= 2uLL;
        ++Value[2];
      }
      CempLockAcquireExclusive(v4);
      HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v4, 0);
      if ( HampLockTrackerId != -1 )
      {
        v7 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v8 = *v7;
        if ( (*v7 & 2) == 0 )
          NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
        if ( v7[2]-- == 1 )
          *v7 = v8 & 0xFFFFFFFFFFFFFFFDuLL;
      }
      *(_DWORD *)(v4 + 8) = 0;
      RtlReleaseSRWLockExclusive(v4);
    }
  }
}
