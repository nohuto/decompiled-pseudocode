/*
 * XREFs of ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x140430DD8
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1404348A4 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140030C90 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14004A0F8 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x14006C2C8 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z @ 0x1401A4314 (-ReleaseSharedVidPnSourceOwner@ADAPTER_DISPLAY@@AEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?AcquireVidPnSourceOwnership@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1402823F8 (-AcquireVidPnSourceOwnership@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x14036BD68 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1403AA144 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1403EC920 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?HasContextWithHintType@DXGDEVICE@@QEAAEW4_D3DKMT_CLIENTHINT@@@Z @ 0x140404560 (-HasContextWithHintType@DXGDEVICE@@QEAAEW4_D3DKMT_CLIENTHINT@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::AcquireVidPnSourceOwner(
        ADAPTER_DISPLAY *this,
        struct DXGDEVICE *a2,
        const enum _D3DKMT_VIDPNSOURCEOWNER_TYPE *a3,
        char *a4,
        unsigned int a5,
        struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS a6)
{
  __int64 v10; // rcx
  __int64 v11; // r12
  const wchar_t *v12; // r9
  struct DXGPROCESS *Current; // rbx
  struct _LUID *v14; // rdx
  DXGADAPTER *v16; // rcx
  bool IsAdapterSessionized; // al
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r11
  __int64 v21; // rbx
  __int64 v22; // rdi
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // eax
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rax
  unsigned int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rcx
  enum _D3DKMT_CLIENTHINT v34; // edx
  __int64 v35; // r8
  struct DXGDEVICE *v36; // r9
  unsigned int v37; // ebp
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r12
  __int64 v43; // rcx
  __int64 v44; // r11
  __int64 v45; // r10
  struct DXGDEVICE *v46; // rax
  unsigned int v47; // ebx
  struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS::$E3CFEB816EDED244F3F6DA55B10CA063::$8A2F5ADB3529A3A021294BA5D3A2A057 v48; // ebx
  signed __int64 v49; // r15
  __int64 v50; // rbp
  __int64 v51; // rdx
  __int64 v52; // rcx
  struct DXGDEVICE *v53; // r9
  int v54; // eax
  int v55; // r8d
  __int64 v56; // rcx
  __int64 v57; // rdx
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  __int64 v59; // [rsp+28h] [rbp-60h]
  __int64 v60; // [rsp+30h] [rbp-58h]
  __int64 v61; // [rsp+38h] [rbp-50h]
  __int64 v62; // [rsp+40h] [rbp-48h]
  int v63[4]; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v64; // [rsp+90h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2049;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 2049LL, 0LL, 0LL, 0LL, 0LL);
  }
  v11 = a5;
  if ( *((_DWORD *)this + 24) < a5 )
  {
    WdLogSingleEntry3(2LL, a2, a5, -1073741811LL);
    v62 = 0LL;
    v12 = L"Device 0x%I64x: Invalid Output (0x%I64x) specified, returning 0x%I64x";
    v61 = 0LL;
    v60 = -1073741811LL;
    v59 = v11;
    WdLogGlobalForLineNumber = 2056;
    goto LABEL_99;
  }
  if ( !a3 || !a4 )
  {
    WdLogSingleEntry5(2LL, a2, a3, a4, a3, -1073741811LL);
    v62 = -1073741811LL;
    v12 = L"Device 0x%I64x: Invalid parameter (0x%I64x 0x%I64x 0x%I64x) specified, returning 0x%I64x";
    v61 = (__int64)a3;
    v60 = (__int64)a4;
    v59 = (__int64)a3;
    WdLogGlobalForLineNumber = 2073;
    goto LABEL_99;
  }
  v63[0] = 0;
  Current = DXGPROCESS::GetCurrent(v10);
  if ( !Current )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2083;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess", 2083LL, 0LL, 0LL, 0LL, 0LL);
  }
  (*(void (__fastcall **)(int *, _QWORD, _QWORD))(*((_QWORD *)Current + 11) + 240LL))(v63, 0LL, 0LL);
  if ( !v63[0] )
  {
    WdLogSingleEntry2(3LL, a2, -1073741790LL);
    WdLogGlobalForLineNumber = 2092;
    return 3221225506LL;
  }
  v16 = (DXGADAPTER *)*((_QWORD *)this + 2);
  v64 = 0;
  IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized(v16, v14, &v64, 0LL);
  if ( IsAdapterSessionized )
  {
    if ( !(_DWORD)v20 )
    {
      v21 = v64;
      v22 = IsAdapterSessionized;
      WdLogSingleEntry5(2LL, a2, 0LL, IsAdapterSessionized, v64, -1073741790LL);
      WdLogGlobalForLineNumber = 2112;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Console session is trying to acquire ownership of a session adapter, device 0x%I64x, RemoteSession = 0x"
                  "%I64x, bIsAdapterSessionized = 0x%I64x, AdapterSessionId = 0x%I64x, returning 0x%I64x",
        (__int64)a2,
        0LL,
        v22,
        v21,
        -1073741790LL);
      return 3221225506LL;
    }
    CurrentProcess = PsGetCurrentProcess(v18);
    ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
    if ( v64 != ProcessSessionId )
    {
      v26 = v64;
      v27 = PsGetCurrentProcess(v25);
      v28 = PsGetProcessSessionId(v27);
      WdLogSingleEntry4(2LL, a2, (unsigned int)v26, v28, -1073741790LL);
      WdLogGlobalForLineNumber = 2124;
      v30 = PsGetCurrentProcess(v29);
      v31 = PsGetProcessSessionId(v30);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Remote session trying acquire ownership of a different sessions adapter, device 0x%I64x, AdapterSession"
                  "  = 0x%I64x, Current Session  = 0x%I64x",
        (__int64)a2,
        v26,
        v31,
        -1073741790LL,
        0LL);
      LOBYTE(v32) = 1;
      if ( (unsigned __int8)WdIsDebuggerPresent(v32) )
      {
        DbgPrintEx(
          0x65u,
          0,
          "Breaking in so rcoote can check why remote app is trying to take ownership of a remote session ouput");
        __debugbreak();
      }
      return 3221225506LL;
    }
  }
  else if ( (_DWORD)v20 )
  {
    WdLogSingleEntry5(3LL, a2, v20, v19, v64, -1073741790LL);
    WdLogGlobalForLineNumber = 2148;
    return 3221225506LL;
  }
  v33 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  if ( !v33 || !ADAPTER_RENDER::IsCoreResourceExclusiveOwner(*(ADAPTER_RENDER **)(v33 + 3168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2156;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pRenderAdapter != NULL) && (pRenderAdapter->GetRenderCore()->IsCoreResourceExclusiveOwner())",
      2156LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v37 = 0;
  if ( !(_DWORD)v11 )
    goto LABEL_59;
  while ( 2 )
  {
    v38 = v37;
    v39 = a3[v37];
    if ( a3[v37] != D3DKMT_VIDPNSOURCEOWNER_SHARED
      && a3[v37] != D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVE
      && (unsigned int)(a3[v37] - 3) > 1 )
    {
      WdLogSingleEntry5(2LL, a2, v37, *(unsigned int *)&a4[4 * v37], v39, -1073741811LL);
      v12 = L"Device 0x%I64x: Invalid OwnerType (0x%I64x 0x%I64x 0x%I64x) specified, returning 0x%I64x";
      WdLogGlobalForLineNumber = 2176;
LABEL_69:
      v43 = *(unsigned int *)&a4[4 * v37];
      v62 = -1073741811LL;
      v61 = a3[v37];
LABEL_70:
      v60 = v43;
LABEL_71:
      v59 = v38;
      goto LABEL_99;
    }
    if ( *((_DWORD *)this + 24) <= *(_DWORD *)&a4[4 * v37] )
    {
      WdLogSingleEntry5(2LL, a2, v37, *(unsigned int *)&a4[4 * v37], v39, -1073741811LL);
      v12 = L"Device 0x%I64x: Invalid VidPnSourceId (0x%I64x 0x%I64x 0x%I64x) specified, returning 0x%I64x";
      WdLogGlobalForLineNumber = 2191;
      goto LABEL_69;
    }
    if ( *((_QWORD *)a2 + 237) != *((_QWORD *)this + 2) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2196;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDevice->GetDisplayAdapter(pVidPnSourceId[i]) == this->GetAdapter()",
        2196LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !DISPLAY_SOURCE::CheckSessionOwnership(
            (DISPLAY_SOURCE *)(*((_QWORD *)this + 16) + 4024LL * *(unsigned int *)&a4[4 * v37]),
            v39,
            v35,
            (__int64)v36) )
    {
      v47 = -1071774910;
      WdLogSingleEntry2(3LL, *(unsigned int *)&a4[4 * v37], -1071774910LL);
      WdLogGlobalForLineNumber = 2206;
      return v47;
    }
    v40 = 0LL;
    if ( !v37 )
      goto LABEL_35;
    do
    {
      v41 = *(unsigned int *)&a4[4 * v40];
      v42 = (unsigned int)v40;
      if ( *(_DWORD *)&a4[4 * v37] == (_DWORD)v41 )
      {
        v38 = v37;
        WdLogSingleEntry5(2LL, a2, v37, (unsigned int)v40, v41, -1073741811LL);
        v12 = L"Device 0x%I64x: All VidPnSourceId have to be distinct but entry 0x%I64x and 0x%I64x have identical value o"
               "f 0x%I64x, returning 0x%I64x";
        v62 = -1073741811LL;
        v61 = *(unsigned int *)&a4[4 * v42];
        v60 = v42;
        WdLogGlobalForLineNumber = 2223;
        goto LABEL_71;
      }
      v40 = (unsigned int)(v40 + 1);
    }
    while ( (unsigned int)v40 < v37 );
    v11 = a5;
LABEL_35:
    if ( !ADAPTER_DISPLAY::IsPartOfDesktop(this, *(_DWORD *)&a4[4 * v37]) )
    {
      v47 = -1071774972;
      WdLogSingleEntry4(3LL, a2, v37, *(unsigned int *)&a4[4 * v37], -1071774972LL);
      WdLogGlobalForLineNumber = 2241;
      return v47;
    }
    v35 = a3[v37];
    if ( (_DWORD)v35 != 1 )
    {
      if ( (_DWORD)v35 != 3 || !*((_DWORD *)a2 + 116) )
        goto LABEL_41;
      v38 = v37;
      WdLogSingleEntry5(2LL, a2, v37, *(unsigned int *)&a4[4 * v37], v35, -1073741811LL);
      v12 = L"Device 0x%I64x: No-Legacy device can't acquire D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVEGDI(0x%I64x 0x%I64x 0x%I64x)"
             ", returning 0x%I64x";
      v62 = -1073741811LL;
      WdLogGlobalForLineNumber = 2273;
      v61 = a3[v37];
      v43 = *(unsigned int *)&a4[4 * v37];
      goto LABEL_70;
    }
    if ( !*((_DWORD *)a2 + 116) )
    {
      v38 = v37;
      WdLogSingleEntry5(2LL, a2, v37, *(unsigned int *)&a4[4 * v37], 1LL, -1073741811LL);
      v12 = L"Device 0x%I64x: Legacy device can't acquire D3DKMT_VIDPNSOURCEOWNER_SHARED (0x%I64x 0x%I64x 0x%I64x), returning 0x%I64x";
      v62 = -1073741811LL;
      WdLogGlobalForLineNumber = 2257;
      v61 = a3[v37];
      v43 = *(unsigned int *)&a4[4 * v37];
      goto LABEL_70;
    }
LABEL_41:
    v44 = *((_QWORD *)this + 16);
    v45 = *(unsigned int *)&a4[4 * v37];
    v36 = *(struct DXGDEVICE **)(4024 * v45 + v44 + 728);
    v34 = *(_DWORD *)(4024 * v45 + v44 + 736);
    if ( !v36 )
    {
      if ( v34 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2373;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"D3DKMT_VIDPNSOURCEOWNER_UNOWNED == m_pDisplaySource[pVidPnSourceId[i]].m_VidPnSourceOwnerType",
          2373LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      goto LABEL_58;
    }
    if ( v36 == a2 )
    {
      if ( v34 != (_DWORD)v35 )
      {
        WdLogSingleEntry5(2LL, a2, (unsigned int)v45, *(int *)(4024 * v45 + v44 + 736), v35, -1073741811LL);
        v62 = -1073741811LL;
        WdLogGlobalForLineNumber = 2295;
        v61 = a3[v37];
        v60 = *(int *)(4024LL * *(unsigned int *)&a4[4 * v37] + *((_QWORD *)this + 16) + 736);
        v59 = *(unsigned int *)&a4[4 * v37];
        goto LABEL_45;
      }
LABEL_58:
      if ( ++v37 >= (unsigned int)v11 )
      {
LABEL_59:
        if ( DXGDEVICE::HasContextWithHintType((ADAPTER_RENDER **)a2, v34) )
        {
          WdLogSingleEntry1(4LL);
          WdLogGlobalForLineNumber = 2384;
        }
        if ( !(_DWORD)v11 )
          return 0LL;
        v48 = a6.0;
        v49 = (char *)a3 - a4;
        v50 = v11;
        while ( 2 )
        {
          v51 = *((_QWORD *)this + 16);
          v52 = 4024LL * *(unsigned int *)a4;
          v53 = *(struct DXGDEVICE **)(v52 + v51 + 728);
          if ( v53 )
          {
            v54 = *(_DWORD *)&a4[v49];
            if ( v54 == 4 )
              goto LABEL_88;
            v55 = *(_DWORD *)(v52 + v51 + 736);
            if ( v53 == a2 )
            {
              if ( v55 != v54 )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 2412;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"m_pDisplaySource[pVidPnSourceId[i]].m_VidPnSourceOwnerType == pVidPnSourceOwnerType[i]",
                  2412LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
LABEL_88:
              if ( *(_DWORD *)&a4[v49] == 4 )
              {
                *(_QWORD *)(4024LL * *(unsigned int *)a4 + *((_QWORD *)this + 16) + 744) = a2;
              }
              else
              {
                v57 = *((_QWORD *)this + 58);
                if ( v57 )
                  BLTQUEUE::AcquireVidPnSourceOwnership(
                    (BLTQUEUE *)(*(_QWORD *)(v57 + 8) + 3040LL * *(unsigned int *)a4),
                    a2);
                *(_QWORD *)(4024LL * *(unsigned int *)a4 + *((_QWORD *)this + 16) + 728) = a2;
                *(_DWORD *)(4024LL * *(unsigned int *)a4 + *((_QWORD *)this + 16) + 736) = *(_DWORD *)&a4[v49];
                *(struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS::$E3CFEB816EDED244F3F6DA55B10CA063::$8A2F5ADB3529A3A021294BA5D3A2A057 *)(4024LL * *(unsigned int *)a4 + *((_QWORD *)this + 16) + 740) = v48;
              }
              *(_QWORD *)(4024LL * *(unsigned int *)a4 + *((_QWORD *)this + 16) + 752) = *((_QWORD *)a2 + 5);
              ADAPTER_DISPLAY::UpdateGammaRamp((DXGADAPTER **)this, *(_DWORD *)a4);
              WdLogSingleEntry4(4LL, a2, *(unsigned int *)a4, *(int *)&a4[v49], v11);
              WdLogGlobalForLineNumber = 2469;
              if ( *(_DWORD *)&a4[v49] == 3 )
              {
                CddInterface = ADAPTER_DISPLAY::GetCddInterface(this, *(_DWORD *)a4);
                if ( CddInterface )
                  (*((void (__fastcall **)(_QWORD))CddInterface + 2))(*(_QWORD *)CddInterface);
              }
              a4 += 4;
              if ( !--v50 )
                return 0LL;
              continue;
            }
            if ( v55 != 1 || v54 == 1 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 2422;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"(D3DKMT_VIDPNSOURCEOWNER_SHARED == m_pDisplaySource[pVidPnSourceId[i]].m_VidPnSourceOwnerType) "
                          "&& (D3DKMT_VIDPNSOURCEOWNER_SHARED != pVidPnSourceOwnerType[i])",
                2422LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            ADAPTER_DISPLAY::ReleaseSharedVidPnSourceOwner(
              (PERESOURCE **)this,
              *(ADAPTER_RENDER ***)(4024LL * *(unsigned int *)a4 + *((_QWORD *)this + 16) + 728),
              *(_DWORD *)a4);
          }
          else if ( *(_DWORD *)(v52 + v51 + 736) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2432;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"D3DKMT_VIDPNSOURCEOWNER_UNOWNED == m_pDisplaySource[pVidPnSourceId[i]].m_VidPnSourceOwnerType",
              2432LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          break;
        }
        OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(*((_QWORD *)this + 15), *(_DWORD *)a4, 0LL, 0, 0, 1);
        goto LABEL_88;
      }
      continue;
    }
    break;
  }
  if ( v34 != D3DKMT_CLIENTHINT_OPENGL )
    goto LABEL_76;
  if ( (_DWORD)v35 == 1
    && (*(_DWORD *)(*((_QWORD *)a2 + 5) + 408LL) & 4) != 0
    && (*(_DWORD *)(*((_QWORD *)v36 + 5) + 408LL) & 4) != 0 )
  {
    v47 = -1071774910;
    WdLogSingleEntry5(3LL, a2, *(int *)(4024 * v45 + v44 + 736), v45, a3[v37], -1071774910LL);
    LOBYTE(v56) = 1;
    WdLogGlobalForLineNumber = 2319;
    if ( (unsigned __int8)WdIsDebuggerPresent(v56) )
    {
      DbgPrintEx(0x65u, 0, "Breaking in to allow debug of potential DWM swap chain leak");
      __debugbreak();
    }
    return v47;
  }
  v35 = a3[v37];
  if ( (_DWORD)v35 == 1 )
  {
LABEL_76:
    v47 = -1071774910;
    WdLogSingleEntry5(3LL, a2, *(int *)(4024 * v45 + v44 + 736), *(unsigned int *)&a4[4 * v37], a3[v37], -1071774910LL);
    WdLogGlobalForLineNumber = 2340;
    return v47;
  }
  v46 = *(struct DXGDEVICE **)(4024 * v45 + v44 + 744);
  if ( v46 != a2 )
  {
    if ( !v46 )
      goto LABEL_58;
    v47 = -1071774910;
    WdLogSingleEntry4(3LL, a2, *(unsigned int *)&a4[4 * v37], a3[v37], -1071774910LL);
    WdLogGlobalForLineNumber = 2365;
    return v47;
  }
  if ( (_DWORD)v35 == 4 )
    goto LABEL_58;
  WdLogSingleEntry5(2LL, a2, *(unsigned int *)&a4[4 * v37], 4LL, a3[v37], -1073741811LL);
  v62 = -1073741811LL;
  WdLogGlobalForLineNumber = 2353;
  v61 = a3[v37];
  v60 = 4LL;
  v59 = *(unsigned int *)&a4[4 * v37];
LABEL_45:
  v12 = L"Device 0x%I64x: VidPn 0x%I64x can't change owner type from 0x%I64x to 0x%I64x, returning 0x%I64x";
LABEL_99:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v12, (__int64)a2, v59, v60, v61, v62);
  return 3221225485LL;
}
