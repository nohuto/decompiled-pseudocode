/*
 * XREFs of ?CreateTtmDeviceWorker@DXGSESSIONMGR@@CAXPEAX@Z @ 0x140202800
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140055B10 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1400589B4 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x140059690 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?RegisterTtmDevice@CTTMDEVICE@@QEAAJPEAVDXGSESSIONDATA@@@Z @ 0x140203110 (-RegisterTtmDevice@CTTMDEVICE@@QEAAJPEAVDXGSESSIONDATA@@@Z.c)
 */

void __fastcall DXGSESSIONMGR::CreateTtmDeviceWorker(CTTMDEVICE *this)
{
  __int64 v2; // rsi
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-98h]
  __int64 v9; // [rsp+28h] [rbp-90h]
  __int64 v10; // [rsp+30h] [rbp-88h]
  __int64 v11; // [rsp+50h] [rbp-68h] BYREF
  char v12; // [rsp+58h] [rbp-60h]
  _BYTE v13[16]; // [rsp+60h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-48h] BYREF
  char v15; // [rsp+A0h] [rbp-18h]

  v2 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 123);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGFASTMUTEX *const)v2, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v11,
    (struct DXGPUSHLOCKFAST *)(v2 + 336));
  if ( *((_BYTE *)this + 913) )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7378;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Workitem for creating TTM device 0x%I64x is called after the destroy work item.",
      (__int64)this,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    v3 = *(_QWORD **)(v2 + 368);
    if ( *v3 != v2 + 360 )
      __fastfail(3u);
    *(_QWORD *)this = v2 + 360;
    *((_QWORD *)this + 1) = v3;
    *v3 = this;
    *(_QWORD *)(v2 + 368) = this;
    v4 = *(_QWORD *)(v2 + 136);
    if ( v4 && *(_BYTE *)(v4 + 18497) )
    {
      v15 = 0;
      CPROCESSATTACHHELPER::Attach(&ApcState, *(PRKPROCESS *)(v4 + 18656));
      v5 = CTTMDEVICE::RegisterTtmDevice(this, *(struct DXGSESSIONDATA **)(v2 + 136));
      if ( v5 < 0 )
      {
        v6 = v5;
        WdLogSingleEntry4(2LL, *((unsigned int *)this + 20), *((_QWORD *)this + 8), **(unsigned int **)(v2 + 136), v5);
        v10 = **(unsigned int **)(v2 + 136);
        v9 = *((_QWORD *)this + 8);
        v8 = *((unsigned int *)this + 20);
        WdLogGlobalForLineNumber = 7406;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to register TTM device for target 0x%I64x on adapter 0x%I64x to current console session 0x%I64"
                    "x, (Status = 0x%I64x).",
          v8,
          v9,
          v10,
          v6,
          0LL);
      }
      CPROCESSATTACHHELPER::Detach(&ApcState);
    }
  }
  if ( v12 )
  {
    v7 = v11;
    *(_QWORD *)(v11 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v7, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v13);
}
