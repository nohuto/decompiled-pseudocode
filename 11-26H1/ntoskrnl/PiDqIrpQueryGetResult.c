/*
 * XREFs of PiDqIrpQueryGetResult @ 0x14094EF04
 * Callers:
 *     PiDqDispatch @ 0x14094F860 (PiDqDispatch.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     PiDqQuerySerializeActionQueue @ 0x14094F1CC (PiDqQuerySerializeActionQueue.c)
 *     PiDqQueryLock @ 0x140950830 (PiDqQueryLock.c)
 *     PiDqQueryUnlock @ 0x1409508A4 (PiDqQueryUnlock.c)
 *     PiDqQueryFreeActiveData @ 0x140950AA4 (PiDqQueryFreeActiveData.c)
 *     PiDqIrpComplete @ 0x140950B44 (PiDqIrpComplete.c)
 *     PiDqQueryGetNextIoctlInfo @ 0x140950CA0 (PiDqQueryGetNextIoctlInfo.c)
 */

__int64 __fastcall PiDqIrpQueryGetResult(PIRP Irp)
{
  int SerializeActionQueue; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r12
  _QWORD *FsContext2; // rdi
  LARGE_INTEGER *p_ByteOffset; // r13
  int *v6; // rsi
  int v7; // eax
  union _IO_STACK_LOCATION::$3F40624FA6BA75D391A2F4D7FEA8ACCF *p_Parameters; // r12
  unsigned int v9; // eax
  char v11; // [rsp+30h] [rbp-68h]
  int v12; // [rsp+34h] [rbp-64h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-60h] BYREF
  ULONG LowPart; // [rsp+3Ch] [rbp-5Ch]
  _QWORD *v15; // [rsp+40h] [rbp-58h]
  PIRP v16; // [rsp+48h] [rbp-50h]
  LARGE_INTEGER *v17; // [rsp+50h] [rbp-48h]
  union _IO_STACK_LOCATION::$3F40624FA6BA75D391A2F4D7FEA8ACCF *v18; // [rsp+58h] [rbp-40h]
  _QWORD *v19; // [rsp+60h] [rbp-38h]
  __int128 v20; // [rsp+68h] [rbp-30h] BYREF

  v16 = Irp;
  SerializeActionQueue = 0;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = CurrentStackLocation->FileObject->FsContext2;
  v15 = FsContext2;
  p_ByteOffset = &CurrentStackLocation->Parameters.Read.ByteOffset;
  v17 = &CurrentStackLocation->Parameters.Read.ByteOffset;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v20 = 0LL;
  v6 = (int *)(FsContext2 + 27);
  if ( !FsContext2 )
  {
    SerializeActionQueue = -1073741637;
    goto LABEL_14;
  }
  PiDqQueryLock(FsContext2);
  v19 = FsContext2 + 27;
  v7 = *v6;
  if ( (*v6 & 8) != 0 )
  {
    SerializeActionQueue = -1073741536;
    goto LABEL_7;
  }
  if ( (v7 & 4) == 0 )
    goto LABEL_28;
  if ( (v7 & 1) == 0 )
  {
    if ( (v7 & 0x10) == 0 )
    {
      *v6 = v7 | 0x10;
      v11 = 1;
      goto LABEL_7;
    }
LABEL_28:
    SerializeActionQueue = -1073741637;
    goto LABEL_7;
  }
  SerializeActionQueue = -1073741670;
LABEL_7:
  PiDqQueryUnlock(FsContext2);
  if ( SerializeActionQueue < 0 )
    goto LABEL_13;
  p_Parameters = &CurrentStackLocation->Parameters;
  v18 = p_Parameters;
  if ( p_Parameters->Read.Length < 0x10 )
  {
    SerializeActionQueue = -1073741789;
  }
  else
  {
    if ( LowPart == 4653063 )
    {
      ProbeForWrite(Irp->UserBuffer, p_Parameters->Read.Length, 8u);
      SerializeActionQueue = PiDqQuerySerializeActionQueue(
                               (_DWORD)FsContext2,
                               Irp->UserBuffer,
                               p_Parameters->Read.Length,
                               p_ByteOffset->LowPart,
                               (__int64)&v12,
                               (__int64)&v13);
      if ( SerializeActionQueue < 0 )
        goto LABEL_13;
      PiDqQueryLock(FsContext2);
      PiDqQueryGetNextIoctlInfo(FsContext2, p_Parameters->Read.Length, v13, &v20);
LABEL_12:
      PiDqQueryUnlock(FsContext2);
LABEL_13:
      if ( SerializeActionQueue == 259 )
        return (unsigned int)SerializeActionQueue;
      goto LABEL_14;
    }
    if ( Irp->AssociatedIrp.MasterIrp )
    {
      PiDqQueryLock(FsContext2);
      if ( !FsContext2[23]
        && (_QWORD *)FsContext2[24] == FsContext2 + 24
        && (*(_DWORD *)(FsContext2[3] + 40LL) & 1) != 0 )
      {
        _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, (__int64)PiDqIrpCancel);
        if ( Irp->Cancel )
        {
          SerializeActionQueue = -1073741536;
        }
        else
        {
          FsContext2[22] = Irp;
          Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
          SerializeActionQueue = 259;
        }
      }
      else
      {
        PiDqQueryGetNextIoctlInfo(FsContext2, p_Parameters->Read.Length, 0LL, &v20);
        v12 = 16;
      }
      goto LABEL_12;
    }
    SerializeActionQueue = -1073741811;
  }
LABEL_14:
  if ( v11 )
  {
    PiDqQueryLock(FsContext2);
    v9 = *v6 & 0xFFFFFFEF;
    *v6 = v9;
    if ( SerializeActionQueue < 0 )
    {
      *v6 = v9 | 1;
      PiDqQueryFreeActiveData(FsContext2);
    }
    PiDqQueryUnlock(FsContext2);
  }
  PiDqIrpComplete(Irp);
  return (unsigned int)SerializeActionQueue;
}
