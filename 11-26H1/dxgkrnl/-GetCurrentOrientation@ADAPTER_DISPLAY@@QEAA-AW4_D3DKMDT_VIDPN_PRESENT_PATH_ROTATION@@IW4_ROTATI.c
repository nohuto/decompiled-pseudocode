/*
 * XREFs of ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1402CA65C
 * Callers:
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1400701E8 (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1402AD2E0 (DxgkGetAdapterDeviceDesc.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1402BA700 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1402BBFE4 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z @ 0x1402BD63C (-DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z.c)
 *     ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1402C7ED4 (-SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPO.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1402CC94C (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140326BC0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x140417C20 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireShared@MonitorResourceLock@@QEAAXXZ @ 0x140035838 (-AcquireShared@MonitorResourceLock@@QEAAXXZ.c)
 *     ??0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x1400985E4 (--0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CBB30 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetCurrentOrientation(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rax
  char v4; // di
  char v8; // r14
  int v9; // ebx
  unsigned int v10; // esi
  MONITOR_MGR *v11; // r10
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r14
  __int64 v18; // r14
  struct _KTHREAD **v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // rbx
  __int64 v25; // r9
  __int64 v26; // r8
  _QWORD *v27; // rcx
  unsigned int v28; // r13d
  int v29; // eax
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rbx
  struct DXGMONITOR *v38; // rdx
  void *v39; // [rsp+50h] [rbp-30h] BYREF
  __int64 v40; // [rsp+58h] [rbp-28h]
  __int64 v41; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v42[3]; // [rsp+68h] [rbp-18h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+38h]

  v3 = a2;
  v4 = 0;
  if ( a3 == 1 )
  {
    if ( *(_BYTE *)(a1 + 289) )
      return 1LL;
  }
  else if ( (a3 & 0xFFFFFFFD) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8455;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(Type == ROTATION_MODE_TYPE_HARDWARE) || (Type == ROTATION_MODE_TYPE_SOFTWARE) || (Type == ROTATION_MODE_TYPE_OVERALL)",
      8455LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v3 = a2;
  }
  if ( !a3 && !*(_BYTE *)(a1 + 289) )
    return 1LL;
  v14 = 4024 * v3;
  v15 = *(_QWORD *)(a1 + 128);
  if ( *(_DWORD *)(v15 + v14 + 1020) != 1 )
  {
    switch ( *(_DWORD *)(v15 + v14 + 1020) )
    {
      case 2:
        v10 = 2;
        goto LABEL_28;
      case 3:
        v10 = 3;
        goto LABEL_28;
      case 4:
        v10 = 4;
        goto LABEL_28;
    }
    WdLogSingleEntry2(2LL, *(int *)(v15 + v14 + 1020), *(_QWORD *)(a1 + 16));
    v36 = *(_QWORD *)(a1 + 128);
    WdLogGlobalForLineNumber = 8481;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"m_DisplayModeInfo does not have a valid rotation mode (0x%I64x) on adapter 0x%I64x!",
      *(int *)(v36 + v14 + 1020),
      *(_QWORD *)(a1 + 16),
      0LL,
      0LL,
      0LL);
  }
  v10 = 1;
LABEL_28:
  if ( a3 != 1 )
  {
    v16 = *(_QWORD *)(a1 + 16);
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 3160);
      if ( v17 )
      {
        v18 = *(_QWORD *)(v17 + 104);
        if ( v18 )
        {
          v19 = (struct _KTHREAD **)(v18 + 40);
          DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v18 + 40));
          v22 = *(_QWORD *)(v18 + 128);
          if ( v22 && (_InterlockedAdd((volatile signed __int32 *)(v22 + 32), 1u), (v23 = *(_QWORD *)(v18 + 128)) != 0) )
          {
            v24 = v23 + 96;
            v25 = v23 + 120;
            v26 = *(_QWORD *)(v23 + 120);
            v27 = 0LL;
            if ( v26 != v23 + 120 )
              v27 = (_QWORD *)(v26 - 8);
            while ( 1 )
            {
              if ( !v27 )
              {
                if ( v26 == v25 || v26 == 8 )
                {
                  *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, 0LL) + 24) = v24;
                  WdLogGlobalForLineNumber = 195;
                }
                else
                {
                  v32 = WdLogNewEntry5_WdTrace(0LL, 0LL);
                  v34 = a2;
                  *(_QWORD *)(v32 + 24) = a2;
                  *(_QWORD *)(v32 + 32) = v24;
                  WdLogGlobalForLineNumber = 187;
                }
                v35 = (_QWORD *)WdLogNewEntry5_WdTrace(v33, v34);
                v35[3] = 0LL;
                v35[4] = a2;
                v35[5] = v24;
                v35[6] = -1071774919LL;
                WdLogGlobalForLineNumber = 9251;
                ReferenceCounted::Release((ReferenceCounted *)(v23 + 24));
                goto LABEL_50;
              }
              if ( *(_DWORD *)(v27[11] + 24LL) == a2 )
                break;
              v31 = v27[1];
              v27 = (_QWORD *)(v31 - 8);
              if ( v31 == v25 )
                v27 = 0LL;
            }
            v28 = *(_DWORD *)(v27[12] + 24LL);
            v29 = _InterlockedDecrement((volatile signed __int32 *)(v23 + 32));
            if ( v29 )
            {
              if ( v29 < 0 )
              {
                v37 = v29;
                WdLogSingleEntry1(2LL);
                WdLogGlobalForLineNumber = 77;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Client is trying to release a destroyed object (ref count = %I64d)!",
                  v37,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            else if ( v23 != -24 )
            {
              (**(void (__fastcall ***)(__int64, __int64))(v23 + 24))(v23 + 24, 1LL);
            }
            DXGFASTMUTEX::Release(v19);
            v30 = *(_QWORD *)(a1 + 16);
            v8 = 0;
            if ( !v30 || v28 == -1 )
            {
              v9 = -1073741811;
            }
            else
            {
              if ( !*(_QWORD *)(v30 + 3160) )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 782;
              }
              if ( *(_QWORD *)(*(_QWORD *)(v30 + 3160) + 112LL) )
              {
                v39 = retaddr;
                v40 = 0LL;
                MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v39);
                MONITOR_MGR::_GetMonitorInstance(v11, v28, 1u, (struct MONITOR_REF_ACCESSOR *)&v39);
                v12 = v40;
                v41 = v40;
                if ( v40 )
                  MonitorResourceLock::AcquireShared((PERESOURCE)(v40 + 40));
                v42[0] = retaddr;
                v13 = 2LL;
                do
                {
                  v42[1] = v12;
                  --v13;
                }
                while ( v13 );
                MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v42);
                MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v39);
              }
              else
              {
                WdLogSingleEntry1(2LL);
                WdLogGlobalForLineNumber = 791;
                CONST_MONITOR_REF_LOCK_ACCESSOR::CONST_MONITOR_REF_LOCK_ACCESSOR(
                  (CONST_MONITOR_REF_LOCK_ACCESSOR *)&v41,
                  v38);
                v12 = v41;
              }
              if ( v12 )
              {
                if ( *(_DWORD *)(v12 + 312) != *(_DWORD *)(v12 + 304) )
                  v8 = *(_DWORD *)(v12 + 312);
                ExReleaseResourceLite((PERESOURCE)(v12 + 40));
                KeLeaveCriticalRegion();
                v41 = 0LL;
                MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v42);
                if ( v41 )
                {
                  ExReleaseResourceLite((PERESOURCE)(v41 + 40));
                  KeLeaveCriticalRegion();
                }
                v9 = 0;
              }
              else
              {
                v9 = -1073741275;
                WdLogSingleEntry1(2LL);
                WdLogGlobalForLineNumber = 2653;
                MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v42);
                if ( v41 )
                {
                  ExReleaseResourceLite((PERESOURCE)(v41 + 40));
                  KeLeaveCriticalRegion();
                }
              }
            }
            if ( v9 >= 0 )
              v4 = v8;
            return ((v4 + (_BYTE)v10 - 1) & 3u) + 1;
          }
          else
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v21, v20) + 24) = v16;
            WdLogGlobalForLineNumber = 9232;
LABEL_50:
            DXGFASTMUTEX::Release(v19);
          }
        }
        else
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 9212;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 9198;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
          v16,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 9184;
    }
  }
  return v10;
}
