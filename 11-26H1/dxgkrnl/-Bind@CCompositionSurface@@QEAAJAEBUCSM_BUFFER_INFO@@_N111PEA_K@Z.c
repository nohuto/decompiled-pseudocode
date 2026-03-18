/*
 * XREFs of ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N111PEA_K@Z @ 0x140026474
 * Callers:
 *     ?PairedBind@CompositionSurfaceObject@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z @ 0x1400A3210 (-PairedBind@CompositionSurfaceObject@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z.c)
 * Callees:
 *     ?ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ @ 0x140025E88 (-ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ.c)
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x140026270 (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1400265E0 (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     ?Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_NPEAPEAV1@@Z @ 0x140026600 (-Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_NPEAPEAV1@.c)
 *     ?PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z @ 0x14004E190 (-PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z.c)
 *     ?Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@PEA_K@Z @ 0x14006D00C (-Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@PEA_K@Z.c)
 *     ?Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@Z @ 0x1400A36A0 (-Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@.c)
 */

__int64 __fastcall CCompositionSurface::Bind(
        CCompositionSurface *this,
        const struct CSM_BUFFER_INFO *a2,
        char a3,
        char a4,
        bool a5,
        bool a6,
        unsigned __int64 *a7)
{
  struct CCompositionBuffer *v7; // rsi
  struct CCompositionBuffer *ActiveBuffer; // rax
  __int64 v12; // rdx
  bool v13; // r8
  __int64 v14; // r10
  bool v15; // bp
  signed int v16; // ebx
  struct CCompositionBuffer *v17; // rbx
  struct CCompositionBuffer *v19; // [rsp+20h] [rbp-28h] BYREF
  struct CCompositionBuffer *v20; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  ActiveBuffer = CCompositionSurface::GetActiveBuffer(this);
  v15 = a6;
  v16 = ActiveBuffer != 0LL ? 0xC0000510 : 0;
  if ( (*((_QWORD *)this + 19) || a6) && *(_DWORD *)v12 != 2 )
    return (unsigned int)-1073741790;
  if ( !ActiveBuffer )
  {
    if ( *(_DWORD *)v12 == 1 )
    {
      v16 = CCompositionBuffer::Create(
              (const struct CSM_BUFFER_ATTRIBUTES *)(v14 + 16),
              (const struct CSM_SINGLE_BUFFER_INFO *)(v12 + 160),
              &v19);
      if ( v16 < 0 )
        return (unsigned int)v16;
      v17 = v19;
      goto LABEL_8;
    }
    if ( *(_DWORD *)v12 != 2 )
      return (unsigned int)-1073741811;
    v16 = CFlipExBuffer::Create(
            (const struct CSM_BUFFER_ATTRIBUTES *)(v14 + 16),
            (const struct CSM_SWAPCHAIN_BUFFER_INFO_ *)(v12 + 160),
            v13,
            &v20);
    if ( v16 >= 0 )
    {
      v7 = v20;
      v17 = v20;
LABEL_8:
      if ( a4 )
        *((_BYTE *)v17 + 41) = 1;
      if ( !a3 )
        CCompositionSurface::ReleaseAllBuffers(this);
      v16 = CCompositionSurface::Bind(this, v17, a7);
      if ( v16 >= 0 && v7 )
      {
        if ( *((_QWORD *)this + 19) )
        {
          v16 = CCompositionSurface::PairBind(this, v7);
          if ( v16 < 0 )
            CCompositionSurface::UnBind(this, 0);
        }
        else
        {
          *((_BYTE *)this + 160) = v15;
          *((_BYTE *)v7 + 646) = v15;
        }
      }
    }
  }
  return (unsigned int)v16;
}
