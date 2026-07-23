/*
 * XREFs of RtlTimeToElapsedTimeFields @ 0x1800DB530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlTimeToElapsedTimeFields(PLARGE_INTEGER Time, PTIME_FIELDS TimeFields)
{
  __int64 QuadPart; // r8
  __int64 v4; // rcx
  signed __int64 v5; // rcx
  signed __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned int v8; // ecx
  unsigned int v9; // r9d

  QuadPart = Time->QuadPart;
  v4 = -Time->QuadPart;
  if ( v4 < 0 )
    v4 = QuadPart;
  v5 = (unsigned __int64)(((unsigned __int64)v4 * (unsigned __int128)(unsigned __int64)Magic10000) >> 64) >> 13;
  if ( QuadPart < 0 )
    v5 = -v5;
  v6 = -v5;
  if ( v5 > 0 )
    v6 = v5;
  v7 = (unsigned __int64)(((unsigned __int64)v6 * (unsigned __int128)(unsigned __int64)Magic86400000) >> 64) >> 26;
  if ( v5 < 0 )
    v7 = -(__int64)v7;
  *(_DWORD *)&TimeFields->Year = 0;
  TimeFields->Day = v7;
  v8 = v5 - 86400000 * v7;
  v9 = v8 / 0x3E8 / 0x3C;
  TimeFields->Hour = v9 / 0x3C;
  TimeFields->Minute = v9 % 0x3C;
  TimeFields->Second = v8 / 0x3E8 % 0x3C;
  TimeFields->Milliseconds = v8 % 0x3E8;
}
