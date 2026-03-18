/*
 * XREFs of VidSchFlushPendingCommand @ 0x14011DCA0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSubmitCommandPacketToQueue @ 0x140011854 (VidSchiSubmitCommandPacketToQueue.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     VidSchiDiscardQueuePacket @ 0x1400EA710 (VidSchiDiscardQueuePacket.c)
 */

__int64 __fastcall VidSchFlushPendingCommand(__int64 a1, int a2)
{
  __int64 v4; // rsi
  __int64 v6; // rcx
  __int64 **v7; // rdi
  __int64 *v8; // rcx
  __int64 *v9; // rax
  struct _VIDSCH_QUEUE_PACKET *v10; // rcx
  int v11; // eax
  int v12; // edx

  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 104);
    if ( *(_DWORD *)(a1 + 440) )
    {
      v7 = (__int64 **)(a1 + 688);
      do
      {
        v8 = *v7;
        if ( (__int64 **)(*v7)[1] != v7 || (v9 = (__int64 *)*v8, *(__int64 **)(*v8 + 8) != v8) )
          __fastfail(3u);
        *v7 = v9;
        v10 = (struct _VIDSCH_QUEUE_PACKET *)(v8 - 4);
        v9[1] = (__int64)v7;
        v11 = *(_DWORD *)(a1 + 440) - 1;
        *(_DWORD *)(a1 + 440) = v11;
        if ( a2 || (v12 = *((_DWORD *)v10 + 18), (v12 & 0x40) == 0) )
        {
          VidSchiDiscardQueuePacket(v10);
        }
        else
        {
          if ( !v11 )
            *((_DWORD *)v10 + 18) = (v12 | 0x4000) ^ (*((_DWORD *)v10 + 70) ^ (v12 | 0x4000)) & 0x80;
          VidSchiSubmitCommandPacketToQueue((__int64)v10);
        }
      }
      while ( *(_DWORD *)(a1 + 440) );
    }
    *(_DWORD *)(v4 + 512) = -1;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 7039;
    DxgkLogInternalTriageEvent(v6, 0x40000LL);
    return 3221225485LL;
  }
}
