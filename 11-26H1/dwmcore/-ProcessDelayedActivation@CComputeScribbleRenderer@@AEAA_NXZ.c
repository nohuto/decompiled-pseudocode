/*
 * XREFs of ?ProcessDelayedActivation@CComputeScribbleRenderer@@AEAA_NXZ @ 0x1801305B0
 * Callers:
 *     ?PreRender@CComputeScribbleRenderer@@QEAAJXZ @ 0x180130340 (-PreRender@CComputeScribbleRenderer@@QEAAJXZ.c)
 * Callees:
 *     McTemplateU0x_EventWriteTransfer @ 0x1800F8600 (McTemplateU0x_EventWriteTransfer.c)
 */

char __fastcall CComputeScribbleRenderer::ProcessDelayedActivation(CComputeScribbleRenderer *this)
{
  char v1; // bl
  char v2; // al
  const EVENT_DESCRIPTOR *v4; // rdx

  v1 = *((_BYTE *)this + 48);
  v2 = *((_BYTE *)this + 49);
  if ( v1 )
  {
    if ( !v2 )
    {
      *((_BYTE *)this + 48) = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
      {
        v4 = (const EVENT_DESCRIPTOR *)&EVTDESC_COMPUTESCRIBBLE_ACTIVE_Stop;
LABEL_9:
        McTemplateU0x_EventWriteTransfer((__int64)this, v4, *((_QWORD *)this + 3));
      }
    }
  }
  else if ( v2 )
  {
    *((_BYTE *)this + 48) = 1;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
    {
      v4 = (const EVENT_DESCRIPTOR *)&EVTDESC_COMPUTESCRIBBLE_ACTIVE_Start;
      goto LABEL_9;
    }
  }
  return v1;
}
