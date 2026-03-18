/*
 * XREFs of ?CaptureControllerSetTransform@CChannel@@UEAAJII@Z @ 0x1802329A0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180117068 (-CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180117660 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18011859C (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18018BFC0 (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::CaptureControllerSetTransform(CChannel *this, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // ebx
  _DWORD v8[4]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v9[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v9, this);
  CChannel::CheckHandle((__int64)this, a2, 17);
  CChannel::CheckOptionalHandle((__int64)this, a3, 148);
  v8[0] = 380;
  v8[1] = a2;
  v8[2] = a3;
  v6 = CChannel::SendCommand(this, v8, 0xCu);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 80LL))(v10);
  return v6;
}
