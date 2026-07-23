/*
 * XREFs of PopConnectToPolicyDevice @ 0x1407DAA8C
 * Callers:
 *     PopNotifyPolicyDevice @ 0x1407DAD80 (PopNotifyPolicyDevice.c)
 *     PopPolicyDeviceTargetChange @ 0x1407DB220 (PopPolicyDeviceTargetChange.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IoFreeIrp @ 0x140267DD0 (IoFreeIrp.c)
 *     IoAllocateIrp @ 0x14026BA40 (IoAllocateIrp.c)
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline @ 0x1404DA8A4 (Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PopGetPolicyDeviceObject @ 0x1407DAC48 (PopGetPolicyDeviceObject.c)
 *     RtlCompareUnicodeStrings @ 0x140943110 (RtlCompareUnicodeStrings.c)
 *     IoRegisterPlugPlayNotification @ 0x1409AAA90 (IoRegisterPlugPlayNotification.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopConnectToPolicyDevice(int a1, const UNICODE_STRING *a2)
{
  __int64 v3; // rsi
  __int64 *i; // rbx
  UNICODE_STRING *Context; // rdi
  __int64 PolicyDeviceObject; // rax
  PDRIVER_OBJECT *v8; // rbx
  PIRP Irp; // rax
  PVOID v10; // rbp
  IRP *v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rax
  UNICODE_STRING **v14; // rdx
  PVOID EventCategoryData; // [rsp+70h] [rbp+18h] BYREF

  EventCategoryData = 0LL;
  v3 = 32LL * a1;
  if ( (unsigned int)Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline() || a1 < 10 )
  {
    for ( i = **(__int64 ***)((char *)&PopPolicyDeviceParameters + v3 + 8);
          i != *(__int64 **)((char *)&PopPolicyDeviceParameters + v3 + 8);
          i = (__int64 *)*i )
    {
      if ( !RtlCompareUnicodeStrings(
              (PCWCH)i[5],
              (unsigned __int64)*((unsigned __int16 *)i + 16) >> 1,
              a2->Buffer,
              (unsigned __int64)a2->Length >> 1,
              1u) )
        return;
    }
    Context = (UNICODE_STRING *)ExAllocatePool2(0x40uLL);
    if ( !Context )
    {
LABEL_18:
      if ( !Context )
        return;
      goto LABEL_19;
    }
    Context[2].Buffer = (unsigned __int16 *)((char *)&Context->Length
                                           + *(unsigned int *)((char *)&PopPolicyDeviceParameters + v3));
    Context[2].MaximumLength = a2->Length;
    RtlCopyUnicodeString(Context + 2, a2);
    *(_DWORD *)&Context[1].Length = a1;
    PolicyDeviceObject = PopGetPolicyDeviceObject(&Context[2], &EventCategoryData);
    v8 = (PDRIVER_OBJECT *)PolicyDeviceObject;
    if ( !PolicyDeviceObject )
    {
LABEL_19:
      ExFreePoolWithTag(Context, *(_DWORD *)((char *)&PopPolicyDeviceParameters + v3 + 4));
      return;
    }
    Irp = IoAllocateIrp(*(_BYTE *)(PolicyDeviceObject + 76), 0);
    v10 = EventCategoryData;
    v11 = Irp;
    if ( Irp )
    {
      if ( IoRegisterPlugPlayNotification(
             EventCategoryTargetDeviceChange,
             0,
             EventCategoryData,
             v8[1],
             PopPolicyDeviceTargetChange,
             Context,
             (PVOID *)&Context[1].Buffer) >= 0 )
      {
        *(_QWORD *)&Context[3].Length = v8;
        Context[3].Buffer = (wchar_t *)v11;
        guard_dispatch_icall_no_overrides((__int64)Context, v12);
        v13 = *(_QWORD *)((char *)&PopPolicyDeviceParameters + v3 + 8);
        v14 = *(UNICODE_STRING ***)(v13 + 8);
        if ( *v14 != (UNICODE_STRING *)v13 )
          __fastfail(3u);
        *(_QWORD *)&Context->Length = v13;
        Context->Buffer = (wchar_t *)v14;
        *v14 = Context;
        *(_QWORD *)(v13 + 8) = Context;
        Context = 0LL;
        goto LABEL_16;
      }
      IoFreeIrp(v11);
    }
    ObfDereferenceObjectWithTag(v8, 0x64506F50u);
LABEL_16:
    if ( v10 )
      ObfDereferenceObjectWithTag(v10, 0x64506F50u);
    goto LABEL_18;
  }
}
