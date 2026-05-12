/*
 * XREFs of sub_14008C878 @ 0x14008C878
 * Callers:
 *     sub_140064694 @ 0x140064694 (sub_140064694.c)
 *     sub_1401A8440 @ 0x1401A8440 (sub_1401A8440.c)
 *     sub_1401A89F4 @ 0x1401A89F4 (sub_1401A89F4.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14008DE5C @ 0x14008DE5C (sub_14008DE5C.c)
 */

__int64 __fastcall sub_14008C878(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  _WORD *v6; // rbx
  int v7; // edi

  if ( a2 && a1 )
  {
    v3 = *(_QWORD *)(a1 + 64);
    if ( *(_DWORD *)v3 != 1094997074 )
      return 3221225659LL;
    *a2 = 0LL;
    v5 = *(_QWORD *)(v3 + 6216);
    if ( v5 )
    {
      *a2 = v5;
      return 0LL;
    }
    v6 = (_WORD *)sub_1400143E0(64LL, 48LL, 1296851282LL, a1);
    if ( !v6 )
      return 3221225495LL;
    v7 = sub_14008DE5C(*(PDEVICE_OBJECT *)(v3 + 32));
    if ( v7 >= 0 )
    {
      if ( v6[1] == 1 && *v6 == 48 && *((_QWORD *)v6 + 5) && *((_QWORD *)v6 + 1) && *((_QWORD *)v6 + 4) )
      {
        *a2 = v6;
        return (unsigned int)v7;
      }
      v7 = -1073741811;
    }
    ExFreePoolWithTag(v6, 0x4D4C6152u);
    return (unsigned int)v7;
  }
  return 3221225485LL;
}
