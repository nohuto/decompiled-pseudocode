/*
 * XREFs of FsRtlCheckOplockEx2 @ 0x1403F8170
 * Callers:
 *     FsRtlCheckOplock @ 0x1403F7F10 (FsRtlCheckOplock.c)
 *     FsRtlCheckOplockEx @ 0x1403F8120 (FsRtlCheckOplockEx.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpOplockDequeueRH @ 0x14030CAB8 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpAttachOplockKey @ 0x14030CCC0 (FsRtlpAttachOplockKey.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1403F4D08 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpComputeShareableOplockState @ 0x1403F4F58 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1403F5200 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockKeysEqual @ 0x1403F7C60 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1403F7FF0 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpClearOwner @ 0x1403F94AC (FsRtlpClearOwner.c)
 *     FsRtlpOplockCleanup @ 0x1403F959C (FsRtlpOplockCleanup.c)
 *     FsRtlpFreeRHOpContext @ 0x1403FB0A4 (FsRtlpFreeRHOpContext.c)
 *     FsRtlGetMarkHandleInfo @ 0x14042864C (FsRtlGetMarkHandleInfo.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x14049C7EC (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpOplockBreakToII @ 0x14050E330 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x1405297A0 (FsRtlpOplockBreakToNone.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall FsRtlCheckOplockEx2(
        __int64 *a1,
        IRP *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  unsigned int v10; // r12d
  unsigned int v13; // ebx
  unsigned int v14; // r13d
  __int64 v15; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  _QWORD *v18; // rsi
  __int64 v19; // rcx
  _QWORD *v20; // rax
  struct _FILE_OBJECT *v21; // r8
  int v22; // r9d
  unsigned int v23; // esi
  int v24; // r15d
  int v25; // ecx
  UCHAR MajorFunction; // dl
  bool v27; // r12
  int v28; // esi
  bool v29; // dl
  IRP *v30; // r15
  unsigned int v31; // eax
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  bool v36; // zf
  char v37; // dl
  unsigned __int8 v38; // al
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  bool v42; // zf
  __int16 MarkHandleInfo; // ax
  __int64 v44; // [rsp+20h] [rbp-178h]
  _BYTE v45[4]; // [rsp+60h] [rbp-138h] BYREF
  BOOL v46; // [rsp+64h] [rbp-134h]
  char v47; // [rsp+68h] [rbp-130h]
  char v48; // [rsp+69h] [rbp-12Fh]
  _BYTE v49[2]; // [rsp+6Ah] [rbp-12Eh] BYREF
  int v50; // [rsp+6Ch] [rbp-12Ch]
  PVOID P; // [rsp+70h] [rbp-128h] BYREF
  unsigned int v52; // [rsp+78h] [rbp-120h]
  char v53; // [rsp+7Ch] [rbp-11Ch]
  unsigned int v54; // [rsp+80h] [rbp-118h]
  int v55; // [rsp+84h] [rbp-114h]
  unsigned int v56; // [rsp+88h] [rbp-110h]
  unsigned int v57; // [rsp+8Ch] [rbp-10Ch] BYREF
  int v58; // [rsp+90h] [rbp-108h] BYREF
  int v59; // [rsp+94h] [rbp-104h] BYREF
  int v60; // [rsp+98h] [rbp-100h]
  unsigned int v61; // [rsp+A0h] [rbp-F8h]
  _QWORD v62[2]; // [rsp+A8h] [rbp-F0h] BYREF
  _QWORD v63[3]; // [rsp+B8h] [rbp-E0h] BYREF
  _QWORD v64[4]; // [rsp+D0h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+F0h] [rbp-A8h] BYREF
  unsigned int *v66; // [rsp+110h] [rbp-88h]
  __int64 v67; // [rsp+118h] [rbp-80h]
  int *v68; // [rsp+120h] [rbp-78h]
  __int64 v69; // [rsp+128h] [rbp-70h]
  _QWORD *v70; // [rsp+130h] [rbp-68h]
  __int64 v71; // [rsp+138h] [rbp-60h]
  int *v72; // [rsp+140h] [rbp-58h]
  __int64 v73; // [rsp+148h] [rbp-50h]

  v60 = a4;
  v10 = a3;
  v54 = a3;
  P = a2;
  v61 = a3;
  v13 = 0;
  v14 = 0;
  v52 = 0;
  v15 = *a1;
  if ( a4 )
    return 3221225485LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v64[0] = a5;
  v64[1] = a6;
  v64[2] = a7;
  v63[0] = a8;
  v63[1] = a9;
  v63[2] = a10;
  if ( (a3 & 4) == 0 )
  {
    if ( (a3 & 0x10000000) == 0 )
    {
      v14 = FsRtlpAttachOplockKey(a2);
      v52 = v14;
    }
    FsRtlpOplockStoreKeyForDeleteOperation(a1, (__int64)a2, v10);
    if ( v15 != *a1 )
      v15 = *a1;
    v62[1] = v15;
    if ( (v10 & 2) != 0 || !v15 || (a2->Flags & 2) != 0 )
    {
      return v52;
    }
    else
    {
      v23 = v52;
      if ( !v14 )
      {
        v45[0] = (v10 & 0x20000000) != 0;
        LOBYTE(v22) = 1;
        v55 = v22;
        do
        {
          v49[0] = 0;
          v24 = v10 & 0x10;
          if ( (v10 & 0x10) == 0 && !v45[0] )
          {
            v25 = *(_DWORD *)(v15 + 144);
            v21 = *(struct _FILE_OBJECT **)(v15 + 8);
            MajorFunction = CurrentStackLocation->MajorFunction;
            if ( CurrentStackLocation->MajorFunction == 3 )
            {
              LOBYTE(v22) = (v25 & 0xFFFF4FFE) != 0 ? v22 : 0;
              v55 = v22;
              v53 = v22;
            }
            if ( MajorFunction == 4 )
            {
              LOBYTE(v22) = (v25 & 0xFFFFDFFE) != 0 ? v22 : 0;
              v55 = v22;
              v53 = v22;
            }
            if ( (v10 & 8) == 0 && MajorFunction != 18 && v21 )
            {
              v22 = (unsigned __int8)v22;
              if ( v21 == CurrentStackLocation->FileObject )
                v22 = 0;
              v55 = v22;
              v53 = v22;
            }
          }
          if ( !(_BYTE)v22 )
            goto LABEL_133;
          if ( !v45[0] )
            ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v15 + 152));
          v45[0] = 1;
          if ( *(_DWORD *)(v15 + 144) == 1 )
            goto LABEL_133;
          LOBYTE(v21) = 0;
          v46 = (int)v21;
          v48 = 0;
          v27 = 0;
          v47 = 0;
          v28 = 0;
          v50 = 0;
          if ( v24 )
            goto LABEL_45;
          v32 = CurrentStackLocation->MajorFunction;
          if ( v32 > 9 )
          {
            v39 = v32 - 13;
            if ( v39 )
            {
              v40 = v39 - 4;
              if ( !v40 )
              {
                v42 = (*(_DWORD *)(v15 + 144) & 8) == 0;
LABEL_111:
                if ( !v42 )
                  goto LABEL_47;
                goto LABEL_112;
              }
              v41 = v40 - 1;
              if ( v41 )
              {
                v29 = v46;
                if ( v41 != 3 )
                  goto LABEL_48;
                v28 = 0x2000;
                goto LABEL_102;
              }
LABEL_80:
              FsRtlpOplockCleanup(v15, CurrentStackLocation, 0LL);
              if ( CurrentStackLocation->MajorFunction == 18 && (v54 & 0x20) != 0 )
              {
                v28 = 0x2000;
                v50 = 0x2000;
                if ( (unsigned int)dword_140E06B30 > 5 )
                {
                  v57 = v54;
                  v66 = &v57;
                  v67 = 4LL;
                  v58 = 0x2000;
                  v68 = &v58;
                  v69 = 4LL;
                  v62[0] = v15;
                  v70 = v62;
                  v71 = 8LL;
                  v59 = *(_DWORD *)(v15 + 144);
                  v72 = &v59;
                  v73 = 4LL;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_140E06B30,
                    (unsigned __int8 *)byte_140047030,
                    0LL,
                    0LL,
                    6u,
                    &v65);
                }
              }
              goto LABEL_47;
            }
            if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 590076 )
            {
              if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 606820 )
              {
                if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 622792
                  && CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 623112
                  && CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 623208
                  && CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 623428
                  && CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 623592 )
                {
                  v42 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 639668;
                  goto LABEL_111;
                }
LABEL_112:
                v27 = 1;
                v47 = 1;
                v50 = 20480;
                v28 = 67129344;
                goto LABEL_46;
              }
              v29 = (*(_DWORD *)(v15 + 144) & 8) == 0;
              v48 = v29;
LABEL_104:
              v28 = 0x4000;
              v50 = 0x4000;
              goto LABEL_48;
            }
            v30 = (IRP *)P;
            MarkHandleInfo = FsRtlGetMarkHandleInfo(P);
            v29 = v46;
            if ( (MarkHandleInfo & 0x4000) != 0 )
            {
              v28 = 0x2000;
              v50 = 0x2000;
              v27 = (*(_DWORD *)(v15 + 144) & 0xC) != 0;
              v47 = v27;
            }
          }
          else
          {
            if ( v32 == 9 )
            {
              v29 = 1;
              v48 = 1;
              goto LABEL_104;
            }
            if ( !CurrentStackLocation->MajorFunction )
            {
              v37 = 0;
              if ( (*(_DWORD *)(v15 + 144) & 0x7000) != 0
                && (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFEDFE7F) != 0
                || (*(_DWORD *)(v15 + 144) & 0x1E) != 0
                && (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFEFFE7F) != 0
                || (CurrentStackLocation->Parameters.Create.Options & 0x100000) != 0 )
              {
                v37 = 1;
              }
              if ( !v37
                || (*(_DWORD *)(v15 + 144) & 8) != 0
                && (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 0xFFEDFE56) == 0
                && (*((_BYTE *)&CurrentStackLocation->Parameters.QuerySecurity + 18) & 1) != 0 )
              {
                goto LABEL_47;
              }
              v38 = BYTE3(CurrentStackLocation->Parameters.QueryEa.EaList);
              if ( !v38
                || (unsigned __int8)(v38 - 4) <= 1u
                || (CurrentStackLocation->Parameters.Create.Options & 0x100000) != 0 )
              {
                v27 = 1;
                v47 = 1;
                v28 = 20480;
                v50 = 20480;
                v29 = v46;
              }
              else
              {
                v29 = 1;
                v48 = 1;
                v28 = 0x4000;
                v50 = 0x4000;
              }
              if ( (CurrentStackLocation->FileObject->Flags & 8) == 0 || (*(_DWORD *)(v15 + 144) & 0x8000000) == 0 )
              {
LABEL_48:
                v30 = (IRP *)P;
                goto LABEL_49;
              }
              v28 |= 0x8000000u;
LABEL_102:
              v50 = v28;
              goto LABEL_48;
            }
            v33 = v32 - 2;
            if ( !v33 )
            {
              if ( (CurrentStackLocation->FileObject->Flags & 0x4000) != 0 )
                goto LABEL_47;
              goto LABEL_80;
            }
            v34 = v33 - 1;
            if ( !v34 )
            {
              LODWORD(v21) = (*(_DWORD *)(v15 + 144) & 8) == 0;
              v46 = (int)v21;
              v48 = (char)v21;
              v28 = 0x4000;
              v50 = 0x4000;
              goto LABEL_47;
            }
            v35 = v34 - 1;
            if ( !v35 )
              goto LABEL_112;
            if ( v35 != 2 )
              goto LABEL_47;
            switch ( CurrentStackLocation->Parameters.Create.Options )
            {
              case 0xAu:
              case 0xBu:
                goto LABEL_70;
              case 0xDu:
                v30 = (IRP *)P;
                v36 = **((_BYTE **)P + 3) == 0;
                break;
              case 0x13u:
                goto LABEL_76;
              case 0x14u:
                if ( CurrentStackLocation->Parameters.SetFile.AdvanceOnly )
                  goto LABEL_47;
LABEL_76:
                v27 = 1;
                v47 = 1;
LABEL_45:
                v28 = 20480;
LABEL_46:
                v50 = v28;
                goto LABEL_47;
              case 0x27u:
                goto LABEL_76;
              case 0x28u:
                goto LABEL_70;
              case 0x40u:
                v30 = (IRP *)P;
                v36 = (**((_DWORD **)P + 3) & 1) == 0;
                break;
              case 0x41u:
LABEL_70:
                v28 = 0x2000;
                v50 = 0x2000;
                v29 = v46;
                if ( (*(_DWORD *)(v15 + 144) & 0xC) != 0 )
                {
                  v27 = 1;
                  v47 = 1;
                }
                goto LABEL_48;
              default:
LABEL_47:
                v29 = v46;
                goto LABEL_48;
            }
            v29 = v46;
            if ( !v36 )
            {
              v28 = 0x2000;
              v50 = 0x2000;
            }
          }
LABEL_49:
          if ( v29 )
          {
            if ( (*(_DWORD *)(v15 + 144) & 0x1F0FFDF) == 0x10
              || FsRtlpOplockKeysEqual((__int64)CurrentStackLocation->FileObject, *(_QWORD *)(v15 + 8), 0) )
            {
              goto LABEL_128;
            }
            v10 = v54;
            v31 = FsRtlpOplockBreakToII(
                    v15,
                    (_DWORD)CurrentStackLocation,
                    (_DWORD)v30,
                    v54,
                    v44,
                    (__int64)v64,
                    (__int64)v63,
                    (__int64)v45,
                    (__int64)v49);
          }
          else
          {
            if ( !v27
              || (*(_DWORD *)(v15 + 144) & 0x1F0FFDF) != 0x10
              && FsRtlpOplockKeysEqual((__int64)CurrentStackLocation->FileObject, *(_QWORD *)(v15 + 8), 0) )
            {
LABEL_128:
              v31 = v52;
              v10 = v54;
              goto LABEL_129;
            }
            v10 = v54;
            v31 = FsRtlpOplockBreakToNone(
                    v15,
                    (_DWORD)CurrentStackLocation,
                    (_DWORD)v30,
                    v54,
                    v44,
                    (__int64)v64,
                    (__int64)v63,
                    (__int64)v45,
                    (__int64)v49);
          }
          v52 = v31;
          v56 = v31;
LABEL_129:
          if ( v31 || (*(_DWORD *)(v15 + 144) & v28) == 0 )
          {
            v23 = v52;
          }
          else
          {
            LODWORD(v44) = v60;
            v23 = FsRtlpOplockBreakByCacheFlags(
                    v15,
                    (__int64)CurrentStackLocation,
                    v30,
                    v10,
                    v44,
                    v28,
                    0LL,
                    0LL,
                    (__int64)v64,
                    (__int64)v63,
                    v45,
                    (__int64)v49);
            v52 = v23;
            v56 = v23;
          }
LABEL_133:
          if ( v45[0] && (v10 & 0x20000000) == 0 )
            ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v15 + 152));
          v22 = v55;
        }
        while ( v49[0] );
      }
    }
    return v23;
  }
  P = 0LL;
  if ( !v15 )
    return 0LL;
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v15 + 152));
  if ( CurrentStackLocation->MajorFunction )
  {
    v13 = -1073741811;
  }
  else if ( (*(_DWORD *)(v15 + 144) & 0x10000) != 0
         && (unsigned __int8)FsRtlpCallerIsAtomicRequestor(v15, CurrentStackLocation->FileObject, &P) )
  {
    v18 = P;
    FsRtlpOplockDequeueRH(P);
    v19 = v18[7];
    v20 = (_QWORD *)v18[8];
    if ( *(_QWORD **)(v19 + 8) != v18 + 7 || (_QWORD *)*v20 != v18 + 7 )
      __fastfail(3u);
    *v20 = v19;
    *(_QWORD *)(v19 + 8) = v20;
    if ( *(_QWORD *)(v15 + 120) == v15 + 120 )
      *(_DWORD *)(v15 + 144) &= 0xFFFCFFFF;
    if ( v18[5] )
      FsRtlpClearOwner(v15, v18);
    FsRtlpFreeRHOpContext(v18);
    FsRtlpComputeShareableOplockState(v15);
    FsRtlpReleaseIrpsWaitingForRH(v15);
  }
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v15 + 152));
  return v13;
}
