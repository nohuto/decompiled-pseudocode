/*
 * XREFs of ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1402AE590
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetDisplayOnlyDriverPrecisePresentRegionPreference@ADAPTER_DISPLAY@@QEBAHXZ @ 0x14002D6E0 (-GetDisplayOnlyDriverPrecisePresentRegionPreference@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U?$_tlgWrapSz@G@@U?$_tlgWrapSz@D@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5555AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSz@D@@555@Z @ 0x14004806C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@_ea_14004806C.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x14005ECAC (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1402AF2AC (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x1402AF984 (-DxgIsSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z @ 0x1402AFAB8 (-IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1403ADEB8 (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 */

__int64 __fastcall EnumAdaptersCallback(struct DXGADAPTER *this, _QWORD *a2)
{
  DXGGLOBAL *Global; // rax
  const CHAR *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGSESSIONDATA *SessionData; // r13
  int v11; // eax
  ADAPTER_RENDER *v12; // rbx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v14; // rax
  __int64 v16; // r8
  unsigned int v17; // r14d
  __int64 v18; // rcx
  unsigned int v19; // eax
  struct DXGPROCESS *v20; // rax
  int v21; // eax
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // rbx
  struct DXGPROCESS *v26; // rax
  _QWORD **v27; // r13
  _QWORD *i; // rdx
  _QWORD *v29; // rcx
  int v30; // eax
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned int v40; // eax
  int v41; // [rsp+80h] [rbp-29h] BYREF
  int v42; // [rsp+84h] [rbp-25h] BYREF
  int v43; // [rsp+88h] [rbp-21h] BYREF
  int v44; // [rsp+8Ch] [rbp-1Dh] BYREF
  int v45; // [rsp+90h] [rbp-19h] BYREF
  int v46; // [rsp+94h] [rbp-15h] BYREF
  _QWORD v47[2]; // [rsp+98h] [rbp-11h] BYREF
  const CHAR *v48; // [rsp+A8h] [rbp-1h] BYREF
  void *v49; // [rsp+B0h] [rbp+7h] BYREF
  _QWORD v50[2]; // [rsp+B8h] [rbp+Fh] BYREF
  char v51; // [rsp+C8h] [rbp+1Fh]
  unsigned int v52; // [rsp+118h] [rbp+6Fh] BYREF
  int v53; // [rsp+120h] [rbp+77h] BYREF
  int v54; // [rsp+128h] [rbp+7Fh] BYREF

  Global = DXGGLOBAL::GetGlobal();
  v5 = 0LL;
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
  {
    v50[1] = this;
    _InterlockedAdd64((volatile signed __int64 *)this + 3, 1uLL);
    v50[0] = -1LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)this + 136, 0LL);
    _InterlockedAdd((volatile signed __int32 *)this + 38, 1u);
    v11 = *((_DWORD *)this + 50);
    v51 = 1;
    if ( v11 == 1 && !*((_BYTE *)this + 3057) && ((*((_DWORD *)this + 754) & 4) == 0 || (a2[3] & 4) != 0) )
    {
      v12 = (ADAPTER_RENDER *)*((_QWORD *)this + 396);
      if ( v12 )
      {
        Current = DXGPROCESS::GetCurrent();
        if ( ADAPTER_RENDER::IsProcessGpuAccessBlocked(v12, Current) )
        {
          v14 = DXGPROCESS::GetCurrent();
          WdLogSingleEntry2(4LL, this, v14);
          WdLogGlobalForLineNumber = 822;
LABEL_8:
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v50);
          return (unsigned int)v5;
        }
      }
      v16 = a2[3];
      if ( (((v16 & 1) == 0) & (unsigned __int8)(*((_DWORD *)this + 754) >> 3)) == 0 )
      {
        v17 = 2;
        if ( ((v16 & 2) != 0 || *((_QWORD *)this + 396))
          && (((v16 & 8) == 0) & (unsigned __int8)(*((_DWORD *)this + 754) >> 9)) == 0 )
        {
          if ( (*((_BYTE *)this + 3112) & 2) != 0 && (*((_DWORD *)DXGPROCESS::GetCurrent() + 102) & 8) != 0 )
          {
            if ( (unsigned int)dword_140166660 > 5 && tlgKeywordOn((__int64)&dword_140166660, 0x400000000000LL) )
            {
              v31 = a2[3];
              v54 = (v31 >> 1) & 1;
              v53 = (v31 >> 2) & 1;
              v41 = a2[3] & 1;
              v32 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8);
              if ( v32 )
                v5 = *(const CHAR **)(v32 + 96);
              v49 = (void *)*((_QWORD *)this + 255);
              v42 = *((_DWORD *)this + 109);
              v43 = *((_DWORD *)this + 108);
              v44 = *((_DWORD *)this + 107);
              v45 = *((_DWORD *)this + 106);
              v46 = *((_DWORD *)this + 105);
              v48 = v5;
              LOWORD(v52) = 1;
              v47[0] = 0x2000000LL;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                v32,
                (__int64)&unk_140141A0F,
                v33,
                v34,
                (__int64)v47,
                (__int64)&v52,
                (__int64)&v46,
                (__int64)&v45,
                (__int64)&v44,
                (__int64)&v43,
                (__int64)&v42,
                &v49,
                &v48,
                (__int64)&v41,
                (__int64)&v54,
                (__int64)&v53);
            }
          }
          else
          {
            v18 = *((unsigned int *)a2 + 1);
            v19 = *((_DWORD *)a2 + 2) + 1;
            *((_DWORD *)a2 + 2) = v19;
            if ( *(_DWORD *)a2 < (unsigned int)v18 )
            {
              v52 = 0;
              v20 = DXGPROCESS::GetCurrent();
              v21 = DXGADAPTER::CreateHandle(this, v20, &v52);
              v22 = v21;
              if ( v21 < 0 )
              {
                WdLogSingleEntry2(2LL, this, v21);
                WdLogGlobalForLineNumber = 901;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Failed to open a handle on adapter 0x%I64x (ntStatus = 0x%I64x).",
                  (__int64)this,
                  v22,
                  0LL,
                  0LL,
                  0LL);
                LODWORD(v5) = v22;
                goto LABEL_8;
              }
              v23 = *(unsigned int *)a2;
              v24 = a2[2];
              v25 = 5 * v23;
              *(_DWORD *)a2 = v23 + 1;
              *(_DWORD *)(v24 + 4 * v25) = v52;
              *(_QWORD *)(v24 + 4 * v25 + 4) = *(_QWORD *)((char *)this + 412);
              *(_DWORD *)(v24 + 4 * v25 + 16) = 0;
              if ( (unsigned int)DxgIsSessionUsingWddmMonitors() )
              {
                v27 = (_QWORD **)((char *)SessionData + 18584);
                for ( i = *v27; i != v27; i = (_QWORD *)*i )
                {
                  v29 = i - 4;
                  if ( *((_DWORD *)i - 6) == *((_DWORD *)this + 103) && *((_DWORD *)v29 + 3) == *((_DWORD *)this + 104) )
                  {
                    if ( i != (_QWORD *)32 )
                    {
                      v30 = *((_DWORD *)v29 + 27);
                      goto LABEL_29;
                    }
                    break;
                  }
                }
                v30 = 0;
LABEL_29:
                *(_DWORD *)(v24 + 4 * v25 + 12) = v30;
                if ( v30 && (unsigned int)DxgIsRemoteSessionUsingWddmMonitors() && DXGADAPTER::IsFullWDDMAdapter(this) )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 928;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"(pAdapterInfo->NumOfSources == 0) || !DxgIsRemoteSessionUsingWddmMonitors() || !pAdapter->I"
                              "sFullWDDMAdapter()",
                    928LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                if ( !*((_QWORD *)this + 396) )
                  *(_DWORD *)(v24 + 4 * v25 + 16) = ADAPTER_DISPLAY::GetDisplayOnlyDriverPrecisePresentRegionPreference(*((ADAPTER_DISPLAY **)this + 395));
              }
              else
              {
                v52 = 0;
                v47[1] = &v52;
                v47[0] = 0x400000002LL;
                v26 = DXGPROCESS::GetCurrent();
                if ( (*(int (__fastcall **)(_QWORD *))(*((_QWORD *)v26 + 11) + 368LL))(v47) < 0 )
                {
                  WdLogSingleEntry0(3LL);
                  WdLogGlobalForLineNumber = 956;
                  v52 = 2;
                }
                else
                {
                  v17 = v52;
                }
                if ( v17 != 0xFFFF
                  && *((_DWORD *)SessionData + 4627) == *((_DWORD *)this + 103)
                  && *((_DWORD *)SessionData + 4628) == *((_DWORD *)this + 104) )
                {
                  *(_DWORD *)(v24 + 4 * v25 + 12) = *((_DWORD *)SessionData + 4629);
                }
                else
                {
                  *(_DWORD *)(v24 + 4 * v25 + 12) = 0;
                }
              }
              _InterlockedDecrement((volatile signed __int32 *)this + 38);
              ExReleasePushLockSharedEx((char *)this + 136, 0LL);
              KeLeaveCriticalRegion();
              DXGADAPTER::ReleaseReference(this);
              return 0LL;
            }
            if ( a2[2] )
            {
              WdLogSingleEntry2(4LL, v19, v18);
              WdLogGlobalForLineNumber = 884;
            }
          }
        }
      }
    }
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v50);
    return 0LL;
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7, v6, v8, v9);
  WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
  WdLogGlobalForLineNumber = 775;
  v40 = PsGetCurrentProcessSessionId(v37, v36, v38, v39);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
    v40,
    -1073741811LL,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
