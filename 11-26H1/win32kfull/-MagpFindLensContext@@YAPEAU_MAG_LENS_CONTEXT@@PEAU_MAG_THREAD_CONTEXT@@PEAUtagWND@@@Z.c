/*
 * XREFs of ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@@Z @ 0x1401EBE5C
 * Callers:
 *     MagpDestroyLensContext @ 0x1401E7AA4 (MagpDestroyLensContext.c)
 *     MagGetLensContextInformation @ 0x1401EA86C (MagGetLensContextInformation.c)
 *     MagSetLensContextInformation @ 0x1401EB08C (MagSetLensContextInformation.c)
 * Callees:
 *     <none>
 */

struct _MAG_LENS_CONTEXT *__fastcall MagpFindLensContext(struct _MAG_THREAD_CONTEXT *a1, struct tagWND *a2)
{
  struct _MAG_LENS_CONTEXT *v2; // rcx
  struct _MAG_LENS_CONTEXT *result; // rax

  v2 = (struct _MAG_THREAD_CONTEXT *)((char *)a1 + 40);
  for ( result = *(struct _MAG_LENS_CONTEXT **)v2; result != v2; result = *(struct _MAG_LENS_CONTEXT **)result )
  {
    if ( a2 == *((struct tagWND **)result + 3) )
      return result;
  }
  return 0LL;
}
