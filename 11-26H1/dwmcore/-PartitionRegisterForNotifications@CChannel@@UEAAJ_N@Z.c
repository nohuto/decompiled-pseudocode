/*
 * XREFs of ?PartitionRegisterForNotifications@CChannel@@UEAAJ_N@Z @ 0x180233430
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18011859C (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18018BFC0 (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::PartitionRegisterForNotifications(CChannel *this, char a2)
{
  unsigned int v4; // ebx
  _BYTE v6[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v6, this);
  v8 = 190LL;
  BYTE4(v8) = a2;
  v4 = CChannel::SendCommand(this, &v8, 8u);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 80LL))(v7);
  return v4;
}
