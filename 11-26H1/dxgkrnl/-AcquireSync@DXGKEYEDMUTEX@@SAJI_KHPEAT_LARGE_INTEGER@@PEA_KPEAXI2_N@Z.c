/*
 * XREFs of ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z @ 0x1402B20F4
 * Callers:
 *     DxgkAcquireKeyedMutex @ 0x1401FE890 (DxgkAcquireKeyedMutex.c)
 *     DxgkAcquireKeyedMutex2 @ 0x1401FEBB0 (DxgkAcquireKeyedMutex2.c)
 *     ?VmBusAcquireKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402218B0 (-VmBusAcquireKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1402B1F10 (-AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_T.c)
 * Callees:
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x140007F98 (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x140045AE8 (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     ??1DXGKEYEDMUTEXBYHANDLE@@QEAA@XZ @ 0x14004C5B0 (--1DXGKEYEDMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x14004C5D0 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z @ 0x1400613F8 (-IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?VmBusSendAcquireKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I_KHPEAT_LARGE_INTEGER@@PEA_K4@Z @ 0x1402BF28C (-VmBusSendAcquireKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::AcquireSync(
        unsigned int a1,
        unsigned __int64 a2,
        int a3,
        union _LARGE_INTEGER *a4,
        DXGKEYEDMUTEX *a5,
        void *a6,
        size_t Size,
        unsigned __int64 *a8,
        bool a9)
{
  __int64 v9; // rsi
  unsigned __int64 *v10; // r12
  unsigned int v11; // r14d
  struct _KTHREAD **Current; // rbx
  struct DXGKEYEDMUTEX *v13; // rdi
  unsigned int v14; // r15d
  int v15; // eax
  struct DXGPROCESS *v16; // rbx
  int v17; // eax
  struct _LIST_ENTRY *Flink; // rax
  int v19; // eax
  struct _LIST_ENTRY ***v21; // rcx
  __int64 v22; // rbx
  struct DXGGLOBAL *Global; // rax
  volatile unsigned int Lock; // ebx
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v26; // rax
  int v27; // eax
  struct DXGKEYEDMUTEX *v28; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v29[24]; // [rsp+58h] [rbp-90h] BYREF
  struct _KEVENT v30[5]; // [rsp+70h] [rbp-78h] BYREF

  v9 = a1;
  v10 = (unsigned __int64 *)a5;
  if ( !a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4683;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pFenceValue", 4683LL, 0LL, 0LL, 0LL, 0LL);
  }
  *v10 = 0LL;
  v11 = 0;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v28 = 0LL;
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&a5, v9, Current, &v28);
  v13 = v28;
  if ( !v28 )
  {
    WdLogSingleEntry2(3LL, v9, -1073741811LL);
    WdLogGlobalForLineNumber = 4696;
    goto LABEL_35;
  }
  DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK((DXGKEYEDMUTEXLOCK *)v29, v28);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
  if ( a6 )
  {
    v14 = Size;
    if ( !(_DWORD)Size )
    {
      WdLogSingleEntry2(3LL, v13, -1073741811LL);
      WdLogGlobalForLineNumber = 4717;
      goto LABEL_40;
    }
    if ( (_DWORD)Size != *((_DWORD *)v13 + 42) )
    {
      WdLogSingleEntry4(3LL, v13, (unsigned int)Size, *((unsigned int *)v13 + 42), -1073741811LL);
      WdLogGlobalForLineNumber = 4726;
      goto LABEL_40;
    }
  }
  else
  {
    v14 = Size;
    if ( (_DWORD)Size )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 4709;
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v29);
      DXGKEYEDMUTEXBYHANDLE::~DXGKEYEDMUTEXBYHANDLE(&a5);
      return 3221225485LL;
    }
  }
  if ( *((_BYTE *)v13 + 176) )
  {
    Global = DXGGLOBAL::GetGlobal();
    v11 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendAcquireKeyedMutexSync(
            *((DXG_GUEST_GLOBAL_VMBUS **)Global + 212),
            (struct DXGPROCESS *)Current,
            v13,
            v9,
            a2,
            a3,
            a4,
            v10,
            a8);
LABEL_23:
    if ( a6 )
    {
      if ( a9 )
        RtlCopyToUser(a6, *((void **)v13 + 20), v14);
      else
        memmove(a6, *((const void **)v13 + 20), v14);
    }
LABEL_26:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v29);
    if ( a5 )
      DXGKEYEDMUTEX::ReleaseReference(a5);
    return v11;
  }
  v15 = *((_DWORD *)v13 + 14);
  if ( v15 == 3 )
  {
    WdLogSingleEntry2(3LL, v13, 128LL);
    WdLogGlobalForLineNumber = 4752;
LABEL_43:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v29);
    if ( a5 )
      DXGKEYEDMUTEX::ReleaseReference(a5);
    return 128LL;
  }
  if ( !v15 )
  {
    if ( (_DWORD)v9 )
    {
      if ( *((_DWORD *)v13 + 15) == (_DWORD)v9 )
      {
        v16 = (struct DXGPROCESS *)*((_QWORD *)v13 + 8);
        if ( v16 == DXGPROCESS::GetCurrent() )
        {
          v22 = v9;
          WdLogSingleEntry3(2LL, -1073741811LL, v13, v9);
          WdLogGlobalForLineNumber = 4759;
LABEL_39:
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Keyed mutex does not support recursive Acquire's, returning 0x%I64x, pKeyedMutex  = 0x%I64x, hKeyedMutex = 0x%I64x",
            -1073741811LL,
            (__int64)v13,
            v22,
            0LL,
            0LL);
LABEL_40:
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v29);
LABEL_35:
          if ( a5 )
            DXGKEYEDMUTEX::ReleaseReference(a5);
          return 3221225485LL;
        }
      }
    }
  }
  if ( *((_DWORD *)v13 + 14) == 2 && DXGKEYEDMUTEX::IsSameWaiter(v9, *((struct DXGKEYEDMUTEXWAITER **)v13 + 11)) )
  {
    v22 = v9;
    WdLogSingleEntry3(2LL, -1073741811LL, v13, v9);
    WdLogGlobalForLineNumber = 4766;
    goto LABEL_39;
  }
  v17 = *((_DWORD *)v13 + 14);
  if ( v17 && v17 != 2 && (v17 != 1 || a2 == *((_QWORD *)v13 + 9) || a3) )
  {
    Flink = (struct _LIST_ENTRY *)*((_QWORD *)v13 + 10);
LABEL_19:
    *v10 = (unsigned __int64)Flink;
    if ( a8 )
      *a8 = *((_QWORD *)v13 + 9);
    v19 = *((_DWORD *)v13 + 14);
    if ( v19 != 2 && v19 != 1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4860;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pKeyedMutex->m_OwnershipState == STATE_EVENT_SIGNALLED) || (pKeyedMutex->m_OwnershipState == STATE_PENDING_RELEASE)",
        4860LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *((_DWORD *)v13 + 14) = 0;
    *((_DWORD *)v13 + 15) = v9;
    *((_QWORD *)v13 + 8) = DXGPROCESS::GetCurrent();
    *((_QWORD *)v13 + 11) = 0LL;
    goto LABEL_23;
  }
  memset(v30, 0, 0x50uLL);
  LODWORD(v30[0].Header.WaitListHead.Flink) = v9;
  v30[0].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)DXGPROCESS::GetCurrent();
  *(_QWORD *)&v30[0].Header.Lock = a2;
  v30[2].Header.LockNV = 0;
  KeInitializeEvent(&v30[1], NotificationEvent, 0);
  v21 = (struct _LIST_ENTRY ***)*((_QWORD *)v13 + 13);
  if ( *v21 != (struct _LIST_ENTRY **)((char *)v13 + 96) )
    goto LABEL_33;
  v30[2].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)((char *)v13 + 96);
  *(_QWORD *)&v30[3].Header.Lock = v21;
  *v21 = &v30[2].Header.WaitListHead.Blink;
  *((_QWORD *)v13 + 13) = &v30[2].Header.WaitListHead.Blink;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
  v11 = KeWaitForSingleObject(&v30[1], Executive, 0, 1u, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
  Lock = v30[2].Header.Lock;
  if ( !v30[2].Header.LockNV )
  {
    Blink = v30[2].Header.WaitListHead.Blink;
    v26 = *(struct _LIST_ENTRY **)&v30[3].Header.Lock;
    if ( (struct _LIST_ENTRY **)v30[2].Header.WaitListHead.Blink->Blink != &v30[2].Header.WaitListHead.Blink
      || **(struct _KEVENT ***)&v30[3].Header.Lock != (struct _KEVENT *)&v30[2].Header.WaitListHead.Blink )
    {
LABEL_33:
      __fastfail(3u);
    }
    **(_QWORD **)&v30[3].Header.Lock = v30[2].Header.WaitListHead.Blink;
    Blink->Blink = v26;
    v27 = *((_DWORD *)v13 + 14);
    if ( v27 == 2 && *((struct _KEVENT **)v13 + 11) == v30 )
      v11 = 0;
    if ( v11 )
      goto LABEL_26;
    if ( v27 != 3 )
    {
      Flink = v30[2].Header.WaitListHead.Flink;
      goto LABEL_19;
    }
    WdLogSingleEntry2(3LL, v13, 128LL);
    WdLogGlobalForLineNumber = 4836;
    goto LABEL_43;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v29);
  if ( a5 )
    DXGKEYEDMUTEX::ReleaseReference(a5);
  return Lock;
}
