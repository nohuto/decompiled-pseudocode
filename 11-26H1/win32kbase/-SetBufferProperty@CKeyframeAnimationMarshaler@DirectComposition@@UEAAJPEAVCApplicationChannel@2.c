/*
 * XREFs of ?SetBufferProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140240970
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x1400A77FC (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1400AA340 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1400ABE60 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400ADC68 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x1401BD260 (-SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UD.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        _QWORD *a4,
        unsigned __int64 a5,
        _BYTE *a6)
{
  unsigned int v6; // ebx
  DirectComposition::CApplicationChannel *v8; // r13
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  unsigned int i; // ebp
  struct DirectComposition::CResourceMarshaler *v13; // rax
  DirectComposition::CResourceMarshaler *v14; // r13
  __int64 v15; // r12
  __int64 v16; // rax

  v6 = 0;
  v8 = (DirectComposition::CApplicationChannel *)a2;
  *a6 = 0;
  if ( a3 == 23 )
  {
    if ( a5 == 8 )
    {
      *(LARGE_INTEGER *)(a1 + 216) = KeQueryPerformanceCounter(0LL);
      v16 = *a4;
      *(_BYTE *)(a1 + 320) &= ~4u;
      *(_QWORD *)(a1 + 224) = v16;
      *a6 = 1;
      *(_DWORD *)(a1 + 16) &= ~0x4000u;
      return v6;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 != 32 )
    return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetBufferProperty(a1, a2, a3, (__int64)a4, a5, a6);
  if ( !a5 )
    return (unsigned int)-1073741811;
  v10 = a5 / 0xC;
  if ( a5 != 12 * (a5 / 0xC) || *(_QWORD *)(a1 + 176) || *(_DWORD *)(a1 + 268) )
    return (unsigned int)-1073741811;
  v11 = Win32AllocPoolWithQuotaImpl(a5, 16LL * (unsigned int)v10, 0x666B4344u);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 176) = v11;
    for ( i = 0; i < (unsigned int)v10; ++i )
    {
      v13 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(v8, *((_DWORD *)a4 + 3 * i));
      v14 = v13;
      if ( !v13 || !DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)v13 + 9), 132) )
        return (unsigned int)-1073741811;
      DirectComposition::CResourceMarshaler::AddRef(v14);
      v15 = 2LL * i;
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 8 * v15) = v14;
      v8 = (DirectComposition::CApplicationChannel *)a2;
      *(_DWORD *)(*(_QWORD *)(a1 + 176) + 8 * v15 + 8) = *((_DWORD *)a4 + 3 * i + 1);
      *(_DWORD *)(*(_QWORD *)(a1 + 176) + 8 * v15 + 12) = *((_DWORD *)a4 + 3 * i + 2);
      ++*(_DWORD *)(a1 + 268);
    }
    *a6 = 1;
    *(_DWORD *)(a1 + 16) &= ~0x40000u;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v6;
}
