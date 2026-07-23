/*
 * XREFs of PopDiagTraceCoolingExtensionPassiveUpdate @ 0x140B3E344
 * Callers:
 *     PopPropogateCoolingChange @ 0x140424D08 (PopPropogateCoolingChange.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceCoolingExtensionPassiveUpdate(__int64 a1)
{
  char v2; // [rsp+30h] [rbp-48h] BYREF
  __int64 v3; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v5; // [rsp+50h] [rbp-28h]
  __int64 v6; // [rsp+58h] [rbp-20h]

  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COOLING_EXTENSION_PASSIVE_UPDATE) )
    {
      v2 = *(_BYTE *)(a1 + 66);
      v3 = a1;
      UserData.Ptr = (ULONGLONG)&v2;
      v5 = &v3;
      *(_QWORD *)&UserData.Size = 1LL;
      v6 = 8LL;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_COOLING_EXTENSION_PASSIVE_UPDATE, 0LL, 2u, &UserData);
    }
  }
}
