/*
 * XREFs of ?OnConnectionDisconnected@CChannelGroup@DirectComposition@@QEAAXXZ @ 0x140178D94
 * Callers:
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x140163454 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     ?OnConnectionDisconnected@CChannel@DirectComposition@@QEAAXXZ @ 0x140178E04 (-OnConnectionDisconnected@CChannel@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CChannelGroup::OnConnectionDisconnected(DirectComposition::CChannelGroup *this)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rcx
  __int64 v4; // r8
  _QWORD *v5; // rax
  __int64 v6; // rdx
  DirectComposition::CChannel *v7; // rcx

  v2 = 0LL;
  while ( 1 )
  {
    v3 = *((_QWORD *)this + 3);
    if ( v2 >= v3 )
      break;
    v4 = *((_QWORD *)this + 4);
    v5 = (_QWORD *)(*(_QWORD *)this + v2 * v4);
    while ( 1 )
    {
      v6 = v2++;
      if ( *v5 )
        break;
      v5 = (_QWORD *)((char *)v5 + v4);
      if ( v2 >= v3 )
        return;
    }
    v7 = *(DirectComposition::CChannel **)(v4 * v6 + *(_QWORD *)this);
    if ( !v7 )
      break;
    DirectComposition::CChannel::OnConnectionDisconnected(v7);
  }
}
