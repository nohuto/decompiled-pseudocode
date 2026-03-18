/*
 * XREFs of CMouseSensor_Destroy @ 0x14021A430
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCRIMBase@@UEAAPEAXI@Z @ 0x14016F650 (--_GCRIMBase@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall CMouseSensor_Destroy(int a1, int a2, int a3)
{
  __int64 result; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // edx
  CRIMBase *v8; // rcx
  int v9; // r8d

  result = W32GetUserSessionState(a1, a2, a3);
  if ( *(_QWORD *)(result + 3096) )
  {
    v8 = *(CRIMBase **)(W32GetUserSessionState(v5, v4, v6) + 3096);
    if ( v8 )
      CRIMBase::`scalar deleting destructor'(v8, 1);
    result = W32GetUserSessionState((_DWORD)v8, v7, v9);
    *(_QWORD *)(result + 3096) = 0LL;
  }
  return result;
}
