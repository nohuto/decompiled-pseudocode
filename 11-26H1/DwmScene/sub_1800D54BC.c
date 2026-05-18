/*
 * XREFs of sub_1800D54BC @ 0x1800D54BC
 * Callers:
 *     sub_180029734 @ 0x180029734 (sub_180029734.c)
 * Callees:
 *     sub_18002AEFC @ 0x18002AEFC (sub_18002AEFC.c)
 *     sub_18002B3C4 @ 0x18002B3C4 (sub_18002B3C4.c)
 */

int __fastcall sub_1800D54BC(__int64 *a1)
{
  __int64 v1; // rbx
  int v2; // eax
  _Mtx_t v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *a1;
  sub_18002AEFC((__int64)v4, *a1);
  while ( 1 )
  {
    if ( !*(_BYTE *)(v1 + 228) )
    {
      v2 = *(_DWORD *)(v1 + 224);
      if ( v2 != -1 )
        break;
    }
    Cnd_wait((_Cnd_t)(v1 + 152), v4[0]);
  }
  *(_DWORD *)(v1 + 224) = v2 + 1;
  return sub_18002B3C4((__int64)v4);
}
