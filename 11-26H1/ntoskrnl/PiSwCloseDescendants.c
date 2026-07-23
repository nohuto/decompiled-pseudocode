/*
 * XREFs of PiSwCloseDescendants @ 0x140A8DCF8
 * Callers:
 *     PiSwProcessParentRemoveIrp @ 0x1409B2334 (PiSwProcessParentRemoveIrp.c)
 *     PiSwIrpCleanup @ 0x140A8C048 (PiSwIrpCleanup.c)
 *     PiSwCloseDescendants @ 0x140A8DCF8 (PiSwCloseDescendants.c)
 * Callees:
 *     McTemplateK0z_EtwWriteTransfer @ 0x140499B90 (McTemplateK0z_EtwWriteTransfer.c)
 *     PiSwFindBusRelations @ 0x1409AFF94 (PiSwFindBusRelations.c)
 *     PiSwCloseDevice @ 0x140A8C244 (PiSwCloseDevice.c)
 *     PiSwCloseDescendants @ 0x140A8DCF8 (PiSwCloseDescendants.c)
 */

int __fastcall PiSwCloseDescendants(__int64 a1, char a2)
{
  _QWORD *BusRelations; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // rsi
  _QWORD **v9; // rsi
  _QWORD *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8

  BusRelations = PiSwFindBusRelations(a1);
  v8 = BusRelations;
  if ( BusRelations )
  {
    if ( (byte_140EF412C & 0x40) != 0 )
      LODWORD(BusRelations) = McTemplateK0z_EtwWriteTransfer(
                                v6,
                                (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_CloseDescendants,
                                v7,
                                *(const wchar_t **)(a1 + 8));
    v9 = (_QWORD **)(v8 + 2);
    v10 = *v9;
    while ( v10 != v9 )
    {
      v11 = (__int64)(v10 - 12);
      v10 = (_QWORD *)*v10;
      LODWORD(BusRelations) = *(_DWORD *)(v11 + 4);
      if ( ((unsigned __int8)BusRelations & 1) == 0 )
      {
        if ( !a2 || (BusRelations = (_QWORD *)(v11 + 128), (_QWORD *)*BusRelations == BusRelations) )
        {
          LOBYTE(v5) = a2;
          PiSwCloseDescendants(v11 + 72, v5);
          LODWORD(BusRelations) = (unsigned int)PiSwCloseDevice(v11, v12, v13);
        }
      }
    }
  }
  return (int)BusRelations;
}
