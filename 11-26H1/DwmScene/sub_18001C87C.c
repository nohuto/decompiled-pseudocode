/*
 * XREFs of sub_18001C87C @ 0x18001C87C
 * Callers:
 *     sub_18003AFB0 @ 0x18003AFB0 (sub_18003AFB0.c)
 *     sub_18003FC1C @ 0x18003FC1C (sub_18003FC1C.c)
 *     sub_180040570 @ 0x180040570 (sub_180040570.c)
 *     sub_18004AD40 @ 0x18004AD40 (sub_18004AD40.c)
 *     sub_18004D70C @ 0x18004D70C (sub_18004D70C.c)
 *     sub_18004DC48 @ 0x18004DC48 (sub_18004DC48.c)
 *     sub_18004DE74 @ 0x18004DE74 (sub_18004DE74.c)
 *     sub_18004E254 @ 0x18004E254 (sub_18004E254.c)
 *     sub_18004E420 @ 0x18004E420 (sub_18004E420.c)
 *     sub_18004EA04 @ 0x18004EA04 (sub_18004EA04.c)
 *     sub_18005E0AC @ 0x18005E0AC (sub_18005E0AC.c)
 *     sub_18005E244 @ 0x18005E244 (sub_18005E244.c)
 *     sub_18006EAE0 @ 0x18006EAE0 (sub_18006EAE0.c)
 *     sub_18007A950 @ 0x18007A950 (sub_18007A950.c)
 *     sub_18007B9FC @ 0x18007B9FC (sub_18007B9FC.c)
 *     sub_18007BE98 @ 0x18007BE98 (sub_18007BE98.c)
 *     sub_18007C6F4 @ 0x18007C6F4 (sub_18007C6F4.c)
 *     sub_18007CB2C @ 0x18007CB2C (sub_18007CB2C.c)
 *     sub_180080F34 @ 0x180080F34 (sub_180080F34.c)
 *     sub_1800950B0 @ 0x1800950B0 (sub_1800950B0.c)
 *     sub_18009CECC @ 0x18009CECC (sub_18009CECC.c)
 *     sub_18009EC54 @ 0x18009EC54 (sub_18009EC54.c)
 *     sub_18009F158 @ 0x18009F158 (sub_18009F158.c)
 *     sub_1800A6608 @ 0x1800A6608 (sub_1800A6608.c)
 *     sub_1800A687C @ 0x1800A687C (sub_1800A687C.c)
 *     sub_1800A6B44 @ 0x1800A6B44 (sub_1800A6B44.c)
 *     sub_1800A8AAC @ 0x1800A8AAC (sub_1800A8AAC.c)
 *     sub_1800C1B5C @ 0x1800C1B5C (sub_1800C1B5C.c)
 *     sub_1800CAE30 @ 0x1800CAE30 (sub_1800CAE30.c)
 *     sub_1800CAFCC @ 0x1800CAFCC (sub_1800CAFCC.c)
 *     sub_1800CB160 @ 0x1800CB160 (sub_1800CB160.c)
 * Callees:
 *     sub_18001D260 @ 0x18001D260 (sub_18001D260.c)
 *     sub_18001DFB0 @ 0x18001DFB0 (sub_18001DFB0.c)
 */

__int64 __fastcall sub_18001C87C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v6; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( *(_BYTE *)(a3 + v4) );
  v6 = sub_18001DFB0(a2, a3);
  sub_18001D260(a1, v6);
  return a1;
}
