/*
 * XREFs of sub_140038378 @ 0x140038378
 * Callers:
 *     sub_140037680 @ 0x140037680 (sub_140037680.c)
 *     sub_140037B4C @ 0x140037B4C (sub_140037B4C.c)
 *     sub_14003C424 @ 0x14003C424 (sub_14003C424.c)
 *     sub_14003C734 @ 0x14003C734 (sub_14003C734.c)
 *     sub_140041308 @ 0x140041308 (sub_140041308.c)
 *     sub_140054CA4 @ 0x140054CA4 (sub_140054CA4.c)
 *     sub_140055130 @ 0x140055130 (sub_140055130.c)
 *     sub_140075474 @ 0x140075474 (sub_140075474.c)
 *     sub_1400B0998 @ 0x1400B0998 (sub_1400B0998.c)
 *     sub_1400B0CAC @ 0x1400B0CAC (sub_1400B0CAC.c)
 *     sub_1400B25F4 @ 0x1400B25F4 (sub_1400B25F4.c)
 *     sub_1400B2878 @ 0x1400B2878 (sub_1400B2878.c)
 *     sub_1400B2AFC @ 0x1400B2AFC (sub_1400B2AFC.c)
 *     sub_1400B2FE8 @ 0x1400B2FE8 (sub_1400B2FE8.c)
 *     sub_1400B34DC @ 0x1400B34DC (sub_1400B34DC.c)
 *     sub_1400B37EC @ 0x1400B37EC (sub_1400B37EC.c)
 *     sub_1400B3B48 @ 0x1400B3B48 (sub_1400B3B48.c)
 *     sub_1400B4064 @ 0x1400B4064 (sub_1400B4064.c)
 *     sub_1400B44A4 @ 0x1400B44A4 (sub_1400B44A4.c)
 *     sub_1400B5134 @ 0x1400B5134 (sub_1400B5134.c)
 *     sub_1400B53E4 @ 0x1400B53E4 (sub_1400B53E4.c)
 *     sub_1400B5694 @ 0x1400B5694 (sub_1400B5694.c)
 *     sub_1400B5B48 @ 0x1400B5B48 (sub_1400B5B48.c)
 *     sub_1400B5E8C @ 0x1400B5E8C (sub_1400B5E8C.c)
 *     sub_1401B1388 @ 0x1401B1388 (sub_1401B1388.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140038378(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( a2[v2] );
    result = (unsigned int)(v2 + 1);
  }
  else
  {
    a2 = &unk_1401489C4;
    result = 1LL;
  }
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
