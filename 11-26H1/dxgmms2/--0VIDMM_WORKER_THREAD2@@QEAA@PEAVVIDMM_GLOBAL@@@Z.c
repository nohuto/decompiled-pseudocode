/*
 * XREFs of ??0VIDMM_WORKER_THREAD2@@QEAA@PEAVVIDMM_GLOBAL@@@Z @ 0x1400B8AA4
 * Callers:
 *     ?CreateWorkerThread@VIDMM_GLOBAL@@QEAAJXZ @ 0x1400A7728 (-CreateWorkerThread@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x14003F480 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0VIDMM_WORKER_THREAD@@QEAA@PEAVVIDMM_GLOBAL@@@Z @ 0x1400A7644 (--0VIDMM_WORKER_THREAD@@QEAA@PEAVVIDMM_GLOBAL@@@Z.c)
 */

VIDMM_WORKER_THREAD2 *__fastcall VIDMM_WORKER_THREAD2::VIDMM_WORKER_THREAD2(
        VIDMM_WORKER_THREAD2 *this,
        struct VIDMM_GLOBAL *a2)
{
  VIDMM_WORKER_THREAD2 *result; // rax

  VIDMM_WORKER_THREAD::VIDMM_WORKER_THREAD(this, a2);
  *((_QWORD *)this + 667) = 0LL;
  *((_QWORD *)this + 668) = 0LL;
  *((_QWORD *)this + 669) = 0LL;
  *((_DWORD *)this + 1340) = 0;
  *((_DWORD *)this + 1341) = 6;
  *((_QWORD *)this + 671) = &VIDMM_SCHCLASS_IDLE::`vftable';
  *((_QWORD *)this + 672) = 0LL;
  *((_DWORD *)this + 1346) = 0;
  *((_BYTE *)this + 5389) = 3;
  *((_QWORD *)this + 674) = &VIDMM_SCHCLASS_PAGING::`vftable';
  *((_QWORD *)this + 675) = (char *)this + 5368;
  *((_DWORD *)this + 1352) = 0;
  *((_BYTE *)this + 5413) = 2;
  *((_QWORD *)this + 677) = 0LL;
  *((_QWORD *)this + 680) = (char *)this + 5392;
  *((_QWORD *)this + 679) = &VIDMM_SCHCLASS_TIMER::`vftable';
  *((_DWORD *)this + 1362) = 0;
  *((_BYTE *)this + 5453) = 1;
  *((_QWORD *)this + 682) = 0LL;
  *((_QWORD *)this + 684) = &VIDMM_SCHCLASS_REALTIME::`vftable';
  *((_QWORD *)this + 685) = (char *)this + 5432;
  *((_DWORD *)this + 1372) = 0;
  *((_BYTE *)this + 5493) = 0;
  *((_QWORD *)this + 688) = (char *)this + 5496;
  *((_QWORD *)this + 687) = (char *)this + 5496;
  *((_QWORD *)this + 689) = &VIDMM_TASK::`vftable';
  *((_QWORD *)this + 693) = 0LL;
  *((_QWORD *)this + 694) = 0LL;
  *((_QWORD *)this + 689) = &VIDMM_TASK_STATE_CHANGE::`vftable';
  *((_QWORD *)this + 695) = 0LL;
  *((_QWORD *)this + 696) = 0LL;
  *((_QWORD *)this + 697) = 0LL;
  *((_DWORD *)this + 1396) = 0;
  *((_BYTE *)this + 5588) = 3;
  *((_QWORD *)this + 699) = &VIDMM_TASK::`vftable';
  *((_QWORD *)this + 703) = 0LL;
  *((_QWORD *)this + 704) = 0LL;
  *((_QWORD *)this + 699) = &VIDMM_TASK_PROCESS_TERMINATIONS::`vftable';
  *((_QWORD *)this + 705) = 0LL;
  *((_QWORD *)this + 706) = 0LL;
  *((_QWORD *)this + 707) = 0LL;
  *((_DWORD *)this + 1416) = 0;
  *((_BYTE *)this + 5668) = 4;
  *((_QWORD *)this + 709) = &VIDMM_TASK::`vftable';
  *((_QWORD *)this + 713) = 0LL;
  *((_QWORD *)this + 714) = 0LL;
  *((_QWORD *)this + 715) = 0LL;
  *((_QWORD *)this + 716) = 0LL;
  *((_QWORD *)this + 717) = 0LL;
  *((_QWORD *)this + 709) = &VIDMM_TASK_IDLE::`vftable';
  *((_DWORD *)this + 1436) = 0;
  *((_BYTE *)this + 5748) = 0;
  *((_QWORD *)this + 713) = (char *)this + 5368;
  *((_DWORD *)this + 1436) = 1;
  *((_QWORD *)this + 719) = &VIDMM_TASK::`vftable';
  *((_QWORD *)this + 723) = 0LL;
  *((_QWORD *)this + 724) = 0LL;
  *((_QWORD *)this + 725) = 0LL;
  *((_QWORD *)this + 726) = 0LL;
  *((_QWORD *)this + 727) = 0LL;
  *((_DWORD *)this + 1456) = 0;
  *((_BYTE *)this + 5828) = 5;
  *((_QWORD *)this + 719) = &VIDMM_TASK_PENALTY_BOX::`vftable';
  `vector constructor iterator'(
    (char *)this + 5832,
    16LL,
    4LL,
    (void (__fastcall *)(char *))DXGK_LIST_HEAD::DXGK_LIST_HEAD);
  *((_QWORD *)this + 738) = (char *)this + 5896;
  *((_QWORD *)this + 737) = (char *)this + 5896;
  result = this;
  *((_QWORD *)this + 739) = 0LL;
  *((_QWORD *)this + 740) = 0LL;
  *((_BYTE *)this + 5928) = 0;
  return result;
}
