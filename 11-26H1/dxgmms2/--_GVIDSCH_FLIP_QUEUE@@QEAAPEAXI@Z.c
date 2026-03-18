/*
 * XREFs of ??_GVIDSCH_FLIP_QUEUE@@QEAAPEAXI@Z @ 0x140004744
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1400051E8 (VidSchiSetFlipDevice.c)
 * Callees:
 *     ??1_VIDSCH_FLIP_QUEUE_ENTRY@@QEAA@XZ @ 0x14000479C (--1_VIDSCH_FLIP_QUEUE_ENTRY@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 */

VIDSCH_FLIP_QUEUE *__fastcall VIDSCH_FLIP_QUEUE::`scalar deleting destructor'(VIDSCH_FLIP_QUEUE *this)
{
  _VIDSCH_FLIP_QUEUE_ENTRY *v2; // rdi
  __int64 v3; // rsi

  v2 = (VIDSCH_FLIP_QUEUE *)((char *)this + 89720);
  v3 = 64LL;
  do
  {
    v2 = (_VIDSCH_FLIP_QUEUE_ENTRY *)((char *)v2 - 1400);
    _VIDSCH_FLIP_QUEUE_ENTRY::~_VIDSCH_FLIP_QUEUE_ENTRY(v2);
    --v3;
  }
  while ( v3 );
  operator delete(this);
  return this;
}
