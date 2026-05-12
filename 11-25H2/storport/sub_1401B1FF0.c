/*
 * XREFs of sub_1401B1FF0 @ 0x1401B1FF0
 * Callers:
 *     sub_14009E468 @ 0x14009E468 (sub_14009E468.c)
 *     sub_14009EB0C @ 0x14009EB0C (sub_14009EB0C.c)
 *     sub_14009EC74 @ 0x14009EC74 (sub_14009EC74.c)
 *     sub_140100070 @ 0x140100070 (sub_140100070.c)
 *     sub_140100258 @ 0x140100258 (sub_140100258.c)
 *     sub_140100340 @ 0x140100340 (sub_140100340.c)
 *     sub_140100548 @ 0x140100548 (sub_140100548.c)
 *     sub_140100974 @ 0x140100974 (sub_140100974.c)
 *     sub_140100C20 @ 0x140100C20 (sub_140100C20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1401B1FF0(_WORD *a1, char a2, unsigned int a3)
{
  unsigned int i; // ecx
  int v5; // edx
  __int64 result; // rax
  unsigned int v7; // edx
  unsigned int v8; // r8d
  int v9; // ecx

  if ( a2 )
  {
    v7 = 0;
    v8 = a3 - 1;
    if ( v8 )
    {
      do
      {
        v9 = (unsigned __int16)a1[v7];
        if ( (_WORD)v9 )
        {
          result = (unsigned int)(v9 - 33);
          if ( (unsigned __int16)(v9 - 33) > 0x5Eu || (_WORD)v9 == 44 )
            a1[v7] = 95;
        }
        else
        {
          result = v7 + 1;
          if ( !a1[result] )
            return result;
        }
        ++v7;
      }
      while ( v7 < v8 );
    }
  }
  else
  {
    for ( i = 0; i < a3; ++a1 )
    {
      v5 = (unsigned __int16)*a1;
      if ( !(_WORD)v5 )
        break;
      result = (unsigned int)(v5 - 33);
      if ( (unsigned __int16)(v5 - 33) > 0x5Eu || (_WORD)v5 == 44 )
        *a1 = 95;
      ++i;
    }
  }
  return result;
}
