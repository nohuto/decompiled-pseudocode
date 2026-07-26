/*
 * XREFs of ?NdisPDStartEC@@YAJPEAUPD_CLIENT_HANDLE__@@PEAPEAUPD_EC_HANDLE__@@@Z @ 0x14013F020
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqqd @ 0x1400233E0 (WPP_RECORDER_SF_qqqd.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ??_GNDIS_PD_EC@@QEAAPEAXI@Z @ 0x14013C554 (--_GNDIS_PD_EC@@QEAAPEAXI@Z.c)
 *     ?ndisPcwGetECInstanceName@@YAJPEAXKPEAU_UNICODE_STRING@@@Z @ 0x140140A70 (-ndisPcwGetECInstanceName@@YAJPEAXKPEAU_UNICODE_STRING@@@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015C3D0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall NdisPDStartEC(struct PD_CLIENT_HANDLE__ *a1, struct PD_EC_HANDLE__ **a2)
{
  char *PoolWithTag; // rax
  int v5; // edx
  char *v6; // rbx
  unsigned int CurrentThreadId; // eax
  int ECInstanceName; // edi
  struct _KTHREAD *CurrentThread; // rcx
  struct PD_CLIENT_HANDLE__ **v10; // rcx
  KLockThisExclusive v12; // [rsp+50h] [rbp-38h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x5Au,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)a1,
      KeGetCurrentThread());
  *a2 = 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0xA0uLL, 0x6541444Eu);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_QWORD *)PoolWithTag + 3) = 0LL;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    *((_DWORD *)PoolWithTag + 34) = 0;
    *((_QWORD *)PoolWithTag + 18) = 0LL;
    *((_QWORD *)PoolWithTag + 19) = 0LL;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    *(_QWORD *)PoolWithTag = 0LL;
    *(_OWORD *)(PoolWithTag + 40) = 0LL;
    memset(PoolWithTag + 56, 0, 0x40uLL);
    *((_QWORD *)v6 + 16) = v6 + 120;
    *((_QWORD *)v6 + 15) = v6 + 120;
    *((_QWORD *)v6 + 2) = a1;
    CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    *((_DWORD *)v6 + 8) = CurrentThreadId;
    ECInstanceName = ndisPcwGetECInstanceName(*((void **)a1 + 10), CurrentThreadId, (struct _UNICODE_STRING *)(v6 + 40));
    if ( ECInstanceName < 0 )
    {
      NDIS_PD_EC::`scalar deleting destructor'(v6);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      *((_QWORD *)v6 + 3) = CurrentThread;
      ObfReferenceObject(CurrentThread);
      KLockThisExclusive::KLockThisExclusive(&v12, qword_14011EE98);
      v10 = (struct PD_CLIENT_HANDLE__ **)*((_QWORD *)a1 + 7);
      if ( *v10 != (struct PD_CLIENT_HANDLE__ *)((char *)a1 + 48) )
        __fastfail(3u);
      *((_QWORD *)v6 + 1) = v10;
      *(_QWORD *)v6 = (char *)a1 + 48;
      *v10 = (struct PD_CLIENT_HANDLE__ *)v6;
      *((_QWORD *)a1 + 7) = v6;
      KLockHolder::~KLockHolder(&v12);
      ECInstanceName = 0;
      *a2 = (struct PD_EC_HANDLE__ *)v6;
    }
  }
  else
  {
    ECInstanceName = -1073741670;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      0x1Du,
      0x5Bu,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)a1,
      (char)KeGetCurrentThread(),
      (char)*a2,
      ECInstanceName);
  return (unsigned int)ECInstanceName;
}
