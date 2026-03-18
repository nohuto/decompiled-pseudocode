/*
 * XREFs of ACPIGetConvertToDevicePresence @ 0x140037624
 * Callers:
 *     ACPIGetWorkerForInteger @ 0x140037430 (ACPIGetWorkerForInteger.c)
 * Callees:
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     ACPIGetProcessorStatus @ 0x1400378D8 (ACPIGetProcessorStatus.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x140041C64 (ACPIBuildSynchronizationRequestInternal.c)
 */

__int64 __fastcall ACPIGetConvertToDevicePresence(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        int a4,
        int *a5,
        _DWORD *a6)
{
  int v6; // edi
  __int16 v7; // r15
  int v9; // ebp
  __int64 v11; // rax
  bool v12; // cf
  __int64 v13; // rdx
  int v15; // eax
  __int64 *v16; // rax
  KIRQL v17; // al
  __int64 v18; // rbx
  int v19; // r9d
  int v20; // [rsp+78h] [rbp+20h] BYREF

  v6 = 15;
  v20 = 15;
  v7 = a4;
  v9 = a2;
  if ( (a4 & 0x4000000) != 0 )
  {
    if ( (_DWORD)a2 != -1073741772 )
    {
      if ( (int)a2 >= 0 )
      {
        if ( *(_WORD *)(a3 + 2) != 1 )
          KeBugCheckEx(0xA5u, 8uLL, BugCheckParameter2, 0LL, *(unsigned __int16 *)(a3 + 2));
        v6 = *(_DWORD *)(a3 + 16);
      }
      else
      {
        v6 = 0;
      }
    }
  }
  else
  {
    v11 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( (v11 & 0x200000000000000LL) != 0 )
      v12 = (v11 & 0x400000000LL) != 0;
    else
      v12 = (v11 & 0x8000000000000LL) != 0;
    if ( !v12 )
    {
      if ( (v11 & 0x1000000000LL) != 0 )
      {
        v15 = ACPIGetProcessorStatus(BugCheckParameter2, a2, &v20);
        v6 = v20;
        if ( v15 < 0 )
          v6 = 0;
      }
      if ( v9 != -1073741772 )
      {
        if ( v9 < 0 )
        {
          v6 = 0;
        }
        else
        {
          if ( *(_WORD *)(a3 + 2) != 1 )
          {
            v16 = AMLIGetNamedChild(*(__int64 **)(BugCheckParameter2 + 760), 1096045407);
            KeBugCheckEx(0xA5u, 8uLL, BugCheckParameter2, (ULONG_PTR)v16, *(unsigned __int16 *)(a3 + 2));
          }
          v6 = *(_DWORD *)(a3 + 16);
        }
      }
    }
    v13 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( (v13 & 1) != 0 && (v7 & 0x1000) == 0 )
      v6 &= ~1u;
    if ( (v13 & 0x40000000) != 0 )
      v6 &= ~4u;
    if ( (v13 & 0x80000000000LL) != 0 )
      v6 &= ~1u;
    if ( (v6 & 8) != 0 )
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 8), 0xFF7FFFFFFFFFFFFFuLL);
    else
      _InterlockedOr64((volatile signed __int64 *)(BugCheckParameter2 + 8), 0x80000000000000uLL);
    if ( (v6 & 4) != 0 )
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 8), 0xFFFFFFFFDFFFFFFFuLL);
    else
      _InterlockedOr64((volatile signed __int64 *)(BugCheckParameter2 + 8), 0x20000000uLL);
    if ( (v6 & 2) != 0 )
      _InterlockedOr64((volatile signed __int64 *)(BugCheckParameter2 + 8), 0x40000000000000uLL);
    else
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 8), 0xFFBFFFFFFFFFFFFFuLL);
    if ( (v6 & 1) != 0 )
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 8), 0xFFFFFFFFFFFFFFFDuLL);
    else
      _InterlockedOr64((volatile signed __int64 *)(BugCheckParameter2 + 8), 2uLL);
    if ( (v13 & 2) == 0 && (v6 & 1) == 0 )
    {
      v17 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      v18 = *(_QWORD *)(BugCheckParameter2 + 792);
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v17);
      if ( v18 )
        ACPIBuildSynchronizationRequestInternal(v18, (unsigned int)ACPIBuildIssueNotifyInvalidateRelations, v18, v19, 1);
    }
  }
  *a5 = v6;
  if ( a6 )
    *a6 = 4;
  return 0LL;
}
