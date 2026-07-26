/*
 * XREFs of ?NdisPDBMAllocateCommonBuffer@@YAJPEAUNDIS_PD_BM_DOMAIN_HANDLE__@@KKKPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1401413B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dq @ 0x1400687E0 (WPP_RECORDER_SF_dq_ea_1400687E0.c)
 *     WPP_RECORDER_SF_dqd @ 0x1400A9558 (WPP_RECORDER_SF_dqd.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015C3D0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall NdisPDBMAllocateCommonBuffer(
        struct KPushLockBase *a1,
        int a2,
        int a3,
        unsigned int a4,
        union _LARGE_INTEGER *a5,
        void **a6)
{
  size_t v8; // rsi
  int v10; // ebx
  struct NDIS_PD_BM_DOMAIN_HANDLE__ *Value; // rbx
  void *ContiguousNodeMemory; // rax
  void *v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v20; // [rsp+20h] [rbp-78h]
  KLockThisExclusive v21; // [rsp+50h] [rbp-48h] BYREF

  v8 = a4;
  a5->QuadPart = 0LL;
  *a6 = 0LL;
  KLockThisExclusive::KLockThisExclusive(&v21, a1);
  if ( a2 )
  {
    v10 = -1073741811;
  }
  else
  {
    Value = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)a1[1].m_Lock.Value;
    if ( Value == (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)&a1[1] )
    {
      v10 = -1073741436;
    }
    else if ( *((_BYTE *)&a1[3].m_Lock.0 + 1) )
    {
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(v8, 0LL, -1LL, 0x200000LL, 4, a3);
      v13 = ContiguousNodeMemory;
      if ( ContiguousNodeMemory )
      {
        memset(ContiguousNodeMemory, 0, v8);
        *a6 = v13;
        ++HIDWORD(a1[3].m_Lock.Ptr);
        v10 = 0;
      }
      else
      {
        v10 = -1073741670;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0x1Du,
            0xEu,
            (struct _GUID *)&WPP_cfa9654755ff3e59552d1435f08b5860_Traceguids,
            v8,
            a1);
      }
    }
    else
    {
      v14 = *((_QWORD *)Value + 3);
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v14 + 8) + 264LL))(v14);
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, _QWORD, int, union _LARGE_INTEGER *, void **))(*(_QWORD *)(v14 + 8) + 232LL))(
              v14,
              v15,
              0LL,
              (unsigned int)v8,
              1,
              0LL,
              a3,
              a5,
              a6);
      if ( v10 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dqd(*((_QWORD *)WPP_GLOBAL_Control + 8), v16, v17, v18, v20);
      }
      else
      {
        memset(*a6, 0, v8);
        ++HIDWORD(a1[3].m_Lock.Ptr);
      }
    }
  }
  KLockHolder::~KLockHolder(&v21);
  return (unsigned int)v10;
}
