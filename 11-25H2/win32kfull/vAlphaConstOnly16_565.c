/*
 * XREFs of vAlphaConstOnly16_565 @ 0x140313360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int16 __fastcall vAlphaConstOnly16_565(__int64 a1, _WORD *a2, int a3, unsigned int a4)
{
  __int16 result; // ax
  _WORD *v5; // r10
  unsigned int v6; // r9d
  _WORD *v7; // rbx
  int v8; // edi
  __int64 v9; // r11
  int v10; // r9d
  unsigned int v11; // edx

  result = a3;
  v5 = a2;
  v6 = HIWORD(a4);
  v7 = &a2[a3];
  if ( a2 != v7 )
  {
    v8 = (unsigned __int8)v6;
    v9 = a1 - (_QWORD)a2;
    do
    {
      v10 = (*(unsigned __int16 *)((char *)v5 + v9) >> 5) & 0x3F;
      v11 = v8 * ((*v5 & 0xF81F) - (*(_WORD *)((char *)v5 + v9) & 0xF81F))
          + 32784
          + 31 * (*(_WORD *)((char *)v5 + v9) & 0xF81F);
      result = ((v11 + ((v11 >> 5) & 0xF81F)) >> 5) ^ (((v11 + ((v11 >> 5) & 0xF81F)) >> 5) ^ ((63 * v10
                                                                                              + 2
                                                                                              * (v8
                                                                                               * ((((unsigned __int16)*v5 >> 5) & 0x3F)
                                                                                                - v10)
                                                                                               + 16)
                                                                                              + (((63 * v10
                                                                                                 + 2
                                                                                                 * (v8 * ((((unsigned __int16)*v5 >> 5) & 0x3Fu) - v10)
                                                                                                  + 16)) >> 6) & 0x3F)) >> 1)) & 0x7E0;
      *(_WORD *)((char *)v5++ + v9) = result;
    }
    while ( v5 != v7 );
  }
  return result;
}
