/*
 * XREFs of ExpWin32CloseProcedure @ 0x1409FC6C0
 * Callers:
 *     <none>
 * Callees:
 *     PsSessionGetWin32Callouts @ 0x140481BAC (PsSessionGetWin32Callouts.c)
 *     PspUpdateCalloutParameters @ 0x140518394 (PspUpdateCalloutParameters.c)
 *     ExCallCallBack @ 0x1409FCA28 (ExCallCallBack.c)
 */

POBJECT_TYPE *__fastcall ExpWin32CloseProcedure(__int64 a1, int *a2, int a3, int a4)
{
  unsigned __int64 v4; // r11
  POBJECT_TYPE *result; // rax
  int v6; // r10d
  _RTL_RUN_ONCE *Win32Callouts; // rax
  __int64 v8; // r10
  _QWORD v9[4]; // [rsp+30h] [rbp-30h] BYREF
  int v10; // [rsp+50h] [rbp-10h]
  int v11; // [rsp+54h] [rbp-Ch]
  int v12; // [rsp+70h] [rbp+10h] BYREF

  v12 = *a2;
  v4 = *((unsigned __int8 *)a2 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a2 - 48) >> 8);
  v9[0] = 0LL;
  v9[1] = 0LL;
  v9[2] = a1;
  v9[3] = a2;
  v10 = a3;
  result = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v4];
  v11 = a4;
  if ( result == (POBJECT_TYPE *)ExActivationObjectType )
  {
    v6 = 39;
  }
  else if ( result == (POBJECT_TYPE *)ExCoreMessagingObjectType )
  {
    v6 = 35;
  }
  else if ( result == (POBJECT_TYPE *)ExRawInputManagerObjectType )
  {
    v6 = 29;
  }
  else if ( result == (POBJECT_TYPE *)ExCompositionObjectType )
  {
    v6 = 20;
  }
  else if ( result == ExDesktopObjectType )
  {
    v6 = 10;
  }
  else
  {
    if ( result != (POBJECT_TYPE *)ExWindowStationObjectType )
      return result;
    v6 = 13;
  }
  result = (POBJECT_TYPE *)PspUpdateCalloutParameters(v6, (__int64)v9, 1, (__int64)&v12);
  if ( (_DWORD)result )
  {
    Win32Callouts = PsSessionGetWin32Callouts();
    return (POBJECT_TYPE *)ExCallCallBack(Win32Callouts, v8, v9);
  }
  return result;
}
