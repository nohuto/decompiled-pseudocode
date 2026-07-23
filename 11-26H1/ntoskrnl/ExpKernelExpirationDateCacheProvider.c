/*
 * XREFs of ExpKernelExpirationDateCacheProvider @ 0x14083EBE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlTimeToTimeFields @ 0x140449E50 (RtlTimeToTimeFields.c)
 *     SeCodeIntegrityGetBuildExpiryTime @ 0x140B500A0 (SeCodeIntegrityGetBuildExpiryTime.c)
 */

__int64 __fastcall ExpKernelExpirationDateCacheProvider(
        __int64 a1,
        _DWORD *a2,
        _OWORD *a3,
        unsigned int a4,
        _DWORD *a5,
        _BYTE *a6)
{
  int BuildExpiryTime; // ebx
  __int128 v9; // [rsp+20h] [rbp-30h]
  _TIME_FIELDS TimeFields; // [rsp+30h] [rbp-20h] BYREF
  LARGE_INTEGER Time; // [rsp+40h] [rbp-10h] BYREF

  HIDWORD(v9) = 0;
  Time.QuadPart = 0LL;
  *a5 = 16;
  TimeFields = 0LL;
  if ( a4 >= 0x10 )
  {
    if ( a2 )
      *a2 = 3;
    BuildExpiryTime = SeCodeIntegrityGetBuildExpiryTime(&Time);
    if ( BuildExpiryTime >= 0 )
    {
      RtlTimeToTimeFields(&Time, &TimeFields);
      LOWORD(v9) = TimeFields.Year;
      BYTE2(v9) = TimeFields.Month;
      BYTE11(v9) = HIBYTE(TimeFields.Second);
      *(_QWORD *)((char *)&v9 + 3) = *(_QWORD *)((char *)&TimeFields.Month + 1);
      *a3 = v9;
      *a6 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return (unsigned int)BuildExpiryTime;
}
