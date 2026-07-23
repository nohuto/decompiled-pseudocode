/*
 * XREFs of HvLoadHive @ 0x140AC4740
 * Callers:
 *     HvHiveStartFileBacked @ 0x140AC430C (HvHiveStartFileBacked.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HvpViewMapStart @ 0x1408BDEDC (HvpViewMapStart.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1408E23B0 (HvpRemapAndEnlistHiveBins.c)
 *     CmpTraceHiveMountBaseFileMounted @ 0x140A80588 (CmpTraceHiveMountBaseFileMounted.c)
 *     HvpAdjustHiveFreeDisplay @ 0x140A88570 (HvpAdjustHiveFreeDisplay.c)
 *     CmpFileFlush @ 0x140AA8F74 (CmpFileFlush.c)
 *     HvpInitMap @ 0x140ABBC40 (HvpInitMap.c)
 *     CmpInitializeActualFileSizes @ 0x140ACFF98 (CmpInitializeActualFileSizes.c)
 *     HvpGetHiveHeader @ 0x140ADBCE8 (HvpGetHiveHeader.c)
 *     HvAnalyzeLogFiles @ 0x140ADCF88 (HvAnalyzeLogFiles.c)
 *     HvpPerformLogFileRecovery @ 0x140AEE1B4 (HvpPerformLogFileRecovery.c)
 *     HvpMapHiveImageFromFile @ 0x140B535DC (HvpMapHiveImageFromFile.c)
 *     HvpMapHiveImageFromViewMap @ 0x140B878DC (HvpMapHiveImageFromViewMap.c)
 */

__int64 __fastcall HvLoadHive(ULONG_PTR BugCheckParameter2, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // r13
  char v6; // r12
  NTSTATUS v8; // eax
  int HiveHeader; // eax
  int v10; // r8d
  __int64 v11; // rdx
  int v12; // r14d
  int v13; // r9d
  unsigned int v14; // ebx
  __int64 v15; // r15
  int v16; // r12d
  int v17; // ebx
  _DWORD *v18; // rax
  int v19; // ecx
  bool v20; // zf
  int v21; // r9d
  int inited; // eax
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned int v26; // ebx
  int v27; // r8d
  unsigned int v28; // ecx
  unsigned int v29; // r9d
  int v30; // edx
  int v31; // eax
  NTSTATUS v32; // eax
  int v33; // ecx
  int v35; // [rsp+20h] [rbp-E0h]
  int v36; // [rsp+20h] [rbp-E0h]
  __int64 v37; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v38; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+58h] [rbp-A8h] BYREF
  int v40; // [rsp+60h] [rbp-A0h]
  __int128 v41; // [rsp+68h] [rbp-98h] BYREF
  __int128 v42; // [rsp+78h] [rbp-88h]
  __int128 v43; // [rsp+88h] [rbp-78h]
  PPRIVILEGE_SET Privileges[2]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v45; // [rsp+A8h] [rbp-58h] BYREF
  PPRIVILEGE_SET v46[3]; // [rsp+B8h] [rbp-48h]
  _BYTE v47[60]; // [rsp+D0h] [rbp-30h] BYREF
  int v48; // [rsp+10Ch] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR v49[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 *v50; // [rsp+150h] [rbp+50h]
  __int64 v51; // [rsp+158h] [rbp+58h]
  __int64 *v52; // [rsp+160h] [rbp+60h]
  __int64 v53; // [rsp+168h] [rbp+68h]
  __int64 *v54; // [rsp+170h] [rbp+70h]
  __int64 v55; // [rsp+178h] [rbp+78h]

  v40 = a3;
  v39 = 0LL;
  v38 = 0;
  v5 = 0LL;
  v37 = 0LL;
  v6 = 0;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  v45 = 0LL;
  *(_OWORD *)v46 = 0LL;
  memset_0(v47, 0, 0x5CuLL);
  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8001) == 0 )
  {
    v8 = CmpFileFlush(BugCheckParameter2, 0);
    if ( v8 < 0 )
      SetFailureLocation(a4, 0, 6, v8, 8);
  }
  HiveHeader = HvpGetHiveHeader(BugCheckParameter2, &v37, &v39);
  v11 = 2LL;
  v12 = HiveHeader;
  switch ( HiveHeader )
  {
    case 2:
      v13 = -1073741670;
      v35 = 0;
LABEL_6:
      v14 = v13;
LABEL_7:
      SetFailureLocation(a4, 0, 6, v13, v35);
      v15 = v37;
      goto LABEL_82;
    case 7:
      v14 = -1073741491;
      v35 = 8;
LABEL_10:
      v13 = v14;
      goto LABEL_7;
    case 0:
      v14 = -1073741476;
      v35 = 16;
      goto LABEL_10;
  }
  if ( (unsigned int)(HiveHeader - 4) > 1 )
  {
    v15 = v37;
  }
  else
  {
    if ( !*(_DWORD *)(BugCheckParameter2 + 168) )
    {
      v13 = -1073741492;
      v35 = 32;
      goto LABEL_6;
    }
    v15 = v37;
    if ( HiveHeader == 5 )
    {
      v16 = *(_DWORD *)(v37 + 8);
    }
    else
    {
      if ( HiveHeader != 4 )
        goto LABEL_39;
      v16 = 0;
    }
    if ( *(_DWORD *)(BugCheckParameter2 + 168) == 1 )
    {
      Privileges[0] = (PPRIVILEGE_SET)BugCheckParameter2;
      *((_QWORD *)&v41 + 1) = HvpRecoverDataReadRoutine;
      v17 = 1;
      DWORD1(v45) = 1;
      *(_QWORD *)&v42 = Privileges;
      LODWORD(v41) = 1;
    }
    else
    {
      v17 = 2;
      v18 = (_DWORD *)&v45 + 1;
      v19 = 4;
      do
      {
        *(_QWORD *)(v18 - 5) = BugCheckParameter2;
        *v18 = v19++;
        v18 += 6;
        --v11;
      }
      while ( v11 );
      LODWORD(v41) = 4;
      *((_QWORD *)&v41 + 1) = HvpRecoverDataReadRoutine;
      *(_QWORD *)&v43 = HvpRecoverDataReadRoutine;
      *((_QWORD *)&v43 + 1) = (char *)&v45 + 8;
      *(_QWORD *)&v42 = Privileges;
      DWORD2(v42) = 5;
    }
    v20 = v12 == 4;
    if ( v12 == 4 )
    {
      LOBYTE(v11) = 1;
      v5 = guard_dispatch_icall_no_overrides(4096LL, v11);
      if ( !v5 )
      {
        v21 = -1073741670;
        v36 = 48;
LABEL_80:
        v14 = v21;
        goto LABEL_81;
      }
      v20 = 1;
    }
    LOBYTE(v10) = v20;
    inited = HvAnalyzeLogFiles((unsigned int)&v39, v16, v10, (unsigned int)&v41, v17, (__int64)v47, v5);
    v14 = inited;
    if ( inited < 0 )
    {
      v36 = 56;
LABEL_31:
      v21 = inited;
LABEL_81:
      SetFailureLocation(a4, 0, 6, v21, v36);
      goto LABEL_82;
    }
    if ( v12 == 4 )
    {
      *(_WORD *)(BugCheckParameter2 + 208) |= 0x40u;
      v15 = v5;
      v5 = 0LL;
    }
    if ( (unsigned int)dword_140E09EE8 > 5 && tlgKeywordOn((__int64)&dword_140E09EE8, 0x200000000000LL) )
    {
      v51 = v23;
      v50 = &v37;
      LODWORD(v37) = v12;
      v52 = &v39;
      v39 = 0x1000000LL;
      v53 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E09EE8,
        (unsigned __int8 *)byte_140057CE8,
        0LL,
        0LL,
        v23,
        v49);
    }
    v6 = 0;
  }
LABEL_39:
  v24 = v15;
  *(_QWORD *)(BugCheckParameter2 + 64) = v15;
  v15 = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 220) = *(_DWORD *)(v24 + 24) - 4096 + (*(_DWORD *)(v24 + 20) << 12);
  inited = CmpInitializeActualFileSizes(BugCheckParameter2, &v38);
  v14 = inited;
  if ( inited < 0 )
  {
    v36 = 128;
    goto LABEL_31;
  }
  v26 = v38;
  if ( v38 < *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) + 4096
    && (v40 & 0x20000) == 0
    && (BYTE2(NlsMbOemCodePageTag) || (CmpContextListLock.ApcStateFill[36] & 6) != 0) )
  {
    if ( (unsigned int)dword_140E09EE8 > 5 && tlgKeywordOn((__int64)&dword_140E09EE8, 0x200000000000LL) )
    {
      v51 = 4LL;
      LODWORD(v37) = v27 + 4096;
      v38 = v26;
      v50 = &v37;
      v53 = 4LL;
      v52 = (__int64 *)&v38;
      v39 = 0x1000000LL;
      v54 = &v39;
      v55 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09EE8, (unsigned __int8 *)byte_140057D39, 0LL, 0LL, 5u, v49);
    }
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) = (v26 - 4096) & 0xFFFFF000;
  }
  v28 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL);
  if ( v28 > 0x7FFFE000 || !v28 )
  {
    v21 = -1073741492;
    v36 = 112;
    goto LABEL_80;
  }
  inited = HvpInitMap(BugCheckParameter2, v25);
  v14 = inited;
  if ( inited < 0 )
  {
    v36 = 132;
    goto LABEL_31;
  }
  v29 = *(_DWORD *)(BugCheckParameter2 + 160);
  if ( (v29 & 0x20000) != 0 )
  {
    v30 = (v29 >> 22) & 2 | 8;
    if ( (v29 & 0x8000000) == 0 )
      v30 = (v29 >> 22) & 2;
    v31 = v30 | 1;
    if ( (v29 & 0x8001) == 0 )
      v31 = v30;
    v32 = HvpViewMapStart(
            BugCheckParameter2 + 224,
            *(void **)(BugCheckParameter2 + 1544),
            *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL),
            (__int64)&CmpFreezeListLock.ThreadLock,
            v31);
    v14 = v32;
    if ( v32 < 0 )
    {
      SetFailureLocation(a4, 0, 6, v32, 136);
      goto LABEL_82;
    }
    inited = HvpMapHiveImageFromViewMap(
               BugCheckParameter2,
               0LL,
               *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL));
    v14 = inited;
    if ( inited < 0 )
    {
      v36 = 140;
      goto LABEL_31;
    }
  }
  else
  {
    inited = HvpMapHiveImageFromFile(BugCheckParameter2);
    v14 = inited;
    if ( inited < 0 )
    {
      v36 = 144;
      goto LABEL_31;
    }
  }
  CmpTraceHiveMountBaseFileMounted(
    *(_QWORD *)(BugCheckParameter2 + 1544),
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL));
  if ( v48 )
  {
    inited = HvpPerformLogFileRecovery(BugCheckParameter2, a4);
    v14 = inited;
    if ( inited < 0 )
    {
      v36 = 160;
      goto LABEL_31;
    }
    v6 = 1;
  }
  else
  {
    v33 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4LL);
    *(_DWORD *)(BugCheckParameter2 + 172) = v33;
    *(_DWORD *)(BugCheckParameter2 + 184) = v33;
    *(_DWORD *)(BugCheckParameter2 + 176) = v33;
    *(_BYTE *)(BugCheckParameter2 + 194) = 1;
  }
  inited = HvpAdjustHiveFreeDisplay(BugCheckParameter2, *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL), 0);
  v14 = inited;
  if ( inited < 0 )
  {
    v36 = 176;
    goto LABEL_31;
  }
  inited = HvpRemapAndEnlistHiveBins(BugCheckParameter2, v40, a4);
  v14 = inited;
  if ( inited == 1073741833 )
  {
    v6 = 1;
  }
  else if ( inited < 0 )
  {
    v36 = 192;
    goto LABEL_31;
  }
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4092LL) = 0;
  if ( v12 == 4 || v6 )
    v14 = 1073741833;
  else
    v14 = 0;
LABEL_82:
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v46[0] )
    CmSiFreeMemory(v46[0]);
  if ( v5 )
    guard_dispatch_icall_no_overrides(v5, *(unsigned int *)(BugCheckParameter2 + 132));
  if ( v15 )
    guard_dispatch_icall_no_overrides(v15, *(unsigned int *)(BugCheckParameter2 + 132));
  return v14;
}
