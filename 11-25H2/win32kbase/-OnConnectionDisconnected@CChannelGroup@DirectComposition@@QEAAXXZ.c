/*
 * XREFs of ?OnConnectionDisconnected@CChannelGroup@DirectComposition@@QEAAXXZ @ 0x140139C80
 * Callers:
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1400E47F0 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     ?OnConnectionDisconnected@CChannel@DirectComposition@@QEAAXXZ @ 0x140139D04 (-OnConnectionDisconnected@CChannel@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CChannelGroup::OnConnectionDisconnected(DirectComposition::CChannelGroup *this)
{
  _QWORD *v2; // rbx
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  _QWORD *v6; // rax
  DirectComposition::CChannel *v7; // rcx

  v2 = (_QWORD *)((char *)this + 32);
  v3 = 0LL;
  while ( 1 )
  {
    v4 = *((_QWORD *)this + 3);
    v5 = v3;
    if ( v3 < v4 )
    {
      v6 = (_QWORD *)(*(_QWORD *)this + v3 * *((_QWORD *)this + 4));
      do
      {
        v2 = (_QWORD *)((char *)this + 32);
        if ( *v6 )
          break;
        ++v5;
        v6 = (_QWORD *)((char *)v6 + *((_QWORD *)this + 4));
      }
      while ( v5 < v4 );
    }
    if ( v5 >= v4 )
      break;
    v3 = v5 + 1;
    v7 = *(DirectComposition::CChannel **)(*v2 * v5 + *(_QWORD *)this);
    if ( !v7 )
      break;
    DirectComposition::CChannel::OnConnectionDisconnected(v7);
  }
}
