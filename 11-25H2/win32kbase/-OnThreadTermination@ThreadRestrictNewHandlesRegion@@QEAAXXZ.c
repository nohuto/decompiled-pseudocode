/*
 * XREFs of ?OnThreadTermination@ThreadRestrictNewHandlesRegion@@QEAAXXZ @ 0x1401C5080
 * Callers:
 *     GrepThreadCallout @ 0x1400C06D0 (GrepThreadCallout.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ?HmgpThreadUnrestrictHandle@@YAXI@Z @ 0x140040FDC (-HmgpThreadUnrestrictHandle@@YAXI@Z.c)
 */

void __fastcall ThreadRestrictNewHandlesRegion::OnThreadTermination(ThreadRestrictNewHandlesRegion *this)
{
  ThreadRestrictNewHandlesRegion *i; // rbx
  unsigned __int64 j; // rsi
  char *v4; // rcx

  for ( i = this; i; i = (ThreadRestrictNewHandlesRegion *)*((_QWORD *)i + 1) )
  {
    if ( !*((_BYTE *)i + 80) )
      *((_BYTE *)i + 80) = 1;
    for ( j = 0LL; j < *((_QWORD *)i + 3); ++j )
      HmgpThreadUnrestrictHandle(*(unsigned int *)(*((_QWORD *)i + 5) + 4 * j));
    v4 = (char *)*((_QWORD *)i + 5);
    if ( v4 != (char *)i + 48 )
    {
      GreDeleteFastMutex(v4);
      *((_QWORD *)i + 5) = (char *)i + 48;
      *((_QWORD *)i + 4) = 8LL;
    }
    *(_QWORD *)(*(_QWORD *)this + 336LL) = *((_QWORD *)i + 1);
  }
  *(_QWORD *)(*(_QWORD *)this + 336LL) = 0LL;
}
