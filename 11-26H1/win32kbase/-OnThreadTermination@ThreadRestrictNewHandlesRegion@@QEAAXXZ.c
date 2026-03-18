/*
 * XREFs of ?OnThreadTermination@ThreadRestrictNewHandlesRegion@@QEAAXXZ @ 0x1401EDB48
 * Callers:
 *     GrepThreadCallout @ 0x14011A030 (GrepThreadCallout.c)
 * Callees:
 *     ?HmgpThreadUnrestrictHandle@@YAXI@Z @ 0x14002355C (-HmgpThreadUnrestrictHandle@@YAXI@Z.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall ThreadRestrictNewHandlesRegion::OnThreadTermination(
        ThreadRestrictNewHandlesRegion *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  ThreadRestrictNewHandlesRegion *i; // rbx
  unsigned __int64 j; // rsi
  char *v7; // rcx

  for ( i = this; i; i = (ThreadRestrictNewHandlesRegion *)*((_QWORD *)i + 1) )
  {
    if ( !*((_BYTE *)i + 80) )
      *((_BYTE *)i + 80) = 1;
    for ( j = 0LL; j < *((_QWORD *)i + 3); ++j )
      HmgpThreadUnrestrictHandle(*(unsigned int *)(*((_QWORD *)i + 5) + 4 * j));
    v7 = (char *)*((_QWORD *)i + 5);
    if ( v7 != (char *)i + 48 )
    {
      GreDeleteFastMutex(v7, a2, a3, a4);
      *((_QWORD *)i + 5) = (char *)i + 48;
      *((_QWORD *)i + 4) = 8LL;
    }
    *(_QWORD *)(*(_QWORD *)this + 328LL) = *((_QWORD *)i + 1);
  }
  *(_QWORD *)(*(_QWORD *)this + 328LL) = 0LL;
}
