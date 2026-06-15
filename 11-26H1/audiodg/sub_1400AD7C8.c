/*
 * XREFs of sub_1400AD7C8 @ 0x1400AD7C8
 * Callers:
 *     sub_1400A2730 @ 0x1400A2730 (sub_1400A2730.c)
 * Callees:
 *     sub_1400AD610 @ 0x1400AD610 (sub_1400AD610.c)
 */

__int64 __fastcall sub_1400AD7C8(__int64 a1, const WCHAR *a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  signed int LastError; // eax

  v2 = 0;
  if ( *(_QWORD *)(a1 + 8) )
  {
    return 1;
  }
  else
  {
    v3 = sub_1400AD610(a1, a2, (_QWORD *)(a1 + 8));
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
