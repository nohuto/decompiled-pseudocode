/*
 * XREFs of GreDwmUseDeviceBitmapsForMultiAdapter @ 0x140182018
 * Callers:
 *     ?MulCreateDeviceBitmapEx@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@KKPEAUDHSURF__@@KKPEAPEAX@Z @ 0x140181AA0 (-MulCreateDeviceBitmapEx@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@KKPEAUDHSURF__@@KKPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreDwmUseDeviceBitmapsForMultiAdapter(Gre::Base *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  int v3; // ecx

  v1 = 0;
  if ( *((_QWORD *)Gre::Base::Globals(a1) + 17) )
    return *(unsigned int *)(*(_QWORD *)(W32GetSessionState(v3, v2) + 96) + 100LL);
  return v1;
}
