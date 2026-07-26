/*
 * XREFs of ?ndisFSetRestartAttributes@@YAHPEAXPEAU_NDIS_FILTER_PARTIAL_CHARACTERISTICS@@@Z @ 0x140064D50
 * Callers:
 *     NdisSetOptionalHandlers @ 0x140095FC0 (NdisSetOptionalHandlers.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Zq @ 0x14005F000 (WPP_RECORDER_SF_Zq.c)
 *     ?ndisAllocateIterativeDataPathTracker@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140074440 (-ndisAllocateIterativeDataPathTracker@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     memcmp @ 0x1400EA9E0 (memcmp.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014C2B8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140158AB0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1401625B0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x140164950 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 */

__int64 __fastcall ndisFSetRestartAttributes(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NDIS_FILTER_PARTIAL_CHARACTERISTICS *Buf2)
{
  struct _NDIS_FILTER_PARTIAL_CHARACTERISTICS *v3; // rbx
  unsigned int v4; // edi
  void (__fastcall *SendNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // rax
  unsigned int IterativeDataPathTracker; // ecx
  int v8; // edx
  char v9[160]; // [rsp+40h] [rbp-C8h] BYREF

  v3 = Buf2;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(Buf2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)Buf2,
      1,
      35,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      (char)a1);
  }
  if ( v3 )
  {
    if ( a1->Header.Revision == 1 )
    {
      if ( v3->Header.Size < 0x30u )
      {
        v4 = -1073676283;
      }
      else
      {
        SendNetBufferListsHandler = v3->SendNetBufferListsHandler;
        if ( SendNetBufferListsHandler || !v3->CancelSendNetBufferListsHandler )
        {
          IterativeDataPathTracker = 0;
          if ( !SendNetBufferListsHandler
            && !v3->SendNetBufferListsCompleteHandler
            && !v3->ReceiveNetBufferListsHandler
            && !v3->ReturnNetBufferListsHandler )
          {
            goto LABEL_31;
          }
          if ( !a1->IterativeDataPathTracker )
            IterativeDataPathTracker = ndisAllocateIterativeDataPathTracker(a1);
          v4 = IterativeDataPathTracker;
          if ( !IterativeDataPathTracker )
          {
LABEL_31:
            if ( memcmp(&a1->Characteristics, v3, 0x30uLL) )
            {
              Ndis::BindEngine::BeginPolicyUpdates(&a1->Miniport->BindEngine);
              if ( Ndis::BindState::SetPause(
                     &a1->Miniport->Bindings.Miniport,
                     DatapathPaused,
                     PauseReason_RestartNeeded) )
              {
                memset(v9, 0, sizeof(v9));
                if ( (unsigned __int8)byte_14011EAD3 >= 4u )
                {
                  ndisGetBindLinkNameForTracing(a1->Bind, (struct NDIS_PNPTRACE_LOCALS *)v9);
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    WPP_RECORDER_SF_Zq(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      v8,
                      0x1Cu,
                      0x24u,
                      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
                      *(unsigned __int16 **)&v9[8],
                      *(_QWORD *)v9);
                }
              }
              Ndis::BindEngine::EndPolicyUpdates(&a1->Miniport->BindEngine);
            }
            *(_OWORD *)&a1->Characteristics.Header.Type = *(_OWORD *)&v3->Header.Type;
            *(_OWORD *)&a1->Characteristics.SendNetBufferListsCompleteHandler = *(_OWORD *)&v3->SendNetBufferListsCompleteHandler;
            *(_OWORD *)&a1->Characteristics.ReceiveNetBufferListsHandler = *(_OWORD *)&v3->ReceiveNetBufferListsHandler;
          }
        }
        else
        {
          v4 = -1073741811;
        }
      }
    }
    else
    {
      v4 = -1073741637;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(Buf2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)Buf2,
      1,
      37,
      (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
      (char)a1);
  }
  return v4;
}
