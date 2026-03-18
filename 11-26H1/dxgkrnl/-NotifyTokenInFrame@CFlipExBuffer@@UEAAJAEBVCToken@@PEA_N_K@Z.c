/*
 * XREFs of ?NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N_K@Z @ 0x1400675E0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAttributes@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z @ 0x140034E20 (-UpdateAttributes@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z.c)
 *     ?NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z @ 0x14003AAB8 (-NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z.c)
 *     ?GetRealizationAt@CCompositionBuffer@@IEBAPEAVCBufferRealization@@I@Z @ 0x14003DE90 (-GetRealizationAt@CCompositionBuffer@@IEBAPEAVCBufferRealization@@I@Z.c)
 *     ?UpdateIndependentFlipState@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z @ 0x14003E24C (-UpdateIndependentFlipState@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z.c)
 *     ?FromToken@CFlipToken@@SAPEBV1@PEBVCToken@@@Z @ 0x140045D2C (-FromToken@CFlipToken@@SAPEBV1@PEBVCToken@@@Z.c)
 *     Feature_FullscreenStats__private_IsEnabledDeviceUsageNoInline @ 0x140067720 (Feature_FullscreenStats__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipExBuffer::NotifyTokenInFrame(
        CFlipExBuffer *this,
        const struct CToken *a2,
        bool *a3,
        __int64 a4)
{
  unsigned int v5; // ebx
  const struct CFlipToken *v9; // rax
  const struct CFlipToken *v10; // rsi
  unsigned int v11; // ebp
  struct CBufferRealization *RealizationAt; // rax
  int v13; // ecx
  unsigned int v14; // eax

  v5 = 0;
  *a3 = 0;
  v9 = CFlipToken::FromToken(a2);
  v10 = v9;
  if ( v9 && (v11 = *((_DWORD *)v9 + 30), v11 < *((_DWORD *)this + 72)) )
  {
    *((_DWORD *)this + 73) = (*(__int64 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)v9 + 112LL))(v9);
    if ( *((_DWORD *)this + 99) != v11 )
    {
      *((_DWORD *)this + 99) = v11;
      *a3 = 1;
      if ( (*(unsigned __int8 (__fastcall **)(const struct CToken *))(*(_QWORD *)a2 + 144LL))(a2) )
        *((_BYTE *)this + 642) = 0;
    }
    if ( CFlipExBuffer::UpdateAttributes(this, v10) )
      *a3 = 1;
    if ( CFlipExBuffer::UpdateIndependentFlipState(this, v10) )
      *a3 = 1;
    RealizationAt = CCompositionBuffer::GetRealizationAt(this, v11);
    v13 = *((_DWORD *)v10 + 143);
    if ( v13 != *((_DWORD *)RealizationAt + 20) )
    {
      *((_DWORD *)RealizationAt + 20) = v13;
      *a3 = 1;
    }
    if ( (unsigned int)Feature_FullscreenStats__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( a4 )
      {
        v14 = *((_DWORD *)this + 73);
        if ( v14 > *((_DWORD *)this + 66) )
        {
          *((_QWORD *)this + 32) = a4;
          *((_DWORD *)this + 66) = v14;
        }
      }
    }
    CCompositionBuffer::NotifyDirty(
      this,
      *((const struct IRegion **)v10 + 12),
      (const struct CFlipToken *)((char *)v10 + 68));
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
