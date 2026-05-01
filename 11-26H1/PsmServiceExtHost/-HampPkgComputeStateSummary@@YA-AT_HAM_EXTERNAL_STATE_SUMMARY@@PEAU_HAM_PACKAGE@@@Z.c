/*
 * XREFs of ?HampPkgComputeStateSummary@@YA?AT_HAM_EXTERNAL_STATE_SUMMARY@@PEAU_HAM_PACKAGE@@@Z @ 0x18003AE2C
 * Callers:
 *     ?HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003A7E0 (-HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HampAppComputeProcessPresence@@YAKPEAU_HAM_APPLICATION@@@Z @ 0x1800270EC (-HampAppComputeProcessPresence@@YAKPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180036A5C (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x18003BC30 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 */

__int64 __fastcall HampPkgComputeStateSummary(struct _HAM_RC_TREE_NODE *a1)
{
  unsigned int v1; // ebx
  struct _HAM_RC_TREE_NODE *i; // rsi
  DWORD v5; // ebp
  _QWORD *Value; // rdi
  int v7; // edi
  __int64 *v8; // rax
  __int64 v9; // r8
  int v11; // eax
  unsigned int v12; // r10d
  unsigned int v13; // r9d
  unsigned int v14; // r11d
  int v15; // r10d
  char v16; // dl
  int v17; // r10d
  int v18; // r10d
  int v19; // eax
  int v20; // r10d
  int v21; // eax
  int v22; // r10d
  int v23; // eax

  v1 = 128;
  for ( i = HamRcNodeGetFirst(a1, 1); i; i = HamRcNodeGetSuccessor(a1, i) )
  {
    v5 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v5) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
        NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
      *Value |= 0x20uLL;
      ++Value[6];
    }
    RtlAcquireSRWLockShared((char *)i + 584);
    v7 = *((_DWORD *)i + 155);
    if ( HampLockTrackerId != -1 )
    {
      v8 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v9 = *v8;
      if ( (*v8 & 0x20) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      if ( v8[6]-- == 1 )
        *v8 = v9 & 0xFFFFFFFFFFFFFFDFuLL;
    }
    RtlReleaseSRWLockShared((char *)i + 584);
    v11 = HampAppComputeProcessPresence(i);
    v12 = v1 >> 5;
    v13 = v1 >> 3;
    v14 = v7 ^ (v7 ^ (v11 << 10)) & 0x400;
    if ( (unsigned __int8)((v1 >> 5) & 7) >= (unsigned __int8)((v14 >> 5) & 7) )
      LOBYTE(v12) = v14 >> 5;
    v15 = 4 * (v12 & 7);
    v16 = v1;
    if ( (unsigned __int8)((v1 >> 3) & 3) <= (unsigned __int8)((v14 >> 3) & 3) )
      LOBYTE(v13) = v14 >> 3;
    v17 = 8 * (v13 & 3 | v15);
    if ( (unsigned __int8)(v1 & 7) <= (unsigned __int8)(v7 & 7) )
      v16 = v7;
    v18 = v16 & 7 | v17;
    if ( (v1 & 0x100) != 0 || (v14 & 0x100) != 0 )
      v19 = 256;
    else
      v19 = 0;
    v20 = v19 | v18;
    if ( (v1 & 0x200) != 0 || (v14 & 0x200) != 0 )
      v21 = 512;
    else
      v21 = 0;
    v22 = v21 | v20;
    if ( (v1 & 0x400) != 0 || (v14 & 0x400) != 0 )
      v23 = 1024;
    else
      v23 = 0;
    v1 = v23 | v22;
  }
  return v1;
}
