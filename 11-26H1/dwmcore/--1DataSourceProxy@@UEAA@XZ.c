/*
 * XREFs of ??1DataSourceProxy@@UEAA@XZ @ 0x180242C08
 * Callers:
 *     ??_GDataSourceProxy@@UEAAPEAXI@Z @ 0x180242D80 (--_GDataSourceProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x18004C1C0 (-GetTargetResource@-$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??1DataSourcePropertySet@@QEAA@XZ @ 0x180242BE0 (--1DataSourcePropertySet@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall DataSourceProxy::~DataSourceProxy(DataSourceProxy *this)
{
  __int64 *v2; // rsi
  __int64 *i; // rdi
  __int64 TargetResource; // rax
  void *v5; // rax

  *(_QWORD *)this = &DataSourceProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)this + 1) = &DataSourceProxy::`vftable'{for `IDataSourceProxy'};
  v2 = (__int64 *)*((_QWORD *)this + 26);
  for ( i = (__int64 *)*((_QWORD *)this + 25); i != v2; ++i )
  {
    TargetResource = CWeakReference<CGdiSpriteBitmap>::GetTargetResource(*i);
    if ( TargetResource )
    {
      *(_BYTE *)(TargetResource + 88) &= ~1u;
      *(_QWORD *)(TargetResource + 72) = 0LL;
      *(_QWORD *)(TargetResource + 80) = 0LL;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*i + 16LL))(*i);
  }
  v5 = (void *)*((_QWORD *)this + 25);
  if ( v5 != *((void **)this + 26) )
    *((_QWORD *)this + 26) = v5;
  *((_QWORD *)this + 24) = 0LL;
  if ( v5 )
  {
    std::_Deallocate<16>(v5, (*((_QWORD *)this + 27) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
  }
  DataSourcePropertySet::~DataSourcePropertySet((DataSourceProxy *)((char *)this + 64));
  BamoImpl::BamoDataSourceProxyImpl::~BamoDataSourceProxyImpl((DataSourceProxy *)((char *)this + 16));
}
