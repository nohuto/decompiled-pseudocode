/*
 * XREFs of ?bPopPushMergeScrScan@STACKOBJ@@QEAAHXZ @ 0x1401DF788
 * Callers:
 *     ?bExtendScanline@?$FLOODBM@$0A@@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z @ 0x140332ED0 (-bExtendScanline@-$FLOODBM@$0A@@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z.c)
 * Callees:
 *     ?bPushMergeScrScan@STACKOBJ@@QEAAHXZ @ 0x1401DF7B0 (-bPushMergeScrScan@STACKOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall STACKOBJ::bPopPushMergeScrScan(STACKOBJ *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 1);
  *((_DWORD *)this + 1) -= *(_DWORD *)v1;
  *((_QWORD *)this + 1) = *(_QWORD *)(v1 + 8);
  return STACKOBJ::bPushMergeScrScan(this);
}
