/*
 * XREFs of ExpFastResourceLegacyRelease @ 0x140464DC0
 * Callers:
 *     ExReleaseResourceForThreadLite @ 0x140494B10 (ExReleaseResourceForThreadLite.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseFastResource @ 0x14027A880 (ExReleaseFastResource.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpFastResourceLegacyRelease(struct _KTHREAD *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 *i; // rbx
  char v6; // cl
  char v7; // al
  char v8; // bp

  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  if ( (*(_QWORD *)&a1->Header.Lock & 1) == 0
    || (i = &a1->ThreadLock, *(struct _KTHREAD **)&a1->CurrentRunTime != CurrentThread) )
  {
    for ( i = (unsigned __int64 *)CurrentThread[1].WaitBlock[3].SparePtr;
          i != &CurrentThread[1].LastXStateSaveDebugInfo;
          i = (unsigned __int64 *)*i )
    {
      v6 = *((_BYTE *)i + 37);
      if ( (v6 & 2) == 0 && (struct _KTHREAD *)i[3] == a1 && (v6 & 1) != 0 )
        goto LABEL_7;
    }
LABEL_8:
    KeBugCheckEx(0xE3u, (ULONG_PTR)a1, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  }
LABEL_7:
  if ( !i )
    goto LABEL_8;
  v7 = *((_BYTE *)i + 37);
  if ( (v7 & 2) != 0 )
  {
    v8 = 0;
  }
  else
  {
    v8 = 1;
    *((_BYTE *)i + 37) = v7 & 0xFE;
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  ExReleaseFastResource(a1, (ULONG_PTR)i);
  if ( v8 )
    ExFreePoolWithTag(i, 0);
}
