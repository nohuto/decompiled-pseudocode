/*
 * XREFs of ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1402B5714
 * Callers:
 *     DxgkSubmitPresentToHwQueue @ 0x1402B6190 (DxgkSubmitPresentToHwQueue.c)
 *     DxgkPresent @ 0x140323BB0 (DxgkPresent.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14002E580 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x140037E2C (-Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402B4780 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 */

__int64 __fastcall PreIndirectPresentReadAllocationInfo(
        struct DXGPROCESS *a1,
        struct _EX_RUNDOWN_REF *a2,
        unsigned int a3,
        struct INDIRECT_RESOURCE_INFO *a4)
{
  char v4; // si
  __int64 v5; // r12
  struct _EX_RUNDOWN_REF *v9; // rdi
  unsigned int v10; // eax
  int v11; // r8d
  __int64 v12; // rcx
  struct _EX_RUNDOWN_REF *v13; // rdx
  struct _EX_RUNDOWN_REF *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // r14
  ULONG_PTR Count; // rax
  ADAPTER_RENDER *v20; // rcx
  unsigned int v21; // ebx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  const wchar_t *v25; // r9
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  struct _EX_RUNDOWN_REF *v28; // [rsp+50h] [rbp-B0h] BYREF
  struct _EX_RUNDOWN_REF *v29; // [rsp+58h] [rbp-A8h] BYREF
  char v30; // [rsp+60h] [rbp-A0h]
  struct _DXGKARG_DESCRIBEALLOCATION v31; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v32[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v33[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  char v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  _BYTE v38[8]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]
  char v41; // [rsp+100h] [rbp+0h]
  __int64 v42; // [rsp+108h] [rbp+8h]
  struct _EX_RUNDOWN_REF *v43; // [rsp+128h] [rbp+28h]
  char v44; // [rsp+130h] [rbp+30h]

  v4 = 0;
  v5 = a3;
  v29 = a2;
  v30 = 0;
  v9 = a2;
  if ( a2 )
  {
    DXGDEVICEACCESSLOCKSHARED::Acquire((DXGDEVICEACCESSLOCKSHARED *)&v29);
    v4 = v30;
    v9 = v29;
  }
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a1 + 248));
  v10 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( v10 < *((_DWORD *)a1 + 74)
    && (v11 = *(_DWORD *)(*((_QWORD *)a1 + 35) + 16LL * v10 + 8),
        (((unsigned int)v5 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)a1 + 35) + 16LL * v10 + 8) & 0x60))
    && (v11 & 0x2000) == 0
    && (v11 & 0x1F) != 0 )
  {
    v12 = *((_QWORD *)a1 + 35);
    if ( (*(_BYTE *)(v12 + 16LL * v10 + 8) & 0x1F) == 5 )
    {
      v13 = *(struct _EX_RUNDOWN_REF **)(v12 + 16LL * v10);
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      v13 = 0LL;
    }
  }
  else
  {
    v13 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v29, v13);
  _InterlockedDecrement((volatile signed __int32 *)a1 + 66);
  ExReleasePushLockSharedEx((char *)a1 + 248, 0LL);
  KeLeaveCriticalRegion();
  v14 = v29;
  v28 = v29;
  v29 = 0LL;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v29);
  v15 = *(_QWORD *)(a2[2].Count + 16);
  v35 = v15;
  v36 = 0;
  v37 = 0LL;
  if ( v15 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v15 + 24));
    v34 = -1LL;
  }
  v16 = *(_QWORD *)(a2[2].Count + 16);
  v40 = v16;
  v41 = 0;
  v42 = 0LL;
  if ( v16 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v16 + 24));
    v39 = -1LL;
  }
  v43 = a2;
  v44 = 0;
  v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v32, 0LL);
  v18 = v17;
  if ( v17 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 736;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x fails Present, failed to take adapter core access shared lock",
      v18,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    if ( v14 )
    {
      Count = v14[1].Count;
      if ( Count )
      {
        v20 = (ADAPTER_RENDER *)a2[2].Count;
        if ( *(ADAPTER_RENDER **)(Count + 16) == v20 )
        {
          memset(&v31, 0, sizeof(v31));
          v31.hAllocation = *(HANDLE *)(v14[6].Count + 16);
          v21 = ADAPTER_RENDER::DdiDescribeAllocation(v20, &v31);
          *(_DWORD *)a4 = v31.Width;
          *((_DWORD *)a4 + 1) = v31.Height;
          *((_DWORD *)a4 + 2) = v31.Format;
          COREACCESS::~COREACCESS((COREACCESS *)v38, v22);
          COREACCESS::~COREACCESS((COREACCESS *)v33, v23);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v28);
          if ( v9 )
          {
            if ( v4 )
            {
              ExReleaseResourceLite((PERESOURCE)v9[17].Count);
              KeLeaveCriticalRegion();
            }
          }
          return v21;
        }
      }
      LODWORD(v18) = -1073741811;
      WdLogSingleEntry2(2LL, -1073741811LL, v5);
      v25 = L"0x%I64x fails Present hSource is for the wrong adapter";
      WdLogGlobalForLineNumber = 749;
    }
    else
    {
      LODWORD(v18) = -1073741811;
      WdLogSingleEntry2(2LL, -1073741811LL, v5);
      v25 = L"0x%I64x fails Present invalid hSource 0x%I64x";
      WdLogGlobalForLineNumber = 742;
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v25, -1073741811LL, v5, 0LL, 0LL, 0LL);
  }
  COREACCESS::~COREACCESS((COREACCESS *)v38, v26);
  COREACCESS::~COREACCESS((COREACCESS *)v33, v27);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v28);
  if ( v9 && v4 )
  {
    ExReleaseResourceLite((PERESOURCE)v9[17].Count);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v18;
}
