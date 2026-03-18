/*
 * XREFs of ?DrvUpdatePDevForWDDMDevice@@YAXAEAVPDEVOBJ@@@Z @ 0x1401657D8
 * Callers:
 *     ?DrvUpdateMDevForWDDMDevices@@YAXPEAU_MDEV@@@Z @ 0x140165690 (-DrvUpdateMDevForWDDMDevices@@YAXPEAU_MDEV@@@Z.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1401656D8 (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 * Callees:
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x140027570 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 */

void __fastcall DrvUpdatePDevForWDDMDevice(struct PDEVOBJ *a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // [rsp+60h] [rbp+8h] BYREF
  __int64 v7; // [rsp+68h] [rbp+10h] BYREF

  v1 = *(_QWORD *)a1;
  v7 = 0LL;
  v3 = *(_QWORD *)(v1 + 2568);
  if ( (*(_DWORD *)(v3 + 160) & 0x800000) != 0
    && (int)GreDeviceIoControlImpl(*(PDEVICE_OBJECT *)(v3 + 136), 0x232043u, 0LL, 0, &v7, 8u, &v6, 1u, 1) >= 0 )
  {
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 2584LL) + 184LL) = v7;
    v4 = *(_QWORD *)(*(_QWORD *)a1 + 2584LL);
    if ( BYTE4(v7) )
      *(_DWORD *)(v4 + 180) &= ~2u;
    else
      *(_DWORD *)(v4 + 180) |= 2u;
    v5 = *(_QWORD *)(*(_QWORD *)a1 + 2584LL);
    if ( *(_DWORD *)(v5 + 180) )
      *(_DWORD *)(v5 + 72) |= 0x200000u;
  }
}
