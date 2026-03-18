/*
 * XREFs of CcScheduleReadAheadEx @ 0x1404DA260
 * Callers:
 *     CcMdlRead @ 0x140AED790 (CcMdlRead.c)
 * Callees:
 *     CcScheduleReadAheadNuma @ 0x14021D0F8 (CcScheduleReadAheadNuma.c)
 */

void __fastcall CcScheduleReadAheadEx(_QWORD *a1, _QWORD *a2, __int64 a3, struct _KTHREAD *a4)
{
  CcScheduleReadAheadNuma(a1, a2, a3, a4, 0LL);
}
