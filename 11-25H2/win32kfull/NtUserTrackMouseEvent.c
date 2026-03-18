/*
 * XREFs of NtUserTrackMouseEvent @ 0x1401A5BD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     TrackMouseEvent @ 0x1401A5CD4 (TrackMouseEvent.c)
 *     QueryTrackMouseEvent @ 0x1401A5E58 (QueryTrackMouseEvent.c)
 */

__int64 __fastcall NtUserTrackMouseEvent(__m128i *a1)
{
  __m128i *v1; // rcx
  __int64 v2; // rcx
  int v3; // ebx
  int v5; // [rsp+20h] [rbp-58h]
  __m128i v6; // [rsp+38h] [rbp-40h] BYREF
  __int64 v7; // [rsp+48h] [rbp-30h]

  v6 = 0LL;
  v7 = 0LL;
  EnterCrit(0LL, 0LL);
  v1 = (__m128i *)MmUserProbeAddress;
  if ( (unsigned __int64)a1 < MmUserProbeAddress )
    v1 = a1;
  v6 = *v1;
  v7 = v1[1].m128i_i64[0];
  if ( _mm_cvtsi128_si32(v6) == 24 )
  {
    if ( (v6.m128i_i32[1] & 0x3FFFFFEC) != 0 )
    {
      UserSetLastError(1004);
      v3 = 0;
    }
    else if ( (v6.m128i_i32[1] & 0x40000000) != 0 )
    {
      v5 = QueryTrackMouseEvent(&v6);
      *a1 = v6;
      a1[1].m128i_i64[0] = v7;
      v3 = v5;
    }
    else
    {
      v3 = TrackMouseEvent(&v6);
    }
  }
  else
  {
    UserSetLastError(87);
    v3 = 0;
  }
  UserSessionSwitchLeaveCrit(v2);
  return v3;
}
