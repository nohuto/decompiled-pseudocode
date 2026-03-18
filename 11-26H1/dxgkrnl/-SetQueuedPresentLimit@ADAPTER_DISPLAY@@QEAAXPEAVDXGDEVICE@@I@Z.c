/*
 * XREFs of ?SetQueuedPresentLimit@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1403A039C
 * Callers:
 *     ?SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z @ 0x1403A031C (-SetQueuedPresentLimit@DXGDEVICE@@QEAAJI@Z.c)
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x14000EB0C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z @ 0x140283B8C (-SetQueuedPresentLimit@BLTQUEUE@@QEAAXI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::SetQueuedPresentLimit(ADAPTER_DISPLAY *this, struct DXGDEVICE *a2, unsigned int a3)
{
  unsigned int i; // ebx

  if ( *((_QWORD *)this + 58) )
  {
    for ( i = 0; i < *((_DWORD *)this + 24); ++i )
    {
      if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(this, a2, i) )
        BLTQUEUE::SetQueuedPresentLimit((BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)this + 58) + 8LL) + 3040LL * i), a3);
    }
  }
}
