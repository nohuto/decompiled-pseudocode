/*
 * XREFs of ?CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z @ 0x1800B4AD8
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18007EE08 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetClonePrimaryDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x180064524 (-GetClonePrimaryDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?DXGIRotationToInt@@YAHW4DXGI_MODE_ROTATION@@@Z @ 0x1800B4BE4 (-DXGIRotationToInt@@YAHW4DXGI_MODE_ROTATION@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDWMDisplaySet::CalculateRotationAngles(
        const struct CDWMDisplaySet *a1,
        const struct CDWMDisplaySet *a2,
        int *a3,
        int *a4)
{
  int ClonePrimaryDisplaysNoRef; // eax
  unsigned int v8; // ebx
  int v9; // edi
  int v10; // eax
  int v11; // eax
  __int128 v13; // [rsp+30h] [rbp-40h] BYREF
  __int64 v14; // [rsp+40h] [rbp-30h]
  int v15; // [rsp+48h] [rbp-28h]
  __int128 v16; // [rsp+50h] [rbp-20h] BYREF
  __int64 v17; // [rsp+60h] [rbp-10h]
  int v18; // [rsp+68h] [rbp-8h]

  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  ClonePrimaryDisplaysNoRef = CDWMDisplaySet::GetClonePrimaryDisplaysNoRef((__int64)a1, (__int64)&v16);
  v8 = ClonePrimaryDisplaysNoRef;
  if ( ClonePrimaryDisplaysNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ClonePrimaryDisplaysNoRef, 0x28Au, 0LL);
  }
  else
  {
    v9 = DXGIRotationToInt((enum DXGI_MODE_ROTATION)*(_DWORD *)(*(_QWORD *)v16 + 248LL));
    v10 = CDWMDisplaySet::GetClonePrimaryDisplaysNoRef((__int64)a2, (__int64)&v13);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x290u, 0LL);
    }
    else
    {
      v11 = DXGIRotationToInt((enum DXGI_MODE_ROTATION)*(_DWORD *)(*(_QWORD *)v13 + 248LL));
      *a4 = v11;
      *a3 = v11 - v9;
    }
  }
  CBitmapSourceArray::~CBitmapSourceArray((void **)&v13);
  CBitmapSourceArray::~CBitmapSourceArray((void **)&v16);
  return v8;
}
