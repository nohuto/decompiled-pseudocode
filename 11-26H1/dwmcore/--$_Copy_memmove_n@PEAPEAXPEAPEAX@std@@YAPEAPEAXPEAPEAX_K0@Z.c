/*
 * XREFs of ??$_Copy_memmove_n@PEAPEAXPEAPEAX@std@@YAPEAPEAXPEAPEAX_K0@Z @ 0x1801A7540
 * Callers:
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x1801A738C (-DoStackCapture@@YAXJIPEAX@Z.c)
 * Callees:
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove_n<void * *,void * *>(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = 8 * a2;
  memmove_0(a3, Src, 8 * a2);
  return (__int64)a3 + v4;
}
