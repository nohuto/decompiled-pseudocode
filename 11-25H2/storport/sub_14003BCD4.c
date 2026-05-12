/*
 * XREFs of sub_14003BCD4 @ 0x14003BCD4
 * Callers:
 *     sub_14003BC28 @ 0x14003BC28 (sub_14003BC28.c)
 *     sub_14004DAE8 @ 0x14004DAE8 (sub_14004DAE8.c)
 *     sub_14004DCE0 @ 0x14004DCE0 (sub_14004DCE0.c)
 *     sub_140087D78 @ 0x140087D78 (sub_140087D78.c)
 *     sub_140087F44 @ 0x140087F44 (sub_140087F44.c)
 *     sub_14009EB0C @ 0x14009EB0C (sub_14009EB0C.c)
 *     sub_14009F2EC @ 0x14009F2EC (sub_14009F2EC.c)
 *     sub_1400B0394 @ 0x1400B0394 (sub_1400B0394.c)
 *     sub_140100258 @ 0x140100258 (sub_140100258.c)
 *     sub_140100340 @ 0x140100340 (sub_140100340.c)
 *     sub_140100C20 @ 0x140100C20 (sub_140100C20.c)
 *     sub_14017CD1C @ 0x14017CD1C (sub_14017CD1C.c)
 *     sub_14019CB58 @ 0x14019CB58 (sub_14019CB58.c)
 * Callees:
 *     <none>
 */

__int64 sub_14003BCD4(wchar_t *a1, __int64 a2, const wchar_t *a3, ...)
{
  unsigned __int64 v4; // rsi
  unsigned int v5; // edi
  int v6; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, a3);
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    v5 = -1073741811;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v4 = a2 - 1;
    v5 = 0;
    v6 = vsnwprintf(a1, a2 - 1, a3, Args);
    if ( v6 < 0 || v6 > v4 )
    {
      v5 = -2147483643;
      goto LABEL_5;
    }
    if ( v6 == v4 )
LABEL_5:
      a1[v4] = 0;
  }
  return v5;
}
