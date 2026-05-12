/*
 * XREFs of StorPortAdapterDirectedPowerDownCompletion @ 0x1400815B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140059EFC (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall StorPortAdapterDirectedPowerDownCompletion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        __int64 PowerState,
        _BYTE *Context)
{
  bool v5; // zf
  __int64 v6; // rdx
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // [rsp+20h] [rbp-18h]
  int v11; // [rsp+28h] [rbp-10h]

  Context[107] &= ~4u;
  v5 = (Context[108] & 1) == 0;
  v6 = *((_QWORD *)Context + 628);
  *((_QWORD *)Context + 674) = MEMORY[0xFFFFF78000000008];
  v7 = *(_DWORD *)(v6 + 20);
  if ( v5 )
  {
    *(_DWORD *)(v6 + 20) = v7 & 0xFFFFFFDF;
  }
  else
  {
    *(_DWORD *)(v6 + 20) = v7 | 0x20;
    if ( !*((_QWORD *)Context + 673) )
      *((_QWORD *)Context + 673) = *((_QWORD *)Context + 674);
  }
  PoFxCompleteDirectedPowerDown(**((_QWORD **)Context + 628), v6, PowerState);
  if ( StorEtwLoggingEnabled && (byte_140173442 & 0x10) != 0 )
  {
    v11 = 1;
    v10 = *((_DWORD *)Context + 14);
    McTemplateK0pqq_EtwWriteTransfer(v8, &EventAdapterDirectedPowerDownStop, v9, **((_QWORD **)Context + 628), v10, v11);
  }
  Context[109] |= 0x40u;
}
