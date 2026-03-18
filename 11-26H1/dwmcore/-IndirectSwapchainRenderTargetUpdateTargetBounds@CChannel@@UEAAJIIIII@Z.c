/*
 * XREFs of ?IndirectSwapchainRenderTargetUpdateTargetBounds@CChannel@@UEAAJIIIII@Z @ 0x180119A10
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180117660 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18011859C (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::IndirectSwapchainRenderTargetUpdateTargetBounds(
        CChannel *this,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v6; // r14
  unsigned int v11; // ebx
  _DWORD v13[10]; // [rsp+20h] [rbp-28h] BYREF

  v6 = *((_QWORD *)this + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 56LL))(v6);
  CChannel::CheckHandle((__int64)this, a2, 62);
  v13[0] = 101;
  v13[4] = a5;
  v13[5] = a6;
  v13[1] = a2;
  v13[2] = a3;
  v13[3] = a4;
  v11 = CChannel::SendCommand(this, v13, 0x18u);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 80LL))(v6);
  return v11;
}
