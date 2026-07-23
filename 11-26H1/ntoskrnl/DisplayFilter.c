/*
 * XREFs of DisplayFilter @ 0x1405788B0
 * Callers:
 *     <none>
 * Callees:
 *     DisplayBootBitmap @ 0x1405786DC (DisplayBootBitmap.c)
 */

int __fastcall DisplayFilter(unsigned __int8 **a1, __int64 a2)
{
  __int64 *v2; // rax

  if ( byte_140E0F618 )
    goto LABEL_6;
  a2 = (unsigned int)**a1 - 46;
  if ( **a1 == 46 )
    a2 = (*a1)[1];
  if ( (_DWORD)a2 )
  {
LABEL_6:
    LOBYTE(a1) = 1;
    byte_140E0F618 = 1;
    qword_140E65EF0 = 0LL;
    LODWORD(v2) = DisplayBootBitmap((__int64)a1, a2);
  }
  else
  {
    v2 = &qword_140026768;
    *a1 = (unsigned __int8 *)&qword_140026768;
  }
  return (int)v2;
}
