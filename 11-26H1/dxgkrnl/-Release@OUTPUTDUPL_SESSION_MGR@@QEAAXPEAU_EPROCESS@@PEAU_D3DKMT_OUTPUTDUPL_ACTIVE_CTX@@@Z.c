/*
 * XREFs of ?Release@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1401EEE78
 * Callers:
 *     ?ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z @ 0x14042401C (-ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?TriggerLowBoxActiveContextWNF@OUTPUTDUPL_SESSION_MGR@@AEAAJXZ @ 0x1401EF038 (-TriggerLowBoxActiveContextWNF@OUTPUTDUPL_SESSION_MGR@@AEAAJXZ.c)
 */

void __fastcall OUTPUTDUPL_SESSION_MGR::Release(
        OUTPUTDUPL_SESSION_MGR *this,
        struct _EPROCESS *a2,
        struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *a3)
{
  __int64 v6; // rsi
  unsigned int i; // eax
  __int64 v8; // rbx
  int v9; // ecx
  __int128 v10; // rtt
  unsigned int v11; // r8d
  __int64 j; // rdx
  char *v13; // r10
  _BYTE v14[16]; // [rsp+50h] [rbp-28h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+80h] [rbp+8h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (OUTPUTDUPL_SESSION_MGR *)((char *)this + 8), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  v6 = **((_QWORD **)this + 7);
  for ( i = 0; i < *((_DWORD *)this + 1); ++i )
  {
    v8 = 32LL * i;
    if ( a2 == *(struct _EPROCESS **)(v8 + v6 + 8) )
    {
      v9 = *(_DWORD *)(v8 + v6);
      if ( v9 )
      {
        *(_DWORD *)(v8 + v6) = v9 - 1;
        if ( v9 == 1 )
        {
          PerformanceFrequency.QuadPart = 0LL;
          v10 = (__int64)(*(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency) - *(_QWORD *)(v8 + v6 + 16));
          *(_DWORD *)(v8 + v6 + 24) += v10 / PerformanceFrequency.QuadPart;
        }
        break;
      }
    }
  }
  if ( a3 )
  {
    v11 = *((_DWORD *)this + 32);
    for ( j = 0LL; (unsigned int)j < v11; j = (unsigned int)(j + 1) )
    {
      v13 = (char *)this + 24 * j;
      if ( *((_QWORD *)v13 + 17) == *(_QWORD *)a3
        && *((_DWORD *)this + 6 * j + 38) == *((_DWORD *)a3 + 4)
        && *((_DWORD *)this + 6 * j + 36) == *((_DWORD *)a3 + 2)
        && *((_DWORD *)this + 6 * j + 37) == *((_DWORD *)a3 + 3) )
      {
        memmove(
          v13 + 136,
          (char *)this + 16 * (unsigned int)(j + 1) + 8 * (unsigned int)(j + 1) + 136,
          24LL * (v11 - (unsigned int)j - 1));
        --*((_DWORD *)this + 32);
        OUTPUTDUPL_SESSION_MGR::TriggerLowBoxActiveContextWNF(this);
        goto LABEL_18;
      }
    }
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4359;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"bFound", 4359LL, 0LL, 0LL, 0LL, 0LL);
  }
LABEL_18:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
}
