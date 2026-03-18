/*
 * XREFs of ??0BLTQUEUE_EMULATED_VSYNC_SOURCE@@QEAA@PEAVDXGDODPRESENT@@PEAU_EX_TIMER@@1@Z @ 0x140284B34
 * Callers:
 *     ?RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x14018F994 (-RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x140055480 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 */

BLTQUEUE_EMULATED_VSYNC_SOURCE *__fastcall BLTQUEUE_EMULATED_VSYNC_SOURCE::BLTQUEUE_EMULATED_VSYNC_SOURCE(
        BLTQUEUE_EMULATED_VSYNC_SOURCE *this,
        struct DXGDODPRESENT *a2,
        struct _EX_TIMER *a3,
        struct _EX_TIMER *a4)
{
  DXGDODPRESENT *v8; // rcx
  DXGADAPTER *Adapter; // rax
  struct _LUID *v10; // rdx
  char v11; // r8
  BLTQUEUE_EMULATED_VSYNC_SOURCE *result; // rax

  *((_BYTE *)this + 8) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &BLTQUEUE_EMULATED_VSYNC_SOURCE::`vftable';
  KeInitializeEvent((PRKEVENT)this + 1, SynchronizationEvent, 0);
  *((_BYTE *)this + 8) = 0;
  if ( a2 )
  {
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(a2) + 111) & 0x100) != 0 )
    {
      Adapter = DXGDODPRESENT::GetAdapter(v8);
      if ( !DXGADAPTER::IsAdapterSessionized(Adapter, v10, 0LL, 0LL) || g_bSkuSupportMultipleUsers == v11 )
        *((_BYTE *)this + 8) = 1;
    }
  }
  result = this;
  if ( !*((_BYTE *)this + 8) )
    a3 = a4;
  *((_QWORD *)this + 2) = a3;
  return result;
}
