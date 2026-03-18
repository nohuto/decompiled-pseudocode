/*
 * XREFs of ?InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x14009E6BC
 * Callers:
 *     imp_WdfUsbTargetPipeConfigContinuousReader @ 0x14009C760 (imp_WdfUsbTargetPipeConfigContinuousReader.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1400235B0 (-Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ??0FxUsbPipeContinuousReader@@QEAA@PEAVFxUsbPipe@@E@Z @ 0x14009E1BC (--0FxUsbPipeContinuousReader@@QEAA@PEAVFxUsbPipe@@E@Z.c)
 *     ??_GFxUsbPipeContinuousReader@@QEAAPEAXI@Z @ 0x14009E32C (--_GFxUsbPipeContinuousReader@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall FxUsbPipe::InitContinuousReader(
        FxUsbPipe *this,
        _WDF_USB_CONTINUOUS_READER_CONFIG *Config,
        unsigned __int64 TotalBufferLength)
{
  const void *v6; // rdx
  unsigned __int8 NumPendingReads; // al
  unsigned __int8 v9; // bl
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v11; // r8
  FX_POOL **v12; // rax
  FxUsbPipeContinuousReader *v13; // rax
  unsigned int v14; // r9d
  FxUsbPipeContinuousReader *v15; // rbx
  int v16; // ebp
  __m128i v17; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( this->m_Reader )
  {
    v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v6 = 0LL;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, 0x1Cu, WPP_FxUsbPipe_cpp_Traceguids, v6, -1073741436);
    return 3221225860LL;
  }
  else
  {
    NumPendingReads = Config->NumPendingReads;
    if ( NumPendingReads )
    {
      v9 = Config->NumPendingReads;
      if ( NumPendingReads > 0xAu )
        v9 = 10;
    }
    else
    {
      v9 = 2;
    }
    m_Globals = this->m_Globals;
    v11 = retaddr;
    v17.m128i_i64[0] = 0LL;
    v17.m128i_i64[1] = 64LL;
    if ( !m_Globals->FxPoolTrackingOn )
      v11 = 0LL;
    v12 = FxPoolAllocator(
            m_Globals,
            &m_Globals->FxPoolFrameworks,
            &v17,
            120LL * ((unsigned int)v9 - 1) + 216,
            m_Globals->Tag,
            v11);
    if ( v12
      && (FxUsbPipeContinuousReader::FxUsbPipeContinuousReader((FxUsbPipeContinuousReader *)v12, this, v9),
          (v15 = v13) != 0LL) )
    {
      v16 = FxUsbPipeContinuousReader::Config(v13, Config, TotalBufferLength, v14);
      if ( v16 >= 0 )
      {
        v15->m_ReadCompleteCallback = Config->EvtUsbTargetPipeReadComplete;
        v15->m_ReadCompleteContext = Config->EvtUsbTargetPipeReadCompleteContext;
        v15->m_ReadersFailedCallback = Config->EvtUsbTargetPipeReadersFailed;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&this->m_Reader, (signed __int64)v15, 0LL) )
          FxUsbPipeContinuousReader::`scalar deleting destructor'(v15);
        return 0LL;
      }
      else
      {
        FxUsbPipeContinuousReader::`scalar deleting destructor'(v15);
        return (unsigned int)v16;
      }
    }
    else
    {
      return 3221225626LL;
    }
  }
}
