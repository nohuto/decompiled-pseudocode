/*
 * XREFs of ?GetAllocationsForAllPlanes@ADAPTER_DISPLAY@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x14028BE38
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1402EE2A0 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

void __fastcall ADAPTER_DISPLAY::GetAllocationsForAllPlanes(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        struct _EX_RUNDOWN_REF **a3,
        unsigned int a4)
{
  struct _EX_RUNDOWN_REF *v4; // rsi
  __int64 v5; // rdi
  DXGFASTMUTEX *v7; // rcx
  __int64 v10; // r12
  __int64 v11; // r15
  unsigned int v12; // ebp
  int *v13; // rdi
  __int64 v14; // rax
  int *v15; // rbx
  struct _EX_RUNDOWN_REF *v16; // rbx
  DXGFASTMUTEX *v17; // rbx
  DXGFASTMUTEX *v19; // [rsp+50h] [rbp-48h] BYREF
  char v20; // [rsp+58h] [rbp-40h]
  __int64 v21; // [rsp+A0h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = a2;
  v20 = 0;
  v7 = (ADAPTER_DISPLAY *)((char *)this + 624);
  v19 = v7;
  if ( !v7 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 628LL, 0LL, 0LL, 0LL, 0LL);
    v7 = 0LL;
  }
  if ( DXGFASTMUTEX::IsOwner(v7) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 635;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 635LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v19);
  v10 = *((_QWORD *)this + 16);
  v11 = 4024 * v5;
  if ( !DXGFASTMUTEX::IsOwner((DXGFASTMUTEX *)(*(_QWORD *)(4024 * v5 + v10 + 8) + 624LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9794;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9794LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v12 = 0;
  if ( *(_DWORD *)(v11 + v10 + 3784) < a4 )
    a4 = *(_DWORD *)(v11 + v10 + 3784);
  if ( a4 )
  {
    v21 = 0LL;
    v13 = (int *)(v11 + v10 + 1168);
    do
    {
      if ( v12 < *(_DWORD *)(v11 + v10 + 3784) )
      {
        if ( *v13 == -1 && v13[1] != -1 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 9441;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(pQueue->HeadIndex != CONFIG_INDEX_INVALID) || (pQueue->TailIndex == CONFIG_INDEX_INVALID)",
            9441LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v14 = *v13;
        if ( (_DWORD)v14 != -1 )
        {
          v15 = &v13[20 * v14 + 2];
          if ( v15 )
          {
            if ( (v15[2] & 1) != 0 )
            {
              v16 = *(struct _EX_RUNDOWN_REF **)v15;
              v4 = v16;
              if ( v16 )
              {
                if ( !ExAcquireRundownProtection(v16 + 11) )
                {
                  WdLogSingleEntry5(0LL, 275LL, 38LL, v16, 0LL, 0LL);
                  WdLogGlobalForLineNumber = 14148;
                }
              }
            }
          }
        }
      }
      if ( *a3 )
        ExReleaseRundownProtection(*a3 + 11);
      *a3 = v4;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v21);
      ++v12;
      v13 += 42;
      ++a3;
      v4 = 0LL;
    }
    while ( v12 < a4 );
  }
  if ( v20 )
  {
    v17 = v19;
    v20 = 0;
    if ( *((struct _KTHREAD **)v19 + 3) != KeGetCurrentThread() )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v19, 0LL, 0LL);
      WdLogGlobalForLineNumber = 553;
    }
    if ( *((int *)v17 + 8) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 556;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 556LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (*((_DWORD *)v17 + 8))-- == 1 )
    {
      *((_QWORD *)v17 + 3) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v17 + 8, 0LL);
    }
    KeLeaveCriticalRegion();
  }
}
