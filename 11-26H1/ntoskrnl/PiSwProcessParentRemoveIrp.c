/*
 * XREFs of PiSwProcessParentRemoveIrp @ 0x1409B2334
 * Callers:
 *     IopRemoveDevice @ 0x1409B1DD8 (IopRemoveDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     McTemplateK0zzzzdd_EtwWriteTransfer @ 0x1405DF1E0 (McTemplateK0zzzzdd_EtwWriteTransfer.c)
 *     PiSwProcessRemove @ 0x1409AD484 (PiSwProcessRemove.c)
 *     PiSwLock @ 0x1409AFD6C (PiSwLock.c)
 *     PiSwDestroyDeviceObject @ 0x140A8C420 (PiSwDestroyDeviceObject.c)
 *     PiSwCloseDescendants @ 0x140A8DCF8 (PiSwCloseDescendants.c)
 *     PiSwFindSwDevice @ 0x140B25E48 (PiSwFindSwDevice.c)
 */

void __fastcall PiSwProcessParentRemoveIrp(__int64 a1)
{
  char *v1; // rsi
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 *v5; // rdi
  struct _DEVICE_OBJECT *v6; // r14
  __int64 *DeviceExtension; // r15
  char *DeviceNode; // rcx
  __int64 v9; // rdx
  __int64 *v10; // rax
  char *v11; // r8
  wchar_t *v12; // rcx
  __int64 SwDevice; // rax
  __int64 v14; // rdx
  int v15; // r11d
  const wchar_t *v16; // r10
  const wchar_t *v17; // r8
  const wchar_t *v18; // r9
  const wchar_t *v19; // rcx

  v1 = 0LL;
  if ( a1 )
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v3 = 0LL;
  v4 = (v3 + 40) & -(__int64)(v3 != 0);
  PiSwLock();
  v5 = (__int64 *)PiSwGlobalPdoAssociationList;
  while ( v5 != &PiSwGlobalPdoAssociationList )
  {
    v10 = v5;
    v11 = v1;
    v5 = (__int64 *)*v5;
    if ( v10[2] == a1 )
    {
      v6 = (struct _DEVICE_OBJECT *)v10[3];
      DeviceExtension = (__int64 *)v6->DeviceExtension;
      DeviceNode = (char *)v6->DeviceObjectExtension->DeviceNode;
      v9 = *DeviceExtension;
      v1 = DeviceNode + 40;
      if ( !DeviceNode )
        v1 = v11;
      if ( (byte_140EF412C & 0x40) != 0 )
      {
        if ( v9 )
          v15 = *(_DWORD *)(v9 + 4);
        else
          LOBYTE(v15) = 0;
        if ( v4 )
          v16 = *(const wchar_t **)(v4 + 8);
        else
          v16 = &word_140B8A320;
        if ( v1 )
          v17 = (const wchar_t *)*((_QWORD *)v1 + 1);
        else
          v17 = &word_140B8A320;
        if ( v9 )
        {
          v18 = *(const wchar_t **)(v9 + 8);
          v19 = *(const wchar_t **)(v9 + 16);
        }
        else
        {
          v19 = &word_140B8A320;
          v18 = &word_140B8A320;
        }
        McTemplateK0zzzzdd_EtwWriteTransfer(
          (__int64)v19,
          v9,
          (__int64)v17,
          v18,
          v19,
          v17,
          v16,
          v15,
          *((_DWORD *)DeviceExtension + 2));
      }
      if ( (DeviceExtension[1] & 0x20) == 0 )
        PiSwProcessRemove((__int64)v6, 0);
      PiSwDestroyDeviceObject(v6);
    }
  }
  if ( v4 )
  {
    v12 = *(wchar_t **)(v4 + 8);
    if ( v12 )
    {
      SwDevice = PiSwFindSwDevice(v12);
      LOBYTE(v14) = 1;
      if ( !SwDevice || (*(_DWORD *)(SwDevice + 4) & 1) == 0 && !*(_DWORD *)(SwDevice + 180) )
        PiSwCloseDescendants(v4, v14);
    }
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegion();
}
