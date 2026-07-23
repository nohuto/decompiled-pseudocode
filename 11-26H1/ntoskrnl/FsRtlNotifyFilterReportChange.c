/*
 * XREFs of FsRtlNotifyFilterReportChange @ 0x140AF8AC0
 * Callers:
 *     FsRtlNotifyReportChange @ 0x140793550 (FsRtlNotifyReportChange.c)
 *     FsRtlNotifyFullReportChange @ 0x140AF8A60 (FsRtlNotifyFullReportChange.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlIsNtstatusExpected @ 0x1402C4930 (FsRtlIsNtstatusExpected.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1403C6E00 (PsReturnProcessPagedPoolQuota.c)
 *     PsChargePoolQuota @ 0x1403C71A0 (PsChargePoolQuota.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlMultiByteToUnicodeSize @ 0x14097BFE0 (RtlMultiByteToUnicodeSize.c)
 *     FsRtlNotifyCompleteIrpList @ 0x140A8AAB8 (FsRtlNotifyCompleteIrpList.c)
 *     FsRtlNotifyUpdateBuffer @ 0x140B105EC (FsRtlNotifyUpdateBuffer.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlNotifyFilterReportChange(
        PNOTIFY_SYNC NotifySync,
        PLIST_ENTRY NotifyList,
        PSTRING FullTargetName,
        USHORT TargetNameOffset,
        PSTRING StreamName,
        PSTRING NormalizedParentName,
        ULONG FilterMatch,
        ULONG Action,
        PVOID TargetContext,
        PVOID FilterContext)
{
  USHORT v10; // r14
  PSTRING v11; // r15
  PLIST_ENTRY v12; // r8
  USHORT v14; // dx
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *p_Flink; // r13
  __int64 v17; // rdi
  PSTRING v18; // r10
  unsigned __int16 *v19; // r9
  size_t v20; // rdx
  __int16 v21; // ax
  char *v22; // rcx
  bool v23; // zf
  char v24; // bl
  char v25; // r11
  __int16 v26; // dx
  unsigned int v27; // r12d
  __int64 v28; // r13
  unsigned __int16 v29; // ax
  int v30; // r14d
  unsigned int v31; // r14d
  unsigned int v32; // r15d
  unsigned int v33; // ecx
  __int16 v34; // ax
  __int64 v35; // rcx
  char *Pool2; // rbx
  char *v37; // rax
  char *v38; // rcx
  USHORT v39; // ax
  __int16 v40; // cx
  __int16 v41; // cx
  char *Buffer; // r9
  char **p_Buffer; // rax
  int v44; // r8d
  int v45; // edx
  __int16 v46; // ax
  char v47; // r10
  int v48; // edx
  int v49; // r9d
  unsigned int v50; // r8d
  unsigned __int16 *v51; // r11
  char *v52; // rcx
  unsigned __int16 *v53; // r11
  ULONG v54; // r14d
  const CHAR *v55; // rcx
  unsigned __int16 v56; // dx
  ULONG Length; // r8d
  __int64 v58; // rcx
  __int64 v59; // rcx
  char v60; // [rsp+40h] [rbp-108h]
  unsigned __int16 v61; // [rsp+44h] [rbp-104h]
  unsigned int v62; // [rsp+44h] [rbp-104h]
  USHORT v63; // [rsp+48h] [rbp-100h]
  unsigned __int16 v64; // [rsp+50h] [rbp-F8h]
  CHAR *MultiByteString[2]; // [rsp+68h] [rbp-E0h] BYREF
  ULONG BytesInUnicodeString; // [rsp+78h] [rbp-D0h] BYREF
  ULONG v68; // [rsp+7Ch] [rbp-CCh] BYREF
  ULONG v69; // [rsp+80h] [rbp-C8h] BYREF
  _QWORD *v70; // [rsp+88h] [rbp-C0h]
  __int64 v71; // [rsp+90h] [rbp-B8h]
  char *v72; // [rsp+98h] [rbp-B0h]
  __int64 v73; // [rsp+A0h] [rbp-A8h] BYREF
  const CHAR *v74; // [rsp+A8h] [rbp-A0h]
  unsigned int v75; // [rsp+B4h] [rbp-94h]
  const CHAR *v76; // [rsp+B8h] [rbp-90h]
  PSTRING v77; // [rsp+C0h] [rbp-88h]
  _QWORD *v78; // [rsp+C8h] [rbp-80h]
  __int128 v79; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v80; // [rsp+E0h] [rbp-68h]
  PSTRING v81; // [rsp+E8h] [rbp-60h]
  _WORD *p_Length; // [rsp+F0h] [rbp-58h]
  PSTRING v83; // [rsp+F8h] [rbp-50h]
  _QWORD *v84; // [rsp+100h] [rbp-48h]
  _QWORD *v85; // [rsp+108h] [rbp-40h]

  v10 = TargetNameOffset;
  v11 = FullTargetName;
  v12 = NotifyList;
  v81 = v11;
  p_Length = &v11->Length;
  v14 = TargetNameOffset;
  v77 = StreamName;
  v83 = StreamName;
  v79 = 0LL;
  v71 = 0LL;
  v73 = 0LL;
  *(_OWORD *)MultiByteString = 0LL;
  v60 = 0;
  if ( !TargetNameOffset && v11 )
    return;
  v72 = 0LL;
  v76 = 0LL;
  v74 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *((struct _KTHREAD **)NotifySync + 7) )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)NotifySync);
    *((_QWORD *)NotifySync + 7) = CurrentThread;
    v14 = v10;
    v12 = NotifyList;
  }
  ++*((_DWORD *)NotifySync + 16);
  p_Flink = &v12->Flink->Flink;
  v63 = v71;
  v64 = v73;
  v61 = (unsigned __int16)MultiByteString[0];
  while ( 1 )
  {
    v70 = p_Flink;
    v84 = p_Flink;
    if ( p_Flink == (_QWORD *)v12 )
      break;
    v17 = (__int64)(p_Flink - 4);
    v78 = p_Flink - 4;
    v85 = p_Flink - 4;
    if ( !v11 )
    {
      if ( TargetContext != *(PVOID *)(v17 + 24) )
        goto LABEL_13;
      MultiByteString[1] = 0LL;
      v61 = 0;
      LOWORD(MultiByteString[0]) = 0;
      v25 = 1;
      v60 = 1;
      v24 = 0;
LABEL_26:
      v26 = *(_WORD *)(v17 + 72);
      if ( (v26 & 2) == 0 )
      {
        v27 = *(_DWORD *)(v17 + 96);
        if ( v27 )
        {
          v28 = 0LL;
          v80 = 0LL;
          if ( *(_DWORD *)(v17 + 100) )
          {
            v27 = *(_DWORD *)(v17 + 100);
          }
          else
          {
            v35 = *(_QWORD *)(v17 + 48);
            if ( v35 != v17 + 48 )
            {
              v28 = v35 - 168;
              v80 = v35 - 168;
              v27 = *(_DWORD *)(*(_QWORD *)(v35 - 168 + 184) + 8LL);
            }
          }
          if ( v24 )
          {
            v29 = 0;
            v61 = 0;
            LOWORD(MultiByteString[0]) = 0;
            goto LABEL_32;
          }
          if ( v25 )
          {
            v29 = v61;
          }
          else
          {
            v41 = v26 & 0x10;
            if ( (v26 & 0x10) != 0 )
            {
              p_Buffer = &v81->Buffer;
            }
            else
            {
              Buffer = NormalizedParentName->Buffer;
              p_Buffer = &v11->Buffer;
              if ( Buffer == v11->Buffer )
              {
                v44 = *(unsigned __int8 *)(v17 + 144);
                v45 = **(unsigned __int16 **)(v17 + 136);
                MultiByteString[1] = &Buffer[v44 + v45];
                v29 = NormalizedParentName->Length - v45 - v44;
                goto LABEL_95;
              }
            }
            if ( v72 )
            {
              v10 = v63;
            }
            else
            {
              v72 = *p_Buffer;
              v63 = v10;
              LOWORD(v71) = v10;
              v46 = *(unsigned __int8 *)(v17 + 144);
              if ( TargetNameOffset != v46 )
              {
                v10 = TargetNameOffset - v46;
                v63 = TargetNameOffset - v46;
                LOWORD(v71) = TargetNameOffset - v46;
              }
              WORD1(v71) = v10;
            }
            v47 = 0;
            v48 = 0;
            if ( v41 )
            {
              v52 = v72;
            }
            else
            {
              v49 = 1;
              v50 = 0;
              if ( *(_BYTE *)(v17 + 144) == 1 )
              {
                while ( 1 )
                {
                  v51 = *(unsigned __int16 **)(v17 + 136);
                  if ( v50 >= *v51 )
                    break;
                  if ( *(_BYTE *)(v50 + *((_QWORD *)v51 + 1)) == 92 )
                    ++v49;
                  ++v50;
                }
                v52 = v72;
                while ( v72[v48] != 92 || (unsigned __int8)++v47 != v49 )
                  ++v48;
              }
              else
              {
                while ( 1 )
                {
                  v53 = *(unsigned __int16 **)(v17 + 136);
                  if ( v50 >= *v53 >> 1 )
                    break;
                  if ( *(_WORD *)(*((_QWORD *)v53 + 1) + 2LL * v50) == 92 )
                    ++v49;
                  ++v50;
                }
                v52 = v72;
                while ( *(_WORD *)&v72[2 * v48] != 92 || (unsigned __int8)++v47 != v49 )
                  ++v48;
                v48 *= *(unsigned __int8 *)(v17 + 144);
              }
              v25 = v60;
            }
            v62 = *(unsigned __int8 *)(v17 + 144) + v48;
            MultiByteString[1] = &v52[v62];
            v29 = v10 - v62;
LABEL_95:
            v61 = v29;
            LOWORD(MultiByteString[0]) = v29;
            WORD1(MultiByteString[0]) = v29;
          }
LABEL_32:
          v30 = 12;
          if ( v25 )
          {
            v31 = v77->Length + 12;
          }
          else
          {
            if ( !v24 )
            {
              if ( *(_BYTE *)(v17 + 144) == 1 )
              {
                BytesInUnicodeString = 0;
                RtlMultiByteToUnicodeSize(&BytesInUnicodeString, MultiByteString[1], v29);
                v54 = BytesInUnicodeString;
              }
              else
              {
                v54 = v29;
              }
              v30 = v54 + 14;
            }
            v55 = v76;
            if ( v76 )
            {
              v56 = v64;
            }
            else
            {
              v55 = &v11->Buffer[TargetNameOffset];
              v76 = v55;
              v74 = v55;
              v56 = *p_Length - TargetNameOffset;
              v64 = v56;
              LOWORD(v73) = v56;
              WORD1(v73) = v56;
            }
            if ( *(_BYTE *)(v17 + 144) == 1 )
            {
              v68 = 0;
              RtlMultiByteToUnicodeSize(&v68, v55, v56);
              v31 = v68 + v30;
            }
            else
            {
              v31 = v56 + v30;
            }
            if ( StreamName )
            {
              Length = v77->Length;
              if ( *(_BYTE *)(v17 + 144) == 2 )
              {
                v31 += Length + 2;
              }
              else
              {
                v69 = 0;
                RtlMultiByteToUnicodeSize(&v69, StreamName->Buffer, Length);
                v31 += v69 + 2;
              }
            }
          }
          v32 = (*(_DWORD *)(v17 + 104) + 3) & 0xFFFFFFFC;
          v75 = v32;
          v33 = -1;
          if ( v32 + v31 >= v32 )
            v33 = v32 + v31;
          if ( v31 > v27 || v32 + v31 < v32 || v33 > v27 )
            goto LABEL_37;
          Pool2 = 0LL;
          v37 = *(char **)(v17 + 88);
          if ( v37 )
          {
            *(_DWORD *)&v37[*(unsigned int *)(v17 + 108)] = v32 - *(_DWORD *)(v17 + 108);
            *(_DWORD *)(v17 + 108) = v32;
            v37 = *(char **)(v17 + 88);
            Pool2 = &v37[v32];
          }
          else if ( v28 )
          {
            v38 = *(char **)(v28 + 24);
            if ( v38 )
            {
              Pool2 = *(char **)(v28 + 24);
              *(_QWORD *)(v17 + 88) = v38;
              v37 = v38;
              goto LABEL_51;
            }
            v58 = *(_QWORD *)(v28 + 8);
            if ( v58 )
            {
              if ( (*(_BYTE *)(v58 + 10) & 5) != 0 )
                Pool2 = *(char **)(v58 + 24);
              else
                Pool2 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v58, 0, MmCached, 0LL, 0, 0x40000010u);
              *(_QWORD *)(v17 + 88) = Pool2;
              v37 = Pool2;
LABEL_51:
              *(_DWORD *)(v17 + 100) = v27;
            }
          }
          if ( !v37 )
          {
            PsChargePoolQuota(*(PEPROCESS *)(v17 + 120), PagedPool, v27);
            Pool2 = (char *)ExAllocatePool2(0x122uLL);
            *(_QWORD *)(v17 + 88) = Pool2;
            *(_QWORD *)(v17 + 80) = Pool2;
            *(_DWORD *)(v17 + 100) = v27;
          }
          if ( Pool2 )
          {
            v59 = *(unsigned int *)(v17 + 104);
            if ( v32 > (unsigned int)v59 )
              memset_0((void *)(*(_QWORD *)(v17 + 88) + v59), 0, v32 - (unsigned int)v59);
            if ( (unsigned __int8)FsRtlNotifyUpdateBuffer(
                                    (_DWORD)Pool2,
                                    Action,
                                    (unsigned int)MultiByteString,
                                    (unsigned int)&v73,
                                    (__int64)StreamName,
                                    *(_BYTE *)(v17 + 144) == 2,
                                    v31) )
            {
              *(_DWORD *)(v17 + 104) = v32 + v31;
              goto LABEL_38;
            }
LABEL_37:
            *(_WORD *)(v17 + 72) |= 2u;
          }
LABEL_38:
          if ( (*(_BYTE *)(v17 + 72) & 2) != 0 && *(_QWORD *)(v17 + 88) )
          {
            if ( *(_QWORD *)(v17 + 80) )
            {
              PsReturnProcessPagedPoolQuota(*(_QWORD *)(v17 + 120), *(unsigned int *)(v17 + 100));
              ExFreePoolWithTag(*(PVOID *)(v17 + 80), 0);
            }
            *(_QWORD *)(v17 + 88) = 0LL;
            *(_QWORD *)(v17 + 80) = 0LL;
            *(_QWORD *)(v17 + 104) = 0LL;
            *(_DWORD *)(v17 + 100) = 0;
          }
          v11 = FullTargetName;
          v10 = TargetNameOffset;
          p_Flink = v70;
        }
      }
      v34 = *((_WORD *)v85 + 36);
      if ( Action == 4 )
      {
        *((_WORD *)v85 + 36) = v34 | 8;
      }
      else
      {
        *((_WORD *)v85 + 36) = v34 & 0xFFF7;
        if ( *(_QWORD *)(v17 + 48) != v17 + 48 )
          FsRtlNotifyCompleteIrpList(v17, 0);
      }
      goto LABEL_42;
    }
    if ( **(_WORD **)(v17 + 136) && (*(_DWORD *)(v17 + 76) & FilterMatch) != 0 )
    {
      v18 = NormalizedParentName;
      if ( !NormalizedParentName )
      {
        *((_QWORD *)&v79 + 1) = v11->Buffer;
        v39 = v10;
        LOWORD(v79) = v10;
        v40 = *(unsigned __int8 *)(v17 + 144);
        if ( v14 != v40 )
        {
          v39 = v14 - v40;
          LOWORD(v79) = v14 - v40;
        }
        WORD1(v79) = v39;
        v18 = (PSTRING)&v79;
        NormalizedParentName = (PSTRING)&v79;
      }
      v19 = *(unsigned __int16 **)(v17 + 136);
      v20 = *v19;
      if ( (unsigned __int16)v20 <= v18->Length )
      {
        if ( (_WORD)v20 == v18->Length )
        {
          v24 = 1;
LABEL_19:
          if ( !memcmp(*((const void **)v19 + 1), v18->Buffer, v20)
            && (v24
             || !*(_QWORD *)(v17 + 16)
             || (unsigned __int8)guard_dispatch_icall_no_overrides(*(_QWORD *)(v17 + 8), (__int64)TargetContext))
            && (!*(_QWORD *)(v17 + 64)
             || !FilterContext
             || (unsigned __int8)guard_dispatch_icall_no_overrides(*(_QWORD *)(v17 + 8), (__int64)FilterContext)) )
          {
            v25 = v60;
            goto LABEL_26;
          }
LABEL_42:
          v12 = NotifyList;
          goto LABEL_13;
        }
        v21 = *(_WORD *)(v17 + 72);
        if ( (v21 & 1) != 0 )
        {
          if ( (v21 & 0x10) != 0
            || ((v22 = &v18->Buffer[*v19], *(_BYTE *)(v17 + 144) == 1)
              ? (v23 = *v22 == 92)
              : (v23 = *(_WORD *)v22 == 92),
                v23) )
          {
            v24 = 0;
            goto LABEL_19;
          }
        }
      }
    }
LABEL_13:
    p_Flink = (_QWORD *)*p_Flink;
    v14 = TargetNameOffset;
  }
  v23 = (*((_DWORD *)NotifySync + 16))-- == 1;
  if ( v23 )
  {
    *((_QWORD *)NotifySync + 7) = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)NotifySync);
  }
}
