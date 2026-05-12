/*
 * XREFs of sub_14018B7EC @ 0x14018B7EC
 * Callers:
 *     sub_1400CB8F4 @ 0x1400CB8F4 (sub_1400CB8F4.c)
 * Callees:
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14018B7EC(
        unsigned __int64 a1,
        ULONG a2,
        KIRQL a3,
        unsigned __int8 a4,
        int a5,
        BOOLEAN a6,
        __int64 a7)
{
  struct _DEVICE_OBJECT *v11; // rax
  __int64 result; // rax
  __int64 v13; // rcx
  struct _IO_CONNECT_INTERRUPT_PARAMETERS Dst; // [rsp+20h] [rbp-50h] BYREF

  memset_0(&Dst, 0, sizeof(Dst));
  v11 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  Dst.FullySpecified.InterruptMode = LevelSensitive;
  Dst.FullySpecified.PhysicalDeviceObject = v11;
  Dst.FullySpecified.InterruptObject = *(PKINTERRUPT **)(a1 + 584);
  Dst.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)sub_1400D1520;
  Dst.FullySpecified.ProcessorEnableMask = *(_QWORD *)a7;
  Dst.FullySpecified.Group = *(_WORD *)(a7 + 8);
  Dst.FullySpecified.ShareVector = a6;
  Dst.Version = 4;
  *(_OWORD *)&Dst.MessageBased.ServiceContext = a1;
  Dst.FullySpecified.Vector = a2;
  Dst.FullySpecified.Irql = a3;
  *(_WORD *)&Dst.MessageBased.SynchronizeIrql = a4;
  LODWORD(result) = IoConnectInterruptEx(&Dst);
  v13 = *(_QWORD *)(a1 + 584);
  if ( (int)result >= 0 )
    *(_DWORD *)(v13 + 12) = Dst.Version;
  else
    *(_QWORD *)v13 = 0LL;
  return (unsigned int)result;
}
