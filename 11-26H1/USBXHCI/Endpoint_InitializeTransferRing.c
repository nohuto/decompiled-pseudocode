/*
 * XREFs of Endpoint_InitializeTransferRing @ 0x14001E72C
 * Callers:
 *     Endpoint_OnResetEndpointConfigure @ 0x1400048E4 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x14001E588 (Endpoint_OnCancelSetDequeuePointer.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x14003A690 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x140048680 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 * Callees:
 *     TR_InitializeTransferRing @ 0x14001E854 (TR_InitializeTransferRing.c)
 */

__int64 __fastcall Endpoint_InitializeTransferRing(__int64 a1, unsigned int a2)
{
  __int128 v2; // xmm0
  __int64 v3; // rcx
  __int64 v5; // rax

  if ( *(_BYTE *)(a1 + 37) )
  {
    v2 = *(_OWORD *)(*(_QWORD *)a1 + 736LL);
    if ( (v2 & 0x100000000000LL) != 0 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 144) + 32LL) + 16LL) + 16LL * a2;
      if ( (((unsigned __int64)v2 >> 35) & 1) != 0 || (v2 & 0x1000000000LL) != 0 )
      {
        if ( (v2 & 0x1000000000LL) != 0 )
        {
          if ( (((unsigned __int64)v2 >> 35) & 1) == 0 )
            *(_DWORD *)(v5 + 12) &= 0xFF000000;
        }
        else
        {
          *(_DWORD *)(v5 + 8) = (unsigned __int8)*(_DWORD *)(v5 + 8);
        }
      }
      else
      {
        *(_DWORD *)(v5 + 8) &= 0xFF000000;
      }
    }
    v3 = *(_QWORD *)(104LL * (a2 - 1) + *(_QWORD *)(a1 + 144) + 48);
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 88);
  }
  return TR_InitializeTransferRing(v3);
}
