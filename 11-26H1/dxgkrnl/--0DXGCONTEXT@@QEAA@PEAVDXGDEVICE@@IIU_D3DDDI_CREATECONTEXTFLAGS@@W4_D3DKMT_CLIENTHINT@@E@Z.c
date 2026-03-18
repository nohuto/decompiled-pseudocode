/*
 * XREFs of ??0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z @ 0x1403A5FB0
 * Callers:
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1403A4378 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 * Callees:
 *     ?GetProcessRenderAdapterInfo@DXGDEVICE@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@XZ @ 0x14003797C (-GetProcessRenderAdapterInfo@DXGDEVICE@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@XZ.c)
 *     ?GetHighestBitPos@@YAII@Z @ 0x1403A61F0 (-GetHighestBitPos@@YAII@Z.c)
 *     ?GetClientStatistics@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAPEAUDXG_CLIENT_STATISTICS@@W4_D3DKMT_CLIENTHINT@@@Z @ 0x1403A6204 (-GetClientStatistics@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAPEAUDXG_CLIENT_STATISTICS@@W4_D3DKMT_CL.c)
 */

DXGCONTEXT *__fastcall DXGCONTEXT::DXGCONTEXT(
        DXGCONTEXT *this,
        struct DXGDEVICE *a2,
        int a3,
        unsigned int a4,
        struct _D3DDDI_CREATECONTEXTFLAGS a5,
        enum _D3DKMT_CLIENTHINT a6,
        unsigned __int8 a7)
{
  int v8; // eax
  bool v9; // zf
  unsigned int HighestBitPos; // eax
  __int64 v11; // rdx
  DXGPROCESS_RENDER_ADAPTER_INFO *ProcessRenderAdapterInfo; // rax

  *((_QWORD *)this + 2) = a2;
  *(_OWORD *)this = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 1LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = a6;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_BYTE *)this + 296) = 0;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_DWORD *)this + 80) = 0;
  *((_DWORD *)this + 81) = 76;
  *((_DWORD *)this + 82) = -1;
  *((struct _D3DDDI_CREATECONTEXTFLAGS *)this + 98) = a5;
  *((_DWORD *)this + 95) = a3;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_DWORD *)this + 94) = 0;
  *((_DWORD *)this + 96) = a4;
  *((_QWORD *)this + 51) = (char *)this + 400;
  *((_QWORD *)this + 50) = (char *)this + 400;
  *((_BYTE *)this + 430) = a7;
  v8 = 57;
  *((_QWORD *)this + 52) = 0LL;
  *((_DWORD *)this + 106) = 0;
  *((_WORD *)this + 214) = 0;
  *(_WORD *)((char *)this + 431) = 0;
  *((_WORD *)this + 217) = 0;
  v9 = *((_DWORD *)a2 + 116) == 2;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  if ( !v9 )
    v8 = 63;
  *((_DWORD *)this + 115) = v8;
  *((_DWORD *)this + 114) = 0;
  *((_DWORD *)this + 116) = 59;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *(_OWORD *)((char *)this + 200) = 0LL;
  *(_OWORD *)((char *)this + 216) = 0LL;
  *((_QWORD *)this + 43) = (char *)this + 336;
  *((_QWORD *)this + 42) = (char *)this + 336;
  *((_OWORD *)this + 10) = 0LL;
  HighestBitPos = GetHighestBitPos(a4);
  *((_DWORD *)this + 97) = HighestBitPos;
  *((_BYTE *)this + 433) = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL) + 3032LL)
                                      + 352LL * HighestBitPos
                                      + 16) & 0xC0) != 0;
  if ( (*(_BYTE *)(v11 + 1917) & 1) == 0 )
  {
    ProcessRenderAdapterInfo = DXGDEVICE::GetProcessRenderAdapterInfo((DXGPROCESS **)v11);
    *((_QWORD *)this + 60) = DXGPROCESS_RENDER_ADAPTER_INFO::GetClientStatistics(ProcessRenderAdapterInfo, a6);
  }
  return this;
}
