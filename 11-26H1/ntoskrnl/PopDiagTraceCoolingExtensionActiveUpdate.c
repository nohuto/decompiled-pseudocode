/*
 * XREFs of PopDiagTraceCoolingExtensionActiveUpdate @ 0x1407D63AC
 * Callers:
 *     PopPropogateCoolingChange @ 0x140424D08 (PopPropogateCoolingChange.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceCoolingExtensionActiveUpdate(__int64 a1)
{
  bool v2; // zf
  BOOL v3; // [rsp+30h] [rbp-48h] BYREF
  __int64 v4; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v6; // [rsp+50h] [rbp-28h]
  __int64 v7; // [rsp+58h] [rbp-20h]

  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COOLING_EXTENSION_ACTIVE_UPDATE) )
    {
      v4 = a1;
      v2 = *(_BYTE *)(a1 + 65) == 0;
      *(_QWORD *)&UserData.Size = 4LL;
      v7 = 8LL;
      v3 = !v2;
      UserData.Ptr = (ULONGLONG)&v3;
      v6 = &v4;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_COOLING_EXTENSION_ACTIVE_UPDATE, 0LL, 2u, &UserData);
    }
  }
}
