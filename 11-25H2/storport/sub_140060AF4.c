/*
 * XREFs of sub_140060AF4 @ 0x140060AF4
 * Callers:
 *     sub_1400392B0 @ 0x1400392B0 (sub_1400392B0.c)
 * Callees:
 *     sub_1400099A0 @ 0x1400099A0 (sub_1400099A0.c)
 *     sub_1400159B4 @ 0x1400159B4 (sub_1400159B4.c)
 *     sub_140015A14 @ 0x140015A14 (sub_140015A14.c)
 *     sub_1400161E0 @ 0x1400161E0 (sub_1400161E0.c)
 *     sub_140016754 @ 0x140016754 (sub_140016754.c)
 *     sub_140017A20 @ 0x140017A20 (sub_140017A20.c)
 *     sub_140017C40 @ 0x140017C40 (sub_140017C40.c)
 *     sub_140017D90 @ 0x140017D90 (sub_140017D90.c)
 *     sub_1400184D0 @ 0x1400184D0 (sub_1400184D0.c)
 *     sub_14001F93C @ 0x14001F93C (sub_14001F93C.c)
 *     sub_140021110 @ 0x140021110 (sub_140021110.c)
 *     sub_1400212C0 @ 0x1400212C0 (sub_1400212C0.c)
 *     sub_14002285C @ 0x14002285C (sub_14002285C.c)
 *     sub_1400229C8 @ 0x1400229C8 (sub_1400229C8.c)
 *     sub_140044530 @ 0x140044530 (sub_140044530.c)
 *     sub_1400540D4 @ 0x1400540D4 (sub_1400540D4.c)
 *     sub_140066768 @ 0x140066768 (sub_140066768.c)
 *     sub_1400681AC @ 0x1400681AC (sub_1400681AC.c)
 *     sub_14008F59C @ 0x14008F59C (sub_14008F59C.c)
 *     sub_1400A6008 @ 0x1400A6008 (sub_1400A6008.c)
 */

__int64 __fastcall sub_140060AF4(__int64 a1, IRP *a2, char a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r9
  struct _IRP *MasterIrp; // r15
  int v6; // ecx
  _QWORD *v7; // r13
  __int64 v8; // r14
  __int64 v10; // rdx
  DWORD Options; // ebp
  __int64 v12; // rcx
  __int64 v13; // rax
  char v14; // r8
  unsigned int v15; // ebx
  unsigned int *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rbx
  int v21; // ebp
  int v22; // edx
  char v23; // bp
  int v24; // ecx
  _BYTE *v25; // rbx
  __int64 v26; // rbx
  unsigned int LockArray_high; // eax
  __int64 v28; // rdx
  unsigned int Blink; // eax
  IRP *v30; // rax
  unsigned int v31; // eax
  __int64 v32; // r8
  NTSTATUS v33; // eax
  bool v34; // zf
  int v35; // eax
  KIRQL v36; // bl
  __int64 v37; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-68h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v41; // [rsp+A8h] [rbp+10h]
  char v42; // [rsp+B0h] [rbp+18h]
  _BYTE *v43; // [rsp+B8h] [rbp+20h]

  v42 = a3;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v6 = *(_DWORD *)a1;
  v7 = 0LL;
  v8 = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( v6 == 1314275652 )
  {
    v10 = a1 + 274;
  }
  else
  {
    v10 = a1 + 482;
    if ( v6 != 1094997074 )
      v10 = 98LL;
  }
  Options = CurrentStackLocation->Parameters.Create.Options;
  v34 = v6 == 1314275652;
  v12 = *(_QWORD *)(a1 + 8);
  v43 = (_BYTE *)v10;
  v13 = 316LL;
  if ( !v34 )
    v13 = 524LL;
  v14 = *(_BYTE *)v10;
  v15 = (*(_DWORD *)(v13 + a1) + 7) & 0xFFFFFFF8;
  if ( Options <= CurrentStackLocation->Parameters.Read.Length )
    Options = CurrentStackLocation->Parameters.Read.Length;
  Timeout.LowPart = Options;
  v16 = (unsigned int *)sub_140015A14(v12, 9u, v14, 0);
  v18 = sub_14002285C(v15 + 1184, v17, (_QWORD *)a1);
  v41 = v18;
  v20 = v18;
  if ( v16 && v18 )
  {
    v8 = v18 + 48;
    sub_140017C40(v18 + 48, v19, 0, 0LL);
    v21 = sub_1400159B4(v8, MasterIrp, Options);
    if ( v21 >= 0 )
    {
      v34 = byte_1401688B4 == 0;
      v22 = 129;
      MasterIrp->Flags = 255;
      if ( !v34
        && LODWORD(MasterIrp->MdlAddress) == 3
        && (unsigned int)(unsigned __int8)LODWORD(MasterIrp->UserEvent) - 129 <= 1
        && MasterIrp->Tail.Apc.SpareByte1 == 0xEE )
      {
        v21 = -1073741637;
      }
      else
      {
        v23 = v42;
        if ( !LODWORD(MasterIrp->ThreadListEntry.Flink) )
          v22 = 1;
        v24 = v22 | 0x40;
        if ( !HIDWORD(MasterIrp->ThreadListEntry.Flink) )
          v24 = v22;
        if ( !v42 )
        {
          v24 |= 0x102u;
          if ( *((_BYTE *)v16 + 2) == 40 )
            *((_WORD *)v16 + 19) = 32;
          else
            *((_BYTE *)v16 + 9) = 32;
        }
        v25 = v43;
        if ( *v43 == 1 )
        {
          v26 = v16[13];
          v7 = v16;
          v16[5] = 9;
          v16[6] = v24;
          if ( *(_DWORD *)a1 == 1094997074 && (*(_BYTE *)(a1 + 111) & 4) != 0 )
          {
            LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
            _InterlockedAdd(*(volatile signed __int32 **)(*(_QWORD *)(a1 + 6168) + 8LL * LockArray_high), 1u);
            v28 = **(_QWORD **)(*(_QWORD *)(a1 + 6168) + 8LL * LockArray_high);
            v16[11] = HIDWORD(v28);
          }
          else
          {
            LODWORD(v28) = -1;
          }
          v16[8] = v28;
          v16[15] = Timeout.LowPart;
          *((_QWORD *)v16 + 8) = MasterIrp;
          *((_WORD *)v16 + 18) = IoGetIoPriorityHint(a2);
          Blink = (unsigned int)MasterIrp->ThreadListEntry.Blink;
          if ( !Blink )
            Blink = *(_DWORD *)(a1 + 4124);
          v16[10] = Blink;
          *((_QWORD *)v16 + 12) = v8;
          *((_QWORD *)v16 + 10) = a2;
          *(_WORD *)((char *)v16 + v26 + 8) = 0;
          *((_BYTE *)v16 + v26 + 10) = 0;
          v25 = v43;
          *(_QWORD *)(v8 + 168) = v16;
          *(_QWORD *)(v8 + 184) = *((_QWORD *)v16 + 8);
          v30 = (IRP *)*((_QWORD *)v16 + 12);
        }
        else
        {
          v16[4] = Timeout.LowPart;
          *(_WORD *)v16 = 88;
          *((_BYTE *)v16 + 2) = 9;
          v16[3] = v24;
          *((_BYTE *)v16 + 8) = -1;
          *((_QWORD *)v16 + 3) = MasterIrp;
          v31 = (unsigned int)MasterIrp->ThreadListEntry.Blink;
          if ( !v31 )
            v31 = *(_DWORD *)(a1 + 4124);
          v16[5] = v31;
          *((_QWORD *)v16 + 6) = v8;
          *(_WORD *)((char *)v16 + 5) = 0;
          *((_BYTE *)v16 + 7) = 0;
          *(_QWORD *)(v8 + 168) = v16;
          *(_QWORD *)(v8 + 184) = *((_QWORD *)v16 + 3);
          v30 = a2;
        }
        v32 = v41 + 1184;
        *(_QWORD *)(v8 + 176) = v30;
        sub_1400161E0((int *)a1, (__int64)v16, v32);
        if ( v23 )
          *(_BYTE *)(v8 + 17) |= 8u;
        KeInitializeEvent((PRKEVENT)(v8 + 664), NotificationEvent, 0);
        *(_QWORD *)(v8 + 656) = sub_140038660;
        if ( !v23 )
          goto LABEL_88;
        sub_1400099A0(a1);
        KeInitializeEvent(&Event, NotificationEvent, 0);
        sub_1400540D4(*(_QWORD *)(a1 + 960), &Event);
        Timeout.QuadPart = -1200000000LL;
        v33 = KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout);
        v34 = v33 == 0;
        if ( v33 >= 0 )
          v34 = (unsigned int)sub_1400A6008(a1, 120000LL) == 0;
        if ( v34 )
        {
LABEL_88:
          if ( *(_QWORD *)(a1 + 4960) )
            sub_1400212C0(a1, 0LL, 1LL);
          if ( *v25 == 1 )
          {
            if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
              && (HIDWORD(off_140168120->Timer) & 0x10) != 0
              && BYTE1(off_140168120->Timer) >= 4u )
            {
              sub_1400681AC(off_140168120->AttachedDevice, 62LL, &unk_14014A2D8, v8, v7, v7[13]);
            }
          }
          else if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
                 && (HIDWORD(off_140168120->Timer) & 0x10) != 0
                 && BYTE1(off_140168120->Timer) >= 4u )
          {
            sub_1400681AC(off_140168120->AttachedDevice, 63LL, &unk_14014A2D8, v8, v16, *((_QWORD *)v16 + 7));
          }
          if ( *(_BYTE *)(a1 + 4370) )
            v35 = sub_140017D90(a1, (_QWORD *)v8);
          else
            v35 = sub_1400184D0(a1, v8);
          v21 = v35;
          if ( v35 >= 0 )
          {
            KeWaitForSingleObject((PVOID)(v8 + 664), Executive, 0, 0, 0LL);
            v21 = sub_1400229C8(*((_BYTE *)v16 + 3));
          }
          if ( v42 )
          {
            v36 = KfRaiseIrql(2u);
            sub_140066768(a1);
            KeLowerIrql(v36);
            v25 = v43;
          }
          if ( (*(_BYTE *)(v8 + 17) & 1) != 0 )
          {
            sub_14001F93C(a1, *(unsigned int *)(v8 + 748));
            *(_BYTE *)(v8 + 17) &= ~1u;
          }
          if ( *(_QWORD *)(a1 + 4960) )
            sub_140021110(a1, 0LL, 0LL);
          if ( v21 >= 0 )
          {
            if ( *v25 == 1 )
              v37 = v7[8];
            else
              v37 = *((_QWORD *)v16 + 3);
            if ( *(_DWORD *)(v37 + 16) == 255 )
            {
              v21 = -1073741637;
            }
            else
            {
              Timeout.LowPart = 84;
              sub_14008F59C(MasterIrp, &Timeout);
              a2->IoStatus.Information = Timeout.LowPart;
            }
          }
        }
        else
        {
          a2->IoStatus.Information = 0LL;
          v21 = -1073741823;
        }
        v20 = v41;
      }
    }
  }
  else
  {
    v21 = -1073741801;
  }
  if ( byte_140168DAA )
    sub_140044530(*(_QWORD *)(a1 + 8), (__int64)a2, v42);
  if ( v20 )
  {
    sub_140017A20(v8, 0);
    sub_140016754(a1, v20);
  }
  if ( v16 )
  {
    if ( *v43 == 1 )
    {
      if ( !v7 )
        v7 = v16;
      v7[10] = 0LL;
      v7[13] = 0LL;
    }
    else
    {
      *((_QWORD *)v16 + 6) = 0LL;
      *((_QWORD *)v16 + 7) = 0LL;
    }
    ExFreePoolWithTag(v16, 0x72536152u);
  }
  return (unsigned int)v21;
}
