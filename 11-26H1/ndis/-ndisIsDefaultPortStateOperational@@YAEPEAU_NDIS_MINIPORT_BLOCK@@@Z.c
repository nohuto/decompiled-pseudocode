/*
 * XREFs of ?ndisIsDefaultPortStateOperational@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001B960
 * Callers:
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x14001B4C0 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisIsDefaultPortStateOperational(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned __int8 v2; // di
  _NDIS_PORT_AUTHORIZATION_STATE DefaultPortSendAuthorizationState; // eax
  _NDIS_PORT_AUTHORIZATION_STATE DefaultPortRcvAuthorizationState; // eax

  v2 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      23,
      44,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      (char)a1);
  if ( (a1->Flags & 0x10000) != 0 )
  {
    if ( a1->DefaultPortSendControlState != NdisPortControlStateControlled
      || (DefaultPortSendAuthorizationState = a1->DefaultPortSendAuthorizationState,
          DefaultPortSendAuthorizationState == NdisPortAuthorized)
      || DefaultPortSendAuthorizationState == NdisPortReauthorizing )
    {
      if ( a1->DefaultPortRcvControlState != NdisPortControlStateControlled
        || (DefaultPortRcvAuthorizationState = a1->DefaultPortRcvAuthorizationState,
            DefaultPortRcvAuthorizationState == NdisPortAuthorized)
        || DefaultPortRcvAuthorizationState == NdisPortReauthorizing )
      {
        v2 = 1;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      23,
      45,
      (struct _GUID *)&WPP_82edb36cecd534540cfb01a6d1688083_Traceguids,
      (char)a1);
  return v2;
}
