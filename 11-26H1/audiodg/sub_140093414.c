/*
 * XREFs of sub_140093414 @ 0x140093414
 * Callers:
 *     sub_140092F58 @ 0x140092F58 (sub_140092F58.c)
 *     sub_140093458 @ 0x140093458 (sub_140093458.c)
 * Callees:
 *     sub_140056130 @ 0x140056130 (sub_140056130.c)
 *     sub_14009337C @ 0x14009337C (sub_14009337C.c)
 */

__int64 __fastcall sub_140093414(__int64 a1, __int64 a2, _DWORD *a3, __int64 *a4)
{
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  *(_DWORD *)a2 = *a3;
  v5 = sub_14009337C(&v8, a4);
  v6 = *v5;
  *v5 = 0LL;
  *(_QWORD *)(a2 + 8) = v6;
  return sub_140056130(&v8);
}
