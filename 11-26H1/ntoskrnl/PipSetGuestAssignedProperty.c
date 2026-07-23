/*
 * XREFs of PipSetGuestAssignedProperty @ 0x1407B7C1C
 * Callers:
 *     PiUpdateGuestAssignedState @ 0x1409B0A78 (PiUpdateGuestAssignedState.c)
 * Callees:
 *     _PnpSetObjectProperty @ 0x140A19100 (_PnpSetObjectProperty.c)
 */

__int64 __fastcall PipSetGuestAssignedProperty(__int64 a1, char a2)
{
  unsigned int v2; // ebx
  bool v3; // zf
  __int64 v4; // rdx
  char v6; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0;
  v3 = a2 == 0;
  v4 = *(_QWORD *)(a1 + 48);
  if ( v3 )
  {
    PnpSetObjectProperty(PiPnpRtlCtx, v4, 1, 0LL, (__int64)DEVPKEY_Device_AssignedToGuest, 0, 0LL, 0, 0);
  }
  else
  {
    v6 = -1;
    return (unsigned int)PnpSetObjectProperty(
                           PiPnpRtlCtx,
                           v4,
                           1,
                           0LL,
                           (__int64)DEVPKEY_Device_AssignedToGuest,
                           17,
                           (__int64)&v6,
                           1,
                           0);
  }
  return v2;
}
