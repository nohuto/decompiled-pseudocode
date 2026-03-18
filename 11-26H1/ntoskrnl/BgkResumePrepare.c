/*
 * XREFs of BgkResumePrepare @ 0x140BF144C
 * Callers:
 *     PopAllocateHiberContext @ 0x140B71364 (PopAllocateHiberContext.c)
 *     PopMarkComponentsBootPhase @ 0x140BFAE30 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x1404AFD60 (PoSetHiberRange.c)
 *     BgkpLockBgfxCodeSection @ 0x140C4F820 (BgkpLockBgfxCodeSection.c)
 *     BgGetContext @ 0x140C4F9EC (BgGetContext.c)
 *     BgMarkHiberPhase @ 0x140C4FB00 (BgMarkHiberPhase.c)
 *     BgkpUnlockBgfxCodeSection @ 0x140C541C0 (BgkpUnlockBgfxCodeSection.c)
 */

__int64 __fastcall BgkResumePrepare(PVOID MemoryMap)
{
  unsigned int v1; // ebx
  __int64 Context; // rax
  void *v4; // rdi
  void *v5; // r8
  _QWORD *v6; // rdi
  void *v7; // r8

  v1 = 0;
  if ( MemoryMap )
  {
    BgkpLockBgfxCodeSection();
    Context = BgGetContext();
    v4 = (void *)Context;
    if ( !Context )
    {
      BgkpUnlockBgfxCodeSection();
      return (unsigned int)-1073741670;
    }
    v5 = *(void **)(Context + 16);
    if ( v5 )
      PoSetHiberRange(MemoryMap, 0x8000u, v5, *(unsigned int *)(Context + 24), 0x4B494742u);
    qword_140E65D30 = v4;
  }
  else
  {
    v6 = qword_140E65D30;
    if ( !qword_140E65D30 )
      return (unsigned int)-1073741670;
    PoSetHiberRange(0LL, 0x10000u, qword_140E65D30, *(unsigned int *)qword_140E65D30, 0);
    v7 = (void *)v6[2];
    if ( v7 )
      PoSetHiberRange(0LL, 0x10000u, v7, *((unsigned int *)v6 + 6), 0);
    return (unsigned int)BgMarkHiberPhase();
  }
  return v1;
}
