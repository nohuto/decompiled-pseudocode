/*
 * XREFs of ?SetBufferProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1400597D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x140020FF4 (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1400221BC (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x140022610 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x14005B060 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetBufferProperty(
        LARGE_INTEGER *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        LARGE_INTEGER *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  DirectComposition::CApplicationChannel *v8; // r13
  __int64 v11; // rax
  LARGE_INTEGER v12; // rcx
  unsigned __int64 v13; // r15
  __int64 v14; // rax
  unsigned int i; // ebp
  struct DirectComposition::CResourceMarshaler *v16; // rax
  DirectComposition::CResourceMarshaler *v17; // r13
  __int64 v18; // r12
  _OWORD *v19; // rax

  v6 = 0;
  v8 = a2;
  *a6 = 0;
  if ( a3 == 22 )
  {
    if ( a5 == 8 )
    {
      this[23] = KeQueryPerformanceCounter(0LL);
      v12 = *a4;
      LOBYTE(this[37].LowPart) &= ~4u;
      this[24] = v12;
      *a6 = 1;
      this[2].LowPart &= ~0x2000u;
      return v6;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 != 31 )
  {
    if ( a3 != 5 )
      return (unsigned int)-1073741811;
    if ( this[11].QuadPart )
      return (unsigned int)-1073741790;
    switch ( a5 )
    {
      case 0xCuLL:
        if ( a4->LowPart != 1 )
          return (unsigned int)-1073741811;
        v11 = Win32AllocPoolWithQuotaImpl((__int64)this, 0xCuLL, 0x6D654344u);
        if ( v11 )
        {
          this[11].QuadPart = v11;
          *(LARGE_INTEGER *)v11 = *a4;
          *(_DWORD *)(v11 + 8) = a4[1].LowPart;
LABEL_16:
          this[2].LowPart &= ~0x40u;
          goto LABEL_9;
        }
        break;
      case 0x10uLL:
        if ( a4->LowPart != 2 )
          return (unsigned int)-1073741811;
        v19 = (_OWORD *)Win32AllocPoolWithQuotaImpl((__int64)this, 0x10uLL, 0x6D654344u);
        if ( v19 )
        {
          this[11].QuadPart = (LONGLONG)v19;
          *v19 = *(_OWORD *)&a4->LowPart;
          goto LABEL_16;
        }
        break;
      case 0uLL:
        this[2].LowPart &= ~0x40u;
LABEL_9:
        *a6 = 1;
        return v6;
      default:
        return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741801;
  }
  if ( !a5 )
    return (unsigned int)-1073741811;
  v13 = a5 / 0xC;
  if ( a5 != 12 * (a5 / 0xC) || this[19].QuadPart || this[30].HighPart )
    return (unsigned int)-1073741811;
  v14 = Win32AllocPoolWithQuotaImpl(a5, 16LL * (unsigned int)v13, 0x666B4344u);
  if ( !v14 )
    return (unsigned int)-1073741801;
  this[19].QuadPart = v14;
  for ( i = 0; i < (unsigned int)v13; ++i )
  {
    v16 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(v8, *(&a4->LowPart + 3 * i));
    v17 = v16;
    if ( !v16
      || !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                             *((unsigned int *)v16 + 9),
                             156LL) )
    {
      return (unsigned int)-1073741811;
    }
    DirectComposition::CResourceMarshaler::AddRef(v17);
    v18 = 2LL * i;
    *(_QWORD *)(this[19].QuadPart + 8 * v18) = v17;
    v8 = a2;
    *(_DWORD *)(this[19].QuadPart + 8 * v18 + 8) = *(&a4->HighPart + 3 * i);
    *(_DWORD *)(this[19].QuadPart + 8 * v18 + 12) = *(&a4[1].LowPart + 3 * i);
    ++this[30].HighPart;
  }
  *a6 = 1;
  this[2].LowPart &= ~0x20000u;
  return v6;
}
