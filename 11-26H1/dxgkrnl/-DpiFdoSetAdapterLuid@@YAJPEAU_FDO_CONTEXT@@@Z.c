/*
 * XREFs of ?DpiFdoSetAdapterLuid@@YAJPEAU_FDO_CONTEXT@@@Z @ 0x140086040
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 * Callees:
 *     <none>
 */

int __fastcall DpiFdoSetAdapterLuid(struct _FDO_CONTEXT *a1)
{
  int result; // eax
  struct _DEVICE_OBJECT *v3; // rcx
  __int64 i; // rdi
  __int64 v5; // rax
  __int64 v6; // rsi
  int Data; // [rsp+50h] [rbp+8h] BYREF

  result = 0;
  if ( *((_DWORD *)a1 + 710) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 710); i = (unsigned int)(i + 1) )
    {
      v5 = *((_QWORD *)a1 + 354);
      Data = i;
      v6 = *(_QWORD *)(*(_QWORD *)(v5 + 8 * i) + 64LL);
      result = IoSetDevicePropertyData(
                 *(PDEVICE_OBJECT *)(v6 + 152),
                 &DEVPKEY_Gpu_Luid,
                 0,
                 0,
                 9u,
                 8u,
                 (char *)a1 + 2696);
      if ( result < 0 )
        break;
      result = IoSetDevicePropertyData(
                 *(PDEVICE_OBJECT *)(v6 + 152),
                 &DEVPKEY_Gpu_PhysicalAdapterIndex,
                 0,
                 0,
                 7u,
                 4u,
                 &Data);
      if ( result < 0 )
        break;
    }
  }
  else
  {
    result = IoSetDevicePropertyData(*((PDEVICE_OBJECT *)a1 + 19), &DEVPKEY_Gpu_Luid, 0, 0, 9u, 8u, (char *)a1 + 2696);
    if ( result >= 0 )
    {
      v3 = (struct _DEVICE_OBJECT *)*((_QWORD *)a1 + 19);
      Data = 0;
      return IoSetDevicePropertyData(v3, &DEVPKEY_Gpu_PhysicalAdapterIndex, 0, 0, 7u, 4u, &Data);
    }
  }
  return result;
}
