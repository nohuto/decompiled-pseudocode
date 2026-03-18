/*
 * XREFs of ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z @ 0x1402B2FA4
 * Callers:
 *     DxgkReleaseKeyedMutex @ 0x1401FFE30 (DxgkReleaseKeyedMutex.c)
 *     DxgkReleaseKeyedMutex2 @ 0x140200110 (DxgkReleaseKeyedMutex2.c)
 *     ?VmBusReleaseKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14022B260 (-VmBusReleaseKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1402B2CF4 (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x140045AE8 (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?VmBusSendReleaseKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I_K2@Z @ 0x14018B0B8 (-VmBusSendReleaseKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::ReleaseSync(
        void **this,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        void *Src,
        size_t Size,
        bool a7)
{
  unsigned int v11; // ebx
  int v12; // eax
  unsigned int v13; // esi
  char v15; // si
  DXGKEYEDMUTEX *i; // rax
  struct _KEVENT *v17; // rcx
  DXG_GUEST_GLOBAL_VMBUS *v18; // rbx
  struct DXGPROCESS *Current; // rax
  _BYTE v20[16]; // [rsp+50h] [rbp-18h] BYREF

  DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK((DXGKEYEDMUTEXLOCK *)v20, (struct DXGKEYEDMUTEX *)this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  v11 = 0;
  if ( !*((_BYTE *)this + 176) )
  {
    v12 = *((_DWORD *)this + 14);
    if ( v12 == 3 )
    {
      v13 = 128;
      WdLogSingleEntry2(3LL, this, 128LL);
      WdLogGlobalForLineNumber = 4933;
      goto LABEL_8;
    }
    if ( v12 || !a2 || *((_DWORD *)this + 15) != a2 || this[8] != DXGPROCESS::GetCurrent() )
    {
      v13 = -1073741811;
      WdLogSingleEntry2(2LL, this, -1073741811LL);
      WdLogGlobalForLineNumber = 4940;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Keyed mutex 0x%I64x is not owned by this device, returning 0x%I64x",
        (__int64)this,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
LABEL_8:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v20);
      return v13;
    }
  }
  if ( Src )
  {
    if ( !(_DWORD)Size )
    {
      v13 = -1073741811;
      WdLogSingleEntry2(3LL, this, -1073741811LL);
      WdLogGlobalForLineNumber = 4958;
      goto LABEL_8;
    }
    if ( (_DWORD)Size != *((_DWORD *)this + 42) )
    {
      v13 = -1073741811;
      WdLogSingleEntry4(3LL, this, (unsigned int)Size, *((unsigned int *)this + 42), -1073741811LL);
      WdLogGlobalForLineNumber = 4967;
      goto LABEL_8;
    }
    if ( a7 )
      RtlCopyFromUser(this[20], Src, (unsigned int)Size);
    else
      memmove(this[20], Src, (unsigned int)Size);
  }
  else if ( (_DWORD)Size )
  {
    v13 = -1073741811;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 4950;
    goto LABEL_8;
  }
  *((_DWORD *)this + 15) = 0;
  this[8] = 0LL;
  if ( *((_BYTE *)this + 176) )
  {
    v18 = (DXG_GUEST_GLOBAL_VMBUS *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 212);
    Current = DXGPROCESS::GetCurrent();
    v11 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendReleaseKeyedMutexSync(v18, Current, (const void **)this, a2, a3, a4);
  }
  else
  {
    v15 = 0;
    for ( i = (DXGKEYEDMUTEX *)this[12]; i != (DXGKEYEDMUTEX *)(this + 12); i = *(DXGKEYEDMUTEX **)i )
    {
      v17 = (struct _KEVENT *)((char *)i - 64);
      if ( *((_QWORD *)i - 8) == a3 )
      {
        v15 = 1;
        *((_DWORD *)this + 14) = 2;
        this[11] = v17;
        v17[2].Header.LockNV = 0;
        v17[2].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)a4;
        KeSetEvent(v17 + 1, 0, 0);
        break;
      }
    }
    if ( !v15 )
    {
      *((_DWORD *)this + 14) = 1;
      this[9] = (void *)a3;
      this[10] = (void *)a4;
    }
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v20);
  return v11;
}
