/*
 * XREFs of ?InitializeFlipQueueEntry@_VIDSCH_FLIP_QUEUE_ENTRY@@QEAAJPEAU_VIDSCH_GLOBAL@@@Z @ 0x140005984
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1400051E8 (VidSchiSetFlipDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _VIDSCH_FLIP_QUEUE_ENTRY::InitializeFlipQueueEntry(
        _VIDSCH_FLIP_QUEUE_ENTRY *this,
        struct _VIDSCH_GLOBAL *a2)
{
  __int64 Pool2; // rax
  _DWORD *v5; // rdx
  int v6; // eax
  int v7; // ecx
  __int64 result; // rax

  Pool2 = ExAllocatePool2(
            64LL,
            (unsigned int)(*((_DWORD *)a2 + 40) * (72 * *((_DWORD *)a2 + 21) + 224) + 24),
            828533078LL);
  *((_QWORD *)this + 149) = Pool2;
  v5 = (_DWORD *)Pool2;
  if ( Pool2 )
  {
    v6 = *((_DWORD *)a2 + 21);
    v7 = *((_DWORD *)a2 + 40);
    v5[2] = v6;
    v5[1] = v7;
    v5[3] = v7 * (72 * v6 + 224) + 24;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(3LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 30101;
  }
  return result;
}
