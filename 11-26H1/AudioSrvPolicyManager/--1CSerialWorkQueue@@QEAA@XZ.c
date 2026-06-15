/*
 * XREFs of ??1CSerialWorkQueue@@QEAA@XZ @ 0x180045FEC
 * Callers:
 *     ??1CDuckingManager@@UEAA@XZ @ 0x180045F38 (--1CDuckingManager@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CSerialWorkQueue::~CSerialWorkQueue(CSerialWorkQueue *this)
{
  struct _TP_CLEANUP_GROUP *v2; // rcx

  v2 = (struct _TP_CLEANUP_GROUP *)*((_QWORD *)this + 21);
  if ( v2 )
  {
    CloseThreadpoolCleanupGroupMembers(v2, 1, 0LL);
    CloseThreadpoolCleanupGroup(*((PTP_CLEANUP_GROUP *)this + 21));
    *((_QWORD *)this + 21) = 0LL;
  }
  if ( *(_QWORD *)this )
  {
    CloseThreadpool(*(PTP_POOL *)this);
    *(_QWORD *)this = 0LL;
  }
}
