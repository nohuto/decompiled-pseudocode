/*
 * XREFs of ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z @ 0x14007A870
 * Callers:
 *     _DxgDbgBugcheckCallback @ 0x140082F90 (_DxgDbgBugcheckCallback.c)
 *     ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x14018FF6C (-DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z.c)
 *     ?ProcessDeadlockLiveDumpCallback@@YAJPEAXP6AJ0PEBU_GUID@@0K@ZK_K3330@Z @ 0x14019D950 (-ProcessDeadlockLiveDumpCallback@@YAJPEAXP6AJ0PEBU_GUID@@0K@ZK_K3330@Z.c)
 *     ?DxgkAddDiagnosticInfoIntoReport@@YAJPEAU_WD_DEBUG_REPORT@@PEAU_DEVICE_OBJECT@@PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1401D8398 (-DxgkAddDiagnosticInfoIntoReport@@YAJPEAU_WD_DEBUG_REPORT@@PEAU_DEVICE_OBJECT@@PEAU_DXGKARG_COLL.c)
 *     ?DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z @ 0x1403EF9BC (-DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x14004AB54 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     ?TdrGatherPowerTriage@@YA?AU_DPI_DBG_POWER_ACTIVITY@@XZ @ 0x140064470 (-TdrGatherPowerTriage@@YA-AU_DPI_DBG_POWER_ACTIVITY@@XZ.c)
 *     DpiGetDbgInfoAdapters @ 0x14006D75C (DpiGetDbgInfoAdapters.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall TdrCollectBugcheckSecondaryDumpData(char *a1, unsigned int a2, char a3, unsigned __int8 a4)
{
  char v6; // r12
  unsigned int v7; // esi
  unsigned __int64 v8; // r13
  unsigned __int16 v10; // dx
  int v11; // eax
  __int64 v12; // rsi
  int v13; // edx
  int v14; // r14d
  __int64 v15; // rsi
  unsigned __int16 i; // r8
  int v17; // edx
  int v18; // ecx
  int v19; // eax
  int v20; // edx
  __int64 v21; // rcx
  char v22; // cl
  __int64 v23; // rax
  unsigned __int16 v24; // bx
  __int64 v25; // rdx
  unsigned __int64 RecentEvents; // rdx
  unsigned int v27; // eax
  __int64 v28; // rcx
  struct DXGGLOBAL *Global; // rax
  unsigned int v30; // ebx
  DXGDIAGNOSTICS **v31; // r15
  __int64 v32; // r14
  DXGDIAGNOSTICS *v33; // rcx
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  unsigned int v38; // [rsp+28h] [rbp-A1h] BYREF
  int v39; // [rsp+2Ch] [rbp-9Dh]
  _DWORD v40[9]; // [rsp+30h] [rbp-99h]
  __int64 v41; // [rsp+54h] [rbp-75h]
  _QWORD v42[2]; // [rsp+60h] [rbp-69h] BYREF
  _DWORD v43[28]; // [rsp+70h] [rbp-59h] BYREF

  v6 = a3;
  v7 = a4 + 21;
  v8 = a2;
  if ( a2 <= 4 * (unsigned __int64)(2 * v7) )
    return 0LL;
  if ( a1 )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      ++v10;
      *(_QWORD *)&a1[8 * v11] = 0LL;
      v11 = v10;
    }
    while ( v10 < v7 );
    *(_DWORD *)a1 = v7;
  }
  v12 = 8 * v7;
  v13 = 8;
  v14 = 0;
  if ( v12 + 8 > v8 )
  {
    v13 = 0;
  }
  else if ( a1 )
  {
    *(_DWORD *)&a1[v12] = 2;
    v14 = 1;
    a1[v12 + 4] = word_140168DDD;
    a1[v12 + 5] = 0;
    *((_DWORD *)a1 + 2) = v12;
    *((_DWORD *)a1 + 3) = 9;
  }
  v15 = (unsigned int)(v13 + v12);
  memset(v43, 0, sizeof(v43));
  if ( (int)DpiGetDbgInfoAdapters((__int64)v43) >= 0 )
  {
    for ( i = 0; i < 7u; ++i )
    {
      if ( (unsigned int)v15 >= a2 )
        break;
      v17 = v43[4 * i];
      if ( !v17 )
        break;
      if ( v15 + 16 <= v8 )
      {
        LOWORD(v14) = v14 + 1;
        if ( a1 )
        {
          *(_DWORD *)&a1[v15 + 4] = v43[4 * i + 1];
          v18 = v43[4 * i + 3];
          *(_DWORD *)&a1[v15 + 8] = v43[4 * i + 2];
          v19 = *(_DWORD *)&a1[v15 + 12];
          *(_DWORD *)&a1[v15] = v17;
          v20 = v19 ^ ((unsigned __int8)v18 ^ (unsigned __int8)v19) & 1;
          LOBYTE(v19) = v18 ^ v19 ^ (v18 ^ v19) & 1;
          v21 = 2LL * (unsigned __int16)v14;
          *(_DWORD *)&a1[v15 + 12] = v20 ^ v19 & 2;
          *(_DWORD *)&a1[4 * v21] = v15;
          *(_DWORD *)&a1[4 * v21 + 4] = i + 32;
        }
        v15 = (unsigned int)(v15 + 16);
      }
    }
  }
  LOWORD(v14) = v14 + 1;
  v39 = v14;
  if ( a1 )
  {
    v22 = TdrGatherPowerTriage() & 3 | a1[v15] & 0xFC;
    v23 = 2LL * (unsigned __int16)v14;
    a1[v15] = v22;
    *(_DWORD *)&a1[4 * v23] = v15;
    v15 = (unsigned int)(v15 + 8);
    *(_DWORD *)&a1[4 * v23 + 4] = 48;
  }
  v40[0] = 1;
  v40[1] = 32;
  v24 = 0;
  v40[2] = 32;
  v40[6] = 32;
  v40[8] = 32;
  v40[3] = 64;
  v40[4] = 64;
  v40[5] = 64;
  v40[7] = 64;
  v41 = 64LL;
  do
  {
    if ( (unsigned int)v15 >= a2 )
      break;
    if ( v6 )
      v25 = 0xFFFFFFFFLL;
    else
      v25 = (unsigned int)v40[v24];
    RecentEvents = (unsigned int)WdLogGetRecentEvents(v24, v25, 0LL, 0LL);
    if ( RecentEvents + v15 < RecentEvents || RecentEvents + v15 > v8 )
      LODWORD(RecentEvents) = a2 - v15;
    if ( (_DWORD)RecentEvents )
    {
      LOWORD(v14) = v14 + 1;
      if ( a1 )
      {
        if ( a3 )
          v27 = -1;
        else
          v27 = v40[v24];
        LODWORD(RecentEvents) = WdLogGetRecentEvents(v24, v27, &a1[(unsigned int)v15], (unsigned int)RecentEvents);
        v28 = 2LL * (unsigned __int16)v14;
        *(_DWORD *)&a1[4 * v28] = v15;
        *(_DWORD *)&a1[4 * v28 + 4] = v24 + 16;
      }
      v15 = (unsigned int)(RecentEvents + v15);
    }
    v6 = a3;
    ++v24;
  }
  while ( v24 < 0xBu );
  v39 = v14;
  if ( a4 )
  {
    Global = DXGGLOBAL::GetGlobal();
    v30 = 0;
    v31 = (DXGDIAGNOSTICS **)v42;
    v42[0] = *((_QWORD *)Global + 121);
    v42[1] = *((_QWORD *)Global + 122);
    v32 = 2LL;
    do
    {
      v33 = *v31;
      v34 = *((unsigned int *)*v31 + 4);
      if ( v34 + (unsigned int)v15 >= v34 && v34 + (unsigned int)v15 <= v8 )
      {
        if ( a1 )
        {
          v38 = *((_DWORD *)*v31 + 4);
          if ( (int)DXGDIAGNOSTICS::ReadDiagnostics(
                      v33,
                      (unsigned __int8 *)&a1[(unsigned int)v15 + (unsigned __int64)v30],
                      &v38,
                      0xFFFFFFFF) >= 0 )
            v30 += v38;
        }
        else
        {
          v30 += v34;
        }
      }
      ++v31;
      --v32;
    }
    while ( v32 );
    if ( a1 )
    {
      if ( v30 )
      {
        v35 = 2LL * (unsigned __int16)(v39 + 1);
        *(_DWORD *)&a1[4 * v35] = v15;
        *(_DWORD *)&a1[4 * v35 + 4] = 177;
      }
    }
    LODWORD(v15) = v30 + v15;
  }
  return (unsigned int)v15;
}
