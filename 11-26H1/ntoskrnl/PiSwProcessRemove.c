/*
 * XREFs of PiSwProcessRemove @ 0x1409AD484
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x1409AE200 (PiSwPdoPnPDispatch.c)
 *     PiSwProcessParentRemoveIrp @ 0x1409B2334 (PiSwProcessParentRemoveIrp.c)
 *     PiSwGetChildPdo @ 0x140A8BC18 (PiSwGetChildPdo.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403C2960 (RtlDeleteElementGenericTableAvl.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     IoInvalidateDeviceRelations @ 0x1404CC3D0 (IoInvalidateDeviceRelations.c)
 *     McTemplateK0zz_EtwWriteTransfer @ 0x1405278A0 (McTemplateK0zz_EtwWriteTransfer.c)
 *     McTemplateK0zzztdd_EtwWriteTransfer @ 0x1405DF0AC (McTemplateK0zzztdd_EtwWriteTransfer.c)
 *     PnpFreeDevPropertyArray @ 0x1409516F0 (PnpFreeDevPropertyArray.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14095A580 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwQueuedCreateInfoFree @ 0x140A8BFD0 (PiSwQueuedCreateInfoFree.c)
 *     PiSwBusRelationRemove @ 0x140A8C348 (PiSwBusRelationRemove.c)
 *     PiSwUnassociateDeviceObject @ 0x140A8C454 (PiSwUnassociateDeviceObject.c)
 *     PiSwDeviceDereference @ 0x140A8C538 (PiSwDeviceDereference.c)
 *     PiSwPnPInfoFree @ 0x140A8C830 (PiSwPnPInfoFree.c)
 *     PiSwFreeInterfaceList @ 0x140A8C8D4 (PiSwFreeInterfaceList.c)
 *     PiSwBusRelationAdd @ 0x140A8D51C (PiSwBusRelationAdd.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x140B14B14 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwMakePdoInactive @ 0x140B40844 (PiSwMakePdoInactive.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwProcessRemove(__int64 a1, char a2)
{
  __int64 *v2; // rbx
  __int64 v4; // rax
  const wchar_t *v5; // r11
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  const wchar_t **v12; // r9
  unsigned int *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int *v16; // rdx
  void *v17; // rcx
  unsigned int *v18; // r9
  PVOID *v19; // rdx
  int v20; // edx
  struct _DEVICE_OBJECT *v21; // rax
  struct _DEVICE_OBJECT *v22; // rbx
  const wchar_t *v23; // r9
  int v24; // r10d
  const wchar_t *v25; // rdx
  __int64 v26; // rcx
  unsigned int *Buffer; // [rsp+60h] [rbp+10h] BYREF

  v2 = *(__int64 **)(a1 + 64);
  v4 = *(_QWORD *)(a1 + 312);
  v5 = 0LL;
  v7 = *v2;
  Buffer = (unsigned int *)*v2;
  v8 = *(_QWORD *)(v4 + 40);
  if ( v8 )
    v5 = *(const wchar_t **)(v8 + 48);
  if ( (byte_140EF412C & 0x40) != 0 )
  {
    v23 = &word_140B8A320;
    if ( v7 )
    {
      v24 = *(_DWORD *)(v7 + 4);
      v25 = *(const wchar_t **)(v7 + 16);
    }
    else
    {
      LOBYTE(v24) = 0;
      v25 = &word_140B8A320;
    }
    if ( v7 )
      v23 = *(const wchar_t **)(v7 + 8);
    McTemplateK0zzztdd_EtwWriteTransfer(v8, (__int64)v25, v7, v23, v25, v5, a2, v24, *((_DWORD *)v2 + 2));
  }
  result = *((unsigned int *)v2 + 2);
  if ( (result & 0x20) == 0 )
  {
    if ( (result & 1) != 0 )
    {
      *((_DWORD *)v2 + 2) = result & 0xFFFFFFFE;
      result = PiSwDeviceInterfacesUpdateState(Buffer, 0LL);
    }
    if ( !a2 )
    {
      PiSwMakePdoInactive(a1);
      if ( (v2[1] & 0x48) != 8 )
        PiSwUnassociateDeviceObject(a1);
      result = Buffer[1];
      if ( (result & 2) != 0 )
      {
        result = PiSwBusRelationRemove(Buffer);
        v12 = (const wchar_t **)Buffer;
        if ( *((_QWORD *)Buffer + 11) )
        {
          Buffer[1] &= ~4u;
          PiSwPnPInfoFree(Buffer + 6);
          v13 = Buffer;
          v14 = *((_QWORD *)Buffer + 11);
          *(_OWORD *)(Buffer + 6) = *(_OWORD *)(v14 + 8);
          *(_OWORD *)(v13 + 10) = *(_OWORD *)(v14 + 24);
          *(_OWORD *)(v13 + 14) = *(_OWORD *)(v14 + 40);
          v15 = *((_QWORD *)Buffer + 11);
          *(_OWORD *)(v15 + 8) = 0LL;
          *(_OWORD *)(v15 + 24) = 0LL;
          *(_OWORD *)(v15 + 40) = 0LL;
          v16 = Buffer;
          v17 = (void *)*((_QWORD *)Buffer + 19);
          if ( v17 )
          {
            ExFreePoolWithTag(v17, 0x57706E50u);
            v16 = Buffer;
          }
          v16[40] = *(_DWORD *)(*((_QWORD *)v16 + 11) + 64LL);
          *((_QWORD *)Buffer + 19) = *(_QWORD *)(*((_QWORD *)Buffer + 11) + 56LL);
          *(_DWORD *)(*((_QWORD *)Buffer + 11) + 64LL) = 0;
          *(_QWORD *)(*((_QWORD *)Buffer + 11) + 56LL) = 0LL;
          v18 = Buffer;
          v19 = (PVOID *)*((_QWORD *)Buffer + 21);
          if ( v19 )
          {
            PnpFreeDevPropertyArray(Buffer[44], v19, 0x57706E50u);
            v18 = Buffer;
          }
          v18[44] = *(_DWORD *)(*((_QWORD *)v18 + 11) + 80LL);
          *((_QWORD *)Buffer + 21) = *(_QWORD *)(*((_QWORD *)Buffer + 11) + 72LL);
          *(_DWORD *)(*((_QWORD *)Buffer + 11) + 80LL) = 0;
          *(_QWORD *)(*((_QWORD *)Buffer + 11) + 72LL) = 0LL;
          Buffer[41] = *(_DWORD *)(*((_QWORD *)Buffer + 11) + 68LL);
          PiSwFreeInterfaceList(Buffer + 46);
          v20 = PiSwBusRelationAdd(**((_QWORD **)Buffer + 11));
          if ( v20 < 0 )
          {
            v26 = *((_QWORD *)Buffer + 18);
            if ( v26 && _InterlockedExchange64((volatile __int64 *)(v26 + 104), 0LL) )
            {
              *(_QWORD *)(*((_QWORD *)Buffer + 18) + 56LL) = 0LL;
              *(_DWORD *)(*((_QWORD *)Buffer + 18) + 48LL) = v20;
              IofCompleteRequest(*((PIRP *)Buffer + 18), 0);
              *((_QWORD *)Buffer + 18) = 0LL;
            }
          }
          else
          {
            Buffer[1] &= ~2u;
            v21 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(
                                             *((_QWORD *)Buffer + 14),
                                             0x746C6644u);
            v22 = v21;
            if ( v21 )
            {
              IoInvalidateDeviceRelations(v21, SingleBusRelations);
              ObfDereferenceObject(v22);
            }
          }
          PiSwQueuedCreateInfoFree(*((PVOID *)Buffer + 11));
          result = (__int64)Buffer;
          *((_QWORD *)Buffer + 11) = 0LL;
          v12 = (const wchar_t **)Buffer;
        }
        if ( !v12[14] )
        {
          if ( (byte_140EF412C & 0x40) != 0 )
            McTemplateK0zz_EtwWriteTransfer(
              v10,
              (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_InstanceTable_Remove,
              v11,
              v12[1],
              v12[2]);
          RtlDeleteElementGenericTableAvl(&PiSwDeviceInstanceTable, &Buffer);
          return PiSwDeviceDereference(Buffer);
        }
      }
    }
  }
  return result;
}
