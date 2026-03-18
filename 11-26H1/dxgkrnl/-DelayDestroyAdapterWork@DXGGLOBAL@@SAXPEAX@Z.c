/*
 * XREFs of ?DelayDestroyAdapterWork@DXGGLOBAL@@SAXPEAX@Z @ 0x1401DCBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_GDXGADAPTER@@QEAAPEAXI@Z @ 0x14007BCB8 (--_GDXGADAPTER@@QEAAPEAXI@Z.c)
 *     ?AcquireExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x14007BD9C (-AcquireExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?ReleaseExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x14007C390 (-ReleaseExclusive@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z @ 0x1401DC770 (-ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGGLOBAL::DelayDestroyAdapterWork(DXGADAPTER ***this)
{
  struct DXGGLOBAL *Global; // rbx
  DXGADAPTER *v3; // rcx
  DXGADAPTER **v4; // rax

  Global = DXGGLOBAL::GetGlobal();
  DXGADAPTERLISTLOCK::AcquireExclusive((struct DXGGLOBAL *)((char *)Global + 680));
  DXGFASTMUTEX::Acquire((struct DXGGLOBAL *)((char *)Global + 760));
  v3 = (DXGADAPTER *)*this;
  if ( (*this)[1] != (DXGADAPTER *)this || (v4 = this[1], *v4 != (DXGADAPTER *)this) )
    __fastfail(3u);
  *v4 = v3;
  *((_QWORD *)v3 + 1) = v4;
  if ( DXGGLOBAL::ConsiderForMultiAdapterFeatureUsage(v3, (struct DXGADAPTER *)this) )
  {
    --*((_DWORD *)Global + 76317);
    if ( *((_BYTE *)this + 2988) )
    {
      --*((_DWORD *)Global + 76313);
    }
    else if ( *((_BYTE *)this + 2983) )
    {
      --*((_DWORD *)Global + 76314);
    }
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)Global + 95);
  DXGADAPTERLISTLOCK::ReleaseExclusive((struct DXGGLOBAL *)((char *)Global + 680));
  DXGADAPTER::`scalar deleting destructor'((DXGADAPTER *)this);
}
