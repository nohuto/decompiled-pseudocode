/*
 * XREFs of sub_1400A85C4 @ 0x1400A85C4
 * Callers:
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 *     sub_1400699FC @ 0x1400699FC (sub_1400699FC.c)
 *     sub_14006AA44 @ 0x14006AA44 (sub_14006AA44.c)
 *     sub_140072F8C @ 0x140072F8C (sub_140072F8C.c)
 *     sub_14017AB2C @ 0x14017AB2C (sub_14017AB2C.c)
 * Callees:
 *     sub_1400A69C0 @ 0x1400A69C0 (sub_1400A69C0.c)
 */

void __fastcall sub_1400A85C4(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4, int a5)
{
  __int64 v6; // rax
  const wchar_t *v7; // rdx
  const wchar_t *v8; // rdx
  const wchar_t *v9; // rdx

  if ( a4 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a4[v6] );
    if ( (unsigned int)(v6 - 1) <= 0x3F )
    {
      if ( a5 == 2 )
      {
        if ( (byte_1401694F8 & 1) != 0 )
        {
          v9 = (const wchar_t *)&unk_140149394;
          if ( *(_QWORD *)(a1 + 5080) )
            v9 = *(const wchar_t **)(a1 + 5080);
          sub_1400A69C0(
            a1 + 5064,
            &stru_140149F48,
            a3,
            *(_DWORD *)(a1 + 56),
            a1 + 5064,
            *(const wchar_t **)(a1 + 4720),
            v9,
            *(const wchar_t **)(a2 + 32),
            a3,
            a4);
        }
      }
      else if ( a5 == 3 )
      {
        if ( byte_1401694F7 < 0 )
        {
          v8 = (const wchar_t *)&unk_140149394;
          if ( *(_QWORD *)(a1 + 5080) )
            v8 = *(const wchar_t **)(a1 + 5080);
          sub_1400A69C0(
            a1 + 5064,
            &stru_14014A088,
            a3,
            *(_DWORD *)(a1 + 56),
            a1 + 5064,
            *(const wchar_t **)(a1 + 4720),
            v8,
            *(const wchar_t **)(a2 + 32),
            a3,
            a4);
        }
      }
      else if ( (byte_1401694F7 & 0x40) != 0 )
      {
        v7 = (const wchar_t *)&unk_140149394;
        if ( *(_QWORD *)(a1 + 5080) )
          v7 = *(const wchar_t **)(a1 + 5080);
        sub_1400A69C0(
          a1 + 5064,
          &stru_140149E78,
          a3,
          *(_DWORD *)(a1 + 56),
          a1 + 5064,
          *(const wchar_t **)(a1 + 4720),
          v7,
          *(const wchar_t **)(a2 + 32),
          a3,
          a4);
      }
    }
  }
}
