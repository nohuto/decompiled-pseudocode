/*
 * XREFs of CMouseSensor_CreateInstance @ 0x1401B3630
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??0CMouseSensor@@IEAA@XZ @ 0x1401B3690 (--0CMouseSensor@@IEAA@XZ.c)
 */

CMouseSensor *__fastcall CMouseSensor_CreateInstance(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rbx
  CMouseSensor *v4; // rax
  CMouseSensor *result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  *(_QWORD *)(UserSessionState + 3096) = 0LL;
  v4 = (CMouseSensor *)Win32AllocPoolZInitImpl(256LL, 0x5B8uLL, 0x43486970u);
  if ( !v4 )
    return 0LL;
  result = CMouseSensor::CMouseSensor(v4);
  if ( !result )
    return 0LL;
  *(_QWORD *)(UserSessionState + 3096) = result;
  return result;
}
