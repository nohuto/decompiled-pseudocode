/*
 * XREFs of ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x140113CB0
 * Callers:
 *     ?OfferAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x140113C7C (-OfferAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OF.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14002BFF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14002C1F0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     VidSchSubmitDeviceCommand @ 0x140030D50 (VidSchSubmitDeviceCommand.c)
 *     ?VidMmOfferAllocationCallback@@YAXPEAX@Z @ 0x1400319F0 (-VidMmOfferAllocationCallback@@YAXPEAX@Z.c)
 *     VidMmAddOfferReference @ 0x14003C3AC (VidMmAddOfferReference.c)
 *     McTemplateK0pu_EtwWriteTransfer @ 0x1400416F8 (McTemplateK0pu_EtwWriteTransfer.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidSchFlushDevice @ 0x1400E8640 (VidSchFlushDevice.c)
 */

__int64 __fastcall VIDMM_GLOBAL::OfferOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_ALLOC *a2,
        enum _D3DKMT_OFFER_PRIORITY a3,
        struct _D3DKMT_OFFER_FLAGS a4)
{
  unsigned int v4; // edi
  char v5; // bl
  __int64 v6; // r15
  struct VIDMM_ALLOC *v7; // r13
  __int64 v9; // rsi
  int v10; // ecx
  int v12; // r15d
  int v13; // r15d
  int v14; // r15d
  char v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD *v22; // rax
  VIDMM_GLOBAL *v23; // rcx
  VIDMM_GLOBAL **v24; // rdx
  bool v25; // r9
  _QWORD *v26; // r15
  _QWORD *v27; // r8
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rsi
  _QWORD *i; // rbx
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  bool v39; // [rsp+38h] [rbp-49h]
  signed __int16 v40; // [rsp+3Ah] [rbp-47h]
  int v41[2]; // [rsp+40h] [rbp-41h]
  __int64 v42; // [rsp+40h] [rbp-41h]
  __int128 v43; // [rsp+48h] [rbp-39h] BYREF
  __int64 v44; // [rsp+60h] [rbp-21h]
  _QWORD v45[10]; // [rsp+68h] [rbp-19h] BYREF

  v4 = 0;
  v5 = (char)a4.0;
  v6 = a3;
  v7 = a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
    WdLogGlobalForLineNumber = 6183;
  }
  v9 = **(_QWORD **)v7;
  v44 = v9;
  *(_QWORD *)v41 = *(_QWORD *)v9;
  v10 = **(_DWORD **)(v9 + 368);
  if ( (v10 & 0x40000000) != 0 || v10 < 0 )
  {
    WdLogSingleEntry1(3LL, v7);
    WdLogGlobalForLineNumber = 6195;
    return 3221225485LL;
  }
  if ( (unsigned int)(v6 - 1) > 3 )
  {
    WdLogSingleEntry2(3LL, v7, v6);
    WdLogGlobalForLineNumber = 6202;
    return 3221225485LL;
  }
  *(_QWORD *)&v43 = v9 + 304;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v9 + 304, 0LL);
  *(_QWORD *)(v9 + 312) = KeGetCurrentThread();
  if ( *(_DWORD *)(v9 + 184) )
  {
    if ( (*((_BYTE *)this + 41064) & 0x20) == 0 )
    {
      WdLogSingleEntry1(3LL, v7);
      WdLogGlobalForLineNumber = 6223;
      if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
      {
        v36 = v43;
        *(_QWORD *)(v43 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v36, 0LL);
        KeLeaveCriticalRegion();
        return 3221225485LL;
      }
    }
  }
  v12 = v6 - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 == 1 )
          *(_DWORD *)(v9 + 288) = *(_DWORD *)(*(_QWORD *)v9 + 48LL) < 0xA0000000 ? 2 : 4;
      }
      else
      {
        *(_DWORD *)(v9 + 288) = 3;
      }
    }
    else
    {
      *(_DWORD *)(v9 + 288) = 2;
    }
  }
  else
  {
    *(_DWORD *)(v9 + 288) = 1;
  }
  if ( (*((_BYTE *)this + 41065) & 0x20) != 0 )
    return 0LL;
  VidMmAddOfferReference((__int64)v7);
  v39 = 0;
  v15 = 0;
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v9 + 136));
  v40 = _InterlockedCompareExchange16((volatile signed __int16 *)(*((_QWORD *)v7 + 12) + 8LL), 1, 0);
  *(_QWORD *)(v9 + 312) = 0LL;
  ExReleasePushLockExclusiveEx(v9 + 304, 0LL);
  KeLeaveCriticalRegion();
  if ( !v40
    && ((v5 & 2) != 0 || dword_14008A60C)
    && (*((_BYTE *)this + 41064) & 0x20) == 0
    && (**(_DWORD **)(v9 + 368) & 0x400030) == 0
    && (*(_DWORD *)(v9 + 28) & 0x30) == 0 )
  {
    *(_DWORD *)(v9 + 32) |= 0x40u;
    v15 = 1;
    _InterlockedAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 8LL) + 72LL) + 440LL),
      *(_QWORD *)(*(_QWORD *)v41 + 16LL));
    _InterlockedAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 8LL) + 72LL) + 432LL),
      1uLL);
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v9 + 136));
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)&v43, (struct _KTHREAD **)this + 5031);
  if ( !v40 )
  {
    v22 = (_QWORD *)((char *)this + 39912);
    v23 = (VIDMM_GLOBAL *)(v9 + 256);
    v24 = (VIDMM_GLOBAL **)*((_QWORD *)this + 4990);
    v25 = *v22 == (_QWORD)v22;
    v39 = v25;
    if ( *v24 == (VIDMM_GLOBAL *)((char *)this + 39912) )
    {
      *(_QWORD *)v23 = v22;
      *(_QWORD *)(v9 + 264) = v24;
      *v24 = v23;
      *((_QWORD *)this + 4990) = v23;
      *(_QWORD *)(v9 + 296) = *((_QWORD *)this + 571);
      if ( !v15 )
        goto LABEL_17;
      v27 = (_QWORD *)(v9 + 272);
      v28 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) + 8LL) + 32LL)
                      + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL));
      v29 = *(_QWORD **)(v28 + 96);
      v30 = v28 + 88;
      if ( *v29 == v30 )
      {
        *v27 = v30;
        *(_QWORD *)(v9 + 280) = v29;
        *v29 = v27;
        *(_QWORD *)(v30 + 8) = v27;
        v39 = v25;
        goto LABEL_17;
      }
    }
    __fastfail(3u);
  }
LABEL_17:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v43);
  if ( v40 )
  {
    WdLogSingleEntry2(3LL, v7, *(unsigned __int16 *)(*((_QWORD *)v7 + 12) + 8LL));
    WdLogGlobalForLineNumber = 6505;
    v4 = DxgkVidMmAllowFailOnOfferReclaimErrors() != 0 ? 0xC000000D : 0;
  }
  else
  {
    if ( (**(_DWORD **)(v9 + 368) & 0x20000000) != 0 )
    {
      if ( (v5 & 2) != 0 || dword_14008A60C )
      {
        v37 = *(_QWORD *)(*(_QWORD *)v41 + 16LL);
        _InterlockedAdd((volatile signed __int32 *)this + 1952, 1u);
        _InterlockedAdd64((volatile signed __int64 *)this + 977, v37);
      }
      v38 = *(_QWORD *)(*(_QWORD *)v41 + 16LL);
      _InterlockedAdd((volatile signed __int32 *)this + 1948, 1u);
      _InterlockedAdd64((volatile signed __int64 *)this + 975, v38);
      v16 = 7136LL;
      v17 = (__int64)this;
    }
    else
    {
      v16 = (__int64)this;
      v17 = 7136LL;
    }
    v18 = *(_QWORD *)(*(_QWORD *)v41 + 16LL);
    _InterlockedAdd((volatile signed __int32 *)(v17 + v16 + 640), 1u);
    _InterlockedAdd64((volatile signed __int64 *)(v17 + v16 + 648), v18);
    if ( (v5 & 1) == 0 )
    {
      memset(v45, 0, sizeof(v45));
      LODWORD(v45[5]) = 3;
      v45[3] = VidMmOfferAllocationCallback;
      LODWORD(v45[0]) = 1;
      DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v9 + 136));
      v26 = *(_QWORD **)(v9 + 112);
      if ( v26 != (_QWORD *)(v9 + 112) )
      {
        v31 = (_QWORD *)(v9 + 112);
        do
        {
          for ( i = (_QWORD *)*(v26 - 2); i != v26 - 2; i = (_QWORD *)*i )
          {
            if ( (*(_DWORD *)(i - 1) & 1) == 0 )
            {
              VidMmAddOfferReference((__int64)(i - 5));
              v34 = *(_QWORD *)(v33 + 8);
              v45[6] = v33;
              v42 = *(_QWORD *)(v34 + 32);
              v35 = VidSchSubmitDeviceCommand(v42, (__int64)v45);
              if ( v35 < 0 )
              {
                WdLogSingleEntry1(3LL, v35);
                WdLogGlobalForLineNumber = 6468;
                v43 = 0LL;
                LODWORD(v43) = 5;
                VidSchFlushDevice(v42, (int *)&v43, 0xFFFFFFFD, 0LL);
                LODWORD(v45[0]) = 0;
                VidSchSubmitDeviceCommand(v42, (__int64)v45);
              }
            }
          }
          v26 = (_QWORD *)*v26;
        }
        while ( v26 != v31 );
        v9 = v44;
        v7 = a2;
      }
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v9 + 136));
    }
    if ( v39 )
      KeSetEvent(*(PRKEVENT *)(*(_QWORD *)this + 24LL), 0, 0);
  }
  VidMmOfferAllocationCallback(v7);
  if ( (byte_14008A201 & 1) != 0 )
  {
    LOBYTE(v20) = *(_BYTE *)(v9 + 288);
    McTemplateK0pu_EtwWriteTransfer(v20, v19, v21, v7, v20);
  }
  return v4;
}
