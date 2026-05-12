/*
 * XREFs of PortPassThroughExSendAsync @ 0x1401B3488
 * Callers:
 *     RaidAdapterPassThrough @ 0x1401B3090 (RaidAdapterPassThrough.c)
 * Callees:
 *     PortPassThroughBuildIrpEx @ 0x14003AE60 (PortPassThroughBuildIrpEx.c)
 *     PortPassThroughFreeSrb @ 0x14003B2D8 (PortPassThroughFreeSrb.c)
 *     PortPassThroughNormalize @ 0x14003B70C (PortPassThroughNormalize.c)
 *     StorASyncScsiPassThroughCompletion @ 0x14003C390 (StorASyncScsiPassThroughCompletion.c)
 *     PortpEnableCancel @ 0x140042148 (PortpEnableCancel.c)
 *     PortpPassThroughZeroUnusedBuffers @ 0x140042190 (PortpPassThroughZeroUnusedBuffers.c)
 *     PortPassThroughFreeIrpEx @ 0x14004530C (PortPassThroughFreeIrpEx.c)
 *     PortPassThroughExBasicValidation @ 0x140053904 (PortPassThroughExBasicValidation.c)
 *     PortPassThroughExFreeSrbEx @ 0x14012FEA0 (PortPassThroughExFreeSrbEx.c)
 *     PortPassThroughExValidate @ 0x14012FFC4 (PortPassThroughExValidate.c)
 *     memmove @ 0x140138680 (memmove.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 *     PortPassThroughExBuildSrbEx @ 0x1401B19FC (PortPassThroughExBuildSrbEx.c)
 *     PortPassThroughExGetDataBuffers @ 0x1401B1D24 (PortPassThroughExGetDataBuffers.c)
 */

__int64 __fastcall PortPassThroughExSendAsync(
        struct _DEVICE_OBJECT *a1,
        IRP *a2,
        char a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        __int64 a8)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int *v12; // r15
  void *v13; // r14
  unsigned int LowPart; // ecx
  void *v15; // r13
  int v16; // eax
  char *v17; // r14
  ULONG v18; // r15d
  int v19; // ebx
  _IO_STACK_LOCATION *v20; // rax
  unsigned __int64 Options; // r9
  unsigned __int64 Length; // r8
  unsigned int v23; // edx
  char *v24; // rcx
  KPROCESSOR_MODE RequestorMode; // al
  PIRP v26; // rbx
  _WORD *Pool2; // rsi
  unsigned __int8 v28; // dl
  int v29; // eax
  __int64 v30; // rax
  _IO_STACK_LOCATION *v31; // rax
  unsigned int v32; // r15d
  IRP *v33; // rdx
  int v35; // ebx
  unsigned int v36; // ecx
  __int64 v37; // rsi
  KPROCESSOR_MODE v38; // r10
  ULONG *v39; // r8
  ULONG v40; // r8d
  PIRP v41; // rdx
  PIRP v42; // r13
  unsigned int *v43; // rax
  __int64 v44; // rax
  _IO_STACK_LOCATION *v45; // rax
  int AccessMode; // [rsp+20h] [rbp-99h]
  int v48[2]; // [rsp+60h] [rbp-59h] BYREF
  PIRP Irp; // [rsp+68h] [rbp-51h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-49h]
  PMDL MemoryDescriptorList; // [rsp+78h] [rbp-41h] BYREF
  int v52[4]; // [rsp+80h] [rbp-39h] BYREF
  __int128 v53; // [rsp+90h] [rbp-29h]
  __int128 Src; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v55; // [rsp+B0h] [rbp-9h]

  DeviceObject = a1;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v12 = 0LL;
  v13 = 0LL;
  *(_QWORD *)v48 = 0LL;
  Irp = 0LL;
  MemoryDescriptorList = 0LL;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( LowPart != 315460 && LowPart != 315464 )
  {
    v15 = 0LL;
    v55 = 0LL;
    *(_OWORD *)v52 = 0LL;
    v53 = 0LL;
    Src = 0LL;
    v16 = PortPassThroughNormalize((__int64)v52, a2);
    v17 = (char *)*((_QWORD *)&v53 + 1);
    v18 = v52[3];
    v19 = v16;
    if ( v16 >= 0 )
    {
      v20 = a2->Tail.Overlay.CurrentStackLocation;
      Options = v20->Parameters.Create.Options;
      Length = v20->Parameters.Read.Length;
      if ( BYTE2(v52[1]) > 0x10u )
        goto LABEL_45;
      if ( HIBYTE(v52[1]) )
      {
        v23 = Src + HIBYTE(v52[1]);
        if ( v23 < (unsigned int)Src
          || LOWORD(v52[0]) > (unsigned int)Src
          || !a3
          && v52[3]
          && ((unsigned __int64)(unsigned int)Src >= *((_QWORD *)&v53 + 1)
           || (unsigned __int64)v23 > *((_QWORD *)&v53 + 1)) )
        {
          goto LABEL_45;
        }
        if ( (unsigned int)Src > (unsigned int)Length || v23 > (unsigned int)Length )
          goto LABEL_45;
      }
      if ( a3 )
      {
        if ( !*((_QWORD *)&v53 + 1) && v52[3] )
        {
LABEL_45:
          v19 = -1073741811;
          goto LABEL_46;
        }
      }
      else if ( (unsigned __int64)LOWORD(v52[0]) > *((_QWORD *)&v53 + 1) && v52[3]
             || LOBYTE(v52[2]) != 1
             && v52[3]
             && (*((_QWORD *)&v53 + 1) > Options
              || *((_QWORD *)&v53 + 1) + (unsigned __int64)(unsigned int)v52[3] > Options)
             || LOBYTE(v52[2])
             && v52[3]
             && (*((_QWORD *)&v53 + 1) > Length
              || *((_QWORD *)&v53 + 1) + (unsigned __int64)(unsigned int)v52[3] > Length) )
      {
        goto LABEL_45;
      }
      if ( (unsigned int)(v53 - 1) > 0x1A5DF )
        goto LABEL_45;
      if ( BYTE4(Src) == 24 || (unsigned __int8)(BYTE4(Src) - 57) <= 1u )
      {
        v19 = -1073741808;
        goto LABEL_46;
      }
      v19 = 0;
      PortpPassThroughZeroUnusedBuffers((__int64)a2);
      if ( v18 )
      {
        if ( a3 )
          LODWORD(v24) = (_DWORD)v17;
        else
          v24 = &v17[(unsigned __int64)a2->AssociatedIrp.MasterIrp];
      }
      else
      {
        LODWORD(v24) = 0;
      }
      if ( (a1->AlignmentRequirement & (unsigned int)v24) != 0
        || v18
        && ((unsigned int)((v18 + 4095LL + (unsigned __int64)((unsigned __int16)v24 & 0xFFF)) >> 12) > a5 || v18 > a6) )
      {
        goto LABEL_45;
      }
    }
    if ( v19 < 0 )
    {
LABEL_46:
      a2->IoStatus.Status = v19;
      StorASyncScsiPassThroughCompletion(a2);
      return (unsigned int)v19;
    }
    if ( v18 )
    {
      if ( !a3 )
      {
        v17 += (unsigned __int64)a2->AssociatedIrp.MasterIrp;
LABEL_27:
        RequestorMode = 0;
        goto LABEL_30;
      }
    }
    else
    {
      v17 = 0LL;
      if ( !a3 )
        goto LABEL_27;
    }
    RequestorMode = a2->RequestorMode;
LABEL_30:
    Irp = PortPassThroughBuildIrpEx((__int64)a1, v17, v18, LOBYTE(v52[2]) != 0, RequestorMode, a2, 0, 0LL, 0, 0LL);
    v26 = Irp;
    if ( !Irp )
    {
      v19 = -1073741670;
      goto LABEL_46;
    }
    *(_QWORD *)v48 = 0LL;
    Pool2 = (_WORD *)ExAllocatePool2(64LL, 88LL, 1766878288LL);
    if ( Pool2 )
    {
      if ( HIBYTE(v52[1]) && (*(_QWORD *)v48 = ExAllocatePool2(72LL, HIBYTE(v52[1]), 1766878288LL)) == 0LL )
      {
        ExFreePoolWithTag(Pool2, 0x69506C50u);
        Pool2 = 0LL;
      }
      else
      {
        memset_0(Pool2, 0, 0x58uLL);
        v28 = BYTE2(v52[1]);
        *((_BYTE *)Pool2 + 5) = HIBYTE(v52[0]);
        Pool2[3] = v52[1];
        *((_BYTE *)Pool2 + 11) = HIBYTE(v52[1]);
        *Pool2 = 88;
        *((_BYTE *)Pool2 + 10) = v28;
        if ( v18 )
        {
          if ( LOBYTE(v52[2]) )
          {
            if ( LOBYTE(v52[2]) == 1 )
              v29 = 64;
            else
              v29 = 192;
          }
          else
          {
            v29 = 128;
          }
        }
        else
        {
          v29 = 0;
        }
        if ( !*(_QWORD *)v48 )
          v29 |= 0x20u;
        *((_QWORD *)Pool2 + 4) = *(_QWORD *)v48;
        *((_DWORD *)Pool2 + 3) = v29 | 0x2000100;
        *((_DWORD *)Pool2 + 5) = v53;
        *((_DWORD *)Pool2 + 4) = v18;
        *((_QWORD *)Pool2 + 3) = v17;
        memmove(Pool2 + 36, (char *)&Src + 4, v28);
        v26->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)Pool2;
        *((_QWORD *)Pool2 + 6) = v26;
        v30 = ExAllocatePool2(64LL, 48LL, 1766878288LL);
        v15 = (void *)v30;
        if ( v30 )
        {
          *(_BYTE *)v30 = a3;
          *(_QWORD *)(v30 + 24) = Pool2;
          *(_QWORD *)(v30 + 8) = v26;
          *(_QWORD *)(v30 + 16) = a2;
          *(_QWORD *)(v30 + 32) = StorASyncScsiPassThroughCompletion;
          *(_QWORD *)(v30 + 40) = a8;
          v31 = v26->Tail.Overlay.CurrentStackLocation;
          v31[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))PortpAsyncCompletion;
          v31[-1].Context = v15;
          v31[-1].Control = -32;
          v32 = 259;
          v19 = PortpEnableCancel((__int64)a2, (__int64)v15);
          if ( v19 == 259 )
          {
            v33 = Irp;
LABEL_43:
            IofCallDriver(DeviceObject, v33);
            return v32;
          }
LABEL_51:
          PortPassThroughFreeIrpEx(Irp);
          if ( Pool2 )
            PortPassThroughFreeSrb(Pool2);
          if ( v15 )
            ExFreePoolWithTag(v15, 0x69506C50u);
          goto LABEL_46;
        }
      }
    }
    v19 = -1073741670;
    goto LABEL_51;
  }
  v35 = PortPassThroughExBasicValidation(a2);
  if ( v35 >= 0 )
  {
    v36 = LODWORD(a2->AssociatedIrp.MasterIrp->MdlAddress) + 63;
    if ( v36 < 0x40 )
    {
      v35 = -1073741675;
    }
    else
    {
      v37 = ExAllocatePool2(64LL, v36, 1766878288LL);
      if ( v37 )
      {
        v35 = PortPassThroughExValidate((__int64)DeviceObject, a2, a3, a5, a6, (unsigned int *)v37);
        if ( v35 >= 0 )
        {
          PortPassThroughExGetDataBuffers(v37, (__int64)a2, a3, v48, &Irp);
          if ( a3 )
            v38 = a2->RequestorMode;
          else
            v38 = 0;
          if ( *(_QWORD *)v48 )
            v39 = (ULONG *)(v37 + 32);
          else
            v39 = (ULONG *)(v37 + 36);
          v40 = *v39;
          v41 = Irp;
          if ( *(_QWORD *)v48 )
            v41 = *(PIRP *)v48;
          v42 = PortPassThroughBuildIrpEx(
                  (__int64)DeviceObject,
                  v41,
                  v40,
                  *(_BYTE *)(v37 + 18) == 1,
                  v38,
                  a2,
                  *(_BYTE *)(v37 + 18) == 3,
                  Irp,
                  *(_DWORD *)(v37 + 36),
                  &MemoryDescriptorList);
          if ( v42
            && (v43 = PortPassThroughExBuildSrbEx(
                        a2,
                        v37,
                        *(__int64 *)v48,
                        (__int64)Irp,
                        AccessMode,
                        (__int64)MemoryDescriptorList),
                *(_QWORD *)v48 = v43,
                (v12 = v43) != 0LL)
            && (*((_QWORD *)v43 + 10) = v42,
                v42->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v43,
                v44 = ExAllocatePool2(64LL, 48LL, 1766878288LL),
                (v13 = (void *)v44) != 0LL) )
          {
            *(_QWORD *)(v44 + 24) = v12;
            *(_QWORD *)(v44 + 8) = v42;
            *(_BYTE *)v44 = a3;
            *(_QWORD *)(v44 + 16) = a2;
            *(_QWORD *)(v44 + 32) = StorASyncScsiPassThroughCompletion;
            *(_QWORD *)(v44 + 40) = a8;
            v45 = v42->Tail.Overlay.CurrentStackLocation;
            v45[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))PortpAsyncCompletion;
            v45[-1].Context = v13;
            v45[-1].Control = -32;
            v32 = 259;
            v35 = PortpEnableCancel((__int64)a2, (__int64)v13);
            if ( v35 == 259 )
            {
              ExFreePoolWithTag((PVOID)v37, 0x69506C50u);
              v33 = v42;
              goto LABEL_43;
            }
            v12 = *(unsigned int **)v48;
          }
          else
          {
            v35 = -1073741670;
          }
          if ( MemoryDescriptorList )
          {
            MmUnlockPages(MemoryDescriptorList);
            IoFreeMdl(MemoryDescriptorList);
          }
          if ( v42 )
            PortPassThroughFreeIrpEx(v42);
          if ( v12 )
            PortPassThroughExFreeSrbEx(v12);
          if ( v13 )
            ExFreePoolWithTag(v13, 0x69506C50u);
        }
        ExFreePoolWithTag((PVOID)v37, 0x69506C50u);
      }
      else
      {
        v35 = -1073741670;
      }
    }
  }
  a2->IoStatus.Status = v35;
  StorASyncScsiPassThroughCompletion(a2);
  return (unsigned int)v35;
}
