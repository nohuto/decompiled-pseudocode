/*
 * XREFs of DxgkCreateBundleObjectInternal @ 0x14041DAC8
 * Callers:
 *     DxgkCreateBundleObject @ 0x1401EAC40 (DxgkCreateBundleObject.c)
 *     ?CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z @ 0x14041D830 (-CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlWriteULong64ToUser @ 0x140196810 (RtlWriteULong64ToUser.c)
 *     ?CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1401E917C (-CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1401E94A0 (-CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAP.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1403129EC (-CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x140314280 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x14031430C (-CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 */

__int64 __fastcall DxgkCreateBundleObjectInternal(
        __int64 a1,
        KPROCESSOR_MODE a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        __int64 a6)
{
  char v6; // r12
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // r15
  int SharedResourceNtObject; // edi
  __int64 v10; // r14
  __int64 v11; // rax
  const wchar_t *v12; // r9
  void *v13; // rdi
  ACCESS_MASK *v14; // r8
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r9
  unsigned int v18; // eax
  __int64 v19; // r14
  __int64 v20; // rdi
  __int64 v21; // rdx
  int EntryType; // r15d
  _QWORD *v23; // r10
  unsigned int v24; // edx
  int v25; // r9d
  __int64 v26; // rcx
  PVOID *v27; // r15
  __int64 v28; // rax
  PVOID *v29; // r15
  __int64 v30; // rcx
  DXGSYNCOBJECT *v31; // r9
  __int64 v32; // r9
  PVOID *v33; // r15
  const wchar_t *v34; // r9
  int v35; // eax
  _DWORD *v36; // r14
  char *v37; // r15
  unsigned int j; // r15d
  NTSTATUS inserted; // eax
  BOOLEAN IsKernelHandle; // al
  unsigned int v41; // r14d
  unsigned int i; // eax
  PVOID v43; // rcx
  __int64 v44; // rcx
  __int64 v46; // rcx
  PVOID *NewObject; // [rsp+20h] [rbp-2D8h]
  PHANDLE Handle; // [rsp+28h] [rbp-2D0h]
  __int64 Handlea; // [rsp+28h] [rbp-2D0h]
  __int64 v50; // [rsp+30h] [rbp-2C8h]
  char v52; // [rsp+51h] [rbp-2A7h]
  PVOID Object; // [rsp+60h] [rbp-298h] BYREF
  int v54; // [rsp+68h] [rbp-290h] BYREF
  __int64 v55; // [rsp+70h] [rbp-288h]
  char v56; // [rsp+78h] [rbp-280h]
  HANDLE v57; // [rsp+80h] [rbp-278h] BYREF
  struct DXGPROCESS *v58; // [rsp+88h] [rbp-270h]
  void *Src[10]; // [rsp+90h] [rbp-268h] BYREF
  __int64 v60; // [rsp+E0h] [rbp-218h]
  PVOID *v61; // [rsp+E8h] [rbp-210h]
  _BYTE v62[24]; // [rsp+F0h] [rbp-208h] BYREF
  __int128 v63; // [rsp+108h] [rbp-1F0h]
  __int128 v64; // [rsp+118h] [rbp-1E0h]
  __int128 v65; // [rsp+128h] [rbp-1D0h]
  _DWORD v66[16]; // [rsp+140h] [rbp-1B8h] BYREF
  ACCESS_MASK v67[16]; // [rsp+180h] [rbp-178h] BYREF
  PVOID v68[16]; // [rsp+1C0h] [rbp-138h] BYREF
  _QWORD v69[16]; // [rsp+240h] [rbp-B8h] BYREF

  v6 = a1;
  v52 = a1;
  v60 = a6;
  v54 = -1;
  v55 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v56 = 1;
    v54 = 2157;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v56 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v54, 2157);
  Current = DXGPROCESS::GetCurrent(v7);
  v58 = Current;
  if ( !Current )
  {
    SharedResourceNtObject = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2145;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_101:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54);
    if ( v56 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v46, (__int64)&EventProfilerExit);
    }
    return (unsigned int)SharedResourceNtObject;
  }
  memset(Src, 0, sizeof(Src));
  if ( v6 == 1 )
  {
    RtlCopyFromUser(Src, a5, 0x50uLL);
  }
  else
  {
    *(_OWORD *)Src = *a5;
    *(_OWORD *)&Src[2] = a5[1];
    *(_OWORD *)&Src[4] = a5[2];
    *(_OWORD *)&Src[6] = a5[3];
    *(_OWORD *)&Src[8] = a5[4];
  }
  Src[9] = 0LL;
  v10 = LODWORD(Src[0]);
  if ( (unsigned int)(LODWORD(Src[0]) - 1) > 0xF )
  {
    SharedResourceNtObject = -1073741811;
    WdLogSingleEntry2(2LL, LODWORD(Src[0]), -1073741811LL);
    WdLogGlobalForLineNumber = 2178;
    v11 = LODWORD(Src[0]);
    v50 = 0LL;
    Handlea = -1073741811LL;
    v12 = L"Input handle count (0x%I64x) is out of range. Returning 0x%I64x";
    goto LABEL_100;
  }
  if ( ((-1 << SLOBYTE(Src[0])) & (__int64)Src[8]) != 0 )
  {
    SharedResourceNtObject = -1073741811;
    WdLogSingleEntry3(2LL, LODWORD(Src[8]), LODWORD(Src[0]), -1073741811LL);
    WdLogGlobalForLineNumber = 2188;
    v11 = LODWORD(Src[8]);
    v50 = -1073741811LL;
    Handlea = LODWORD(Src[0]);
    v12 = L"AccessInheritMask (0x%I64x) is invalid for Input handle count (0x%I64x). Returning 0x%I64x";
LABEL_100:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v12, v11, Handlea, v50, 0LL, 0LL);
    goto LABEL_101;
  }
  memset(v66, 0, sizeof(v66));
  memset(v69, 0, sizeof(v69));
  memset(v67, 0, sizeof(v67));
  if ( v6 == 1 )
  {
    RtlCopyFromUser(v66, Src[1], 4LL * LODWORD(Src[0]));
    RtlCopyFromUser(v69, Src[2], 8LL * LODWORD(Src[0]));
    v13 = Src[3];
    if ( Src[3] )
    {
      RtlCopyFromUser(v67, Src[3], 4LL * LODWORD(Src[0]));
      v13 = Src[3];
    }
    LODWORD(v10) = Src[0];
  }
  else
  {
    memmove(v66, Src[1], 4LL * LODWORD(Src[0]));
    memmove(v69, Src[2], 8 * v10);
    v13 = Src[3];
    if ( Src[3] )
      memmove(v67, Src[3], 4 * v10);
    Current = v58;
  }
  if ( v13 )
    goto LABEL_27;
  v14 = v67;
  v15 = (unsigned int)v10;
  if ( !(_DWORD)v10 )
    goto LABEL_27;
  if ( ((unsigned __int8)v67 & 4) == 0 )
    goto LABEL_25;
  v67[0] = 0x10000000;
  v15 = (unsigned int)v10 - 1LL;
  if ( (unsigned int)v10 != 1LL )
  {
    v14 = &v67[1];
LABEL_25:
    memset64(v14, 0x1000000010000000uLL, v15 >> 1);
    if ( (v15 & 1) != 0 )
      v14[v15 - 1] = 0x10000000;
  }
LABEL_27:
  Object = 0LL;
  memset(v68, 0, sizeof(v68));
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v18 = 0;
  while ( 1 )
  {
    LODWORD(v57) = v18;
    if ( v18 >= (unsigned int)v10 )
      break;
    v19 = v18;
    v20 = v18;
    v21 = v60;
    if ( v60 && *(_QWORD *)(v60 + 8LL * v18) )
    {
      EntryType = v66[v18];
    }
    else
    {
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v62, (struct _KTHREAD **)Current);
      v23 = (_QWORD *)((char *)Current + 280);
      v24 = (v66[v19] >> 6) & 0xFFFFFF;
      if ( v24 < *((_DWORD *)Current + 74)
        && (v25 = *(_DWORD *)(*v23 + 16LL * v24 + 8),
            ((v66[v19] >> 25) & 0x60) == (*(_BYTE *)(*v23 + 16LL * v24 + 8) & 0x60))
        && (v25 & 0x2000) == 0
        && (v25 & 0x1F) != 0 )
      {
        EntryType = HMGRTABLE::GetEntryType((__int64)Current + 280, v24);
      }
      else
      {
        EntryType = 0;
      }
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v62);
      v21 = v60;
    }
    v26 = (unsigned int)(EntryType - 4);
    if ( EntryType == 4 )
    {
      v32 = 0LL;
      if ( v21 )
        v32 = *(_QWORD *)(v20 * 8 + v21);
      v33 = &v68[v20];
      LOBYTE(v26) = v6;
      SharedResourceNtObject = CreateSharedResourceNtObject(v26, v21, v66[v19], v32, v69[v20], 1, &v68[v20]);
      if ( SharedResourceNtObject < 0 )
      {
        if ( *v33 )
        {
          WdLogSingleEntry0(1LL);
          v28 = 2276LL;
LABEL_62:
          v34 = L"Objects[i] == NULL";
LABEL_63:
          WdLogGlobalForLineNumber = v28;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)v34, v28, 0LL, 0LL, 0LL, 0LL);
        }
        goto LABEL_85;
      }
    }
    else
    {
      if ( EntryType != 8 )
      {
        if ( EntryType == 9 )
        {
          v29 = &v68[v20];
          SharedResourceNtObject = CreateSharedKeyedMutexNtObject(
                                     v6,
                                     v21,
                                     v66[v19],
                                     v17,
                                     v69[v20],
                                     (__int64)Handle,
                                     &v68[v20]);
          if ( SharedResourceNtObject < 0 )
          {
            if ( *v29 )
            {
              WdLogSingleEntry0(1LL);
              v28 = 2295LL;
              goto LABEL_62;
            }
            goto LABEL_85;
          }
          goto LABEL_58;
        }
        if ( EntryType != 11 )
        {
          if ( EntryType != 14 )
          {
            SharedResourceNtObject = -1073741811;
            WdLogSingleEntry3(3LL, (unsigned int)v66[v19], EntryType, -1073741811LL);
            WdLogGlobalForLineNumber = 2344;
            goto LABEL_85;
          }
          v27 = &v68[v20];
          SharedResourceNtObject = CreateSharedProtectedSessionNtObject(v6, 14, v66[v19], v17, v69[v20], 1, &v68[v20]);
          if ( SharedResourceNtObject < 0 )
          {
            if ( *v27 )
            {
              WdLogSingleEntry0(1LL);
              v28 = 2334LL;
              goto LABEL_62;
            }
            goto LABEL_85;
          }
          goto LABEL_58;
        }
      }
      v30 = v69[v20];
      v31 = 0LL;
      if ( v21 )
        v31 = *(DXGSYNCOBJECT **)(v20 * 8 + v21);
      v61 = &v68[v20];
      NewObject = (PVOID *)v30;
      LOBYTE(v30) = v6;
      SharedResourceNtObject = CreateSharedSyncNtObject(v30, EntryType, v66[v19], v31, (__int64)NewObject, 1, &v68[v20]);
      if ( SharedResourceNtObject < 0 )
      {
        if ( *v61 )
        {
          WdLogSingleEntry0(1LL);
          v28 = 2315LL;
          goto LABEL_62;
        }
        goto LABEL_85;
      }
    }
LABEL_58:
    v18 = (_DWORD)v57 + 1;
    LODWORD(v10) = Src[0];
    Current = v58;
  }
  LOBYTE(v17) = a2;
  LOBYTE(v16) = v6;
  v35 = ObCreateObject(v16, g_pDxgkSharedBundleObjectType, Src[4], v17, 0LL, 248, 0, 0, &Object);
  SharedResourceNtObject = v35;
  if ( v35 < 0 )
  {
    WdLogSingleEntry2(3LL, Current, v35);
    WdLogGlobalForLineNumber = 2367;
    if ( Object )
    {
      WdLogSingleEntry0(1LL);
      v28 = 2369LL;
      v34 = L"pBundleObject == NULL";
      goto LABEL_63;
    }
LABEL_85:
    if ( Src[9] )
    {
      ObCloseHandle(Src[9], a2);
      Src[9] = 0LL;
    }
    else if ( Object )
    {
      ObfDereferenceObject(Object);
      Object = 0LL;
    }
    else
    {
      v41 = 0;
      for ( i = (unsigned int)Src[0]; v41 < i; ++v41 )
      {
        v43 = v68[v41];
        if ( v43 )
        {
          ObfDereferenceObject(v43);
          v68[v41] = 0LL;
          i = (unsigned int)Src[0];
        }
      }
    }
    goto LABEL_101;
  }
  v36 = Object;
  memset(Object, 0, 0xF8uLL);
  v36[6] = Src[0];
  memmove(v36 + 8, v68, 8LL * LODWORD(Src[0]));
  memmove(v36 + 40, v67, 4LL * LODWORD(Src[0]));
  *(_OWORD *)v36 = *(_OWORD *)((char *)&Src[5] + 4);
  *((void **)v36 + 2) = *(void **)((char *)&Src[7] + 4);
  *((_BYTE *)v36 + 224) = a2;
  v37 = (char *)(v36 + 58);
  *((_QWORD *)v36 + 29) = 0LL;
  ExAcquirePushLockExclusiveEx(v36 + 58, 0LL);
  ObfReferenceObject(v36);
  SharedResourceNtObject = ObInsertObject(Object, 0LL, (ACCESS_MASK)Src[5], 0, 0LL, &Src[9]);
  if ( SharedResourceNtObject >= 0 && Src[3] )
  {
    for ( j = 0; j < v36[6]; ++j )
    {
      v57 = 0LL;
      ObfReferenceObject(*(PVOID *)&v36[2 * j + 8]);
      inserted = ObInsertObject(*(PVOID *)&v36[2 * j + 8], 0LL, v67[j], 0, 0LL, &v57);
      SharedResourceNtObject = inserted;
      if ( inserted < 0 )
      {
        WdLogSingleEntry2(3LL, *(_QWORD *)&v36[2 * j + 8], inserted);
        WdLogGlobalForLineNumber = 2463;
        break;
      }
      IsKernelHandle = ObIsKernelHandle(v57);
      ObCloseHandle(v57, IsKernelHandle == 0);
    }
    v6 = v52;
    v37 = (char *)(v36 + 58);
    if ( SharedResourceNtObject >= 0 )
    {
      *((_BYTE *)v36 + 242) = 1;
      *((_BYTE *)v36 + 240) = 1;
      goto LABEL_77;
    }
  }
  else
  {
LABEL_77:
    if ( SharedResourceNtObject >= 0 )
      *((_BYTE *)v36 + 243) = 1;
  }
  ExReleasePushLockExclusiveEx(v37, 0LL);
  ObfDereferenceObject(v36);
  if ( SharedResourceNtObject < 0 )
  {
    if ( !Src[9] )
    {
      WdLogSingleEntry3(3LL, Object, v58, SharedResourceNtObject);
      WdLogGlobalForLineNumber = 2502;
    }
    Object = 0LL;
    memset(v68, 0, sizeof(v68));
    goto LABEL_85;
  }
  if ( v6 == 1 )
    RtlWriteULong64ToUser((_QWORD *)a5 + 9, (__int64)Src[9]);
  else
    *((void **)a5 + 9) = Src[9];
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54);
  if ( v56 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v44, (__int64)&EventProfilerExit);
  return 0LL;
}
