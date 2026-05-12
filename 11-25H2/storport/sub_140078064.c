/*
 * XREFs of sub_140078064 @ 0x140078064
 * Callers:
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 *     sub_140061988 @ 0x140061988 (sub_140061988.c)
 *     sub_140078CD8 @ 0x140078CD8 (sub_140078CD8.c)
 *     sub_1400CB254 @ 0x1400CB254 (sub_1400CB254.c)
 *     sub_14019EDA4 @ 0x14019EDA4 (sub_14019EDA4.c)
 *     sub_1401B1388 @ 0x1401B1388 (sub_1401B1388.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140078300 @ 0x140078300 (sub_140078300.c)
 */

__int64 __fastcall sub_140078064(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
{
  _QWORD *DeviceExtension; // rax
  _QWORD *v4; // r15
  _QWORD *v5; // rbp
  _QWORD *v6; // r14
  _QWORD *v7; // rsi
  int v9; // edx
  __int64 v10; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  void *v14; // rbx
  int v15; // r12d

  DeviceExtension = DeviceObject->DeviceExtension;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v9 = *(_DWORD *)DeviceExtension;
  if ( *(_DWORD *)DeviceExtension != 1094997074 )
  {
    switch ( v9 )
    {
      case 1431193940:
        v5 = DeviceObject->DeviceExtension;
        if ( !DeviceExtension )
          goto LABEL_17;
        v10 = DeviceExtension[235];
        break;
      case 1314275652:
        v6 = DeviceObject->DeviceExtension;
        if ( !DeviceExtension )
          goto LABEL_17;
        v12 = DeviceExtension[20];
        if ( !v12 )
          goto LABEL_17;
        v10 = *(_QWORD *)(v12 + 32);
        break;
      case 1314278989:
        v7 = DeviceObject->DeviceExtension;
        if ( !DeviceExtension )
          goto LABEL_17;
        v13 = DeviceExtension[16];
        if ( !v13 )
          goto LABEL_17;
        v10 = *(_QWORD *)(v13 + 16);
        break;
      default:
        return 3221225485LL;
    }
LABEL_4:
    if ( v10 )
    {
      *a2 = v10;
      return 0LL;
    }
    goto LABEL_17;
  }
  v4 = DeviceObject->DeviceExtension;
  if ( DeviceExtension )
  {
    v10 = DeviceExtension[671];
    goto LABEL_4;
  }
LABEL_17:
  if ( KeGetCurrentIrql() )
    return 3221225800LL;
  v14 = (void *)sub_1400143E0(64LL, 72LL, 1464885586LL, (__int64)DeviceObject);
  if ( !v14 )
    return 3221225626LL;
  v15 = sub_140078300(DeviceObject);
  if ( v15 < 0 )
  {
    ExFreePoolWithTag(v14, 0x57506152u);
  }
  else
  {
    *a2 = v14;
    if ( v4 )
    {
      v4[671] = v14;
    }
    else if ( v5 )
    {
      v5[235] = v14;
    }
    else if ( v6 )
    {
      *(_QWORD *)(v6[20] + 32LL) = v14;
    }
    else if ( v7 )
    {
      *(_QWORD *)(v7[16] + 16LL) = v14;
    }
  }
  return (unsigned int)v15;
}
