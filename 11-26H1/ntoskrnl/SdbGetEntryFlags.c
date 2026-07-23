/*
 * XREFs of SdbGetEntryFlags @ 0x140B4CAA0
 * Callers:
 *     SdbReadEntryInformation @ 0x1408886F8 (SdbReadEntryInformation.c)
 *     SdbpGetExeEntryFlags @ 0x14088A6B8 (SdbpGetExeEntryFlags.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     SdbpQueryAppCompatFlagsByExeID @ 0x140B32948 (SdbpQueryAppCompatFlagsByExeID.c)
 *     AslGuidToString @ 0x140B4CB74 (AslGuidToString.c)
 */

__int64 __fastcall SdbGetEntryFlags(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  _DWORD v6[4]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v7[80]; // [rsp+40h] [rbp-68h] BYREF

  *a2 = 0;
  if ( (int)AslGuidToString(v7, 39LL) >= 0 )
  {
    v6[0] = 0;
    if ( (int)SdbpQueryAppCompatFlagsByExeID(v3, (__int64)v7, 1u, v6) >= 0 )
      *a2 = v6[0];
    v6[0] = 0;
    if ( (int)SdbpQueryAppCompatFlagsByExeID(v4, (__int64)v7, 0, v6) >= 0 )
      *a2 |= v6[0];
    *a2 &= 0xFFFu;
  }
  else
  {
    AslLogCallPrintf(1LL, (__int64)"SdbGetEntryFlags");
  }
  return 1LL;
}
