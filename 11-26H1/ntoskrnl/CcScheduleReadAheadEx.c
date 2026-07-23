/*
 * XREFs of CcScheduleReadAheadEx @ 0x1404D3940
 * Callers:
 *     CcMdlRead @ 0x140AF04E0 (CcMdlRead.c)
 * Callees:
 *     CcScheduleReadAheadNuma @ 0x14021EA88 (CcScheduleReadAheadNuma.c)
 */

void __fastcall CcScheduleReadAheadEx(_QWORD *a1, _QWORD *a2, __int64 a3, struct _KTHREAD *a4)
{
  CcScheduleReadAheadNuma(a1, a2, a3, a4, 0LL);
}
