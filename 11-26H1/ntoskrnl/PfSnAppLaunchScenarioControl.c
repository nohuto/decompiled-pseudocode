/*
 * XREFs of PfSnAppLaunchScenarioControl @ 0x1407CA320
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x140ACC2CC (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     PfSnBeginAppLaunch @ 0x1409D1320 (PfSnBeginAppLaunch.c)
 */

__int64 __fastcall PfSnAppLaunchScenarioControl(__int64 a1)
{
  int v1; // esi
  bool v2; // zf
  unsigned int v3; // ebx
  int v4; // eax
  PVOID v5; // rdi
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  _OWORD v8[3]; // [rsp+48h] [rbp-40h] BYREF

  Object = 0LL;
  v1 = 0;
  v2 = *(_DWORD *)a1 == 1;
  memset(v8, 0, sizeof(v8));
  if ( v2 )
  {
    if ( *(_DWORD *)(a1 + 4) )
    {
      v4 = ObpReferenceObjectByHandleWithTag(*(_QWORD *)(a1 + 8), 0x73576650u, (__int64)&Object, 0LL, 0LL);
      v5 = Object;
      v3 = v4;
      if ( v4 >= 0 )
      {
        if ( KeGetCurrentThread()->ApcState.Process != Object )
        {
          v1 = 1;
          KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v8);
        }
        PfSnBeginAppLaunch(v5, 0LL, 17LL);
        v3 = 0;
        if ( v1 )
          KiUnstackDetachProcess((__int64)v8, 0);
      }
      if ( v5 )
        ObfDereferenceObjectWithTag(v5, 0x73576650u);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741735;
  }
  return v3;
}
