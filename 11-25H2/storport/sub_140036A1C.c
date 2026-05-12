/*
 * XREFs of sub_140036A1C @ 0x140036A1C
 * Callers:
 *     sub_14001B35C @ 0x14001B35C (sub_14001B35C.c)
 *     sub_1400BEB50 @ 0x1400BEB50 (sub_1400BEB50.c)
 *     sub_140100258 @ 0x140100258 (sub_140100258.c)
 *     sub_14019B4AC @ 0x14019B4AC (sub_14019B4AC.c)
 *     sub_14019CB58 @ 0x14019CB58 (sub_14019CB58.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140036A1C(__int64 a1, int a2)
{
  __int64 v3; // rax
  bool v4; // sf
  int v5; // edx
  _BYTE *i; // rcx

  if ( a2 )
  {
    v3 = (unsigned int)(a2 - 1);
    v4 = a2 - 2 < 0;
    v5 = a2 - 2;
    *(_BYTE *)(v3 + a1) = 0;
    if ( !v4 )
    {
      for ( i = (_BYTE *)(v5 + a1); (__int64)&i[-a1] >= 0; --i )
      {
        if ( *i == 32 )
        {
          *i = 0;
        }
        else if ( *i )
        {
          break;
        }
        --v5;
      }
    }
    *(_BYTE *)(v5 + a1 + 1) = 0;
  }
}
