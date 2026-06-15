/*
 * XREFs of sub_1400AD8B8 @ 0x1400AD8B8
 * Callers:
 *     sub_1400381D8 @ 0x1400381D8 (sub_1400381D8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400AD8B8(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  NTSTATUS v3; // eax
  signed int LastError; // eax
  _DWORD v6[8]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v7; // [rsp+60h] [rbp-18h]
  __int64 v8; // [rsp+80h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v2 = 0;
  memset(v6, 0, sizeof(v6));
  v6[0] = 3145736;
  v7 = 0LL;
  DWORD2(v7) = 2;
  if ( v1 )
  {
    v8 = 48LL;
    v3 = NtAlpcSendWaitReceivePort(v1, 0x20000LL, v6, 0LL, v6, &v8, 0LL, 0LL);
    if ( v3 < 0 )
    {
      RtlSetLastWin32ErrorAndNtStatusFromNtStatus(v3);
      LastError = GetLastError();
      if ( LastError > 0 )
        return (unsigned __int16)LastError | 0x80070000;
      return (unsigned int)LastError;
    }
  }
  return v2;
}
