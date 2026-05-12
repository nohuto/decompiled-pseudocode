/*
 * XREFs of ParseNamedData @ 0x140136FDC
 * Callers:
 *     ParseToken @ 0x1401375C4 (ParseToken.c)
 * Callees:
 *     WPP_SF_d @ 0x14005C17C (WPP_SF_d.c)
 *     ParseToken @ 0x1401375C4 (ParseToken.c)
 *     PeekTokenInfo @ 0x140137990 (PeekTokenInfo.c)
 *     WPP_SF_Dd @ 0x140137C1C (WPP_SF_Dd.c)
 */

__int64 __fastcall ParseNamedData(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v5; // r9d
  __int64 v6; // r8
  unsigned __int8 v7; // [rsp+48h] [rbp+10h] BYREF
  int v8; // [rsp+50h] [rbp+18h] BYREF

  *(_DWORD *)(a2 + 12) = 0;
  result = ParseToken(a1, a2 + 16);
  if ( (int)result >= 0 )
  {
    ++*(_DWORD *)(a2 + 12);
    v5 = *(_DWORD *)(*(_QWORD *)(a2 + 16) + 8LL);
    if ( v5 < 7 || v5 > 17 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x22u,
          (__int64)&WPP_d27db7d0d3983550ea60457830c64ea4_Traceguids,
          v5);
      return 3221225861LL;
    }
    result = ParseToken(a1, *(_QWORD *)(a2 + 16));
    if ( (int)result >= 0 )
    {
      ++*(_DWORD *)(a2 + 12);
      v7 = 0;
      v8 = 0;
      result = PeekTokenInfo(a1, &v7, &v8);
      if ( (int)result >= 0 )
      {
        if ( v7 == 0xF3 )
        {
          ++*(_DWORD *)(a1 + 12);
          return result;
        }
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          WPP_SF_Dd(WPP_GLOBAL_Control->AttachedDevice, 35LL, v6, v7, v8);
        return 3221225861LL;
      }
    }
  }
  return result;
}
