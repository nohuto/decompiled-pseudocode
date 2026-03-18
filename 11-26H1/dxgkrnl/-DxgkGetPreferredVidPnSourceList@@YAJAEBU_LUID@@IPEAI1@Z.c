/*
 * XREFs of ?DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z @ 0x140317AD8
 * Callers:
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x140318FCC (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x14005FE4C (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1402C2560 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkGetPreferredVidPnSourceList(const struct _LUID *a1, unsigned int a2, char *a3, char *a4)
{
  __int64 v4; // r14
  const struct _LUID *v7; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // rax
  int v10; // ebp
  DXGADAPTER *v11; // rbx
  int v12; // eax
  __int64 v13; // rdi
  ADAPTER_DISPLAY *v14; // r15
  __int64 i; // rdx
  unsigned int v16; // ecx
  const wchar_t *v17; // r9
  char *v19; // rdi
  __int64 v20; // r12
  unsigned __int64 v21; // rsi
  unsigned int v22; // eax
  unsigned int v23; // r14d
  unsigned int v24; // ecx
  __int64 j; // rdx
  unsigned int v26; // eax
  unsigned int v27; // r8d
  int v28; // eax
  __int64 HighPart; // [rsp+20h] [rbp-128h]
  __int64 v30; // [rsp+20h] [rbp-128h]
  __int64 v31; // [rsp+20h] [rbp-128h]
  __int64 v32; // [rsp+20h] [rbp-128h]
  __int64 LowPart; // [rsp+28h] [rbp-120h]
  __int64 v34; // [rsp+28h] [rbp-120h]
  __int64 v35; // [rsp+28h] [rbp-120h]
  __int64 v36; // [rsp+28h] [rbp-120h]
  __int64 v37; // [rsp+30h] [rbp-118h]
  __int64 v38; // [rsp+30h] [rbp-118h]
  unsigned __int64 v40; // [rsp+58h] [rbp-F0h] BYREF
  const struct _LUID *v41; // [rsp+60h] [rbp-E8h]
  _BYTE v42[144]; // [rsp+70h] [rbp-D8h] BYREF

  v4 = a2;
  v7 = a1;
  v41 = a1;
  Global = DXGGLOBAL::GetGlobal();
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *v7, &v40);
  v10 = 0;
  v11 = v9;
  if ( !v9 )
  {
    LODWORD(v13) = -1073741811;
    WdLogSingleEntry3(2LL, v7->HighPart, v7->LowPart, -1073741811LL);
    LowPart = v7->LowPart;
    HighPart = v7->HighPart;
    WdLogGlobalForLineNumber = 9434;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to find adapter from LUID 0x%I64x%08I64x, returning 0x%I64x.",
      HighPart,
      LowPart,
      -1073741811LL,
      0LL,
      0LL);
    return (unsigned int)v13;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v42, v9, 0LL);
  DXGADAPTER::ReleaseReference(v11);
  v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v42, 0LL);
  v13 = v12;
  if ( v12 < 0 )
  {
    WdLogSingleEntry3(2LL, v7->HighPart, v7->LowPart, v12);
    v17 = L"Failed to acquire adapter core access on adapter 0x%I64x%08I64x, Statue = 0x%I64x.";
    v37 = v13;
    v34 = v7->LowPart;
    v30 = v7->HighPart;
    WdLogGlobalForLineNumber = 9450;
    goto LABEL_10;
  }
  v14 = (ADAPTER_DISPLAY *)*((_QWORD *)v11 + 395);
  if ( !v14 )
  {
    LODWORD(v13) = -1073741811;
    WdLogSingleEntry3(2LL, v7->HighPart, v7->LowPart, -1073741811LL);
    v17 = L"Caller specified adapter 0x%I64x%08I64x is NOT a display adapter, returning 0x%I64x.";
    v37 = -1073741811LL;
    v34 = v7->LowPart;
    v30 = v7->HighPart;
    WdLogGlobalForLineNumber = 9460;
LABEL_10:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v17, v30, v34, v37, 0LL, 0LL);
    goto LABEL_11;
  }
  for ( i = 0LL; (unsigned int)i < (unsigned int)v4; i = (unsigned int)(i + 1) )
  {
    v16 = *(_DWORD *)&a4[4 * i];
    v13 = (unsigned int)i;
    if ( v16 != -1 )
    {
      if ( v16 >= *((_DWORD *)v14 + 24) )
      {
        WdLogSingleEntry4(2LL, *(unsigned int *)&a4[4 * i], v7->HighPart, v7->LowPart, -1071774972LL);
        v38 = v7->LowPart;
        v35 = v7->HighPart;
        v31 = *(unsigned int *)&a4[4 * v13];
        WdLogGlobalForLineNumber = 9488;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Caller specified VidPn source 0x%I64x exceeds the MAX VidPn source on adapter 0x%I64x%08I64x, returning 0x%I64x.",
          v31,
          v35,
          v38,
          -1071774972LL,
          0LL);
        LODWORD(v13) = -1071774972;
        goto LABEL_11;
      }
      v10 |= 1 << v16;
    }
  }
  if ( (_DWORD)v4 )
  {
    v19 = a4;
    v40 = a3 - a4;
    v20 = v4;
    v21 = v40;
    do
    {
      if ( *(_DWORD *)v19 == -1 )
      {
        v22 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(v14, *(_DWORD *)&v19[v21]);
        v23 = v22;
        if ( v22 != -1 )
        {
          if ( v22 >= *((_DWORD *)v14 + 24) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 9511;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"VidPnSourceId < pDisplayCore->GetNumVidPnSources()",
              9511LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( ((1 << v23) & v10) == 0 )
          {
            *(_DWORD *)v19 = v23;
            v10 |= 1 << v23;
          }
        }
      }
      v19 += 4;
      --v20;
    }
    while ( v20 );
    v7 = v41;
    LODWORD(v4) = a2;
  }
  v24 = 0;
  for ( j = 0LL; ; j = (unsigned int)(j + 1) )
  {
    if ( (unsigned int)j >= (unsigned int)v4 )
    {
      LODWORD(v13) = 0;
      goto LABEL_11;
    }
    if ( *(_DWORD *)&a4[4 * j] == -1 )
      break;
LABEL_26:
    ;
  }
  v26 = *((_DWORD *)v14 + 24);
  if ( v24 < v26 )
  {
    while ( 1 )
    {
      v27 = v24 + 1;
      if ( !_bittest(&v10, v24) )
        break;
      ++v24;
      if ( v27 >= v26 )
        goto LABEL_35;
    }
    *(_DWORD *)&a4[4 * j] = v24;
    v28 = 1 << v24++;
    v10 |= v28;
    goto LABEL_26;
  }
LABEL_35:
  LODWORD(v13) = -1071774975;
  WdLogSingleEntry3(2LL, v7->HighPart, v7->LowPart, -1071774975LL);
  v36 = v7->LowPart;
  v32 = v7->HighPart;
  WdLogGlobalForLineNumber = 9546;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"All the VidPn sources are used on adapter 0x%I64x%08I64x, returning 0x%I64x.",
    v32,
    v36,
    -1071774975LL,
    0LL,
    0LL);
LABEL_11:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v42);
  return (unsigned int)v13;
}
