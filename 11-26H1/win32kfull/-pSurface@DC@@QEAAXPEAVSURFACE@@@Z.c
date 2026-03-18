/*
 * XREFs of ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1400150C0
 * Callers:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bDisposeTrgDcoWorker@DEVLOCKOBJ@@QEAAHXZ @ 0x14006F670 (-bDisposeTrgDcoWorker@DEVLOCKOBJ@@QEAAHXZ.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x140071F20 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     ?UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z @ 0x1400A8B34 (-UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1400A992C (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1400A9B14 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1400A9E9C (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1400AA178 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1400B3E48 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1400BAF30 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?GrepResetDC@@YAHAEAVXDCOBJ@@PEAU_devicemodeW@@PEAHPEAU_DRIVER_INFO_2W@@PEAX@Z @ 0x140155A74 (-GrepResetDC@@YAHAEAVXDCOBJ@@PEAU_devicemodeW@@PEAHPEAU_DRIVER_INFO_2W@@PEAX@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x140189A40 (UntrapAppContainerRenderingWrap.c)
 *     ?GrepStartDoc@@YAHAEAVAPIDCOBJ@@PEAU_DOCINFOW@@PEAHH@Z @ 0x140310CA8 (-GrepStartDoc@@YAHAEAVAPIDCOBJ@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     ?bEndDocInternal@@YAHAEAVAPIDCOBJ@@K@Z @ 0x140310FE0 (-bEndDocInternal@@YAHAEAVAPIDCOBJ@@K@Z.c)
 * Callees:
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x140015840 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1400D3508 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 */

void __fastcall DC::pSurface(DC *this, struct SURFACE *a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // r8
  DC *v5; // r9
  int v6; // r10d
  unsigned int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rax

  *((_QWORD *)this + 62) = a2;
  if ( a2 && (*((_DWORD *)a2 + 29) & 0x800) != 0 )
  {
    DC::vSetDpiScaling(
      this,
      _mm_unpacklo_ps((__m128)*((unsigned int *)a2 + 165), (__m128)*((unsigned int *)a2 + 166)).m128_u64[0],
      a3,
      this);
  }
  else
  {
    v3 = *((_DWORD *)this + 130);
    if ( (v3 & 1) != 0 )
    {
      *((_DWORD *)this + 9) |= 0x10u;
      *(_QWORD *)((char *)this + 524) = 0LL;
      *((_DWORD *)this + 130) = v3 & 0xFFFFFFF8 | 4;
      *(_QWORD *)((char *)this + 532) = 0LL;
      if ( (unsigned int)DC::bDpiScaleTransform(this) )
      {
        v6 = _mm_cvtsi128_si32((__m128i)0LL);
        v7 = (unsigned __int8)(v6 >> 23);
        if ( v7 <= 0x9E )
        {
          v8 = v6 & 0x7FFFFF | 0x800000LL;
          if ( v7 < (int)v4 + 117 )
            v9 = v8 >> ((unsigned __int8)v4 + 117 - (unsigned __int8)v7);
          else
            v9 = v8 << ((unsigned __int8)v7 - 118);
          v4 = (v9 + 0x80000000LL) >> 32;
          if ( v6 < 0 )
            LODWORD(v4) = -(int)v4;
        }
      }
      DC::SetCachedDpiScaleValue(v5, v4);
    }
  }
}
