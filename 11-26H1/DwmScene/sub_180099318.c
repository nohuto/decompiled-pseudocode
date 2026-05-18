/*
 * XREFs of sub_180099318 @ 0x180099318
 * Callers:
 *     sub_18009847C @ 0x18009847C (sub_18009847C.c)
 *     sub_180098508 @ 0x180098508 (sub_180098508.c)
 *     sub_18009A08C @ 0x18009A08C (sub_18009A08C.c)
 *     sub_18009A398 @ 0x18009A398 (sub_18009A398.c)
 *     sub_18009A468 @ 0x18009A468 (sub_18009A468.c)
 *     sub_18009A580 @ 0x18009A580 (sub_18009A580.c)
 *     sub_18009A710 @ 0x18009A710 (sub_18009A710.c)
 *     sub_18009AFF0 @ 0x18009AFF0 (sub_18009AFF0.c)
 *     sub_1800DE7C1 @ 0x1800DE7C1 (sub_1800DE7C1.c)
 *     sub_1800DE7D3 @ 0x1800DE7D3 (sub_1800DE7D3.c)
 *     sub_1800DE7EC @ 0x1800DE7EC (sub_1800DE7EC.c)
 *     sub_1800DE805 @ 0x1800DE805 (sub_1800DE805.c)
 *     sub_1800DE81E @ 0x1800DE81E (sub_1800DE81E.c)
 *     sub_1800DE891 @ 0x1800DE891 (sub_1800DE891.c)
 *     sub_1800DE8A7 @ 0x1800DE8A7 (sub_1800DE8A7.c)
 *     sub_1800DE8FA @ 0x1800DE8FA (sub_1800DE8FA.c)
 *     sub_1800DE910 @ 0x1800DE910 (sub_1800DE910.c)
 *     sub_1800DE929 @ 0x1800DE929 (sub_1800DE929.c)
 *     sub_1800DE95F @ 0x1800DE95F (sub_1800DE95F.c)
 *     sub_1800DE971 @ 0x1800DE971 (sub_1800DE971.c)
 *     sub_1800DE995 @ 0x1800DE995 (sub_1800DE995.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_18009980C @ 0x18009980C (sub_18009980C.c)
 */

__int64 __fastcall sub_180099318(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rcx

  result = sub_18009980C();
  v3 = a1[21];
  if ( v3 )
    result = sub_180010EC8(v3);
  v4 = a1[19];
  if ( v4 )
    result = sub_180010EC8(v4);
  v5 = a1[3];
  if ( v5 )
    result = sub_180010EC8(v5);
  v6 = (volatile signed __int32 *)a1[1];
  if ( v6 )
    return sub_180010F00(v6);
  return result;
}
