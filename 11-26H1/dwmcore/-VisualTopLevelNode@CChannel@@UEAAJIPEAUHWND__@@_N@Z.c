/*
 * XREFs of ?VisualTopLevelNode@CChannel@@UEAAJIPEAUHWND__@@_N@Z @ 0x180117420
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180117660 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18011859C (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::VisualTopLevelNode(CChannel *this, unsigned int a2, HWND a3, unsigned __int8 a4)
{
  __int64 v4; // r14
  unsigned int v9; // ebx
  _DWORD v11[2]; // [rsp+20h] [rbp-28h] BYREF
  HWND v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+30h] [rbp-18h]
  int v14; // [rsp+34h] [rbp-14h]

  v4 = *((_QWORD *)this + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
  CChannel::CheckHandle(this, a2, 156LL);
  v11[0] = 324;
  v14 = 0;
  v11[1] = a2;
  v12 = a3;
  v13 = a4;
  v9 = CChannel::SendCommand(this, v11, 0x18u);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 80LL))(v4);
  return v9;
}
