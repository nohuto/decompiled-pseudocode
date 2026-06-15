/*
 * XREFs of ??$AtlConvAllocMemory@G@ATL@@YAXPEAPEAGHPEAGH@Z @ 0x180078804
 * Callers:
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x18002973C (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::AtlConvAllocMemory<unsigned short>(__int64 *a1, int a2, __int64 a3)
{
  __int64 v3; // rbx
  void *v5; // rcx
  void *v6; // rax

  v3 = a3;
  if ( !a1 || a2 < 0 || !a3 )
    ATL::AtlThrowImpl(-2147024809);
  if ( *a1 == a3 )
  {
    if ( a2 <= 128 )
    {
      *a1 = a3;
    }
    else
    {
      v6 = calloc(a2, 2uLL);
      *a1 = (__int64)v6;
      if ( !v6 )
        ATL::AtlThrowImpl(-2147024882);
    }
  }
  else
  {
    v5 = (void *)*a1;
    if ( a2 <= 128 )
    {
      free(v5);
    }
    else
    {
      v3 = _o__recalloc(v5, a2, 2LL);
      if ( !v3 )
        ATL::AtlThrowImpl(-2147024882);
    }
    *a1 = v3;
  }
}
