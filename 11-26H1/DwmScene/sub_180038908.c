/*
 * XREFs of sub_180038908 @ 0x180038908
 * Callers:
 *     sub_180031258 @ 0x180031258 (sub_180031258.c)
 *     sub_180037410 @ 0x180037410 (sub_180037410.c)
 *     sub_18003F4C4 @ 0x18003F4C4 (sub_18003F4C4.c)
 *     sub_18003F8DC @ 0x18003F8DC (sub_18003F8DC.c)
 *     sub_1800407E0 @ 0x1800407E0 (sub_1800407E0.c)
 *     sub_180040D64 @ 0x180040D64 (sub_180040D64.c)
 *     sub_180040F4C @ 0x180040F4C (sub_180040F4C.c)
 *     sub_1800414D4 @ 0x1800414D4 (sub_1800414D4.c)
 *     sub_18006FB1C @ 0x18006FB1C (sub_18006FB1C.c)
 *     sub_18006FB60 @ 0x18006FB60 (sub_18006FB60.c)
 *     sub_18006FB90 @ 0x18006FB90 (sub_18006FB90.c)
 *     sub_18006FBCC @ 0x18006FBCC (sub_18006FBCC.c)
 *     sub_1800D28FC @ 0x1800D28FC (sub_1800D28FC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180038908(volatile __int32 *a1, __int64 a2, int a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( a3 && a3 != 3 )
    return (unsigned int)_InterlockedExchange(a1, 0);
  *a1 = 0;
  return result;
}
