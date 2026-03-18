/*
 * XREFs of ?GetNextLayeredWindowSubtree@@YAPEAUtagWND@@PEAU1@@Z @ 0x14012EC4C
 * Callers:
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x14012E364 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?GetNextLayeredWindowSubtree@@YAPEAUtagWND@@PEAU1@@Z @ 0x14012EC4C (-GetNextLayeredWindowSubtree@@YAPEAUtagWND@@PEAU1@@Z.c)
 * Callees:
 *     ?GetNextLayeredWindowSubtree@@YAPEAUtagWND@@PEAU1@@Z @ 0x14012EC4C (-GetNextLayeredWindowSubtree@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

struct tagWND *__fastcall GetNextLayeredWindowSubtree(struct tagWND **a1)
{
  struct tagWND *result; // rax

  result = 0LL;
  while ( a1 )
  {
    result = GetNextLayeredWindowSubtree(a1[14]);
    if ( result )
      break;
    if ( (*((_BYTE *)a1[5] + 26) & 8) != 0 )
      return (struct tagWND *)a1;
    a1 = (struct tagWND **)a1[11];
  }
  return result;
}
