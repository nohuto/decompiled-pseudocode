/*
 * XREFs of PiSwBusRelationRemove @ 0x140A7B204
 * Callers:
 *     PiSwProcessRemove @ 0x14090B360 (PiSwProcessRemove.c)
 *     PiSwCloseDevice @ 0x140A7B100 (PiSwCloseDevice.c)
 *     PiSwIrpStartCreateWorker @ 0x140A7B9C8 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1403B8A60 (RtlDeleteElementGenericTableAvl.c)
 *     McTemplateK0zzz_EtwWriteTransfer @ 0x1405DC324 (McTemplateK0zzz_EtwWriteTransfer.c)
 *     PiSwDeviceDereference @ 0x140A7B3F4 (PiSwDeviceDereference.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwBusRelationRemove(const wchar_t **P, __int64 a2, __int64 a3)
{
  char *v3; // rdi
  _QWORD *v5; // rax
  const wchar_t *v6; // rdx
  wchar_t *v7; // rcx
  _QWORD *v8; // rsi
  _QWORD *v9; // rdx
  void *v11; // rdi

  v3 = (char *)(P + 14);
  if ( (byte_140EF3DCC & 0x40) != 0 )
    McTemplateK0zzz_EtwWriteTransfer(
      (__int64)P,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_RelationRemove,
      a3,
      P[1],
      P[2],
      *(const wchar_t **)(*(_QWORD *)v3 + 8LL));
  v5 = P + 12;
  v6 = P[12];
  if ( *((const wchar_t ***)v6 + 1) != P + 12 || (v7 = (wchar_t *)P[13], *(_QWORD **)v7 != v5) )
    __fastfail(3u);
  *(_QWORD *)v7 = v6;
  v8 = v3;
  *((_QWORD *)v6 + 1) = v7;
  if ( v7 != v6 )
    v8 = P + 14;
  P[13] = (const wchar_t *)(P + 12);
  *v5 = v5;
  v9 = *(_QWORD **)v3;
  if ( *(_QWORD *)(*(_QWORD *)v3 + 16LL) == *(_QWORD *)v3 + 16LL )
  {
    v11 = (void *)v9[1];
    RtlDeleteElementGenericTableAvl(&PiSwBusRelationsTable, v9);
    if ( v11 )
      ExFreePoolWithTag(v11, 0x57706E50u);
  }
  *v8 = 0LL;
  return PiSwDeviceDereference(P);
}
