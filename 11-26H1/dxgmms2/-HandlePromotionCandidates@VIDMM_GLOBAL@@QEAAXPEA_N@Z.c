/*
 * XREFs of ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x14012A214
 * Callers:
 *     VidMmWorkerThreadProc @ 0x140128480 (VidMmWorkerThreadProc.c)
 * Callees:
 *     ?IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x140029178 (-IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400292B0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?VidMmiQuerySystemTime@@YA_JXZ @ 0x140037658 (-VidMmiQuerySystemTime@@YA_JXZ.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?VidMmSetWorkerThreadTimeout@@YAXPEAUVIDMM_WORKER_THREAD@@_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x14010C224 (-VidMmSetWorkerThreadTimeout@@YAXPEAUVIDMM_WORKER_THREAD@@_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@.c)
 */

void __fastcall VIDMM_GLOBAL::HandlePromotionCandidates(VIDMM_GLOBAL *this, bool *a2)
{
  unsigned int v4; // edx
  unsigned int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int16 i; // si
  __int64 v12; // rcx
  _BYTE v13[56]; // [rsp+20h] [rbp-38h] BYREF
  int v14; // [rsp+70h] [rbp+18h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  if ( !byte_14008A5CC || (*((_DWORD *)this + 1746) & 0x802000) != 0 )
  {
    *a2 = 0;
    return;
  }
  if ( *((_DWORD *)this + 11286) )
    goto LABEL_24;
  if ( !*((_BYTE *)this + 45152) )
    goto LABEL_7;
  if ( !VIDMM_GLOBAL::IsPenaltyBoxEmpty((__int64)this) )
  {
LABEL_24:
    *a2 = 1;
    return;
  }
  *((_QWORD *)this + 5641) = VidMmiQuerySystemTime();
  *((_BYTE *)this + 45152) = 0;
LABEL_7:
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v13, (struct _KTHREAD **)this + 5152);
  v4 = *((_DWORD *)this + 1738);
  v5 = 0;
  if ( v4 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * v5);
      if ( (*(_BYTE *)(v6 + 44) & 4) != 0 && *(_QWORD *)(v6 + 600) != v6 + 600 )
        break;
      if ( ++v5 >= v4 )
        goto LABEL_11;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
    v7 = *((_QWORD *)this + 5641);
    v8 = *((_QWORD *)this + 5642);
    v9 = *((_QWORD *)this + 571) - v7;
    *a2 = 1;
    if ( v9 >= v8 )
    {
      if ( !v7 || *((_DWORD *)this + 11287) )
      {
        *((_DWORD *)this + 11287) = 0;
        *((_QWORD *)this + 5642) = qword_14008A5B0;
      }
      else
      {
        v10 = 2 * v8;
        *((_QWORD *)this + 5642) = v10;
        if ( v10 > qword_14008A5B8 )
          *((_QWORD *)this + 5642) = qword_14008A5B8;
      }
      v14 = 0;
      v15 = 0LL;
      DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v13, (struct _KTHREAD **)this + 5152);
      for ( i = 0; (unsigned int)i < *((_DWORD *)this + 1738); ++i )
      {
        v12 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * i);
        if ( (*(unsigned __int8 (__fastcall **)(__int64, int *, __int64 *))(*(_QWORD *)v12 + 328LL))(v12, &v14, &v15) )
          break;
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
      if ( v14 )
        *((_BYTE *)this + 45152) = 1;
    }
    else
    {
      VidMmSetWorkerThreadTimeout(*(_QWORD *)this, v9 - v8, 7);
    }
  }
  else
  {
LABEL_11:
    *((_DWORD *)this + 11287) = 0;
    *a2 = 0;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
  }
}
