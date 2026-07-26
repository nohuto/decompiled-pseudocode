/*
 * XREFs of ?NdisPDAllocateMemory@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KPEAKPEAT_LARGE_INTEGER@@PEAPEAXPEAPEAUPD_MEMORY_HANDLE__@@@Z @ 0x14013CC00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qDL @ 0x140022DF0 (WPP_RECORDER_SF_qDL.c)
 *     WPP_RECORDER_SF_qdqiqd @ 0x1400A8D58 (WPP_RECORDER_SF_qdqiqd.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     ??_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z @ 0x14013C5D0 (--_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015C3D0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall NdisPDAllocateMemory(
        struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *a1,
        unsigned int a2,
        unsigned int *a3,
        union _LARGE_INTEGER *a4,
        void **a5,
        struct PD_MEMORY_HANDLE__ **a6)
{
  _QWORD *v9; // rbx
  __int64 v12; // rcx
  int v13; // edi
  __int64 v14; // rdi
  _QWORD *PoolWithTag; // rax
  struct KPushLockBase *v16; // rdx
  struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ **v17; // rcx
  int v19; // [rsp+20h] [rbp-88h]
  KLockThisExclusive v20; // [rsp+60h] [rbp-48h] BYREF
  struct PD_MEMORY_HANDLE__ **v21; // [rsp+D8h] [rbp+30h]

  v9 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0x1Du,
      0x56u,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)a1,
      *a3,
      a2);
  *a6 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  if ( a4 )
    a4->QuadPart = 0LL;
  v12 = *((_QWORD *)a1 + 3);
  if ( (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)v12 == (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)((char *)a1 + 24) )
  {
    v13 = -1073741808;
  }
  else
  {
    v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 32) + 5488LL) + 72LL);
    v21 = (struct PD_MEMORY_HANDLE__ **)v14;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6D41444Eu);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[2] = 0LL;
      *((_DWORD *)PoolWithTag + 6) = 0;
      PoolWithTag[5] = 0LL;
      PoolWithTag[6] = 0LL;
      PoolWithTag[7] = 0LL;
      PoolWithTag[8] = 0LL;
      *((_DWORD *)PoolWithTag + 18) = 0x80000000;
      PoolWithTag[1] = 0LL;
      *PoolWithTag = 0LL;
      PoolWithTag[4] = 0LL;
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD *, _QWORD *))(v14 + 88))(
              *(_QWORD *)(v14 + 32),
              0LL,
              a2,
              *a3,
              PoolWithTag + 4,
              PoolWithTag + 5);
      if ( v13 >= 0 )
      {
        v16 = qword_14011EE98;
        v9[2] = v21;
        *((_DWORD *)v9 + 6) = *a3;
        *((_DWORD *)v9 + 18) = a2;
        KLockThisExclusive::KLockThisExclusive(&v20, v16);
        v17 = (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ **)*((_QWORD *)a1 + 6);
        if ( *v17 != (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)((char *)a1 + 40) )
          __fastfail(3u);
        v9[1] = v17;
        *v9 = (char *)a1 + 40;
        *v17 = (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)v9;
        *((_QWORD *)a1 + 6) = v9;
        KLockHolder::~KLockHolder(&v20);
        if ( a4 )
          *a4 = (union _LARGE_INTEGER)v9[4];
        if ( a5 )
          *a5 = (void *)v9[5];
        *a6 = (struct PD_MEMORY_HANDLE__ *)v9;
        v13 = 0;
      }
    }
    else
    {
      v9 = 0LL;
      v13 = -1073741670;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdqiqd(*((_QWORD *)WPP_GLOBAL_Control + 8), (__int64)*a6, 0LL, (__int64)a4, v19);
  if ( v9 && v13 < 0 )
    NDIS_PD_MEM_BLOCK::`scalar deleting destructor'((NDIS_PD_MEM_BLOCK *)v9);
  return (unsigned int)v13;
}
