/*
 * XREFs of ??$copy_n@PEAPEAX_KPEAPEAX@std@@YAPEAPEAXPEAPEAX_K0@Z @ 0x14000F1E8
 * Callers:
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x14000F22C (-DoStackCapture@@YAXJIPEAX@Z.c)
 * Callees:
 *     memmove_0 @ 0x14000F810 (memmove_0.c)
 */

char *__fastcall std::copy_n<void * *,unsigned __int64,void * *>(void *Src, __int64 a2, char *a3)
{
  __int64 v4; // rbx

  if ( !a2 )
    return a3;
  v4 = 8 * a2;
  memmove_0(a3, Src, 8 * a2);
  return &a3[v4];
}
