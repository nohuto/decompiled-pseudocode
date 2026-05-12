/*
 * XREFs of sub_14000BD54 @ 0x14000BD54
 * Callers:
 *     sub_14000BC30 @ 0x14000BC30 (sub_14000BC30.c)
 *     sub_14000BCD0 @ 0x14000BCD0 (sub_14000BCD0.c)
 * Callees:
 *     sub_140020EA0 @ 0x140020EA0 (sub_140020EA0.c)
 *     sub_14003EBFC @ 0x14003EBFC (sub_14003EBFC.c)
 *     sub_1400425B8 @ 0x1400425B8 (sub_1400425B8.c)
 *     sub_1400556F8 @ 0x1400556F8 (sub_1400556F8.c)
 *     sub_1400567A0 @ 0x1400567A0 (sub_1400567A0.c)
 *     sub_1400680F0 @ 0x1400680F0 (sub_1400680F0.c)
 *     sub_14006A19C @ 0x14006A19C (sub_14006A19C.c)
 *     sub_14006A5B0 @ 0x14006A5B0 (sub_14006A5B0.c)
 *     sub_14006A664 @ 0x14006A664 (sub_14006A664.c)
 */

NTSTATUS __fastcall sub_14000BD54(PIRP Irp, __int64 a2)
{
  DWORD LowPart; // esi
  __int64 v5; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v7; // rax
  NTSTATUS result; // eax
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h]

  LODWORD(v10) = 0;
  v9 = 0LL;
  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    sub_1400680F0(off_140168120->AttachedDevice, 20LL, &unk_14014C778, a2, Irp);
  }
  sub_1400425B8(a2);
  v5 = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 348) = LowPart;
  sub_14003EBFC(v5, LowPart);
  if ( *(_DWORD *)(a2 + 96) && *(_QWORD *)(a2 + 5016) )
    sub_140020EA0(a2);
  if ( (unsigned int)sub_1400567A0() )
  {
    if ( Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.EaLength == 3 )
    {
      if ( *(_QWORD *)(a2 + 5616) )
        sub_14006A19C(a2);
      sub_14006A5B0();
    }
  }
  else if ( *(_QWORD *)(a2 + 5624) && Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.EaLength == 3 )
  {
    if ( (*(_BYTE *)(a2 + 112) & 0x10) != 0 )
      sub_14006A664(*(_QWORD *)(a2 + 6192) + 56LL);
    else
      sub_14006A19C(a2);
  }
  if ( (*(_BYTE *)(a2 + 109) & 1) != 0 )
  {
    LODWORD(v9) = *(_DWORD *)(a2 + 860);
    v10 = *(_QWORD *)(a2 + 848);
    IoReportInterruptInactive(&v9);
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v7 = Irp->Tail.Overlay.CurrentStackLocation;
  v7[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)sub_140040510;
  v7[-1].Context = 0LL;
  v7[-1].Control = -32;
  result = PoCallDriver(*(PDEVICE_OBJECT *)(a2 + 24), Irp);
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 4) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    return sub_1400556F8(off_140168120->AttachedDevice, 21LL, &unk_14014C778, a2, Irp, result);
  }
  return result;
}
