/*
 * XREFs of sub_140078CE0 @ 0x140078CE0
 * Callers:
 *     sub_14003A6FC @ 0x14003A6FC (sub_14003A6FC.c)
 *     sub_14003AE6C @ 0x14003AE6C (sub_14003AE6C.c)
 *     sub_140075FD4 @ 0x140075FD4 (sub_140075FD4.c)
 *     sub_140078C98 @ 0x140078C98 (sub_140078C98.c)
 *     sub_14007C430 @ 0x14007C430 (sub_14007C430.c)
 * Callees:
 *     sub_14001FC10 @ 0x14001FC10 (sub_14001FC10.c)
 */

__int64 __fastcall sub_140078CE0(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r10
  _QWORD *v6; // r8
  unsigned int v7; // r9d
  __int64 v8; // r10

  if ( sub_14001FC10(a2, dword_1400CBBC8) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( sub_14001FC10(v2, dword_1400C5F68) )
      *v6 = v8;
    else
      return (unsigned int)-2147467262;
    return v7;
  }
}
