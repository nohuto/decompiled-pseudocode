/*
 * XREFs of ?QueryVidPnExclusiveOwnershipCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x140395130
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall QueryVidPnExclusiveOwnershipCallBack(struct DXGADAPTER *this, char *a2)
{
  volatile signed __int32 *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdi
  unsigned int v9; // ebp
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // r12
  int v13; // edi
  __int64 v15; // rcx
  __int128 v16; // xmm0
  int v17; // edx
  __int64 v18; // rcx
  int v19; // edx
  _QWORD *v20; // rax
  __int128 v21; // [rsp+50h] [rbp-48h] BYREF
  char v22; // [rsp+60h] [rbp-38h]

  *((_QWORD *)&v21 + 1) = this;
  _InterlockedIncrement64((volatile signed __int64 *)this + 3);
  *(_QWORD *)&v21 = -1LL;
  v4 = (volatile signed __int32 *)((char *)this + 136);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4, 0LL);
  _InterlockedIncrement(v4 + 4);
  v7 = *((_DWORD *)this + 50);
  v22 = 1;
  if ( v7 == 1 )
  {
    v8 = *((_QWORD *)this + 395);
    v9 = 0;
    if ( *(_DWORD *)(v8 + 96) )
    {
      while ( 1 )
      {
        v10 = *((_QWORD *)this + 395);
        v11 = v10;
        v12 = 4024LL * v9;
        v13 = *(_DWORD *)(*(_QWORD *)(v8 + 128) + v12 + 736);
        if ( v9 >= *(_DWORD *)(v10 + 96) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 6509;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"VidPnSourceId < m_NumVidPnSources",
            6509LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v11 = *((_QWORD *)this + 395);
        }
        if ( *(_QWORD *)(*(_QWORD *)(v10 + 128) + v12 + 744) )
          break;
        if ( v13 == 2 || v13 == 3 || v13 == 4 )
          goto LABEL_13;
LABEL_9:
        v8 = *((_QWORD *)this + 395);
        if ( ++v9 >= *(_DWORD *)(v8 + 96) )
          goto LABEL_10;
      }
      v13 = 4;
LABEL_13:
      v15 = *(_QWORD *)(v11 + 128);
      if ( *(_QWORD *)(v15 + v12 + 752) == *(_QWORD *)a2 )
      {
        v16 = *(_OWORD *)(v15 + v12 + 628);
        v17 = *((_DWORD *)a2 + 2);
        v18 = *(_QWORD *)(v15 + v12 + 628);
        v21 = v16;
        if ( (int)v18 <= v17 && SDWORD2(v21) >= v17 )
        {
          v19 = *((_DWORD *)a2 + 3);
          if ( SHIDWORD(v18) <= v19 && SHIDWORD(v21) >= v19 )
          {
            if ( *((_DWORD *)a2 + 4) != -1 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 11004;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pCallbackContext->VidPnSourceId == D3DDDI_ID_UNINITIALIZED",
                11004LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            *((_DWORD *)a2 + 4) = v9;
            *(_QWORD *)(a2 + 20) = *(_QWORD *)((char *)this + 412);
            *((_DWORD *)a2 + 7) = v13;
          }
        }
      }
      goto LABEL_9;
    }
LABEL_10:
    _InterlockedDecrement(v4 + 4);
    ExReleasePushLockSharedEx(v4, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReference(this);
  }
  else
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5);
    v20[3] = this;
    v20[4] = *((int *)this + 104);
    v20[5] = *((unsigned int *)this + 103);
    WdLogGlobalForLineNumber = 10963;
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v21);
  }
  return 0LL;
}
