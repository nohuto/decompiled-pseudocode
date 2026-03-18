/*
 * XREFs of ?InitializeSensorGlobals@@YAJXZ @ 0x14024B008
 * Callers:
 *     ?InitializeInputGlobals@@YAJXZ @ 0x1401BCD80 (-InitializeInputGlobals@@YAJXZ.c)
 * Callees:
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall InitializeSensorGlobals(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  _QWORD Src[18]; // [rsp+20h] [rbp-39h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  Src[16] = 2LL;
  Src[2] = 0LL;
  Src[3] = 0LL;
  Src[0] = CMouseSensor_CreateInstance;
  Src[1] = CMouseSensor_Destroy;
  Src[5] = "Mouse Sensor";
  Src[6] = CKeyboardSensor_CreateInstance;
  Src[7] = CKeyboardSensor_Destroy;
  Src[11] = "Keyboard Sensor";
  Src[12] = CHidInput_CreateInstance;
  Src[13] = CHidInput_Destroy;
  Src[17] = "Hid Sensor";
  *(_DWORD *)(UserSessionState + 3088) = 1;
  Src[4] = 0LL;
  Src[8] = 0LL;
  Src[9] = 0LL;
  Src[10] = 1LL;
  Src[14] = 0LL;
  Src[15] = 0LL;
  memmove((void *)(UserSessionState + 3112), Src, 0x90uLL);
  return 0LL;
}
