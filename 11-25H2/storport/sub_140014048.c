/*
 * XREFs of sub_140014048 @ 0x140014048
 * Callers:
 *     sub_140061988 @ 0x140061988 (sub_140061988.c)
 * Callees:
 *     sub_14001412C @ 0x14001412C (sub_14001412C.c)
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 */

__int64 __fastcall sub_140014048(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
{
  _DWORD *DeviceExtension; // rsi
  _QWORD *v5; // rbx
  void *v6; // rax
  void *v7; // rdi
  int v8; // ebp

  DeviceExtension = DeviceObject->DeviceExtension;
  if ( *DeviceExtension != 1094997074 )
    return 3221225485LL;
  v5 = DeviceExtension + 1344;
  if ( DeviceExtension && *v5 )
  {
    *a2 = *v5;
    return 0LL;
  }
  else if ( KeGetCurrentIrql() )
  {
    return 3221225800LL;
  }
  else
  {
    v6 = (void *)sub_1400143E0(64LL, 80LL, 1347379538LL, DeviceObject);
    v7 = v6;
    if ( v6 )
    {
      v8 = sub_14001412C(DeviceObject, v6);
      if ( v8 >= 0 )
      {
        *a2 = v7;
        if ( DeviceExtension )
          *v5 = v7;
      }
      else
      {
        ExFreePoolWithTag(v7, 0x504F6152u);
      }
      return (unsigned int)v8;
    }
    else
    {
      return 3221225626LL;
    }
  }
}
