/*
 * XREFs of ??1GdiBatchProcessingStatus@@QEAA@XZ @ 0x140084938
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1400835D0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall GdiBatchProcessingStatus::~GdiBatchProcessingStatus(GdiBatchProcessingStatus *this)
{
  if ( *((_BYTE *)this + 8) )
    *(_DWORD *)(*(_QWORD *)this + 752LL) &= ~0x40000000u;
}
