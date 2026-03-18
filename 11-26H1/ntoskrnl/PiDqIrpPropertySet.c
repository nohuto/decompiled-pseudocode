/*
 * XREFs of PiDqIrpPropertySet @ 0x14098D708
 * Callers:
 *     PiDqDispatch @ 0x14098EE00 (PiDqDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x1403FD9D0 (IofCompleteRequest.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     _PnpSetGenericStoreProperty @ 0x14090A5B4 (_PnpSetGenericStoreProperty.c)
 *     PiAuDoesClientHaveAccess @ 0x14098DE50 (PiAuDoesClientHaveAccess.c)
 *     PiPnpRtlObjectEventWorker @ 0x140990D44 (PiPnpRtlObjectEventWorker.c)
 *     PiDqOpenObjectRegKey @ 0x14099206C (PiDqOpenObjectRegKey.c)
 *     PiDqGetPnpObjectType @ 0x14099CD00 (PiDqGetPnpObjectType.c)
 *     _PnpOpenObjectRegKey @ 0x14099E110 (_PnpOpenObjectRegKey.c)
 *     PiPnpRtlBeginOperation @ 0x1409A7AC8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1409A7CB4 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlSetObjectProperty @ 0x1409DBA24 (PiPnpRtlSetObjectProperty.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqIrpPropertySet(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  char v3; // r15
  char v4; // si
  struct _IRP *MasterIrp; // rcx
  NTSTATUS v6; // edi
  int v7; // r11d
  unsigned int PnpObjectType; // r12d
  __int64 v9; // rdx
  unsigned int v10; // eax
  _DWORD *v11; // rcx
  __int64 i; // r15
  __int64 v13; // rsi
  __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // r8
  HANDLE Handle; // [rsp+50h] [rbp-78h] BYREF
  HANDLE v19; // [rsp+58h] [rbp-70h] BYREF
  __int64 v20; // [rsp+60h] [rbp-68h] BYREF
  PVOID v21; // [rsp+68h] [rbp-60h] BYREF
  _QWORD v22[11]; // [rsp+70h] [rbp-58h] BYREF
  PVOID P; // [rsp+E8h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v20 = 0LL;
  Handle = 0LL;
  v19 = 0LL;
  P = 0LL;
  v3 = 0;
  v4 = 0;
  v21 = 0LL;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
    goto LABEL_28;
  v6 = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v20);
  if ( v6 < 0 )
    goto LABEL_29;
  NdrMesTypeDecode3(v20, "TP 3\a", &off_140004B10, &off_140E06EF0, 2, &P);
  if ( !P
    || !*((_QWORD *)P + 1)
    || !*((_QWORD *)P + 3)
    || !*((_DWORD *)P + 4)
    || (PnpObjectType = PiDqGetPnpObjectType(*(unsigned int *)P)) == 0 )
  {
LABEL_28:
    v6 = -1073741811;
    goto LABEL_29;
  }
  v6 = PnpOpenObjectRegKey(PiPnpRtlCtx, v7, PnpObjectType, 7, 0, (__int64)&Handle);
  if ( v6 < 0 )
    goto LABEL_29;
  v10 = *((_DWORD *)P + 4);
  if ( v10 )
  {
    v11 = (_DWORD *)(*((_QWORD *)P + 3) + 20LL);
    v9 = v10;
    do
    {
      if ( !*v11 )
        v3 = 1;
      if ( *v11 == 1 )
        v4 = 1;
      v11 += 12;
      --v9;
    }
    while ( v9 );
  }
  if ( v3 && !(unsigned __int8)PiAuDoesClientHaveAccess(2u) )
    goto LABEL_43;
  if ( v4 )
  {
    if ( (unsigned __int8)PiAuDoesClientHaveAccess(0x100u) )
    {
      v6 = PiDqOpenObjectRegKey(1, *((_QWORD *)P + 1), PnpObjectType, 7, 1, 0LL, (__int64)&v19);
      if ( v6 < 0 )
        goto LABEL_29;
      goto LABEL_19;
    }
LABEL_43:
    v6 = -1073741790;
    goto LABEL_29;
  }
LABEL_19:
  v6 = PiPnpRtlBeginOperation(&v21, v9);
  if ( v6 >= 0 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 4); i = (unsigned int)(i + 1) )
    {
      v13 = *((_QWORD *)P + 3) + 48 * i;
      v14 = *(_QWORD *)(v13 + 40);
      v15 = *(_DWORD *)(v13 + 32);
      v16 = *(_QWORD *)(v13 + 24);
      if ( *(_DWORD *)(v13 + 20) )
      {
        v6 = PnpSetGenericStoreProperty(PiPnpRtlCtx, (int)v19, v16, v13, v15, v14, *(_DWORD *)(v13 + 36));
        if ( v6 >= 0 )
        {
          v22[0] = 0LL;
          v22[1] = *(_QWORD *)(v13 + 24);
          v22[2] = v13;
          PiPnpRtlObjectEventWorker(*((_QWORD *)P + 1), PnpObjectType, 4, (unsigned int)v22, 1);
        }
      }
      else
      {
        v6 = PiPnpRtlSetObjectProperty(
               *(_QWORD *)&PiPnpRtlCtx,
               *((_QWORD *)P + 1),
               PnpObjectType,
               Handle,
               v16,
               v13,
               v15,
               v14,
               *(_DWORD *)(v13 + 36),
               0);
      }
      if ( v6 == -1073741275 )
        v6 = *(_DWORD *)(v13 + 32) != 0 ? 0xC0000225 : 0;
      if ( v6 < 0 )
        break;
    }
  }
LABEL_29:
  if ( Handle )
    ZwClose(Handle);
  if ( v19 )
    ZwClose(v19);
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( v20 )
    MesHandleFree();
  if ( v21 )
    PiPnpRtlEndOperation(v21);
  Irp->IoStatus.Status = v6;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v6;
}
