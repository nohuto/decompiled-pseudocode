/*
 * XREFs of ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x140409050
 * Callers:
 *     ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x140330590 (-DestroySession@DXGSESSIONMGR@@QEAAXXZ.c)
 *     DxgkSessionConnected @ 0x1403B4AB0 (DxgkSessionConnected.c)
 *     DxgkSessionReconnected @ 0x1403B4E10 (DxgkSessionReconnected.c)
 *     DxgkPreSessionDisconnected @ 0x140408F30 (DxgkPreSessionDisconnected.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140055B10 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x14005AA24 (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     ?RegisterTtmDevice@CTTMDEVICE@@QEAAJPEAVDXGSESSIONDATA@@@Z @ 0x140203110 (-RegisterTtmDevice@CTTMDEVICE@@QEAAJPEAVDXGSESSIONDATA@@@Z.c)
 *     ?UnRegisterTtmDevice@CTTMDEVICE@@QEAAXE@Z @ 0x1402047D0 (-UnRegisterTtmDevice@CTTMDEVICE@@QEAAXE@Z.c)
 *     ?GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402A47D0 (-GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

void __fastcall DXGSESSIONMGR::SetConsoleSession(struct DXGSESSIONDATA **this, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r12
  struct DXGSESSIONDATA *SessionData; // r14
  struct DXGSESSIONDATA *v7; // rax
  CTTMDEVICE *v8; // rsi
  CTTMDEVICE *v9; // r13
  CTTMDEVICE *v10; // rcx
  int v11; // eax
  __int64 v12; // rbx
  struct DXGSESSIONDATA *v13; // rcx
  _QWORD *i; // rbx
  CTTMDEVICE *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // [rsp+28h] [rbp-39h]
  __int64 v18; // [rsp+30h] [rbp-31h]
  __int64 v19; // [rsp+38h] [rbp-29h]
  __int64 v20; // [rsp+58h] [rbp-9h] BYREF
  char v21; // [rsp+60h] [rbp-1h]
  _BYTE v22[16]; // [rsp+68h] [rbp+7h] BYREF
  _BYTE v23[32]; // [rsp+78h] [rbp+17h] BYREF

  v4 = a2;
  SessionData = DXGSESSIONMGR::GetSessionData((DXGSESSIONMGR *)this, a2, a3, a4);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (struct DXGFASTMUTEX *const)this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v23,
    (struct _KTHREAD **)SessionData + 2319);
  if ( v4 )
  {
    if ( this[17] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 7165;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pConsoleSessionData == NULL", 7165LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v20, (struct DXGFASTMUTEX *const)(this + 11), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v20);
      this[17] = SessionData;
      *((_DWORD *)this + 36) = *(_DWORD *)SessionData;
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v20);
    }
    else
    {
      this[17] = SessionData;
      *((_DWORD *)this + 36) = *(_DWORD *)SessionData;
    }
  }
  v7 = this[17];
  if ( v7 && *((_BYTE *)v7 + 18497) )
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v20,
      (struct DXGPUSHLOCKFAST *)(this + 42));
    if ( v4 )
    {
      v8 = this[45];
      while ( v8 != (CTTMDEVICE *)(this + 45) )
      {
        v9 = v8;
        if ( *((_QWORD *)v8 + 4) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 7211;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pTmmDevice->m_pRegisteredSession == NULL",
            7211LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v10 = v8;
        v8 = *(CTTMDEVICE **)v8;
        v11 = CTTMDEVICE::RegisterTtmDevice(v10, this[17]);
        if ( (int)(v11 + 0x80000000) >= 0 && v11 != -1073741130 )
        {
          v12 = v11;
          WdLogSingleEntry4(2LL, *((unsigned int *)v9 + 20), *((_QWORD *)v9 + 8), *(unsigned int *)this[17], v11);
          v19 = *(unsigned int *)this[17];
          v18 = *((_QWORD *)v9 + 8);
          v17 = *((unsigned int *)v9 + 20);
          WdLogGlobalForLineNumber = 7231;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to register TTM device for target 0x%I64x on adapter 0x%I64x to current console session 0x%I"
                      "64x, (Status = 0x%I64x).",
            v17,
            v18,
            v19,
            v12,
            0LL);
        }
      }
    }
    else
    {
      v13 = this[17];
      if ( v13 )
      {
        for ( i = (_QWORD *)*((_QWORD *)v13 + 2327); i != (_QWORD *)((char *)v13 + 18616); v13 = this[17] )
        {
          v15 = (CTTMDEVICE *)(i - 2);
          if ( (struct DXGSESSIONDATA *)i[2] != v13 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 7246;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pTmmDevice->m_pRegisteredSession == m_pConsoleSessionData",
              7246LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          i = (_QWORD *)*i;
          CTTMDEVICE::UnRegisterTtmDevice(v15, 1);
        }
      }
    }
    if ( v21 )
    {
      v16 = v20;
      *(_QWORD *)(v20 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v16, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  if ( !v4 )
  {
    if ( this[17] != SessionData )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 7264;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_pConsoleSessionData == pSessionData",
        7264LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v20, (struct DXGFASTMUTEX *const)(this + 11), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v20);
      this[17] = 0LL;
      *((_DWORD *)this + 36) = -1;
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v20);
    }
    else
    {
      this[17] = 0LL;
      *((_DWORD *)this + 36) = -1;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v22);
}
