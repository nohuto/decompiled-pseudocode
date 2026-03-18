/*
 * XREFs of ?UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z @ 0x1402F4584
 * Callers:
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1402F1C34 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall ADAPTER_DISPLAY::UpdateIndependentFlipState(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        unsigned int a3,
        char a4)
{
  __int64 v6; // rsi
  DXGFASTMUTEX *v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdx
  DXGFASTMUTEX *v12; // [rsp+50h] [rbp-28h] BYREF
  char v13; // [rsp+58h] [rbp-20h]

  v6 = a3;
  v7 = (ADAPTER_DISPLAY *)((char *)this + 624);
  v8 = a2;
  v12 = v7;
  v13 = 0;
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
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v12);
  v9 = 4024 * v8 + *((_QWORD *)this + 16);
  if ( !DXGFASTMUTEX::IsOwner((DXGFASTMUTEX *)(*(_QWORD *)(v9 + 8) + 624LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9882;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9882LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (unsigned int)v6 >= *(_DWORD *)(v9 + 3784) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9883;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"PlaneIndex < m_MaxPlanesUsed", 9883LL, 0LL, 0LL, 0LL, 0LL);
  }
  v10 = 168 * v6;
  if ( *(_DWORD *)(168 * v6 + v9 + 1168) == -1 )
  {
    if ( *(_DWORD *)(v10 + v9 + 1172) != -1 )
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
    if ( *(_DWORD *)(v10 + v9 + 1168) == -1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9884;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"!IsDisplayPlaneConfigQueueEmpty(&m_PlaneConfigurationQueue[PlaneIndex])",
        9884LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  if ( (unsigned int)v6 < *(_DWORD *)(v9 + 3784) )
  {
    if ( *(_DWORD *)(v10 + v9 + 1168) != -1 )
      goto LABEL_12;
    if ( *(_DWORD *)(v10 + v9 + 1172) != -1 )
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
    if ( *(_DWORD *)(v10 + v9 + 1168) != -1 )
    {
LABEL_12:
      _mm_lfence();
      v11 = v9 + v10 + 80LL * *(int *)(168 * v6 + v9 + 1168) + 1176;
      if ( v11 )
        *(_DWORD *)(v11 + 8) ^= ((unsigned __int8)*(_DWORD *)(v11 + 8) ^ (unsigned __int8)(8 * a4)) & 8;
    }
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v12);
}
