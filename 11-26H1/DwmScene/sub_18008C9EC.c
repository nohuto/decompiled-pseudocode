/*
 * XREFs of sub_18008C9EC @ 0x18008C9EC
 * Callers:
 *     sub_18008C0EC @ 0x18008C0EC (sub_18008C0EC.c)
 *     sub_18008C1DC @ 0x18008C1DC (sub_18008C1DC.c)
 * Callees:
 *     memmove @ 0x18000D92D (memmove.c)
 *     sub_180017A18 @ 0x180017A18 (sub_180017A18.c)
 *     sub_18008D72C @ 0x18008D72C (sub_18008D72C.c)
 */

char *__fastcall sub_18008C9EC(char *Src, char *a2, char *a3, __int64 a4, __int64 a5, void *Srca, __int64 a7)
{
  __int64 v7; // rsi
  __int64 v11; // rdi
  void *v12; // rbx
  __int64 v13; // rbx

  v7 = (__int64)a3;
  if ( a4 )
  {
    if ( !a5 )
      return Src;
    if ( a4 <= a5 && a4 <= a7 )
    {
      v11 = sub_180017A18(Src, (__int64)a2, Srca);
      v12 = (void *)sub_180017A18(a2, v7, Src);
      sub_180017A18(Srca, v11, v12);
      return (char *)v12;
    }
    if ( a5 <= a7 )
    {
      v13 = sub_180017A18(a2, (__int64)a3, Srca);
      memmove((void *)(v7 - (a2 - Src)), Src, a2 - Src);
      return (char *)sub_180017A18(Srca, v13, Src);
    }
    if ( Src != a2 )
    {
      if ( a2 == a3 )
      {
        return Src;
      }
      else
      {
        ((void (*)(void))sub_18008D72C)();
        sub_18008D72C(a2, v7);
        sub_18008D72C(Src, v7);
        return &Src[(v7 - (_QWORD)a2) & 0xFFFFFFFFFFFFFFF0uLL];
      }
    }
  }
  return (char *)v7;
}
