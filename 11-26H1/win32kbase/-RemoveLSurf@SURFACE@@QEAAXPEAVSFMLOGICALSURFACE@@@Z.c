/*
 * XREFs of ?RemoveLSurf@SURFACE@@QEAAXPEAVSFMLOGICALSURFACE@@@Z @ 0x140156790
 * Callers:
 *     <none>
 * Callees:
 *     ?GreAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400431F0 (-GreAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140043320 (-GreReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 */

void __fastcall SURFACE::RemoveLSurf(SURFACE *this, struct SFMLOGICALSURFACE *a2)
{
  struct W32_PUSH_LOCK *v2; // rbx
  __int64 v4; // rdx
  struct SFMLOGICALSURFACE **v5; // rax

  v2 = (SURFACE *)((char *)this + 624);
  if ( this != (SURFACE *)-624LL )
    GreAcquirePushLockExclusive((SURFACE *)((char *)this + 624));
  v4 = *((_QWORD *)a2 + 6);
  if ( *(struct SFMLOGICALSURFACE **)(v4 + 8) != (struct SFMLOGICALSURFACE *)((char *)a2 + 48)
    || (v5 = (struct SFMLOGICALSURFACE **)*((_QWORD *)a2 + 7), *v5 != (struct SFMLOGICALSURFACE *)((char *)a2 + 48)) )
  {
    __fastfail(3u);
  }
  *v5 = (struct SFMLOGICALSURFACE *)v4;
  *(_QWORD *)(v4 + 8) = v5;
  if ( v2 )
    GreReleasePushLockExclusive(v2);
}
