/*
 * XREFs of rimCountContactsToDeliverWithFrame @ 0x1400732B8
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x140072D40 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     RIMCmActiveContactsBeginNoButton @ 0x140072854 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsNext @ 0x140074BA4 (RIMCmActiveContactsNext.c)
 *     RIMCmGetButtonContact @ 0x1400FA6B8 (RIMCmGetButtonContact.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimCountContactsToDeliverWithFrame(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 **v6; // rax
  _QWORD *v7; // rsi
  __int64 *v8; // xmm1_8
  __int64 *v9; // rbx
  __int64 result; // rax
  int v11; // edx
  __int128 v12; // [rsp+28h] [rbp-70h] BYREF
  __int64 *v13; // [rsp+38h] [rbp-60h]
  __int64 *v14; // [rsp+40h] [rbp-58h] BYREF

  *a2 = 0;
  *a3 = 0;
  v6 = RIMCmActiveContactsBeginNoButton(&v14, a1);
  v7 = (_QWORD *)(a1 + 1000);
  v8 = v6[2];
  v12 = *(_OWORD *)v6;
  v13 = v8;
  while ( 1 )
  {
    if ( !*(_DWORD *)(a1 + 1008) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 470LL);
    if ( !*v7 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 64LL);
    if ( !*(_DWORD *)(a1 + 1008) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 65LL);
    v9 = v13;
    result = *(_QWORD *)(a1 + 1000) + 16LL * *(unsigned int *)(a1 + 1008);
    if ( DWORD2(v12) == *(_DWORD *)(a1 + 1008) && v13 == (__int64 *)result && (_QWORD *)v12 == v7 )
      break;
    if ( (v13[2] & 2) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 601LL);
    if ( (v9[2] & 4) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 602LL);
    if ( (*((_DWORD *)v9 + 587) & 1) != 0 )
      ++*a2;
    RIMCmActiveContactsNext(a1, &v12);
  }
  if ( !*a2 )
  {
    result = RIMCmGetButtonContact(a1);
    if ( result )
    {
      v11 = *(_DWORD *)(result + 32);
      if ( (v11 & 2) != 0 )
      {
        result = *(unsigned int *)(result + 2364);
        if ( (result & 1) != 0 )
        {
          if ( (v11 & 4) == 0 )
            result = MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 623LL);
          *a2 = 1;
          *a3 = 1;
        }
      }
    }
  }
  return result;
}
