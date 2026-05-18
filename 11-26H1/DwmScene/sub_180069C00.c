/*
 * XREFs of sub_180069C00 @ 0x180069C00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_180037410 @ 0x180037410 (sub_180037410.c)
 *     sub_18006A784 @ 0x18006A784 (sub_18006A784.c)
 */

int __fastcall sub_180069C00(__int64 a1)
{
  sub_180037410(a1);
  *(_BYTE *)(a1 + 1464) = 0;
  *(_BYTE *)(a1 + 1465) = 0;
  *(_BYTE *)(a1 + 1467) = 0;
  *(_BYTE *)(a1 + 1468) = 0;
  *(_BYTE *)(a1 + 1466) = 0;
  sub_180012AC4(a1 + 1552);
  sub_18006A784(a1 + 1488);
  return Mtx_unlock((_Mtx_t)(a1 + 1552));
}
