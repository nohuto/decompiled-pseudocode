/*
 * XREFs of ??0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z @ 0x140246794
 * Callers:
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAUHDEV__@@I@Z @ 0x1401F8CD4 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAUHDEV__@@I@Z.c)
 *     ?bInitPrivatePFT@@YAHXZ @ 0x140289030 (-bInitPrivatePFT@@YAHXZ.c)
 *     bInitFontTables @ 0x1403FC394 (bInitFontTables.c)
 * Callees:
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall FHMEMOBJ::FHMEMOBJ(__int64 a1, __int64 *a2, int a3, unsigned int a4)
{
  _DWORD *v7; // rcx

  *(_QWORD *)a1 = a2;
  if ( a4 > 0x1FFFFFFA )
    *a2 = 0LL;
  else
    *a2 = PALLOCMEM(8 * a4 + 40, 1935763527LL);
  v7 = **(_DWORD ***)a1;
  *(_QWORD *)(a1 + 8) = v7;
  if ( v7 )
  {
    *v7 = 1213415752;
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) = a3;
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = a4;
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 12LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 16LL) = 0;
    memset_0((void *)(*(_QWORD *)(a1 + 8) + 40LL), 0, 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 8) + 8LL));
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) = 0LL;
  }
  return a1;
}
