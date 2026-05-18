/*
 * XREFs of sub_18006D610 @ 0x18006D610
 * Callers:
 *     sub_18007ACE8 @ 0x18007ACE8 (sub_18007ACE8.c)
 *     sub_18007BE98 @ 0x18007BE98 (sub_18007BE98.c)
 *     sub_18008FD60 @ 0x18008FD60 (sub_18008FD60.c)
 *     sub_1800DD552 @ 0x1800DD552 (sub_1800DD552.c)
 *     sub_1800DE0C7 @ 0x1800DE0C7 (sub_1800DE0C7.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 */

__int64 __fastcall sub_18006D610(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    result = sub_180010EC8(v2);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
    return sub_180010EC8(v4);
  return result;
}
