/*
 * XREFs of CMouseSensor_CreateInstance @ 0x14019AFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??0CMouseSensor@@IEAA@XZ @ 0x140158E10 (--0CMouseSensor@@IEAA@XZ.c)
 */

CMouseSensor *__fastcall CMouseSensor_CreateInstance(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  CMouseSensor *v3; // rax
  CMouseSensor *result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  *(_QWORD *)(UserSessionState + 3096) = 0LL;
  v3 = (CMouseSensor *)Win32AllocPoolZInitImpl(256LL, 0x5C0uLL, 0x43486970u);
  if ( !v3 )
    return 0LL;
  result = CMouseSensor::CMouseSensor(v3);
  if ( !result )
    return 0LL;
  *(_QWORD *)(UserSessionState + 3096) = result;
  return result;
}
