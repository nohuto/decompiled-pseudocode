/*
 * XREFs of sub_18001C928 @ 0x18001C928
 * Callers:
 *     sub_180027998 @ 0x180027998 (sub_180027998.c)
 *     sub_18003AFB0 @ 0x18003AFB0 (sub_18003AFB0.c)
 *     sub_18003FC1C @ 0x18003FC1C (sub_18003FC1C.c)
 *     sub_180040570 @ 0x180040570 (sub_180040570.c)
 *     sub_18004E420 @ 0x18004E420 (sub_18004E420.c)
 *     sub_1800627F8 @ 0x1800627F8 (sub_1800627F8.c)
 *     sub_18006AA98 @ 0x18006AA98 (sub_18006AA98.c)
 *     sub_18006C198 @ 0x18006C198 (sub_18006C198.c)
 *     sub_18006EAE0 @ 0x18006EAE0 (sub_18006EAE0.c)
 *     sub_18007B8E4 @ 0x18007B8E4 (sub_18007B8E4.c)
 *     sub_18007C97C @ 0x18007C97C (sub_18007C97C.c)
 *     sub_18007E840 @ 0x18007E840 (sub_18007E840.c)
 *     sub_18007E978 @ 0x18007E978 (sub_18007E978.c)
 *     sub_18007EE1C @ 0x18007EE1C (sub_18007EE1C.c)
 *     sub_18007F01C @ 0x18007F01C (sub_18007F01C.c)
 *     sub_180091F8C @ 0x180091F8C (sub_180091F8C.c)
 *     sub_1800950B0 @ 0x1800950B0 (sub_1800950B0.c)
 *     sub_18009CECC @ 0x18009CECC (sub_18009CECC.c)
 *     sub_18009EC54 @ 0x18009EC54 (sub_18009EC54.c)
 *     sub_18009F158 @ 0x18009F158 (sub_18009F158.c)
 *     sub_1800A6608 @ 0x1800A6608 (sub_1800A6608.c)
 *     sub_1800A687C @ 0x1800A687C (sub_1800A687C.c)
 *     sub_1800A6B44 @ 0x1800A6B44 (sub_1800A6B44.c)
 *     sub_1800A8AAC @ 0x1800A8AAC (sub_1800A8AAC.c)
 * Callees:
 *     sub_18001D260 @ 0x18001D260 (sub_18001D260.c)
 *     sub_18001E068 @ 0x18001E068 (sub_18001E068.c)
 */

__int64 __fastcall sub_18001C928(__int64 a1, __int64 a2, void *a3)
{
  __int64 v4; // r9
  __int64 v5; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( *(_BYTE *)(a2 + v4) );
  v5 = sub_18001E068(a3);
  sub_18001D260(a1, v5);
  return a1;
}
