/*
 * XREFs of sub_1400516A0 @ 0x1400516A0
 * Callers:
 *     sub_14005123C @ 0x14005123C (sub_14005123C.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140050FFC @ 0x140050FFC (sub_140050FFC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400516A0(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rcx
  int v4; // esi
  int v5; // edx
  int v7; // eax
  unsigned int v8; // edi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 112) )
  {
    v10 = a1;
    v2 = (_QWORD *)(a1 + 128);
    v3 = *(_QWORD *)(a1 + 128);
    *v2 = 0LL;
    if ( v3 )
      sub_1400B6010(v3);
    v4 = sub_140050FFC(v2, &v10);
    if ( v4 < 0 )
    {
      v5 = 95;
LABEL_6:
      sub_14000C2A8(
        (int)retaddr,
        v5,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apomicboostnotificationshandler.cpp",
        v4);
      return (unsigned int)v4;
    }
    v4 = sub_1400B6010(*(_QWORD *)(a1 + 48));
    if ( v4 < 0 )
    {
      v5 = 96;
      goto LABEL_6;
    }
    v7 = sub_1400B6010(*(_QWORD *)(a1 + 48));
    v8 = v7;
    if ( v7 < 0 )
    {
      sub_14000C2A8(
        (int)retaddr,
        97,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apomicboostnotificationshandler.cpp",
        v7);
      return v8;
    }
    *(_BYTE *)(a1 + 112) = 1;
  }
  return 0LL;
}
