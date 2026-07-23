/*
 * XREFs of TimeToDaysAndFraction @ 0x14047EB70
 * Callers:
 *     RtlTimeToElapsedTimeFields @ 0x140806AB0 (RtlTimeToElapsedTimeFields.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TimeToDaysAndFraction(__int64 *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v3; // r9
  __int64 v5; // rcx
  signed __int64 v6; // rcx
  signed __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  __int64 result; // rax

  v3 = *a1;
  v5 = -*a1;
  if ( v5 < 0 )
    v5 = v3;
  v6 = (unsigned __int64)(((unsigned __int64)v5 * (unsigned __int128)(unsigned __int64)Magic10000) >> 64) >> 13;
  if ( v3 < 0 )
    v6 = -v6;
  v7 = -v6;
  if ( v6 > 0 )
    v7 = v6;
  v8 = (unsigned __int64)(((unsigned __int64)v7 * (unsigned __int128)(unsigned __int64)Magic86400000) >> 64) >> 26;
  if ( v6 < 0 )
    v8 = -(__int64)v8;
  result = (unsigned int)(86400000 * v8);
  *a2 = v8;
  *a3 = v6 - result;
  return result;
}
