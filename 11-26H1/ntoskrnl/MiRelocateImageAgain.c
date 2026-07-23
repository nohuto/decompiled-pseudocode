/*
 * XREFs of MiRelocateImageAgain @ 0x140881870
 * Callers:
 *     MiValidateExistingImage @ 0x140A64508 (MiValidateExistingImage.c)
 * Callees:
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiGetControlAreaLoadConfig @ 0x14048F4E4 (MiGetControlAreaLoadConfig.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x1404A08A4 (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x1404A7D54 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MiImageUnused @ 0x1404B7FC0 (MiImageUnused.c)
 *     MiUpdateImageSystemWideBitmaps @ 0x14099B3C4 (MiUpdateImageSystemWideBitmaps.c)
 *     MiSelectImageBase @ 0x14099BC88 (MiSelectImageBase.c)
 *     MiReturnImageBase @ 0x140A85CA8 (MiReturnImageBase.c)
 *     MiSwitchBaseAddress @ 0x140AC9EC0 (MiSwitchBaseAddress.c)
 *     MiMarkImageActive @ 0x140B01254 (MiMarkImageActive.c)
 *     SeSetImageBaseAddress @ 0x140B37698 (SeSetImageBaseAddress.c)
 */

__int64 __fastcall MiRelocateImageAgain(__int64 a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 v5; // rbp
  __int64 v7; // r15
  __int64 v9; // r14
  __int64 v10; // rdx
  unsigned __int64 *v11; // rsi
  int updated; // edi
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  __int64 v15; // r13
  bool v16; // cf
  __int64 ControlAreaLoadConfig; // rax
  __int64 v18; // r14
  unsigned int SessionId; // eax
  __int64 v20; // [rsp+30h] [rbp-58h] BYREF
  __int128 v21; // [rsp+38h] [rbp-50h]
  __int64 v22; // [rsp+90h] [rbp+8h] BYREF
  int v23; // [rsp+A0h] [rbp+18h]
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp+20h]

  v23 = a3;
  v5 = *(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL;
  v22 = 0LL;
  v7 = *(_QWORD *)(v5 + 32);
  if ( !v7 )
    return 0LL;
  v9 = *(_QWORD *)a1;
  v10 = *(_QWORD *)(v5 + 32);
  v20 = -1LL;
  v11 = 0LL;
  CurrentThread = KeGetCurrentThread();
  updated = 0;
  v21 = 0LL;
  MI_LOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v10, a3, a4);
  if ( (*(_DWORD *)(a1 + 92) & 0x400000) == 0 )
  {
    v15 = *(_QWORD *)(v9 + 32);
    v11 = (unsigned __int64 *)MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, 1u, v13, v14);
    if ( !v11 )
    {
      MiMarkImageActive(a1);
      goto LABEL_18;
    }
    v16 = v23 != 0;
    v23 = -v23;
    updated = MiSelectImageBase(v9, v7, a2, v16 ? 2 : 0, (__int64)&v22);
    if ( updated < 0 )
      goto LABEL_18;
    MiMarkImageActive(a1);
    ControlAreaLoadConfig = MiGetControlAreaLoadConfig(a1);
    v18 = v22;
    updated = MiUpdateImageSystemWideBitmaps(a1, v22, ControlAreaLoadConfig);
    if ( updated < 0 )
    {
LABEL_8:
      MiImageUnused(a1, 0, (__int64)&v20);
      goto LABEL_18;
    }
    if ( v18 != v15 )
    {
      if ( (MiFlags & 0x8000) != 0 && (*(_DWORD *)(a1 + 92) & 0xC0000) != 0 )
      {
        updated = SeSetImageBaseAddress(*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFFFFFFF8uLL, v18);
        if ( updated < 0 )
          goto LABEL_8;
      }
      if ( a2 )
        SessionId = -1;
      else
        SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      MiSwitchBaseAddress(a1, v18, v11, SessionId);
    }
    updated = 0;
  }
LABEL_18:
  MI_UNLOCK_RELOCATIONS_EXCLUSIVE((__int64)CurrentThread, v7);
  if ( v11 )
    MiReleasePtes((__int64)&stru_140E366D8.WaitBlockList, v11, 1u);
  MiReturnImageBase(&v20);
  return (unsigned int)updated;
}
