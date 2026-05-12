/*
 * XREFs of sub_14008FBAC @ 0x14008FBAC
 * Callers:
 *     sub_140019D84 @ 0x140019D84 (sub_140019D84.c)
 *     sub_140065E60 @ 0x140065E60 (sub_140065E60.c)
 *     sub_140066200 @ 0x140066200 (sub_140066200.c)
 * Callees:
 *     sub_140086FB4 @ 0x140086FB4 (sub_140086FB4.c)
 */

void __fastcall sub_14008FBAC(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  const wchar_t *v3; // rdx

  v2 = a2;
  if ( a1 && byte_140168DAA && byte_1401694F6 < 0 )
  {
    v3 = (const wchar_t *)&unk_140149394;
    if ( *(_QWORD *)(a1 + 5080) )
      v3 = *(const wchar_t **)(a1 + 5080);
    sub_140086FB4(
      a1 + 5064,
      (__int64)v3,
      v2,
      *(_DWORD *)(a1 + 56),
      a1 + 5064,
      *(const wchar_t **)(a1 + 4720),
      v3,
      *(_DWORD *)(a1 + 392),
      *(_QWORD *)(a1 + 104),
      *(_QWORD *)(a1 + 112),
      *(_DWORD *)(a1 + 6188),
      v2);
  }
}
