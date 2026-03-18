/*
 * XREFs of ?SetVmBusChannel@DXGVAILOBJECT@@QEAAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x140083274
 * Callers:
 *     ??1DXGVAILOBJECT@@UEAA@XZ @ 0x14020C928 (--1DXGVAILOBJECT@@UEAA@XZ.c)
 *     ?InitializeVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z @ 0x14020E3FC (-InitializeVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?DestroyVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x14020DE38 (-DestroyVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 */

void __fastcall DXGVAILOBJECT::SetVmBusChannel(DXGVAILOBJECT *this, struct DXGVMBUSCHANNEL *a2)
{
  struct DXGVMBUSCHANNEL *v4; // rcx

  v4 = (struct DXGVMBUSCHANNEL *)*((_QWORD *)this + 14);
  if ( v4 )
    DestroyVmBusChannel(v4);
  *((_QWORD *)this + 14) = a2;
}
