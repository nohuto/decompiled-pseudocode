/*
 * XREFs of ??0BLTQUEUE_HW_VSYNC_SOURCE@@QEAA@PEAVDXGDODPRESENT@@PEAU_KEVENT@@@Z @ 0x14018FAA4
 * Callers:
 *     ?RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x14018F994 (-RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 * Callees:
 *     memset @ 0x1400A5E00 (memset.c)
 */

BLTQUEUE_HW_VSYNC_SOURCE *__fastcall BLTQUEUE_HW_VSYNC_SOURCE::BLTQUEUE_HW_VSYNC_SOURCE(
        BLTQUEUE_HW_VSYNC_SOURCE *this,
        struct DXGDODPRESENT *a2,
        struct _KEVENT *a3)
{
  BLTQUEUE_HW_VSYNC_SOURCE *result; // rax

  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &BLTQUEUE_HW_VSYNC_SOURCE::`vftable';
  memset((char *)this + 16, 0, 0x40uLL);
  *((_QWORD *)this + 10) = 0LL;
  KeInitializeTimerEx((PKTIMER)((char *)this + 16), SynchronizationTimer);
  *((_QWORD *)this + 10) = a3;
  result = this;
  *((_QWORD *)this + 1) = a2;
  return result;
}
