/*
 * XREFs of KasaniSendTelemetryDriver @ 0x1405E0400
 * Callers:
 *     KasanDriverLoadImageInternal @ 0x140525CA0 (KasanDriverLoadImageInternal.c)
 *     KasanInitSystem @ 0x140CCDE10 (KasanInitSystem.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall KasaniSendTelemetryDriver(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 v2; // [rsp+48h] [rbp-80h] BYREF
  EVENT_DESCRIPTOR v3; // [rsp+50h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-68h] BYREF
  __int16 *v5; // [rsp+70h] [rbp-58h]
  int v6; // [rsp+78h] [rbp-50h]
  int v7; // [rsp+7Ch] [rbp-4Ch]
  __int64 *v8; // [rsp+80h] [rbp-48h]
  __int64 v9; // [rsp+88h] [rbp-40h]
  _DWORD *v10; // [rsp+90h] [rbp-38h]
  __int64 v11; // [rsp+98h] [rbp-30h]
  __int64 v12; // [rsp+A0h] [rbp-28h]
  _DWORD v13[2]; // [rsp+A8h] [rbp-20h] BYREF

  if ( (unsigned int)dword_140E06F10 > 5 && (qword_140E06F20 & 0x400000000000LL) != 0 )
  {
    result = 0;
    if ( (qword_140E06F28 & 0x400000000000LL) == qword_140E06F28 )
    {
      v9 = 8LL;
      v8 = &v2;
      v13[1] = 0;
      v10 = v13;
      v12 = *(_QWORD *)(a1 + 96);
      v13[0] = *(unsigned __int16 *)(a1 + 88);
      *(_DWORD *)&v3.Level = 5;
      UserData.Ptr = (ULONGLONG)off_140E06F18;
      v11 = 2LL;
      *(_DWORD *)&v3.Id = 184549376;
      v3.Keyword = 0x400000000000LL;
      v2 = 0x2000000LL;
      UserData.Size = *(unsigned __int16 *)off_140E06F18;
      UserData.Reserved = 2;
      v5 = &word_140048D5E;
      v6 = 43;
      v7 = 1;
      return EtwWriteEx(qword_140E06F30, &v3, 0LL, 0, 0LL, 0LL, 5u, &UserData);
    }
  }
  return result;
}
