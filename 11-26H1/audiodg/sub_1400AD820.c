/*
 * XREFs of sub_1400AD820 @ 0x1400AD820
 * Callers:
 *     sub_1400A2730 @ 0x1400A2730 (sub_1400A2730.c)
 * Callees:
 *     sub_1400AD4FC @ 0x1400AD4FC (sub_1400AD4FC.c)
 */

__int64 __fastcall sub_1400AD820(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  NTSTATUS v6; // eax
  signed int LastError; // eax
  _OWORD v9[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+50h] [rbp-18h]

  if ( ((a3 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    memset(v9, 0, sizeof(v9));
    LODWORD(v9[0]) = 3145736;
    v10 = 0LL;
    DWORD2(v10) = 1;
    v6 = sub_1400AD4FC(a1, v5, (__int64)v9, a4, a3);
    v4 = 0;
    if ( v6 < 0 || (v6 = HIDWORD(v10), v10 < 0) )
    {
      RtlSetLastWin32ErrorAndNtStatusFromNtStatus(v6);
      LastError = GetLastError();
      if ( LastError > 0 )
        return (unsigned __int16)LastError | 0x80070000;
      else
        return (unsigned int)LastError;
    }
  }
  else
  {
    return (unsigned int)-2147024890;
  }
  return v4;
}
