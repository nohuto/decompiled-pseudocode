/*
 * XREFs of ?NdisPDCleanup@@YAXPEAUPD_CLIENT_HANDLE__@@@Z @ 0x14013CFB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ??_GNDIS_PD_CLIENT@@QEAAPEAXI@Z @ 0x14013C4EC (--_GNDIS_PD_CLIENT@@QEAAPEAXI@Z.c)
 *     ?ndisPDDereferenceClientDriver@@YAXPEAX@Z @ 0x140140418 (-ndisPDDereferenceClientDriver@@YAXPEAX@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015C3D0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NdisPDCleanup(struct PD_CLIENT_HANDLE__ ***a1)
{
  struct PD_CLIENT_HANDLE__ **v2; // rcx
  struct PD_CLIENT_HANDLE__ **v3; // rax
  KPushLockBase *v4; // rcx
  KLockThisExclusive v5; // [rsp+30h] [rbp-28h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      29,
      21,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)a1);
  KLockThisExclusive::KLockThisExclusive(&v5, qword_14011EE98);
  v2 = *a1;
  if ( (*a1)[1] != (struct PD_CLIENT_HANDLE__ *)a1 || (v3 = a1[1], *v3 != (struct PD_CLIENT_HANDLE__ *)a1) )
    __fastfail(3u);
  *v3 = (struct PD_CLIENT_HANDLE__ *)v2;
  v2[1] = (struct PD_CLIENT_HANDLE__ *)v3;
  v4 = qword_14011EE98;
  *a1 = 0LL;
  RtlClearBit((PRTL_BITMAP)&v4[3], *((unsigned __int16 *)a1 + 52));
  KLockHolder::~KLockHolder(&v5);
  ndisPDDereferenceClientDriver(a1[10]);
  a1[10] = 0LL;
  NDIS_PD_CLIENT::`scalar deleting destructor'((NDIS_PD_CLIENT *)a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      29,
      22,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)a1);
}
