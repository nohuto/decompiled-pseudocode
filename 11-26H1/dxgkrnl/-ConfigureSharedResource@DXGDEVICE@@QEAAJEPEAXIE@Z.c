/*
 * XREFs of ?ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z @ 0x140312F54
 * Callers:
 *     DxgkConfigureSharedResource @ 0x1403D2610 (DxgkConfigureSharedResource.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402F9980 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1403126F0 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z @ 0x140313250 (-ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z.c)
 */

__int64 __fastcall DXGDEVICE::ConfigureSharedResource(
        DXGDEVICE *this,
        unsigned __int8 a2,
        void *a3,
        unsigned int a4,
        char a5)
{
  __int64 v6; // rbx
  struct DXGPROCESS *Current; // rbp
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // rdx
  struct _EX_RUNDOWN_REF *v15; // rdx
  DXGDEVICE *Count; // r9
  unsigned int v17; // ebx
  __int64 v19; // r8
  struct _EX_RUNDOWN_REF *v20; // [rsp+70h] [rbp+8h] BYREF

  v6 = a4;
  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5765;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 5765LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !(_DWORD)v6 )
  {
    v17 = -1073741811;
    WdLogSingleEntry2(3LL, this, -1073741811LL);
    WdLogGlobalForLineNumber = 5771;
    return v17;
  }
  Current = DXGPROCESS::GetCurrent((__int64)this);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v10 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v10 >= *((_DWORD *)Current + 74) )
    goto LABEL_19;
  v11 = (unsigned int)v10;
  v12 = *(_DWORD *)(*((_QWORD *)Current + 35) + 16 * v10 + 8);
  if ( (((unsigned int)v6 >> 25) & 0x60) != (v12 & 0x60) || (v12 & 0x2000) != 0 || (v12 & 0x1F) == 0 )
    goto LABEL_19;
  v13 = *((_QWORD *)Current + 35);
  v14 = 2 * v11;
  if ( (*(_BYTE *)(v13 + 8 * v14 + 8) & 0x1F) != 4 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_19:
    v15 = 0LL;
    goto LABEL_11;
  }
  v15 = *(struct _EX_RUNDOWN_REF **)(v13 + 8 * v14);
LABEL_11:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v20, v15);
  _InterlockedDecrement((volatile signed __int32 *)Current + 66);
  ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( v20 )
  {
    Count = (DXGDEVICE *)v20[1].Count;
    if ( Count == this )
    {
      if ( (HIDWORD(v20->Ptr) & 1) != 0 )
      {
        v17 = DXGDEVICE::ConfigureSharedResourceHelper(this, a2, a3, (struct DXGSHAREDRESOURCE *)v20[7].Count, a5, 1);
      }
      else
      {
        v17 = -1073741811;
        WdLogSingleEntry3(3LL, this, v20, -1073741811LL);
        WdLogGlobalForLineNumber = 5810;
      }
    }
    else
    {
      v17 = -1073741811;
      WdLogSingleEntry4(3LL, this, v20, Count, -1073741811LL);
      WdLogGlobalForLineNumber = 5797;
    }
  }
  else
  {
    v19 = v6;
    v17 = -1073741811;
    WdLogSingleEntry3(3LL, this, v19, -1073741811LL);
    WdLogGlobalForLineNumber = 5783;
  }
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v20);
  return v17;
}
