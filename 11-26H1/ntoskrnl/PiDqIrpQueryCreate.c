/*
 * XREFs of PiDqIrpQueryCreate @ 0x14094FA58
 * Callers:
 *     PiDqDispatch @ 0x14094F860 (PiDqDispatch.c)
 * Callees:
 *     IoSetActivityIdThread @ 0x14048B360 (IoSetActivityIdThread.c)
 *     IoClearActivityIdThread @ 0x140493970 (IoClearActivityIdThread.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PiDqQuerySerializeActionQueue @ 0x14094F1CC (PiDqQuerySerializeActionQueue.c)
 *     PiDqQueryLock @ 0x140950830 (PiDqQueryLock.c)
 *     PiDqQueryUnlock @ 0x1409508A4 (PiDqQueryUnlock.c)
 *     PnpIsNullGuid @ 0x140950904 (PnpIsNullGuid.c)
 *     PiDqQueryFreeActiveData @ 0x140950AA4 (PiDqQueryFreeActiveData.c)
 *     PiDqIrpComplete @ 0x140950B44 (PiDqIrpComplete.c)
 *     PiDqQueryGetNextIoctlInfo @ 0x140950CA0 (PiDqQueryGetNextIoctlInfo.c)
 *     PiDqQueryValidateQueryData @ 0x140950E2C (PiDqQueryValidateQueryData.c)
 *     PiDqTraceQueryCreate @ 0x140950F84 (PiDqTraceQueryCreate.c)
 */

__int64 __fastcall PiDqIrpQueryCreate(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 FsContext2; // rdi
  __int64 v4; // rsi
  char v5; // r12
  __int64 *p_AssociatedIrp; // r15
  int *v7; // rsi
  int v8; // eax
  int v9; // eax
  int ValidateQueryData; // ebx
  unsigned int Length; // r8d
  _DWORD *v12; // rsi
  char v14; // [rsp+31h] [rbp-A7h]
  int v15[2]; // [rsp+34h] [rbp-A4h] BYREF
  unsigned int v16; // [rsp+3Ch] [rbp-9Ch] BYREF
  __int64 v17; // [rsp+40h] [rbp-98h]
  struct _LIST_ENTRY *v18; // [rsp+48h] [rbp-90h]
  __int64 v19; // [rsp+50h] [rbp-88h]
  struct _IO_STACK_LOCATION *v20; // [rsp+58h] [rbp-80h]
  __int64 v21; // [rsp+60h] [rbp-78h]
  PIRP v22; // [rsp+68h] [rbp-70h]
  __int64 v23; // [rsp+70h] [rbp-68h]
  union _IRP::$CBBBB9F4F0755A16DC8A369061485BEC *v24; // [rsp+78h] [rbp-60h]
  struct _LIST_ENTRY v25; // [rsp+80h] [rbp-58h] BYREF
  __int128 v26; // [rsp+90h] [rbp-48h] BYREF

  v22 = Irp;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v20 = CurrentStackLocation;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v19 = FsContext2;
  v4 = FsContext2;
  v17 = FsContext2;
  v5 = 0;
  v18 = 0LL;
  v21 = 0LL;
  v25 = 0LL;
  v14 = 0;
  v15[1] = 0;
  v15[0] = 0;
  v16 = 0;
  v26 = 0LL;
  if ( FsContext2 )
  {
    p_AssociatedIrp = (__int64 *)&Irp->AssociatedIrp;
    v24 = &Irp->AssociatedIrp;
    if ( Irp->AssociatedIrp.MasterIrp )
    {
      PiDqQueryLock(FsContext2);
      v7 = (int *)(FsContext2 + 216);
      v23 = FsContext2 + 216;
      v8 = *(_DWORD *)(FsContext2 + 216);
      if ( (v8 & 8) != 0 )
      {
        ValidateQueryData = -1073741536;
      }
      else if ( (v8 & 0x10) != 0 || (v9 = v8 | 0x10, *v7 = v9, v5 = 1, (v9 & 4) != 0) )
      {
        ValidateQueryData = -1073741637;
      }
      else if ( CurrentStackLocation->Parameters.Read.Length < 0x10 )
      {
        ValidateQueryData = -1073741789;
      }
      else
      {
        ValidateQueryData = MesDecodeBufferHandleCreate(
                              *p_AssociatedIrp,
                              CurrentStackLocation->Parameters.Create.Options,
                              FsContext2 + 16);
        if ( ValidateQueryData >= 0 )
        {
          NdrMesTypeDecode3(*(_QWORD *)(FsContext2 + 16), "TP 3\a", &off_1400047E8, &off_140E06EF0, 0, FsContext2 + 24);
          ValidateQueryData = PiDqQueryValidateQueryData(*(_QWORD *)(FsContext2 + 24));
          if ( ValidateQueryData >= 0 )
          {
            if ( !(unsigned __int8)PnpIsNullGuid(*(void **)(FsContext2 + 24)) )
            {
              v25 = *(struct _LIST_ENTRY *)*(_QWORD *)(FsContext2 + 24);
              v18 = IoSetActivityIdThread(&v25);
              v14 = 1;
            }
            PiDqTraceQueryCreate(FsContext2);
            *v7 |= 4u;
          }
        }
      }
      PiDqQueryUnlock(FsContext2);
      if ( ValidateQueryData >= 0 )
      {
        Length = CurrentStackLocation->Parameters.Read.Length;
        if ( Length > 0x10 )
          ValidateQueryData = PiDqQuerySerializeActionQueue(
                                FsContext2,
                                *p_AssociatedIrp,
                                Length,
                                CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
                                v15,
                                &v16);
      }
      v4 = v17;
    }
    else
    {
      ValidateQueryData = -1073741811;
    }
  }
  else
  {
    ValidateQueryData = -1073741637;
  }
  if ( v5 )
  {
    PiDqQueryLock(FsContext2);
    if ( ValidateQueryData < 0 )
    {
      v12 = (_DWORD *)(FsContext2 + 216);
      *(_DWORD *)(FsContext2 + 216) |= 1u;
      PiDqQueryFreeActiveData(FsContext2);
    }
    else
    {
      PiDqQueryGetNextIoctlInfo(FsContext2, CurrentStackLocation->Parameters.Read.Length, v16, &v26);
      v12 = (_DWORD *)(v4 + 216);
    }
    *v12 &= ~0x10u;
    PiDqQueryUnlock(FsContext2);
  }
  PiDqIrpComplete(Irp);
  if ( v14 )
    IoClearActivityIdThread(v18);
  return (unsigned int)ValidateQueryData;
}
