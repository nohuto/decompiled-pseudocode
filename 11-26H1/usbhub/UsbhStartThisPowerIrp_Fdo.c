/*
 * XREFs of UsbhStartThisPowerIrp_Fdo @ 0x14004B65C
 * Callers:
 *     UsbhFdoPower_QueryPower @ 0x14004ABF0 (UsbhFdoPower_QueryPower.c)
 *     UsbhFdoPower_SetPower @ 0x14004ACE0 (UsbhFdoPower_SetPower.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

void __fastcall UsbhStartThisPowerIrp_Fdo(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // r9

  FdoExt(a1);
  v6 = *(_QWORD *)(a2 + 184);
  if ( *(_DWORD *)(v6 + 16) <= 1u )
  {
    Log(a1, 16, 1347374643, v6, a2);
    *(_QWORD *)(v7 + 8 * v8 + 840) = a2;
    *(_QWORD *)(v7 + 8 * v8 + 856) = v9;
    *(_DWORD *)(v7 + 4 * v8 + 872) = a3;
  }
}
