/*
 * XREFs of ?VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBIPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEB_K_KIPEAVDXGHWQUEUE@@@Z @ 0x140316D1C
 * Callers:
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1403074C0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 *     ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1403158CC (-SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018B2BC (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x140193010 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 *     ?VmBusSendSyncOrAsyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@@Z @ 0x140232200 (-VmBusSendSyncOrAsyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromGpu(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct _KTHREAD **a2,
        struct DXGCONTEXT *a3,
        const unsigned int *a4,
        struct DXGSYNCOBJECT **a5,
        struct DXGDEVICESYNCOBJECT **a6,
        void *Src,
        unsigned __int64 a8,
        unsigned int a9,
        struct DXGHWQUEUE *a10)
{
  struct DXGCONTEXT *v10; // rbp
  DXGSYNCOBJECT **v11; // r14
  __int64 v13; // rax
  const wchar_t *v14; // r9
  __int64 v15; // rdi
  unsigned int v16; // r8d
  __int64 v17; // rbx
  void *v19; // rdi
  __int64 v20; // rdx
  signed __int64 v21; // r8
  char *v22; // r13
  int v23; // r15d
  int HostHandle; // eax
  int v25; // eax
  __int64 v26; // rdi
  __int64 v27; // [rsp+58h] [rbp-1A0h]
  _BYTE v31[24]; // [rsp+78h] [rbp-180h] BYREF
  __int128 v32; // [rsp+90h] [rbp-168h] BYREF
  int v33; // [rsp+A0h] [rbp-158h]
  struct DXGDEVICESYNCOBJECT **v34; // [rsp+228h] [rbp+30h]

  v10 = a10;
  v11 = a5;
  if ( !a10 )
  {
    if ( a3 )
      goto LABEL_8;
LABEL_7:
    WdLogSingleEntry0(2LL);
    v13 = 9804LL;
    v14 = L"Only and atleast one of HwQueue or Context must be specified";
    goto LABEL_31;
  }
  if ( a3 )
    goto LABEL_7;
  if ( !a4 || !Src )
  {
    WdLogSingleEntry0(2LL);
    v13 = 9812LL;
    v14 = L"Submit wait to HwQueue requires SyncObjectHandles and MonitoredFenceValueArray";
LABEL_31:
    WdLogGlobalForLineNumber = v13;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v14, v13, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
LABEL_8:
  if ( a9 - 1 > 0x1FFFF )
  {
    WdLogSingleEntry0(2LL);
    v13 = 9819LL;
    v14 = L"ObjectCount is invalid";
    goto LABEL_31;
  }
  v15 = 8 * a9 + 40;
  v16 = 4 * a9 + v15;
  if ( v16 > 0x20000 )
  {
    WdLogSingleEntry0(2LL);
    v13 = 9827LL;
    v14 = L"Command size is too big";
    goto LABEL_31;
  }
  v32 = 0LL;
  v33 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v32, this, v16, 0LL, 0LL, 0LL);
  v17 = v32;
  if ( (_QWORD)v32 )
  {
    *(_BYTE *)(v32 + 12) = 0;
    v19 = (void *)(v17 + v15);
    *(_DWORD *)(v17 + 12) &= 0x1FFu;
    *(_QWORD *)v17 = 0LL;
    *(_DWORD *)(v17 + 8) = 0;
    *(_QWORD *)(v17 + 16) = 25LL;
    if ( a10 )
    {
      memmove(v19, a4, 4 * a9);
      memmove((void *)(v17 + 40), Src, 8 * a9);
    }
    else
    {
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v31, a2);
      if ( a9 )
      {
        v20 = v17 - (_QWORD)a5;
        v21 = (char *)a6 - (char *)a5;
        v34 = (struct DXGDEVICESYNCOBJECT **)((char *)a6 - (char *)a5);
        v22 = (char *)((char *)a4 - (_BYTE *)v19);
        v27 = a9;
        do
        {
          v23 = *((_DWORD *)*v11 + 105);
          if ( v23 == 5 || (unsigned int)(v23 - 6) <= 1 )
          {
            *(_DWORD *)v19 = (*(_DWORD **)((char *)v11 + v21))[11];
            *(DXGSYNCOBJECT **)((char *)v11 + v20 + 40) = *(DXGSYNCOBJECT **)((char *)v11 + (_BYTE *)Src - (_BYTE *)a5);
          }
          else
          {
            HostHandle = DXGSYNCOBJECT::GetHostHandle(*v11, *(_DWORD *)&v22[(_QWORD)v19]);
            v20 = v17 - (_QWORD)a5;
            v21 = (signed __int64)v34;
            *(_DWORD *)v19 = HostHandle;
            if ( v23 == 3 )
            {
              *(_QWORD *)(v17 + 40) = a8;
              *(_BYTE *)(v17 + 32) = 1;
            }
          }
          v19 = (char *)v19 + 4;
          ++v11;
          --v27;
        }
        while ( v27 );
        v10 = a10;
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v31);
    }
    if ( !v10 )
      v10 = a3;
    *(_DWORD *)(v17 + 24) = *((_DWORD *)v10 + 7);
    *(_DWORD *)(v17 + 8) = DXGPROCESS::GetHostProcess((DXGPROCESS *)a2);
    *(_DWORD *)(v17 + 28) = a9;
    v25 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncOrAsyncMessage(this, (struct DXGVMBUSMESSAGE *)&v32);
    v26 = v25;
    if ( v25 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 9881;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendSyncMessageStatusReturn failed: 0x%I64x",
        v26,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v32);
    return (unsigned int)v26;
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 9835;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for command",
      9835LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v32);
    return 3221225495LL;
  }
}
