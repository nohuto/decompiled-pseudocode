/*
 * XREFs of DxgkShareObjectsInternal @ 0x1403136A0
 * Callers:
 *     ?AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z @ 0x1400A1C80 (-AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z.c)
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z @ 0x14020547C (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVDXGDEVICE@@HPEAXPEAI@Z.c)
 *     ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140223E40 (-VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusShareObjectWithHost@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402334B0 (-VmBusShareObjectWithHost@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkShareObjects @ 0x1403135C0 (DxgkShareObjects.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14000DED0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140034DA0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140035BB0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x140037FC0 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x14004C5D0 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x14004D2D8 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?AddReference@DXGSYNCOBJECT@@QEAAJXZ @ 0x140067CAC (-AddReference@DXGSYNCOBJECT@@QEAAJXZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1401E94A0 (-CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAP.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401FE008 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1403129EC (-CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x140314280 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x14031430C (-CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 */

__int64 __fastcall DxgkShareObjectsInternal(
        __int64 a1,
        char a2,
        struct _KPROCESS *a3,
        unsigned int a4,
        void *Src,
        __int64 a6,
        ACCESS_MASK DesiredAccess,
        void *a8,
        PVOID *a9)
{
  __int64 v9; // r13
  char v10; // r14
  char v11; // r15
  __int64 v12; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v14; // r12
  unsigned int v15; // edx
  unsigned int v16; // r8d
  unsigned int EntryType; // edi
  __int64 v18; // rcx
  __int64 v19; // r9
  DXGKEYEDMUTEX *v20; // r14
  struct DXGSYNCOBJECT *v21; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // r8d
  char v26; // r12
  __int64 v27; // rcx
  __int64 inserted; // rdi
  struct _KPROCESS *v29; // rdi
  __int64 v30; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  unsigned int v34; // edx
  char *v35; // r10
  unsigned int v36; // r8d
  unsigned int v38; // eax
  unsigned int v39; // ecx
  int v40; // ecx
  __int64 v41; // rdx
  __int64 v42; // rdx
  const wchar_t *v43; // r9
  __int64 v44; // r8
  unsigned int v45; // r8d
  PERESOURCE *v46; // rax
  _QWORD *v47; // rax
  char v49; // [rsp+51h] [rbp-117h]
  char v50; // [rsp+52h] [rbp-116h]
  PVOID Object; // [rsp+60h] [rbp-108h] BYREF
  char v52[8]; // [rsp+68h] [rbp-100h] BYREF
  char v53; // [rsp+70h] [rbp-F8h]
  HANDLE Handle; // [rsp+78h] [rbp-F0h] BYREF
  struct DXGPROCESS *v55; // [rsp+80h] [rbp-E8h]
  __int64 v56; // [rsp+88h] [rbp-E0h]
  char *v57; // [rsp+90h] [rbp-D8h]
  void *v58; // [rsp+98h] [rbp-D0h]
  int v59; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v60; // [rsp+A8h] [rbp-C0h]
  char v61; // [rsp+B0h] [rbp-B8h]
  _BYTE v62[24]; // [rsp+B8h] [rbp-B0h] BYREF
  PRKPROCESS PROCESS; // [rsp+D0h] [rbp-98h]
  PVOID *v64; // [rsp+D8h] [rbp-90h]
  struct _KAPC_STATE ApcState; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v66; // [rsp+110h] [rbp-58h] BYREF
  unsigned int v67; // [rsp+118h] [rbp-50h]

  v9 = a4;
  PROCESS = a3;
  v10 = a2;
  v11 = a1;
  v49 = a1;
  v56 = a6;
  v58 = a8;
  v64 = a9;
  v59 = -1;
  v60 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v61 = 1;
    v59 = 2074;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v61 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v59, 2074);
  Object = 0LL;
  Handle = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v50 = 0;
  Current = DXGPROCESS::GetCurrent(v12);
  v55 = Current;
  if ( !Current )
  {
    LODWORD(inserted) = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 634;
    v43 = L"Invalid process context. Returning 0x%I64x";
LABEL_88:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v43, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_46;
  }
  if ( (unsigned int)(v9 - 1) > 2 )
  {
    LODWORD(inserted) = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 643;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Input handle count is out of range. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_30;
  }
  v66 = 0LL;
  v67 = 0;
  if ( v11 == 1 )
    RtlCopyFromUser(&v66, Src, 4 * v9);
  else
    memmove(&v66, Src, 4 * v9);
  if ( !a6 )
  {
    LODWORD(inserted) = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 675;
    v43 = L"Invalid object attributes. Returning 0x%I64x";
    goto LABEL_88;
  }
  v14 = (unsigned int)v66;
  if ( !(_DWORD)v66 )
  {
    LODWORD(inserted) = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 686;
    v43 = L"Input object handle is NULL. Returning 0x%I64x";
    goto LABEL_88;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v62, (struct _KTHREAD **)Current);
  v57 = (char *)Current + 280;
  v15 = ((unsigned int)v14 >> 6) & 0xFFFFFF;
  if ( v15 < *((_DWORD *)Current + 74)
    && (v16 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16LL * v15 + 8), (unsigned int)v14 >> 30 == ((v16 >> 5) & 3))
    && (v16 & 0x2000) == 0
    && (v16 & 0x1F) != 0 )
  {
    EntryType = HMGRTABLE::GetEntryType((char *)Current + 280);
  }
  else
  {
    EntryType = 0;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v62);
  switch ( EntryType )
  {
    case 4u:
      v20 = 0LL;
      v21 = 0LL;
      Global = DXGGLOBAL::GetGlobal();
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v52, Global, 0);
      if ( (unsigned int)v9 <= 1 )
      {
LABEL_18:
        v25 = v14;
        v26 = v49;
        LOBYTE(v24) = v49;
        LODWORD(inserted) = CreateSharedResourceNtObject(v24, v23, v25, 0LL, v56, a2, &Object);
        if ( (int)inserted >= 0 )
        {
          if ( v20 || v21 )
          {
            v47 = Object;
            *((_QWORD *)Object + 3) = v20;
            v47[4] = v21;
          }
          if ( v53 )
            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v52);
          v10 = a2;
          Current = v55;
          goto LABEL_24;
        }
        if ( Object )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 811;
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pObject == NULL", 811LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( v20 )
          DXGKEYEDMUTEX::ReleaseReference(v20);
        if ( v21 )
        {
          v46 = (PERESOURCE *)DXGGLOBAL::GetGlobal();
          DXGGLOBAL::DestroySyncObject(v46, v21, 0, 0);
        }
        goto LABEL_73;
      }
      if ( (_DWORD)v9 != 3 )
      {
        LODWORD(inserted) = -1073741811;
        WdLogSingleEntry2(3LL, v14, -1073741811LL);
        WdLogGlobalForLineNumber = 727;
LABEL_73:
        if ( v53 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v52);
        goto LABEL_75;
      }
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v52);
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v62, (struct _KTHREAD **)v55);
      inserted = HIDWORD(v66);
      v34 = (HIDWORD(v66) >> 6) & 0xFFFFFF;
      v35 = v57;
      if ( v34 < *((_DWORD *)v57 + 4)
        && (v36 = *(_DWORD *)(*(_QWORD *)v57 + 16LL * v34 + 8), HIDWORD(v66) >> 30 == ((v36 >> 5) & 3))
        && (v36 & 0x2000) == 0
        && (v36 & 0x1F) != 0 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)v57 + 16LL * v34 + 8) & 0x1F) == 9 )
        {
          v20 = *(DXGKEYEDMUTEX **)(*(_QWORD *)v57 + 16LL * v34);
        }
        else
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
          v20 = 0LL;
          v35 = v57;
        }
      }
      else
      {
        v20 = 0LL;
      }
      if ( v20 )
      {
        if ( (*((_DWORD *)v20 + 43) & 1) != 0 )
        {
          inserted = v67;
          v38 = (v67 >> 6) & 0xFFFFFF;
          if ( v38 < *((_DWORD *)v35 + 4) )
          {
            v39 = *(_DWORD *)(*(_QWORD *)v35 + 16LL * v38 + 8);
            if ( v67 >> 30 == ((v39 >> 5) & 3) && (v39 & 0x2000) == 0 )
            {
              v40 = v39 & 0x1F;
              if ( v40 )
              {
                if ( v40 == 8 )
                {
                  v21 = *(struct DXGSYNCOBJECT **)(*(_QWORD *)v35 + 16LL * v38);
LABEL_64:
                  if ( v21 )
                  {
                    if ( (*((_DWORD *)v21 + 106) & 2) == 0 )
                    {
                      _InterlockedIncrement(&dword_14016829C);
                      LODWORD(inserted) = -1073741811;
                      WdLogSingleEntry2(2LL, v21, -1073741811LL);
                      WdLogGlobalForLineNumber = 787;
                      DxgkLogInternalTriageEvent(
                        0LL,
                        0x40000,
                        -1,
                        (__int64)L"Cannot share object: Shared sync object 0x%I64x does not use NT security sharing. Returning 0x%I64x.",
                        (__int64)v21,
                        -1073741811LL,
                        0LL,
                        0LL,
                        0LL);
                      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v62);
                      DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v52);
LABEL_75:
                      v10 = a2;
                      goto LABEL_30;
                    }
                    DXGKEYEDMUTEX::AcquireReference(v20);
                    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v62);
                    DXGSYNCOBJECT::AddReference(v21);
                    goto LABEL_18;
                  }
                  v42 = inserted;
                  LODWORD(inserted) = -1073741811;
                  WdLogSingleEntry2(3LL, v42, -1073741811LL);
                  WdLogGlobalForLineNumber = 776;
                  goto LABEL_77;
                }
                WdLogSingleEntry0(2LL);
                WdLogGlobalForLineNumber = 318;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Handle type mismatch",
                  318LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
          }
          v21 = 0LL;
          goto LABEL_64;
        }
        _InterlockedIncrement(&dword_14016829C);
        LODWORD(inserted) = -1073741811;
        WdLogSingleEntry2(2LL, v20, -1073741811LL);
        WdLogGlobalForLineNumber = 761;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Cannot share object: Keyed mutex 0x%I64x does not use NT security sharing. Returning 0x%I64x.",
          (__int64)v20,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        v41 = inserted;
        LODWORD(inserted) = -1073741811;
        WdLogSingleEntry2(3LL, v41, -1073741811LL);
        WdLogGlobalForLineNumber = 750;
      }
LABEL_77:
      DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v62);
      goto LABEL_73;
    case 0xBu:
    case 8u:
      if ( (_DWORD)v9 == 1 )
      {
        v32 = (unsigned int)v14;
        v26 = v49;
        LOBYTE(v18) = v49;
        LODWORD(inserted) = CreateSharedSyncNtObject(v18, EntryType, v32, 0LL, v56, v10, &Object);
        if ( (int)inserted < 0 )
        {
          if ( !Object )
            goto LABEL_30;
          WdLogSingleEntry0(1LL);
          v33 = 851LL;
          goto LABEL_40;
        }
LABEL_24:
        v29 = PROCESS;
        if ( PROCESS && v29 != (struct _KPROCESS *)PsGetCurrentProcess(v27) )
        {
          KeStackAttachProcess(v29, &ApcState);
          v50 = 1;
        }
        inserted = ObInsertObject(Object, 0LL, DesiredAccess, 0, 0LL, &Handle);
        if ( v50 )
          KeUnstackDetachProcess(&ApcState);
        if ( (int)inserted < 0 )
        {
          WdLogSingleEntry3(3LL, Object, Current, inserted);
          WdLogGlobalForLineNumber = 922;
        }
        else if ( v26 == 1 )
        {
          RtlCopyToUser(v58, &Handle, 8uLL);
        }
        else
        {
          *(_QWORD *)v58 = Handle;
          if ( v64 )
            *v64 = Object;
        }
LABEL_30:
        if ( (int)inserted >= 0 )
          goto LABEL_31;
        break;
      }
      LODWORD(inserted) = -1073741811;
      WdLogSingleEntry2(3LL, v14, -1073741811LL);
      WdLogGlobalForLineNumber = 839;
      break;
    case 0xEu:
      if ( (_DWORD)v9 != 1 )
      {
        LODWORD(inserted) = -1073741811;
        WdLogSingleEntry2(3LL, v14, -1073741811LL);
        WdLogGlobalForLineNumber = 862;
        break;
      }
      v45 = v14;
      v26 = v49;
      LODWORD(inserted) = CreateSharedProtectedSessionNtObject(v49, 14, v45, v19, v56, v10, &Object);
      if ( (int)inserted < 0 )
      {
        if ( !Object )
          goto LABEL_30;
        WdLogSingleEntry0(1LL);
        v33 = 874LL;
LABEL_40:
        WdLogGlobalForLineNumber = v33;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pObject == NULL", v33, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_30;
      }
      goto LABEL_24;
    default:
      v44 = (int)EntryType;
      LODWORD(inserted) = -1073741811;
      WdLogSingleEntry3(3LL, v14, v44, -1073741811LL);
      WdLogGlobalForLineNumber = 883;
      break;
  }
LABEL_46:
  if ( Handle )
    ObCloseHandle(Handle, v10);
LABEL_31:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59);
  if ( v61 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v30, (__int64)&EventProfilerExit);
  return (unsigned int)inserted;
}
