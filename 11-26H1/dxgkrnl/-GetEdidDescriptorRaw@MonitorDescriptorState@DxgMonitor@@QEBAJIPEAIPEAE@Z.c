/*
 * XREFs of ?GetEdidDescriptorRaw@MonitorDescriptorState@DxgMonitor@@QEBAJIPEAIPEAE@Z @ 0x140405AC8
 * Callers:
 *     ?MonitorGetEdidFromMonitor@@YAJPEAUHDXGMONITOR__@@IPEAIPEAE@Z @ 0x1404059E4 (-MonitorGetEdidFromMonitor@@YAJPEAUHDXGMONITOR__@@IPEAIPEAE@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

__int64 __fastcall DxgMonitor::MonitorDescriptorState::GetEdidDescriptorRaw(
        DxgMonitor::MonitorDescriptorState *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  unsigned int v4; // ebp
  __int64 v8; // rcx
  void *v9; // rsi
  unsigned int v10; // eax
  void *Src; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  if ( !a3 || !a4 || !a2 )
    return 3221225485LL;
  v8 = *((_QWORD *)this + 16);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v8 + 232LL))(v8, &Src);
    v9 = Src;
    if ( Src )
    {
      v10 = *a3;
      if ( a2 < *a3 )
      {
        *a3 = a2;
        v4 = -2147483643;
        v10 = a2;
      }
      memmove(a4, v9, v10);
      Src = 0LL;
      if ( v9 )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
      return v4;
    }
    else
    {
      return 3221225495LL;
    }
  }
  else
  {
    *a3 = 0;
    return 3223126017LL;
  }
}
