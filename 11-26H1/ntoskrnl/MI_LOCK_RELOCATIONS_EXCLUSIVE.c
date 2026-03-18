/*
 * XREFs of MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x1404A7214
 * Callers:
 *     MiRelocateImageAgain @ 0x14087B470 (MiRelocateImageAgain.c)
 *     MiRelocateFinish @ 0x1409CB614 (MiRelocateFinish.c)
 *     MiFreeRetpolineImportInfo @ 0x140AC817C (MiFreeRetpolineImportInfo.c)
 *     MiCaptureSecureImageBaseAddress @ 0x140B3540C (MiCaptureSecureImageBaseAddress.c)
 *     MiCaptureRetpolineImportInfo @ 0x140B3C58C (MiCaptureRetpolineImportInfo.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall MI_LOCK_RELOCATIONS_EXCLUSIVE(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // rdi
  AutoBoost *v7; // rax
  void *v8; // rdx
  AutoBoost *v9; // rbx

  --*(_WORD *)(a1 + 486);
  v4 = (unsigned __int64 *)(a2 + 24);
  v7 = (AutoBoost *)KeAbPreAcquire(a2 + 24, 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v7, (__int64)v4);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v8);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  *(_QWORD *)(a2 + 8) = a1;
}
