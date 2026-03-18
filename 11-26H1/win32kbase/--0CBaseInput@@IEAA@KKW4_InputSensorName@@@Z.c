/*
 * XREFs of ??0CBaseInput@@IEAA@KKW4_InputSensorName@@@Z @ 0x1401B377C
 * Callers:
 *     CHidInput_CreateInstance @ 0x140190FC0 (CHidInput_CreateInstance.c)
 *     ?CreateInstance@CKeyboardSensor@@SAJPEAPEAV1@@Z @ 0x140191A3C (-CreateInstance@CKeyboardSensor@@SAJPEAPEAV1@@Z.c)
 *     ??0CMouseSensor@@IEAA@XZ @ 0x1401B3690 (--0CMouseSensor@@IEAA@XZ.c)
 * Callees:
 *     ??0CRIMBase@@IEAA@K@Z @ 0x140110AC8 (--0CRIMBase@@IEAA@K@Z.c)
 *     ??0SensorLocality@CBaseInput@@QEAA@XZ @ 0x1401B3874 (--0SensorLocality@CBaseInput@@QEAA@XZ.c)
 */

__int64 __fastcall CBaseInput::CBaseInput(__int64 a1, int a2, int a3, int a4)
{
  __int64 v4; // rdi
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  __int64 UserSessionState; // rax
  int v17; // edx
  int v18; // r8d

  v4 = a4;
  CRIMBase::CRIMBase((CRIMBase *)a1, a2);
  *(_QWORD *)a1 = &CBaseInput::`vftable';
  *(_QWORD *)(a1 + 1232) = W32GetUserSessionState(v8, v7, v9) + 3064;
  *(_QWORD *)(a1 + 1240) = W32GetUserSessionState(v11, v10, v12) + 3072;
  UserSessionState = W32GetUserSessionState(v14, v13, v15);
  *(_QWORD *)(a1 + 1256) = 0LL;
  *(_QWORD *)(a1 + 1248) = UserSessionState + 3080;
  *(_QWORD *)(a1 + 1280) = &CBaseInput::ivOnChildPartitionConnected;
  *(_QWORD *)(a1 + 1288) = CBaseInput::ivOnPacketReceived;
  *(_QWORD *)(a1 + 1296) = CBaseInput::ivPreReceiveCallback;
  *(_QWORD *)(a1 + 1264) = v4;
  *(_DWORD *)(a1 + 1272) = a3;
  *(_DWORD *)(a1 + 1304) = 0;
  *(_BYTE *)(a1 + 1308) = 0;
  *(_QWORD *)(W32GetUserSessionState(0, v17, v18) + 8LL * *(unsigned int *)(a1 + 1272) + 19488) = a1 + 1264;
  CBaseInput::SensorLocality::SensorLocality((CBaseInput::SensorLocality *)(a1 + 1312));
  return a1;
}
