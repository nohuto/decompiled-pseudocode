/*
 * XREFs of DpiGetIntegratedDisplayOrientationOverrides @ 0x1404260D8
 * Callers:
 *     ?_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ @ 0x14043054C (-_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x1400174A8 (DpiFdoGetChildDescriptor.c)
 */

__int64 __fastcall DpiGetIntegratedDisplayOrientationOverrides(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  _QWORD *ChildDescriptor; // rax
  int *v5; // r9
  unsigned int v6; // r10d
  int *v7; // r11
  _QWORD *v8; // rdx
  int *v9; // rax
  int v10; // ecx
  int v11; // eax

  *a4 = 0;
  *a3 = 0;
  ChildDescriptor = DpiFdoGetChildDescriptor(*(_QWORD *)(a1 + 64), a2);
  v8 = ChildDescriptor;
  if ( ChildDescriptor )
  {
    v9 = (int *)ChildDescriptor[13];
    if ( v9 )
    {
      v10 = *v9;
      v11 = ((unsigned int)*v9 >> 2) & 3;
      if ( v11 || (v10 & 3) != 0 )
      {
        *v5 = v11;
        *v7 = *(_DWORD *)v8[13] & 3;
        return 0;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
