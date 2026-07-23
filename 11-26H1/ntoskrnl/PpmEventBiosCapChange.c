/*
 * XREFs of PpmEventBiosCapChange @ 0x140446470
 * Callers:
 *     PpmRegisterPerfCap @ 0x140445E10 (PpmRegisterPerfCap.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall PpmEventBiosCapChange(__int64 a1, int a2)
{
  bool v2; // zf
  const EVENT_DESCRIPTOR *v3; // rbx
  int *v4; // rax
  int v6; // [rsp+40h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-28h] BYREF
  int *v8; // [rsp+58h] [rbp-18h]
  __int64 v9; // [rsp+60h] [rbp-10h]
  int v10; // [rsp+88h] [rbp+18h] BYREF

  v10 = a2;
  v2 = *(_BYTE *)(a1 + 68) == 0;
  v6 = 0;
  if ( v2 )
  {
    v3 = (const EVENT_DESCRIPTOR *)PPM_ETW_BIOS_CAP_CHANGE_HV;
    v6 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 20LL);
    *(_QWORD *)&UserData.Size = 4LL;
  }
  else
  {
    v3 = &PPM_ETW_BIOS_CAP_CHANGE;
    LOWORD(v6) = *(unsigned __int8 *)(a1 - 35056);
    BYTE2(v6) = *(_BYTE *)(a1 - 35055);
    *(_QWORD *)&UserData.Size = 3LL;
  }
  v4 = &v6;
  UserData.Ptr = (ULONGLONG)&v6;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v4) = EtwEventEnabled(PpmEtwHandle, v3);
    if ( (_BYTE)v4 )
    {
      v8 = &v10;
      v9 = 4LL;
      LOBYTE(v4) = EtwWriteEx(PpmEtwHandle, v3, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
  return (char)v4;
}
