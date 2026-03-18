/*
 * XREFs of ?SetSourceModifier@CManipulationMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@W4SourceModifierIndex@@PEAVCResourceMarshaler@2@PEA_N@Z @ 0x140059428
 * Callers:
 *     ?SetBufferProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x140059520 (-SetBufferProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEB.c)
 * Callees:
 *     ?GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPEAVCWeakReferenceBase@2@@Z @ 0x14004A060 (-GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPE.c)
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1400F20EC (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CManipulationMarshaler::SetSourceModifier(
        __int64 a1,
        DirectComposition::CApplicationChannel *a2,
        signed int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        struct DirectComposition::CWeakReferenceBase *a5)
{
  struct DirectComposition::CWeakReferenceBase *v5; // r12
  unsigned int WeakReferenceBase; // r14d
  __int64 v9; // rbp
  __int64 v10; // rbx
  struct DirectComposition::CResourceMarshaler *v11; // rax
  struct DirectComposition::CWeakReferenceBase *v12; // rsi

  v5 = a5;
  WeakReferenceBase = 0;
  *(_BYTE *)a5 = 0;
  if ( (unsigned int)a3 < 5 )
  {
    _mm_lfence();
    v9 = a3;
    v10 = *(_QWORD *)(a1 + 8LL * a3 + 64);
    if ( v10 )
      v11 = *(struct DirectComposition::CResourceMarshaler **)(v10 + 16);
    else
      v11 = 0LL;
    if ( a4 == v11 )
    {
      if ( v10 && !v11 )
      {
        DirectComposition::CApplicationChannel::ReleaseWeakReference(
          a2,
          *(struct DirectComposition::CWeakReferenceBase **)(a1 + 8LL * a3 + 64));
        *(_QWORD *)(a1 + 8 * v9 + 64) = 0LL;
      }
      return WeakReferenceBase;
    }
    v12 = 0LL;
    a5 = 0LL;
    if ( a4 )
    {
      WeakReferenceBase = DirectComposition::CApplicationChannel::GetWeakReferenceBase(
                            (struct _RTL_GENERIC_TABLE *)a2,
                            a4,
                            &a5);
      if ( (WeakReferenceBase & 0x80000000) != 0 )
        return WeakReferenceBase;
      v12 = a5;
    }
    if ( v10 )
      DirectComposition::CApplicationChannel::ReleaseWeakReference(
        a2,
        (struct DirectComposition::CWeakReferenceBase *)v10);
    *(_QWORD *)(a1 + 8 * v9 + 64) = v12;
    *(_DWORD *)(a1 + 16) |= 0x80u;
    *(_BYTE *)v5 = 1;
    return WeakReferenceBase;
  }
  return 3221225485LL;
}
