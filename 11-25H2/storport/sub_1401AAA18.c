/*
 * XREFs of sub_1401AAA18 @ 0x1401AAA18
 * Callers:
 *     sub_1401B259C @ 0x1401B259C (sub_1401B259C.c)
 * Callees:
 *     sub_140035D1C @ 0x140035D1C (sub_140035D1C.c)
 *     sub_1400360DC @ 0x1400360DC (sub_1400360DC.c)
 *     sub_140036248 @ 0x140036248 (sub_140036248.c)
 *     sub_140036B50 @ 0x140036B50 (sub_140036B50.c)
 *     sub_1400390C4 @ 0x1400390C4 (sub_1400390C4.c)
 *     sub_14003910C @ 0x14003910C (sub_14003910C.c)
 *     sub_140039E24 @ 0x140039E24 (sub_140039E24.c)
 *     sub_140044C84 @ 0x140044C84 (sub_140044C84.c)
 *     sub_140133F70 @ 0x140133F70 (sub_140133F70.c)
 *     sub_140134094 @ 0x140134094 (sub_140134094.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memmove @ 0x14013C680 (memmove.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_1401A95FC @ 0x1401A95FC (sub_1401A95FC.c)
 *     sub_1401A9954 @ 0x1401A9954 (sub_1401A9954.c)
 */

__int64 __fastcall sub_1401AAA18(
        struct _DEVICE_OBJECT *a1,
        IRP *a2,
        char a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        __int64 a8)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int *v12; // r15
  void *v13; // r14
  int v14; // ecx
  int v15; // eax
  char *v16; // r14
  int v17; // ebx
  ULONG v18; // r15d
  struct _IO_STACK_LOCATION *v19; // rax
  unsigned __int64 Options; // r9
  unsigned __int64 Length; // r8
  unsigned int v22; // edx
  char *v23; // rcx
  KPROCESSOR_MODE AccessMode; // al
  PIRP v25; // r13
  _WORD *Pool2; // rsi
  unsigned __int8 v27; // dl
  int v28; // eax
  int v29; // eax
  __int64 v30; // rax
  void *v31; // r14
  struct _IO_STACK_LOCATION *v32; // rax
  unsigned int v33; // r15d
  int v35; // ebx
  unsigned int v36; // ecx
  __int64 v37; // rsi
  KPROCESSOR_MODE RequestorMode; // r10
  __int64 v39; // rbx
  ULONG v40; // r8d
  void *v41; // rdx
  unsigned int *v42; // rax
  __int64 v43; // rax
  struct _IO_STACK_LOCATION *v44; // rax
  __int64 v46; // [rsp+58h] [rbp-71h] BYREF
  int v47[2]; // [rsp+60h] [rbp-69h] BYREF
  int v48; // [rsp+68h] [rbp-61h]
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-59h]
  PMDL MemoryDescriptorList; // [rsp+78h] [rbp-51h] BYREF
  __int64 v51; // [rsp+80h] [rbp-49h]
  int v52[4]; // [rsp+88h] [rbp-41h] BYREF
  __int128 v53; // [rsp+98h] [rbp-31h]
  __int128 Src; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v55; // [rsp+B8h] [rbp-11h]

  DeviceObject = a1;
  v51 = a8;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v48 = a4;
  v12 = 0LL;
  v13 = 0LL;
  *(_QWORD *)v47 = 0LL;
  v14 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 315460;
  v46 = 0LL;
  MemoryDescriptorList = 0LL;
  if ( (v14 & 0xFFFFFFFB) != 0 )
  {
    *(_QWORD *)v47 = 0LL;
    *(_OWORD *)v52 = 0LL;
    v55 = 0LL;
    v53 = 0LL;
    Src = 0LL;
    v15 = sub_1400360DC((__int64)v52, a2);
    v16 = (char *)*((_QWORD *)&v53 + 1);
    v17 = v15;
    v18 = v52[3];
    if ( v15 >= 0 )
    {
      v19 = a2->Tail.Overlay.CurrentStackLocation;
      Options = v19->Parameters.Create.Options;
      Length = v19->Parameters.Read.Length;
      if ( BYTE2(v52[1]) > 0x10u )
        goto LABEL_43;
      if ( HIBYTE(v52[1]) )
      {
        v22 = Src + HIBYTE(v52[1]);
        if ( v22 < (unsigned int)Src
          || LOWORD(v52[0]) > (unsigned int)Src
          || !a3
          && v52[3]
          && ((unsigned __int64)(unsigned int)Src >= *((_QWORD *)&v53 + 1)
           || (unsigned __int64)v22 > *((_QWORD *)&v53 + 1)) )
        {
          goto LABEL_43;
        }
        if ( (unsigned int)Src > (unsigned int)Length || v22 > (unsigned int)Length )
          goto LABEL_43;
      }
      if ( a3 )
      {
        if ( !*((_QWORD *)&v53 + 1) && v52[3] )
        {
LABEL_43:
          v17 = -1073741811;
          goto LABEL_44;
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
        goto LABEL_43;
      }
      if ( (unsigned int)(v53 - 1) > 0x1A5DF )
        goto LABEL_43;
      if ( (unsigned __int8)(BYTE4(Src) - 57) <= 1u || BYTE4(Src) == 24 )
      {
        v17 = -1073741808;
        goto LABEL_44;
      }
      v17 = 0;
      sub_14003910C((__int64)a2);
      if ( v18 )
      {
        if ( a3 )
          LODWORD(v23) = (_DWORD)v16;
        else
          v23 = &v16[(unsigned __int64)a2->AssociatedIrp.MasterIrp];
      }
      else
      {
        LODWORD(v23) = 0;
      }
      if ( (a1->AlignmentRequirement & (unsigned int)v23) != 0
        || v18
        && ((unsigned int)((v18 + 4095LL + (unsigned __int64)((unsigned __int16)v23 & 0xFFF)) >> 12) > a5 || v18 > a6) )
      {
        goto LABEL_43;
      }
    }
    if ( v17 < 0 )
    {
LABEL_44:
      a2->IoStatus.Status = v17;
      sub_140036B50(a2);
      return (unsigned int)v17;
    }
    if ( v18 )
    {
      if ( !a3 )
      {
        v16 += (unsigned __int64)a2->AssociatedIrp.MasterIrp;
LABEL_26:
        AccessMode = 0;
        goto LABEL_29;
      }
    }
    else
    {
      v16 = 0LL;
      if ( !a3 )
        goto LABEL_26;
    }
    AccessMode = a2->RequestorMode;
LABEL_29:
    v25 = sub_140036248((__int64)a1, v16, v18, LOBYTE(v52[2]) != 0, AccessMode, a2, 0, 0LL, 0, 0LL);
    if ( !v25 )
    {
      v17 = -1073741670;
      goto LABEL_44;
    }
    v46 = 0LL;
    Pool2 = (_WORD *)ExAllocatePool2(64LL, 88LL, 1766878288LL);
    if ( Pool2 )
    {
      if ( !HIBYTE(v52[1]) || (v46 = ExAllocatePool2(72LL, HIBYTE(v52[1]), 1766878288LL)) != 0 )
      {
        memset_0(Pool2, 0, 0x58uLL);
        v27 = BYTE2(v52[1]);
        *((_BYTE *)Pool2 + 5) = HIBYTE(v52[0]);
        Pool2[3] = v52[1];
        *((_BYTE *)Pool2 + 11) = HIBYTE(v52[1]);
        *Pool2 = 88;
        *((_BYTE *)Pool2 + 10) = v27;
        if ( v18 )
        {
          if ( LOBYTE(v52[2]) )
          {
            if ( LOBYTE(v52[2]) == 1 )
              v28 = 64;
            else
              v28 = 192;
          }
          else
          {
            v28 = 128;
          }
        }
        else
        {
          v28 = 0;
        }
        if ( !v46 )
          v28 |= 0x20u;
        v29 = v48 | v28;
        *((_QWORD *)Pool2 + 4) = v46;
        *((_DWORD *)Pool2 + 3) = v29 | 0x100;
        *((_DWORD *)Pool2 + 5) = v53;
        *((_DWORD *)Pool2 + 4) = v18;
        *((_QWORD *)Pool2 + 3) = v16;
        memmove(Pool2 + 36, (char *)&Src + 4, v27);
        v25->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)Pool2;
        *((_QWORD *)Pool2 + 6) = v25;
        v30 = ExAllocatePool2(64LL, 48LL, 1766878288LL);
        v31 = (void *)v30;
        if ( v30 )
        {
          *(_QWORD *)(v30 + 24) = Pool2;
          *(_QWORD *)(v30 + 8) = v25;
          *(_BYTE *)v30 = a3;
          *(_QWORD *)(v30 + 32) = sub_140036B50;
          *(_QWORD *)(v30 + 40) = v51;
          *(_QWORD *)(v30 + 16) = a2;
          v32 = v25->Tail.Overlay.CurrentStackLocation;
          v32[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)sub_140035B90;
          v32[-1].Context = v31;
          v32[-1].Control = -32;
          v33 = 259;
          v17 = sub_1400390C4((__int64)a2, (__int64)v31);
          if ( v17 == 259 )
          {
LABEL_41:
            IofCallDriver(DeviceObject, v25);
            return v33;
          }
LABEL_50:
          sub_140039E24(v25);
          if ( Pool2 )
            sub_140035D1C(Pool2);
          if ( v31 )
            ExFreePoolWithTag(v31, 0x69506C50u);
          goto LABEL_44;
        }
LABEL_49:
        v17 = -1073741670;
        goto LABEL_50;
      }
      ExFreePoolWithTag(Pool2, 0x69506C50u);
      Pool2 = 0LL;
    }
    v31 = *(void **)v47;
    goto LABEL_49;
  }
  v35 = sub_140044C84(a2);
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
        v35 = sub_140134094((__int64)DeviceObject, a2, a3, a5, a6, (unsigned int *)v37);
        if ( v35 >= 0 )
        {
          sub_1401A9954(v37, (__int64)a2, a3, v47, &v46);
          if ( a3 )
            RequestorMode = a2->RequestorMode;
          else
            RequestorMode = 0;
          v39 = *(_QWORD *)v47;
          if ( *(_QWORD *)v47 )
            v40 = *(_DWORD *)(v37 + 32);
          else
            v40 = *(_DWORD *)(v37 + 36);
          v41 = (void *)v46;
          if ( *(_QWORD *)v47 )
            v41 = *(void **)v47;
          v25 = sub_140036248(
                  (__int64)DeviceObject,
                  v41,
                  v40,
                  *(_BYTE *)(v37 + 18) == 1,
                  RequestorMode,
                  a2,
                  *(_BYTE *)(v37 + 18) == 3,
                  (void *)v46,
                  *(_DWORD *)(v37 + 36),
                  &MemoryDescriptorList);
          if ( v25
            && (v42 = sub_1401A95FC(a2, v37, v39, v46, v48, (__int64)MemoryDescriptorList),
                *(_QWORD *)v47 = v42,
                (v12 = v42) != 0LL)
            && (*((_QWORD *)v42 + 10) = v25,
                v25->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v42,
                v43 = ExAllocatePool2(64LL, 48LL, 1766878288LL),
                (v13 = (void *)v43) != 0LL) )
          {
            *(_QWORD *)(v43 + 24) = v12;
            *(_QWORD *)(v43 + 8) = v25;
            *(_BYTE *)v43 = a3;
            *(_QWORD *)(v43 + 32) = sub_140036B50;
            *(_QWORD *)(v43 + 40) = v51;
            *(_QWORD *)(v43 + 16) = a2;
            v44 = v25->Tail.Overlay.CurrentStackLocation;
            v44[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)sub_140035B90;
            v44[-1].Context = v13;
            v44[-1].Control = -32;
            v33 = 259;
            v35 = sub_1400390C4((__int64)a2, (__int64)v13);
            if ( v35 == 259 )
            {
              ExFreePoolWithTag((PVOID)v37, 0x69506C50u);
              goto LABEL_41;
            }
            v12 = *(unsigned int **)v47;
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
          if ( v25 )
            sub_140039E24(v25);
          if ( v12 )
            sub_140133F70(v12);
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
  sub_140036B50(a2);
  return (unsigned int)v35;
}
