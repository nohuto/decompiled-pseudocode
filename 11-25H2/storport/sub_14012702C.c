/*
 * XREFs of sub_14012702C @ 0x14012702C
 * Callers:
 *     sub_1401285D0 @ 0x1401285D0 (sub_1401285D0.c)
 *     sub_14012AED0 @ 0x14012AED0 (sub_14012AED0.c)
 * Callees:
 *     sub_14003EBFC @ 0x14003EBFC (sub_14003EBFC.c)
 *     sub_1400D7168 @ 0x1400D7168 (sub_1400D7168.c)
 */

NTSTATUS __fastcall sub_14012702C(__int64 a1, IRP *a2)
{
  POWER_STATE v4; // ebx
  __int64 *v5; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v7; // rax
  _DWORD v9[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  v4.SystemState = (SYSTEM_POWER_STATE)a2->Tail.Overlay.CurrentStackLocation->Parameters.Power.State;
  sub_1400D7168(a1, 2);
  *(POWER_STATE *)(*(_QWORD *)(a1 + 160) + 68LL) = v4;
  sub_14003EBFC(*(struct _DEVICE_OBJECT **)(a1 + 8), v4);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 160) + 176LL) & 0x200) != 0 )
  {
    v5 = *(__int64 **)(a1 + 584);
    v9[1] = 0;
    v9[0] = *((_DWORD *)v5 + 3);
    v10 = *v5;
    IoReportInterruptInactive(v9);
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v7 = a2->Tail.Overlay.CurrentStackLocation;
  v7[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)sub_1401284F0;
  v7[-1].Context = 0LL;
  v7[-1].Control = -32;
  return PoCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), a2);
}
