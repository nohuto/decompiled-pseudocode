/*
 * XREFs of EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Cleanup @ 0x14001496C
 * Callers:
 *     HUBPDO_EvtDeviceReportedMissing @ 0x140083A30 (HUBPDO_EvtDeviceReportedMissing.c)
 * Callees:
 *     McTemplateK0pqqhhhq_EtwWriteTransfer @ 0x14001D200 (McTemplateK0pqqhhhq_EtwWriteTransfer.c)
 */

__int64 __fastcall EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Cleanup(int *a1, int a2)
{
  _DWORD *v3; // rsi
  int *v4; // rdi
  int v5; // ecx
  __int64 result; // rax

  if ( a1 && *(_QWORD *)a1 )
  {
    v3 = &unk_140070948;
    v4 = a1 + 671;
    do
    {
      v5 = *v4;
      if ( *v4 && v5 != 1 && (byte_140070D4A & 0x40) != 0 )
        result = McTemplateK0pqqhhhq_EtwWriteTransfer(
                   v5,
                   a2,
                   (int)a1 + 1524,
                   *(_QWORD *)(*(_QWORD *)a1 + 248LL),
                   *v3,
                   v3[1],
                   *((_WORD *)a1 + 1002),
                   *((_WORD *)a1 + 1003),
                   *((_WORD *)a1 + 1004),
                   (unsigned __int8)v5 - 1);
      *v4 = 0;
      v3 += 2;
      ++v4;
    }
    while ( (__int64)v3 < (__int64)FwUpdateDeviceDescriptor );
  }
  return result;
}
