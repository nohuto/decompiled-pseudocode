/*
 * XREFs of sub_18003BE64 @ 0x18003BE64
 * Callers:
 *     sub_18003BCCC @ 0x18003BCCC (sub_18003BCCC.c)
 *     sub_18003BE64 @ 0x18003BE64 (sub_18003BE64.c)
 *     sub_1800596B4 @ 0x1800596B4 (sub_1800596B4.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180013644 @ 0x180013644 (sub_180013644.c)
 *     sub_18003BE64 @ 0x18003BE64 (sub_18003BE64.c)
 *     sub_18003D718 @ 0x18003D718 (sub_18003D718.c)
 *     sub_18003E2DC @ 0x18003E2DC (sub_18003E2DC.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall sub_18003BE64(__int64 a1)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  sub_18003D718(a1);
  if ( *(_QWORD *)(a1 + 216) == sub_18003E2DC(&qword_1801C7C88) )
    return *(_QWORD *)(a1 + 216);
  v3 = *(_QWORD *)(a1 + 208);
  sub_180013644(a1, &v5);
  if ( v5 )
  {
    v4 = sub_18003BE64(v5);
    if ( v3 < v4 )
      v3 = v4;
  }
  *(_QWORD *)(a1 + 216) = v3;
  if ( v6 )
    sub_180010EC8(v6);
  return v3;
}
