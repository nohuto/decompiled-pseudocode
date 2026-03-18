/*
 * XREFs of CMouseSensor_Destroy @ 0x140214880
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCRIMBase@@UEAAPEAXI@Z @ 0x14014B150 (--_GCRIMBase@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall CMouseSensor_Destroy(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  CRIMBase *v6; // rcx

  result = W32GetUserSessionState(a1, a2);
  if ( *(_QWORD *)(result + 3096) )
  {
    v6 = *(CRIMBase **)(W32GetUserSessionState(v4, v3) + 3096);
    if ( v6 )
      CRIMBase::`scalar deleting destructor'(v6, 1);
    result = W32GetUserSessionState(v6, v5);
    *(_QWORD *)(result + 3096) = 0LL;
  }
  return result;
}
