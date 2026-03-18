/*
 * XREFs of ??0GdiBatchProcessingStatus@@QEAA@PEAU_TEB@@@Z @ 0x1401AEACC
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1401ACC30 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

GdiBatchProcessingStatus *__fastcall GdiBatchProcessingStatus::GdiBatchProcessingStatus(
        GdiBatchProcessingStatus *this,
        struct _TEB *a2)
{
  ULONG Offset; // eax

  *(_QWORD *)this = a2;
  *((_BYTE *)this + 8) = 0;
  Offset = a2->GdiTebBatch.Offset;
  if ( (Offset & 0x40000000) == 0 )
  {
    a2->GdiTebBatch.Offset = Offset | 0x40000000;
    *((_BYTE *)this + 8) = 1;
  }
  return this;
}
