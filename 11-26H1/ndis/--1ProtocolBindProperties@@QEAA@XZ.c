/*
 * XREFs of ??1ProtocolBindProperties@@QEAA@XZ @ 0x1400E61E4
 * Callers:
 *     ?reserve@?$KArray@UProtocolBindProperties@@$00@Rtl@@QEAA_N_K@Z @ 0x14000401C (-reserve@-$KArray@UProtocolBindProperties@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ??1NdisBindBuilderGlobal@@QEAA@XZ @ 0x14014D2D0 (--1NdisBindBuilderGlobal@@QEAA@XZ.c)
 *     ?ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x14014EDB4 (-ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140056810 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 */

void __fastcall ProtocolBindProperties::~ProtocolBindProperties(ProtocolBindProperties *this)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x7272414Bu);
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 4);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x7272414Bu);
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)this + 2, 0LL);
}
