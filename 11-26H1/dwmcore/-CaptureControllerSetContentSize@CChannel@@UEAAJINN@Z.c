/*
 * XREFs of ?CaptureControllerSetContentSize@CChannel@@UEAAJINN@Z @ 0x180119AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180117660 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18011859C (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::CaptureControllerSetContentSize(CChannel *this, unsigned int a2, double a3, double a4)
{
  __int64 v4; // rsi
  float v7; // xmm0_4
  float v8; // xmm1_4
  unsigned int v9; // ebx
  _DWORD v11[4]; // [rsp+20h] [rbp-38h] BYREF

  v4 = *((_QWORD *)this + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
  CChannel::CheckHandle((__int64)this, a2, 17);
  v11[0] = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  v11[1] = a2;
  v7 = a3;
  v8 = a4;
  *(float *)&v11[2] = v7;
  *(float *)&v11[3] = v8;
  v9 = CChannel::SendCommand(this, v11, 0x10u);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 80LL))(v4);
  return v9;
}
