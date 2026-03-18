/*
 * XREFs of ?MakeAdapterActive@DXGADAPTER@@QEAAXXZ @ 0x1403B5428
 * Callers:
 *     ?MonitorStateChangeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403B5334 (-MonitorStateChangeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042EA78 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::MakeAdapterActive(DXGADAPTER *this)
{
  char *v2; // rdi
  __int64 v3; // rbx
  ULONG TimeIncrement; // eax

  v2 = (char *)this + 4912;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  *((_QWORD *)v2 + 1) = KeGetCurrentThread();
  if ( !*((_BYTE *)this + 4904) )
  {
    v3 = MEMORY[0xFFFFF78000000320];
    TimeIncrement = KeQueryTimeIncrement();
    *((_BYTE *)this + 4904) = 1;
    *((_QWORD *)this + 612) = v3 * TimeIncrement;
  }
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
