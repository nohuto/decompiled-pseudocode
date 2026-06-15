/*
 * XREFs of ??1SESSION_EVENT@@UEAA@XZ @ 0x18011068C
 * Callers:
 *     ??_GSESSION_EVENT@@UEAAPEAXI@Z @ 0x1801106D0 (--_GSESSION_EVENT@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SESSION_EVENT::~SESSION_EVENT(void **this)
{
  *this = &SESSION_EVENT::`vftable';
  free(this[2]);
  this[2] = 0LL;
  *this = &WORKER_THREAD_EVENT::`vftable';
}
