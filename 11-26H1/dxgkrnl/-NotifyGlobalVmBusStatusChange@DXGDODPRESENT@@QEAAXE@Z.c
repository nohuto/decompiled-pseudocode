/*
 * XREFs of ?NotifyGlobalVmBusStatusChange@DXGDODPRESENT@@QEAAXE@Z @ 0x14028369C
 * Callers:
 *     ?GlobalVmBusStatChangeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x140220D60 (-GlobalVmBusStatChangeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?NotifyGlobalVmBusStatusChange@BLTQUEUE@@QEAAXE@Z @ 0x140283608 (-NotifyGlobalVmBusStatusChange@BLTQUEUE@@QEAAXE@Z.c)
 */

void __fastcall DXGDODPRESENT::NotifyGlobalVmBusStatusChange(DXGDODPRESENT *this, char a2)
{
  unsigned int i; // ebx

  for ( i = 0; i < *(_DWORD *)this; ++i )
    BLTQUEUE::NotifyGlobalVmBusStatusChange((BLTQUEUE *)(*((_QWORD *)this + 1) + 3040LL * i), a2);
}
