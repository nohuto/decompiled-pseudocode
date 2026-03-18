/*
 * XREFs of UsbhCompletePdoWakeIrps @ 0x14004A6F0
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x14002F4B0 (UsbhFdoD0Worker_Action.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhLatchPdo @ 0x1400082B0 (UsbhLatchPdo.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhUnlatchPdo @ 0x14000D730 (UsbhUnlatchPdo.c)
 *     UsbhCompletePdoWakeIrp @ 0x14000E4EC (UsbhCompletePdoWakeIrp.c)
 */

_DWORD *__fastcall UsbhCompletePdoWakeIrps(__int64 a1)
{
  int v1; // esi
  unsigned __int16 i; // di
  __int64 v4; // rax
  __int64 v5; // rbp
  _DWORD *v6; // r14
  _DWORD *result; // rax

  v1 = 0;
  for ( i = 1; i <= *((unsigned __int8 *)FdoExt(a1) + 2938); ++i )
  {
    v4 = UsbhLatchPdo(a1, i, 0LL, 0x70646F57u);
    v5 = v4;
    if ( v4 )
    {
      v6 = PdoExt(v4);
      if ( (v6[355] & 0x2000) != 0 )
      {
        if ( UsbhCompletePdoWakeIrp(a1, v5, 0) )
        {
          if ( (unsigned int)++v1 > 1 )
            UsbhException(a1, 0, 97, 0LL, 0, 0, 0, usbfile_fdopwr_c, 3772, 0);
        }
      }
      v6[355] &= ~0x2000u;
      UsbhUnlatchPdo(a1, v5, 0LL, 0x70646F57u);
    }
  }
  result = FdoExt(a1);
  result[640] &= ~0x4000000u;
  return result;
}
