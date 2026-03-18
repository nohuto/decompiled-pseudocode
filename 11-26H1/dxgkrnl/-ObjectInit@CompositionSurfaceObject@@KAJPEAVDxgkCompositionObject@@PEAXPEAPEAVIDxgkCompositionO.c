/*
 * XREFs of ?ObjectInit@CompositionSurfaceObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x14004DC60
 * Callers:
 *     NtCreateCompositionSurfaceHandle @ 0x14004DAC0 (NtCreateCompositionSurfaceHandle.c)
 * Callees:
 *     ??$?0$00X@?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x14003D9C0 (--$-0$00X@-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor.c)
 */

__int64 __fastcall CompositionSurfaceObject::ObjectInit(
        struct DxgkCompositionObject *a1,
        void *a2,
        struct IDxgkCompositionObject **a3)
{
  char *v3; // rdi
  _QWORD *v6; // rsi
  __int64 v7; // rbp
  __int64 result; // rax

  v3 = (char *)a1 + 40;
  if ( a1 )
  {
    *(_QWORD *)a1 = &CompositionSurfaceObject::`vftable'{for `DxgkCompositionObject'};
    v6 = (_QWORD *)((char *)a1 + 96);
    *((_QWORD *)a1 + 4) = &CompositionSurfaceObject::`vftable'{for `IPairedSurfaceObject'};
    v7 = 5LL;
    *((_QWORD *)a1 + 6) = 0LL;
    *((_QWORD *)a1 + 7) = 0LL;
    *(_QWORD *)v3 = &CCompositionSurface::`vftable';
    do
    {
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v6++);
      --v7;
    }
    while ( v7 );
    *((_DWORD *)v3 + 24) = 0;
    *((_QWORD *)a1 + 22) = 0LL;
    *((_QWORD *)a1 + 24) = 0LL;
    *((_BYTE *)a1 + 200) = 0;
  }
  *a3 = (struct IDxgkCompositionObject *)v3;
  *((_DWORD *)a1 + 16) = 0;
  *((_QWORD *)a1 + 9) = 0LL;
  *((_QWORD *)a1 + 10) = 0LL;
  *((_QWORD *)a1 + 11) = 0LL;
  *((_QWORD *)a1 + 19) = (char *)a1 + 144;
  *((_QWORD *)a1 + 18) = (char *)a1 + 144;
  result = 0LL;
  *((_DWORD *)a1 + 40) = 0;
  *((_QWORD *)a1 + 21) = 0LL;
  return result;
}
