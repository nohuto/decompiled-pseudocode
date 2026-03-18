/*
 * XREFs of ?ReportFirstFramePresented@DISPLAY_MUX_MGR@@QEAAXU_LUID@@I@Z @ 0x14006B084
 * Callers:
 *     DxgkDisplayMuxReportFirstFramePresented @ 0x14006522C (DxgkDisplayMuxReportFirstFramePresented.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 */

void __fastcall DISPLAY_MUX_MGR::ReportFirstFramePresented(DISPLAY_MUX_MGR *this, struct _LUID a2, int a3)
{
  DWORD LowPart; // ebx
  struct _KEVENT *v6; // rcx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF
  LONG HighPart; // [rsp+4Ch] [rbp+14h]

  HighPart = a2.HighPart;
  LowPart = a2.LowPart;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (DISPLAY_MUX_MGR *)((char *)this + 16), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  if ( *((_BYTE *)this + 84) )
  {
    if ( a3 == *((_DWORD *)this + 26) && LowPart == *((_DWORD *)this + 24) && HighPart == *((_DWORD *)this + 25) )
    {
      v6 = (struct _KEVENT *)*((_QWORD *)this + 11);
      if ( v6 )
        KeSetEvent(v6, 0, 0);
    }
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v7);
}
