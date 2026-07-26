/*
 * XREFs of ?NdisPDFreeMemory@@YAXPEAUPD_MEMORY_HANDLE__@@@Z @ 0x14013D760
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ??_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z @ 0x14013C5D0 (--_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015C3D0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NdisPDFreeMemory(struct PD_MEMORY_HANDLE__ ***a1)
{
  struct PD_MEMORY_HANDLE__ **v2; // rcx
  struct PD_MEMORY_HANDLE__ **v3; // rax
  KLockThisExclusive v4; // [rsp+30h] [rbp-28h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      29,
      88,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)a1);
  KLockThisExclusive::KLockThisExclusive(&v4, qword_14011EE98);
  v2 = *a1;
  if ( (*a1)[1] != (struct PD_MEMORY_HANDLE__ *)a1 || (v3 = a1[1], *v3 != (struct PD_MEMORY_HANDLE__ *)a1) )
    __fastfail(3u);
  *v3 = (struct PD_MEMORY_HANDLE__ *)v2;
  v2[1] = (struct PD_MEMORY_HANDLE__ *)v3;
  *a1 = 0LL;
  KLockHolder::~KLockHolder(&v4);
  NDIS_PD_MEM_BLOCK::`scalar deleting destructor'((NDIS_PD_MEM_BLOCK *)a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      29,
      89,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)a1);
}
