/*
 * XREFs of ??$_Find_unchecked@PEAPEAXPEAX@std@@YAPEAPEAXPEAPEAXQEAPEAXAEBQEAX@Z @ 0x14000F1D8
 * Callers:
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x14000F22C (-DoStackCapture@@YAXJIPEAX@Z.c)
 * Callees:
 *     <none>
 */

const __m128i *__fastcall std::_Find_unchecked<void * *,void *>(
        const __m128i *a1,
        const __m128i *a2,
        unsigned __int64 *a3)
{
  return _std_find_trivial_8(a1, a2, *a3);
}
