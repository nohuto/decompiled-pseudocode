/*
 * XREFs of ?NdisPDAllocateBufferSet@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KGPEAKKPEAPEAUPD_BUFFER_SET_HANDLE__@@@Z @ 0x14013C890
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqqd @ 0x1400233E0 (WPP_RECORDER_SF_qqqd.c)
 *     WPP_RECORDER_SF_qdddD @ 0x1400A89F4 (WPP_RECORDER_SF_qdddD.c)
 *     WPP_RECORDER_SF_qdqd @ 0x1400A8C4C (WPP_RECORDER_SF_qdqd_ea_1400A8C4C.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     ??_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z @ 0x14013C5D0 (--_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z.c)
 *     ?ndisPDInitializePDBuffers@@YAXPEAPEAU_PD_BUFFER@@KT_LARGE_INTEGER@@PEAEKKG@Z @ 0x1401408E0 (-ndisPDInitializePDBuffers@@YAXPEAPEAU_PD_BUFFER@@KT_LARGE_INTEGER@@PEAEKKG@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015C3D0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015C650 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall NdisPDAllocateBufferSet(
        struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *a1,
        unsigned int a2,
        unsigned __int16 a3,
        unsigned int *a4,
        unsigned int a5,
        struct PD_BUFFER_SET_HANDLE__ **a6)
{
  unsigned int v6; // r12d
  struct PD_BUFFER_SET_HANDLE__ *v10; // rsi
  __int64 v11; // r8
  struct PD_BUFFER_SET_HANDLE__ **v12; // rdx
  unsigned int v13; // r15d
  __int64 v14; // r13
  struct PD_BUFFER_SET_HANDLE__ **v15; // r14
  __int64 v16; // rcx
  int v17; // edi
  struct PD_BUFFER_SET_HANDLE__ **PoolWithTag; // rax
  struct PD_BUFFER_SET_HANDLE__ **v20; // rbx
  __int64 Pool2; // rax
  struct PD_BUFFER_SET_HANDLE__ **v22; // r10
  __int64 v23; // r8
  unsigned __int8 *v24; // r9
  union _LARGE_INTEGER v25; // r8
  struct _PD_BUFFER **v26; // rcx
  int v27; // edx
  NDIS_PD_MEM_BLOCK *i; // rcx
  struct KPushLockBase *v29; // rdx
  struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ **v30; // rcx
  unsigned int v31; // [rsp+20h] [rbp-98h]
  unsigned int v32; // [rsp+28h] [rbp-90h]
  unsigned __int16 v33; // [rsp+30h] [rbp-88h]
  __int64 v34; // [rsp+40h] [rbp-78h]
  struct PD_BUFFER_SET_HANDLE__ **v35; // [rsp+50h] [rbp-68h]
  KLockThisExclusive v36; // [rsp+58h] [rbp-60h] BYREF
  struct PD_BUFFER_SET_HANDLE__ *v37; // [rsp+C0h] [rbp+8h] BYREF
  unsigned int v38; // [rsp+C8h] [rbp+10h]
  unsigned __int16 v39; // [rsp+D0h] [rbp+18h]
  unsigned int *v40; // [rsp+D8h] [rbp+20h]

  v40 = a4;
  v6 = *a4;
  v10 = 0LL;
  v38 = (a2 + 63) & 0xFFFFFFC0;
  v37 = 0LL;
  v39 = (a3 + 63) & 0xFFC0;
  v11 = v39 + v38 + 128;
  v12 = &v37;
  v13 = 0;
  v14 = 0x200000 / (unsigned int)v11;
  v35 = &v37;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdddD(*((_QWORD *)WPP_GLOBAL_Control + 8), (__int64)&v37, v11, (__int64)a4, v31);
  v15 = a6;
  *a6 = 0LL;
  v16 = *((_QWORD *)a1 + 3);
  if ( (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)v16 == (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)((char *)a1 + 24) )
  {
    v17 = -1073741808;
  }
  else
  {
    a6 = *(struct PD_BUFFER_SET_HANDLE__ ***)(*(_QWORD *)(*(_QWORD *)(v16 + 32) + 5488LL) + 72LL);
    if ( a2 > 0x7FFFFFFF || !v6 || a3 > 0xFFC0u )
    {
      v17 = -1073741811;
      goto LABEL_25;
    }
    while ( 1 )
    {
      if ( v13 >= v6 )
      {
        v29 = qword_14011EE98;
        v17 = 0;
        *v40 = v13;
        *v15 = v10;
        KLockThisExclusive::KLockThisExclusive(&v36, v29);
        v30 = (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ **)*((_QWORD *)a1 + 6);
        if ( *v30 != (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)((char *)a1 + 40) )
          __fastfail(3u);
        *((_QWORD *)v10 + 1) = v30;
        *(_QWORD *)v10 = (char *)a1 + 40;
        *v30 = v10;
        *((_QWORD *)a1 + 6) = v10;
        KLockHolder::~KLockHolder(&v36);
        goto LABEL_5;
      }
      PoolWithTag = (struct PD_BUFFER_SET_HANDLE__ **)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6D41444Eu);
      v20 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_20;
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
      Pool2 = ExAllocatePool2(64LL, 8 * v14, 1832993870LL);
      v20[7] = (struct PD_BUFFER_SET_HANDLE__ *)Pool2;
      if ( !Pool2 )
      {
        NDIS_PD_MEM_BLOCK::`scalar deleting destructor'((NDIS_PD_MEM_BLOCK *)v20);
LABEL_20:
        v17 = -1073741670;
        goto LABEL_25;
      }
      v22 = a6;
      v23 = a5;
      *((_DWORD *)v20 + 12) = v14;
      v31 = (_DWORD)v20 + 32;
      v17 = ((__int64 (__fastcall *)(struct PD_BUFFER_SET_HANDLE__ *, _QWORD, __int64, __int64))v22[11])(
              v22[4],
              0LL,
              v23,
              0x200000LL);
      if ( v17 < 0 )
        break;
      v24 = (unsigned __int8 *)v20[5];
      v25.QuadPart = (LONGLONG)v20[4];
      v26 = (struct _PD_BUFFER **)v20[7];
      v20[2] = (struct PD_BUFFER_SET_HANDLE__ *)a6;
      *((_DWORD *)v20 + 18) = a5;
      v33 = v39;
      v32 = v38;
      *((_DWORD *)v20 + 6) = 0x200000;
      ndisPDInitializePDBuffers(v26, v14, v25, v24, v31, v32, v33);
      v13 += v14;
      *v35 = (struct PD_BUFFER_SET_HANDLE__ *)v20;
      v35 = v20 + 8;
      v10 = v37;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v34) = v14;
        WPP_RECORDER_SF_qqqd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v27,
          0x1Du,
          0x50u,
          (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
          (char)a1,
          (char)v37,
          (char)v20,
          v34);
      }
    }
    for ( i = (NDIS_PD_MEM_BLOCK *)v20; ; *((_QWORD *)i + 8) = 0LL )
    {
      NDIS_PD_MEM_BLOCK::`scalar deleting destructor'(i);
LABEL_25:
      if ( !v10 )
        break;
      i = v10;
      v10 = (struct PD_BUFFER_SET_HANDLE__ *)*((_QWORD *)v10 + 8);
    }
  }
LABEL_5:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdqd(*((_QWORD *)WPP_GLOBAL_Control + 8), (__int64)v12, v11, (__int64)a4, v31);
  return (unsigned int)v17;
}
