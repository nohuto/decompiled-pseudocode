/*
 * XREFs of ?ndisCleanupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@@Z @ 0x14013F35C
 * Callers:
 *     ?NdisPDPIFreeCounter@@YAXPEAUNDIS_PD_COUNTER_HANDLE__@@@Z @ 0x14013E2D0 (-NdisPDPIFreeCounter@@YAXPEAUNDIS_PD_COUNTER_HANDLE__@@@Z.c)
 *     ?ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z @ 0x14013F4AC (-ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z.c)
 * Callees:
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015C3D0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall ndisCleanupPDCounter(struct NDIS_PD_COUNTER ***a1)
{
  struct NDIS_PD_COUNTER **v2; // rcx
  struct NDIS_PD_COUNTER **v3; // rax
  KLockThisExclusive v4; // [rsp+20h] [rbp-28h] BYREF

  KLockThisExclusive::KLockThisExclusive(&v4, qword_14011EE98);
  v2 = *a1;
  if ( (*a1)[1] != (struct NDIS_PD_COUNTER *)a1 || (v3 = a1[1], *v3 != (struct NDIS_PD_COUNTER *)a1) )
    __fastfail(3u);
  *v3 = (struct NDIS_PD_COUNTER *)v2;
  v2[1] = (struct NDIS_PD_COUNTER *)v3;
  *a1 = 0LL;
  a1[6] = 0LL;
  a1[4] = 0LL;
  KLockHolder::~KLockHolder(&v4);
}
