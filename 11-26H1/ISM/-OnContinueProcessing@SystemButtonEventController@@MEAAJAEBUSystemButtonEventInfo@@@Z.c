/*
 * XREFs of ?OnContinueProcessing@SystemButtonEventController@@MEAAJAEBUSystemButtonEventInfo@@@Z @ 0x18015F930
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterController@SystemButtonEventControllerManager@@QEAAXPEAVSystemButtonEventController@@@Z @ 0x180071C1C (-UnregisterController@SystemButtonEventControllerManager@@QEAAXPEAVSystemButtonEventController@@.c)
 *     ?GetSystemButtonEventControllerManager@ISMStatics@@SAPEAVSystemButtonEventControllerManager@@XZ @ 0x180071D34 (-GetSystemButtonEventControllerManager@ISMStatics@@SAPEAVSystemButtonEventControllerManager@@XZ.c)
 *     ?GetOldestEvent@SystemButtonEventBuffer@@QEAA_NAEAUSystemButtonEventInfo@@@Z @ 0x180097E68 (-GetOldestEvent@SystemButtonEventBuffer@@QEAA_NAEAUSystemButtonEventInfo@@@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?ContinueProcessing@SystemButtonEventController@InputETW@@SAX_KK_N1@Z @ 0x18015F6EC (-ContinueProcessing@SystemButtonEventController@InputETW@@SAX_KK_N1@Z.c)
 *     ?DeliverToNextTarget@SystemButtonEventController@@AEAAXAEBUSystemButtonEventInfo@@@Z @ 0x18015F798 (-DeliverToNextTarget@SystemButtonEventController@@AEAAXAEBUSystemButtonEventInfo@@@Z.c)
 */

__int64 __fastcall SystemButtonEventController::OnContinueProcessing(
        SystemButtonEventController *this,
        const struct SystemButtonEventInfo *a2)
{
  __m128i *i; // rax
  __m128i v5; // xmm0
  SystemButtonEventBuffer *v6; // rcx
  SystemButtonEventControllerManager *SystemButtonEventControllerManager; // rax
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF

  InputETW::SystemButtonEventController::ContinueProcessing(
    *(_QWORD *)a2,
    *((_DWORD *)a2 + 2),
    *((_BYTE *)a2 + 12),
    *((_BYTE *)a2 + 13));
  for ( i = (__m128i *)*((_QWORD *)this + 8); i != *((__m128i **)this + 9); ++i )
  {
    if ( i->m128i_i64[0] == *(_QWORD *)a2 )
    {
      v5 = _mm_srli_si128(*i, 8);
      if ( v5.m128i_i32[0] == *((_DWORD *)a2 + 2) && v5.m128i_i8[4] == *((_BYTE *)a2 + 12) )
      {
        v6 = (SystemButtonEventController *)((char *)this + 64);
        if ( i == *((__m128i **)this + 8) )
        {
          SystemButtonEventBuffer::GetOldestEvent(v6, (struct SystemButtonEventInfo *)&v9);
          if ( !*((_BYTE *)a2 + 13) )
            SystemButtonEventController::DeliverToNextTarget(this, a2);
        }
        else
        {
          v9 = 0LL;
          while ( SystemButtonEventBuffer::GetOldestEvent(v6, (struct SystemButtonEventInfo *)&v9) )
          {
            SystemButtonEventController::DeliverToNextTarget(this, (const struct SystemButtonEventInfo *)&v9);
            v6 = (SystemButtonEventController *)((char *)this + 64);
          }
          SystemButtonEventControllerManager = ISMStatics::GetSystemButtonEventControllerManager();
          SystemButtonEventControllerManager::UnregisterController(SystemButtonEventControllerManager, this);
        }
        return 0LL;
      }
    }
    else if ( i->m128i_i64[0] > *(_QWORD *)a2 )
    {
      return 0LL;
    }
  }
  return 0LL;
}
