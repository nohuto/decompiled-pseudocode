/*
 * XREFs of ?AcquireMultiPlaneOverlay3FlipFences@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@IPEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGSYNCOBJECTLOCK@@PEAVDXGSYNCOBJECTMUTEX@@3@Z @ 0x1402E4F04
 * Callers:
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1402E2810 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x14005C5E0 (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1402BE420 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGCONTEXT::AcquireMultiPlaneOverlay3FlipFences(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        int a3,
        struct VIDSCH_SUBMIT_DATA_BASE *a4,
        struct DXGSYNCOBJECTLOCK *a5,
        DXGFASTMUTEX **a6,
        DXGFASTMUTEX **a7)
{
  struct VIDSCH_SUBMIT_DATA_BASE *v7; // r14
  int v8; // ebp
  const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v9; // rsi
  __int64 v10; // rbx
  char v11; // r8
  UINT i; // r12d
  __int64 v13; // rcx
  __int64 v15; // r9
  D3DKMT_MULTIPLANE_OVERLAY3 *v16; // rsi
  __int64 LayerIndex; // r13
  int v18; // eax
  unsigned int v19; // edx
  unsigned int v20; // eax
  unsigned int v21; // edx
  __int64 v22; // r10
  __int64 v23; // rdx
  __int64 Value; // rdx
  UINT j; // ecx
  struct DXGPROCESS *Current; // rax
  unsigned int v27; // ebx
  struct DXGPROCESS *v28; // r14
  volatile signed __int32 *v29; // r15
  __int64 v30; // rcx
  __int64 v31; // rbp
  int v32; // edx
  __int64 v33; // rcx
  __int64 v34; // rbp
  __int64 v35; // rbp
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  UINT k; // ecx
  struct DXGPROCESS *v38; // rax
  unsigned int v39; // ebx
  struct DXGPROCESS *v40; // r14
  volatile signed __int32 *v41; // r15
  __int64 v42; // rcx
  __int64 v43; // rbp
  int v44; // edx
  __int64 v45; // rcx
  __int64 v46; // rbp
  __int64 v47; // rbp
  struct _VIDSCH_SYNC_OBJECT *v48; // rax
  __int64 v49; // [rsp+20h] [rbp-F8h]
  __int64 v50; // [rsp+20h] [rbp-F8h]
  __int64 v51; // [rsp+20h] [rbp-F8h]
  __int64 v52; // [rsp+20h] [rbp-F8h]
  _QWORD *v55; // [rsp+68h] [rbp-B0h]
  _DWORD v58[16]; // [rsp+90h] [rbp-88h]

  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 3089LL) )
  {
    if ( *((_BYTE *)a5 + 8) )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, a5, 0LL, 0LL);
      WdLogGlobalForLineNumber = 3083;
    }
    v10 = *(_QWORD *)a5;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v10 + 608), 1u);
    v11 = 0;
    *((_BYTE *)a5 + 8) = 1;
    for ( i = 0; i < v9->PresentPlaneCount; ++i )
    {
      v15 = i;
      v16 = v9->ppPresentPlanes[i];
      LayerIndex = v16->LayerIndex;
      v18 = 1 << v16->LayerIndex;
      if ( (v18 & v8) != 0 )
      {
        v19 = (((v8 & (unsigned int)(v18 - 1)) >> 1) & 0x55555555) + (v8 & (v18 - 1) & 0x55555555);
        v20 = (((v19 & 0x33333333) + ((v19 >> 2) & 0x33333333)) & 0xF0F0F0F)
            + ((((v19 & 0x33333333) + ((v19 >> 2) & 0x33333333)) >> 4) & 0xF0F0F0F);
        v21 = (unsigned __int16)((unsigned __int8)v20 + BYTE1(v20))
            + (((v20 & 0xFF00FF) + ((v20 >> 8) & 0xFF00FF)) >> 16);
      }
      else
      {
        v21 = -1;
      }
      v22 = v21 * ((8 * *((_DWORD *)v7 + 152) + 231) & 0xFFFFFFF8);
      v23 = v16[1].LayerIndex;
      v55 = (_QWORD *)((char *)v7 + v22 + 600);
      if ( (_DWORD)v23 )
      {
        for ( j = 0; j < i; ++j )
        {
          if ( (_DWORD)v23 == v58[j] )
          {
            WdLogSingleEntry2(2LL, v23, -1073741811LL);
            v49 = v16[1].LayerIndex;
            WdLogGlobalForLineNumber = 1527;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Duplicate hFlipToFence (0x%I64x). FlipToFence must be different for every plane, returning 0x%I64x",
              v49,
              -1073741811LL,
              0LL,
              0LL,
              0LL);
            return 3221225485LL;
          }
        }
        v58[i] = v23;
        Current = DXGPROCESS::GetCurrent();
        v27 = v16[1].LayerIndex;
        v28 = Current;
        v29 = (volatile signed __int32 *)((char *)Current + 248);
        DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
        v30 = (v27 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v30 < *((_DWORD *)v28 + 74)
          && (v31 = (unsigned int)v30,
              v32 = *(_DWORD *)(*((_QWORD *)v28 + 35) + 16 * v30 + 8),
              ((v27 >> 25) & 0x60) == (v32 & 0x60))
          && (v32 & 0x2000) == 0
          && (v32 & 0x1F) != 0 )
        {
          v33 = *((_QWORD *)v28 + 35);
          v34 = 2 * v31;
          if ( (*(_BYTE *)(v33 + 8 * v34 + 8) & 0x1F) != 0xB )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 318;
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
            goto LABEL_30;
          }
          v35 = *(_QWORD *)(v33 + 8 * v34);
        }
        else
        {
LABEL_30:
          v35 = 0LL;
        }
        _InterlockedDecrement(v29 + 4);
        ExReleasePushLockSharedEx(v29, 0LL);
        KeLeaveCriticalRegion();
        if ( v35 )
        {
          DXGAUTOMUTEX::Initialize(&a6[2 * i], (struct DXGFASTMUTEX *const)(*(_QWORD *)(v35 + 32) + 32LL), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&a6[2 * i]);
          VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                               *(DXGSYNCOBJECT **)(v35 + 32),
                               *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL));
          v11 = 1;
          v15 = i;
          v55[27] = VidSchSyncObject;
          v55[28] = *(_QWORD *)&v16[1].FlipInterval;
          goto LABEL_14;
        }
        WdLogSingleEntry2(2LL, v16[1].LayerIndex, -1073741811LL);
        v50 = v16[1].LayerIndex;
        WdLogGlobalForLineNumber = 1539;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"hFlipToFence (0x%I64x) not found, returning 0x%I64x",
          v50,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
        return 3221225485LL;
      }
LABEL_14:
      Value = v16[1].InputFlags.Value;
      if ( (_DWORD)Value )
      {
        if ( (v16->InputFlags.Value & 1) == 0 )
        {
          WdLogSingleEntry2(2LL, LayerIndex, -1073741811LL);
          WdLogGlobalForLineNumber = 1557;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"hFlipAwayFence is not supported for disabling plane (0x%I64x), returning 0x%I64x",
            LayerIndex,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
          return 3221225485LL;
        }
        for ( k = 0; k < i; ++k )
        {
          if ( (_DWORD)Value == v58[k + 8] )
          {
            WdLogSingleEntry2(2LL, Value, -1073741811LL);
            v51 = v16[1].InputFlags.Value;
            WdLogGlobalForLineNumber = 1570;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Duplicate hFlipAwayFence (0x%I64x). FlipAwayFence must be different for every plane, returning 0x%I64x",
              v51,
              -1073741811LL,
              0LL,
              0LL,
              0LL);
            return 3221225485LL;
          }
        }
        v58[v15 + 8] = Value;
        v38 = DXGPROCESS::GetCurrent();
        v39 = v16[1].InputFlags.Value;
        v40 = v38;
        v41 = (volatile signed __int32 *)((char *)v38 + 248);
        DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v38 + 248));
        v42 = (v39 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v42 < *((_DWORD *)v40 + 74)
          && (v43 = (unsigned int)v42,
              v44 = *(_DWORD *)(*((_QWORD *)v40 + 35) + 16 * v42 + 8),
              ((v39 >> 25) & 0x60) == (v44 & 0x60))
          && (v44 & 0x2000) == 0
          && (v44 & 0x1F) != 0 )
        {
          v45 = *((_QWORD *)v40 + 35);
          v46 = 2 * v43;
          if ( (*(_BYTE *)(v45 + 8 * v46 + 8) & 0x1F) != 0xB )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 318;
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
            goto LABEL_44;
          }
          v47 = *(_QWORD *)(v45 + 8 * v46);
        }
        else
        {
LABEL_44:
          v47 = 0LL;
        }
        _InterlockedDecrement(v41 + 4);
        ExReleasePushLockSharedEx(v41, 0LL);
        KeLeaveCriticalRegion();
        if ( v47 )
        {
          DXGAUTOMUTEX::Initialize(&a7[2 * i], (struct DXGFASTMUTEX *const)(*(_QWORD *)(v47 + 32) + 32LL), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&a7[2 * i]);
          v48 = DXGSYNCOBJECT::GetVidSchSyncObject(
                  *(DXGSYNCOBJECT **)(v47 + 32),
                  *(struct ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL));
          v11 = 1;
          v55[29] = v48;
          v55[30] = *(_QWORD *)&v16[1].AllocationCount;
          goto LABEL_15;
        }
        WdLogSingleEntry2(2LL, v16[1].InputFlags.Value, -1073741811LL);
        v52 = v16[1].InputFlags.Value;
        WdLogGlobalForLineNumber = 1582;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"hFlipFromFence (0x%I64x) not found, returning 0x%I64x",
          v52,
          -1073741811LL,
          0LL,
          0LL,
          0LL);
        return 3221225485LL;
      }
LABEL_15:
      v9 = a2;
      v8 = a3;
      v7 = a4;
    }
    if ( !v11 )
    {
      if ( !*((_BYTE *)a5 + 8) )
      {
        WdLogSingleEntry5(0LL, 275LL, 4LL, a5, 0LL, 0LL);
        WdLogGlobalForLineNumber = 3117;
      }
      v13 = *(_QWORD *)a5;
      *((_BYTE *)a5 + 8) = 0;
      ExReleaseResourceLite(*(PERESOURCE *)(v13 + 608));
      KeLeaveCriticalRegion();
    }
  }
  return 0LL;
}
