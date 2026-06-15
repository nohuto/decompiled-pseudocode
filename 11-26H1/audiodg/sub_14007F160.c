/*
 * XREFs of sub_14007F160 @ 0x14007F160
 * Callers:
 *     <none>
 * Callees:
 *     sub_140079F14 @ 0x140079F14 (sub_140079F14.c)
 *     sub_14007C690 @ 0x14007C690 (sub_14007C690.c)
 *     sub_14007CA54 @ 0x14007CA54 (sub_14007CA54.c)
 *     sub_14007FD50 @ 0x14007FD50 (sub_14007FD50.c)
 */

void __fastcall sub_14007F160(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned int v4; // eax

  v3 = a2;
  LODWORD(a2) = a2 & 0x7FFFFFFF;
  v4 = v3 >> 31;
  if ( (_DWORD)a1 || a3 || (_DWORD)a2 )
  {
    if ( (a2 & 0x40000000) != 0 )
    {
      sub_14007C690(&byte_1400E7528, a1, a2, a3);
    }
    else if ( a3 || (_DWORD)a2 == 254 )
    {
      sub_14007CA54(&byte_1400E7528, a1, a2, a3);
    }
    else
    {
      sub_14007FD50(a1, a2, v4);
    }
  }
  else
  {
    sub_140079F14((__int64)&byte_1400E7528);
  }
}
