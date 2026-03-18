/*
 * XREFs of ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJPEAUCSM_BUFFER_INFO@@_NPEA_K@Z @ 0x1401BF2C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x140033570 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x14003CB24 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x14003E5E8 (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHAEBUCSM_BUFFER_INFO@@IPEA_K@Z @ 0x14020EEE0 (-VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHAEBUCSM_BUFFER_INFO@@IPEA_K@Z.c)
 *     ?VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z @ 0x14020F400 (-VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z.c)
 *     ?VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z @ 0x14020F8C4 (-VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1402C2560 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402C6890 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGCOMPOSITIONSURFACEPROXY::PairedBind(
        DXGCOMPOSITIONSURFACEPROXY *this,
        struct _LUID *a2,
        unsigned __int8 a3,
        unsigned __int64 *a4)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v8; // rax
  DXGADAPTER *v9; // rbx
  struct DXGADAPTER *v11; // rbx
  unsigned int v12; // ebx
  __int64 v13; // rdi
  struct _LUID v14; // rbx
  struct DXGPROCESS *Current; // r15
  DXGGLOBAL *v16; // rax
  DXGSESSIONDATA *SessionData; // r15
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v19; // eax
  __int64 v20; // rax
  unsigned int HighPart; // edx
  unsigned int i; // r8d
  __int64 v23; // rdx
  __int64 v24; // rcx
  void *v25; // rax
  void *v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  unsigned int v31; // edx
  int v32; // eax
  int v33; // eax
  __int64 v34; // rbx
  unsigned __int64 v35; // rax
  __int64 v36; // [rsp+28h] [rbp-D8h]
  __int64 v37; // [rsp+30h] [rbp-D0h]
  _BYTE v39[4]; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v40; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v41; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v42[3]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v43[144]; // [rsp+80h] [rbp-80h] BYREF
  void *v44[32]; // [rsp+110h] [rbp+10h] BYREF

  memset(v44, 0, sizeof(v44));
  v40 = 0;
  v39[1] = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)v39);
  Global = DXGGLOBAL::GetGlobal();
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a2[22], (unsigned __int64 *)&v41);
  v9 = v8;
  if ( !v8 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1500;
    DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)v39);
    return -1073741811LL;
  }
  v41 = 0LL;
  DxgkpGetPairingAdapters(v8, 0, &v41, v42, 0LL, 0LL, 0);
  DXGADAPTER::ReleaseReference(v9);
  v11 = v41;
  if ( v41 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v43, v41, 0LL);
    v13 = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v43, 0LL);
    DXGADAPTER::ReleaseReference(v11);
    if ( (int)v13 >= 0 )
    {
      v14 = *(struct _LUID *)((char *)v11 + 4812);
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v43);
      Current = DXGPROCESS::GetCurrent();
      if ( !Current )
      {
        v12 = -1073741811;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1545;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid process context. Returning 0x%I64x",
          -1073741811LL,
          0LL,
          0LL,
          0LL,
          0LL);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43);
        goto LABEL_32;
      }
      KeEnterCriticalRegion();
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v42, (struct DXGPROCESS *)((char *)Current + 104), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v42);
      if ( *((_DWORD *)Current + 122) && (*((_DWORD *)Current + 102) & 4) != 0 )
      {
        if ( *((_BYTE *)Current + 584) )
        {
          v16 = DXGGLOBAL::GetGlobal();
          SessionData = DXGGLOBAL::GetSessionData(v16);
          if ( SessionData )
          {
            v20 = *((unsigned int *)this + 5);
            if ( (_DWORD)v20 && *((_BYTE *)this + 40) )
            {
              HighPart = a2[20].HighPart;
              for ( i = 0; i < HighPart; v44[v24] = v25 )
              {
                v23 = 4LL * i;
                v24 = i++;
                v25 = (void *)a2[v23 + 21];
                a2[v23 + 21] = 0LL;
                a2[v23 + 22] = v14;
                HighPart = a2[20].HighPart;
              }
              v26 = (void *)a2[147];
              a2[147] = 0LL;
              v44[HighPart] = v26;
              v27 = DXGSESSIONDATA::VailSendCreateBundleObjectByPointer(SessionData, HighPart + 1, v44, &v40);
              LODWORD(v13) = v27;
              if ( v27 >= 0 )
              {
                v30 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v28);
                v30[3] = *((unsigned int *)this + 5);
                v30[4] = this;
                v30[5] = a3;
                v30[6] = a2[1];
                v31 = *((_DWORD *)this + 5);
                WdLogGlobalForLineNumber = 1584;
                v32 = DXGSESSIONDATA::VailSendBindCompositionSurface(
                        SessionData,
                        v31,
                        a3,
                        (const struct CSM_BUFFER_INFO *)a2,
                        v40,
                        a4);
                LODWORD(v13) = v32;
                if ( v32 < 0 )
                {
                  WdLogSingleEntry5(3LL, *((unsigned int *)this + 5), this, a3, *(_QWORD *)&a2[1], v32);
                  WdLogGlobalForLineNumber = 1594;
                }
              }
              else
              {
                WdLogSingleEntry2(3LL, v27, this);
                WdLogGlobalForLineNumber = 1575;
              }
              if ( v40 )
              {
                v33 = DXGSESSIONDATA::VailSendDestroyBundleObject(SessionData, v40);
                if ( v33 < 0 )
                {
                  v34 = v33;
                  WdLogSingleEntry2(2LL, v33, this);
                  WdLogGlobalForLineNumber = 1609;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Failed SendDestroyBundleObject Returning 0x%I64x",
                    v34,
                    (__int64)this,
                    0LL,
                    0LL,
                    0LL);
                }
              }
              if ( (int)v13 >= 0 )
              {
                *((_BYTE *)this + 41) = 1;
                v35 = *a4;
                ++*((_DWORD *)this + 14);
                *((_QWORD *)this + 6) = v35;
              }
            }
            else
            {
              LODWORD(v13) = -1073741823;
              WdLogSingleEntry4(2LL, -1073741823LL, v20, *((unsigned __int8 *)this + 40), this);
              v37 = *((unsigned __int8 *)this + 40);
              v36 = *((unsigned int *)this + 5);
              WdLogGlobalForLineNumber = 1626;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"PairedBind is called without promote Returning  0x%I64x",
                -1073741823LL,
                v36,
                v37,
                (__int64)this,
                0LL);
            }
          }
          else
          {
            LODWORD(v13) = -1073741811;
            CurrentProcessSessionId = PsGetCurrentProcessSessionId();
            WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
            WdLogGlobalForLineNumber = 1545;
            v19 = PsGetCurrentProcessSessionId();
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
              v19,
              -1073741811LL,
              0LL,
              0LL,
              0LL);
          }
        }
        else
        {
          LODWORD(v13) = -2147483611;
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 1545;
        }
      }
      KeLeaveCriticalRegion();
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v42);
      if ( (int)v13 < 0 )
      {
        WdLogSingleEntry2(3LL, (int)v13, this);
        WdLogGlobalForLineNumber = 1636;
      }
    }
    else
    {
      WdLogSingleEntry2(3LL, v11, v13);
      WdLogGlobalForLineNumber = 1535;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43);
    v12 = v13;
    goto LABEL_32;
  }
  WdLogSingleEntry0(3LL);
  WdLogGlobalForLineNumber = 1521;
  v12 = -1073741811;
LABEL_32:
  DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)v39);
  return v12;
}
