/*
 * XREFs of CKeyboardSensor_Destroy @ 0x14016F680
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDeviceAcceleration@@SAXPEAX@Z @ 0x14016F6E4 (--3CDeviceAcceleration@@SAXPEAX@Z.c)
 */

__int64 __fastcall CKeyboardSensor_Destroy(int a1, int a2, int a3)
{
  __int64 result; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // edx
  _QWORD *v8; // rcx
  int v9; // r8d

  result = W32GetUserSessionState(a1, a2, a3);
  if ( *(_QWORD *)(result + 12920) )
  {
    v8 = *(_QWORD **)(W32GetUserSessionState(v5, v4, v6) + 12920);
    if ( v8 )
    {
      *v8 = &CRIMBase::`vftable';
      CDeviceAcceleration::operator delete(v8);
    }
    result = W32GetUserSessionState((_DWORD)v8, v7, v9);
    *(_QWORD *)(result + 12920) = 0LL;
  }
  return result;
}
