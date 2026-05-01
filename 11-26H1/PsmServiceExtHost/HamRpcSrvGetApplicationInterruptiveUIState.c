/*
 * XREFs of HamRpcSrvGetApplicationInterruptiveUIState @ 0x1800151B0
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvGetApplicationInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x180015200 (-HamSrvGetApplicationInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 */

int __fastcall HamRpcSrvGetApplicationInterruptiveUIState(
        __int64 a1,
        const unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        _BYTE *a6)
{
  int result; // eax
  unsigned int v7[6]; // [rsp+30h] [rbp-18h] BYREF

  v7[0] = 0;
  result = HamSrvGetApplicationInterruptiveUIState(
             (struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 2360),
             a2,
             a3,
             a4,
             a5,
             v7);
  if ( result >= 0 )
  {
    *a6 = v7[0];
    return 0;
  }
  return result;
}
