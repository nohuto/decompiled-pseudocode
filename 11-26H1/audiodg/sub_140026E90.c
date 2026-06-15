/*
 * XREFs of sub_140026E90 @ 0x140026E90
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140026F50 @ 0x140026F50 (sub_140026F50.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140026E90(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  unsigned int v3; // ebx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0LL;
  sub_140026F50(*(_QWORD *)(a1 + 16), &unk_1400C67E8, &v6);
  v1 = v6;
  if ( !v6 )
  {
LABEL_4:
    if ( v1 )
      sub_1400B6010(v1);
    return 0LL;
  }
  v2 = sub_1400B6010(v6);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v1 = v6;
    goto LABEL_4;
  }
  sub_14000C2A8(
    (int)retaddr,
    19,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenotificationshandler.cpp",
    v2);
  if ( v6 )
    sub_1400B6010(v6);
  return v3;
}
