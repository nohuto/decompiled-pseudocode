/*
 * XREFs of ExpWin32DeleteProcedure @ 0x1409FC2D0
 * Callers:
 *     <none>
 * Callees:
 *     PsSessionGetWin32Callouts @ 0x140481BAC (PsSessionGetWin32Callouts.c)
 *     PspUpdateCalloutParameters @ 0x140518394 (PspUpdateCalloutParameters.c)
 *     ExCallCallBack @ 0x1409FCA28 (ExCallCallBack.c)
 *     PsInvokeWin32Callout @ 0x1409FCB60 (PsInvokeWin32Callout.c)
 */

POBJECT_TYPE *__fastcall ExpWin32DeleteProcedure(int *a1)
{
  unsigned __int64 v1; // r8
  POBJECT_TYPE *result; // rax
  int v3; // r10d
  _RTL_RUN_ONCE *Win32Callouts; // rax
  __int64 v5; // r10
  _QWORD v6[4]; // [rsp+30h] [rbp-20h] BYREF
  int v7; // [rsp+60h] [rbp+10h] BYREF

  v7 = *a1;
  v1 = *((unsigned __int8 *)a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a1 - 48) >> 8);
  v6[0] = 0LL;
  v6[1] = 0LL;
  v6[2] = a1;
  result = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v1];
  if ( result == (POBJECT_TYPE *)ExActivationObjectType )
  {
    v3 = 40;
    goto LABEL_6;
  }
  if ( result == (POBJECT_TYPE *)ExCoreMessagingObjectType )
  {
    v3 = 36;
    goto LABEL_6;
  }
  if ( result == (POBJECT_TYPE *)ExRawInputManagerObjectType )
  {
    v3 = 30;
    goto LABEL_6;
  }
  if ( result == (POBJECT_TYPE *)ExCompositionObjectType )
  {
    v3 = 21;
    goto LABEL_6;
  }
  if ( result == ExDesktopObjectType )
    return (POBJECT_TYPE *)PsInvokeWin32Callout(11LL, v6, 1LL, &v7);
  if ( result == (POBJECT_TYPE *)ExWindowStationObjectType )
  {
    v3 = 14;
LABEL_6:
    result = (POBJECT_TYPE *)PspUpdateCalloutParameters(v3, (__int64)v6, 1, (__int64)&v7);
    if ( (_DWORD)result )
    {
      Win32Callouts = PsSessionGetWin32Callouts();
      return (POBJECT_TYPE *)ExCallCallBack(Win32Callouts, v5, v6);
    }
  }
  return result;
}
