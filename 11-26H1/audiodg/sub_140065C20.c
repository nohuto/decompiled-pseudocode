/*
 * XREFs of sub_140065C20 @ 0x140065C20
 * Callers:
 *     sub_140065CA0 @ 0x140065CA0 (sub_140065CA0.c)
 *     sub_140065CB0 @ 0x140065CB0 (sub_140065CB0.c)
 *     sub_140065CC0 @ 0x140065CC0 (sub_140065CC0.c)
 *     sub_140065CD0 @ 0x140065CD0 (sub_140065CD0.c)
 *     sub_140065CE0 @ 0x140065CE0 (sub_140065CE0.c)
 *     sub_140065CF0 @ 0x140065CF0 (sub_140065CF0.c)
 *     sub_140065D00 @ 0x140065D00 (sub_140065D00.c)
 * Callees:
 *     sub_14001FC10 @ 0x14001FC10 (sub_14001FC10.c)
 *     sub_1400653D0 @ 0x1400653D0 (sub_1400653D0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140065C20(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  _DWORD *v3; // rcx
  __int64 *v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // r10
  int v7; // ebx
  _QWORD *v8; // r8

  *a3 = 0LL;
  if ( sub_14001FC10(a2, &stru_1400C6598) || sub_14001FC10(v3, &dword_1400C6698) )
  {
    *v4 = v5;
    sub_1400B6010(v5);
    return 0;
  }
  else
  {
    v7 = sub_1400653D0(v5, v6);
    if ( v7 >= 0 )
      sub_1400B6010(*v8);
  }
  return (unsigned int)v7;
}
