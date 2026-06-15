/*
 * XREFs of sub_140036198 @ 0x140036198
 * Callers:
 *     sub_140036140 @ 0x140036140 (sub_140036140.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140036198(__int64 a1, __int64 a2, DWORD a3)
{
  __int64 result; // rax
  int v6; // edi

  result = *(_QWORD *)(a1 + 16);
  if ( result )
  {
    v6 = sub_1400B6010(*(_QWORD *)(a1 + 24));
    if ( v6 >= 0 )
      return (unsigned int)CoRegisterClassObject(*(const IID *const *)a1, 0LL, 4u, a3, (LPDWORD)(a1 + 40));
    return (unsigned int)v6;
  }
  return result;
}
