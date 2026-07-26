/*
 * XREFs of TrackNblContextVerifierFailure @ 0x1400A5520
 * Callers:
 *     NdisFSendNetBufferLists @ 0x140025020 (NdisFSendNetBufferLists.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1400317B0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisSendNetBufferLists @ 0x140037160 (NdisSendNetBufferLists.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x140037E00 (NdisFIndicateReceiveNetBufferLists.c)
 *     ?ndisAddNblContextTerminator@@YAPEAU_NET_BUFFER_LIST@@PEAPEAU1@PEAKPEAU_NDIS_OBJECT_HEADER@@@Z @ 0x1400775C0 (-ndisAddNblContextTerminator@@YAPEAU_NET_BUFFER_LIST@@PEAPEAU1@PEAKPEAU_NDIS_OBJECT_HEADER@@@Z.c)
 * Callees:
 *     ??1KAcquireSpinLock@@QEAA@XZ @ 0x1400526D0 (--1KAcquireSpinLock@@QEAA@XZ.c)
 */

void __fastcall TrackNblContextVerifierFailure(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  LARGE_INTEGER PerformanceCounter; // rax
  KAcquireSpinLock v6; // [rsp+20h] [rbp-18h] BYREF

  v6.m_lock = (KSpinLockBase *)&qword_14011E7D0;
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_14011E7D0);
  ++dword_14011E7D8;
  v6.m_oldIrql = v4;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  qword_14011E7E8 = a2;
  qword_14011E7E0 = PerformanceCounter.QuadPart;
  qword_14011E7F0 = a1;
  KAcquireSpinLock::~KAcquireSpinLock(&v6);
}
