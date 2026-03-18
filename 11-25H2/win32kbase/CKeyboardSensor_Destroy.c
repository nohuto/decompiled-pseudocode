/*
 * XREFs of CKeyboardSensor_Destroy @ 0x14014B180
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDeviceAcceleration@@SAXPEAX@Z @ 0x14014B1E4 (--3CDeviceAcceleration@@SAXPEAX@Z.c)
 */

__int64 __fastcall CKeyboardSensor_Destroy(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rcx

  result = W32GetUserSessionState(a1, a2);
  if ( *(_QWORD *)(result + 12928) )
  {
    v6 = *(_QWORD **)(W32GetUserSessionState(v4, v3) + 12928);
    if ( v6 )
    {
      *v6 = &CRIMBase::`vftable';
      CDeviceAcceleration::operator delete(v6);
    }
    result = W32GetUserSessionState(v6, v5);
    *(_QWORD *)(result + 12928) = 0LL;
  }
  return result;
}
