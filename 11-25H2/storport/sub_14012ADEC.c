/*
 * XREFs of sub_14012ADEC @ 0x14012ADEC
 * Callers:
 *     sub_14012A868 @ 0x14012A868 (sub_14012A868.c)
 * Callees:
 *     sub_1400CA35C @ 0x1400CA35C (sub_1400CA35C.c)
 */

NTSTATUS __fastcall sub_14012ADEC(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r9
  __int64 LowPart; // rax
  POWER_STATE v6; // r8d
  struct _IO_STACK_LOCATION *v7; // rax
  struct _IO_STACK_LOCATION *v8; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  LowPart = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v6.SystemState = (SYSTEM_POWER_STATE)stru_140148968[LowPart];
  if ( (CurrentStackLocation->Parameters.Read.Length & 0x400000) != 0 && (_DWORD)LowPart == 6 )
  {
    if ( v6.SystemState == PowerSystemSleeping3 )
      *(_DWORD *)(*(_QWORD *)(a1 + 160) + 76LL) |= 8u;
  }
  else if ( (_DWORD)LowPart == 1 && v6.SystemState == PowerSystemWorking )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 160) + 76LL) |= 0x20u;
  }
  sub_1400CA35C(a1);
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  v7 = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v7[-1].MajorFunction = *(_OWORD *)&v7->MajorFunction;
  *(_OWORD *)&v7[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v7->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&v7[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v7->Parameters.SetQuota + 6);
  v7[-1].FileObject = v7->FileObject;
  v7[-1].Control = 0;
  v8 = a2->Tail.Overlay.CurrentStackLocation;
  v8[-1].Context = 0LL;
  v8[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)sub_14012ACA0;
  v8[-1].Control = -32;
  return IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), a2);
}
