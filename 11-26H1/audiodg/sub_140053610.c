/*
 * XREFs of sub_140053610 @ 0x140053610
 * Callers:
 *     <none>
 * Callees:
 *     sub_14001FC10 @ 0x14001FC10 (sub_14001FC10.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140053610(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _DWORD *v4; // rdx
  _DWORD *v5; // rcx
  _QWORD *v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // r8

  v3 = 0;
  *a3 = 0LL;
  if ( sub_14001FC10(a2, &stru_1400C6598) )
  {
    *v6 = v7;
    goto LABEL_6;
  }
  if ( sub_14001FC10(v5, v4) )
  {
    *v8 = v7;
LABEL_6:
    sub_1400B6010(v7);
    return v3;
  }
  return (unsigned int)-2147467262;
}
