/*
 * XREFs of PropertySetBooleanSideband @ 0x1400335DC
 * Callers:
 *     ?SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140017420 (-SetMute@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x140017B24 (-SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 *     DeviceRequestPowerUp @ 0x14003FECC (DeviceRequestPowerUp.c)
 */

__int64 __fastcall PropertySetBooleanSideband(__int64 a1, __int64 a2, _DWORD *a3, unsigned int a4, int a5, _BYTE *a6)
{
  _BYTE *v6; // r15
  __int64 v9; // rsi
  int v11; // ebx
  __int64 v12; // r14
  __int64 v13; // r12

  v6 = a6;
  a5 = 0;
  v9 = a4;
  v11 = -1073741811;
  if ( *a6 > 1u )
    return (unsigned int)v11;
  v12 = *(_QWORD *)(a1 + 16);
  v13 = *(_QWORD *)(a2 + 128);
  if ( *(_DWORD *)(v12 + 536) == 1 )
  {
LABEL_5:
    if ( (unsigned int)v9 < *(_DWORD *)(a2 + 92) )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *, _DWORD, int, int *))(a2 + 136))(
              a1,
              a2,
              4LL,
              v6,
              v9,
              1,
              &a5);
      if ( v11 >= 0 )
      {
        *(_BYTE *)(v13 + 16 * v9 + 12) = *v6;
        *a3 = a5;
      }
    }
    return (unsigned int)v11;
  }
  v11 = DeviceRequestPowerUp(a1, a2);
  if ( v11 >= 0 )
  {
    KeWaitForSingleObject((PVOID)(v12 + 560), Executive, 0, 0, 0LL);
    goto LABEL_5;
  }
  return 3221225635LL;
}
