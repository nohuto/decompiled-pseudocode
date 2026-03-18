/*
 * XREFs of HandlePromotionCandidates @ 0x14011A818
 * Callers:
 *     ?HandlePromotionCandidates@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAA_NPEAIPEA_K@Z @ 0x14011A800 (-HandlePromotionCandidates@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAA_NPEAIPEA_K@Z.c)
 * Callees:
 *     VidSchIsDeviceBusy @ 0x14003B338 (VidSchIsDeviceBusy.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z @ 0x1400CF620 (-StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D1528 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEBUVIDMM_GLOBAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1400FFC9C (-GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEBUVIDMM_GLOBAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@E@Z.c)
 *     ?VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140102D7C (-VidMmSuspendAccessToAllocation@@YAPEAVVIDMM_DEVICE@@PEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_A.c)
 *     ?VidMmGetMostPreferredSegment@@YAPEAUVIDMM_SEGMENT_BASE@@PEAUVIDMM_PHYSICAL_ADAPTER@@U_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x14011681C (-VidMmGetMostPreferredSegment@@YAPEAUVIDMM_SEGMENT_BASE@@PEAUVIDMM_PHYSICAL_ADAPTER@@U_D3DDDI_SE.c)
 */

char __fastcall HandlePromotionCandidates(struct VIDMM_PHYSICAL_ADAPTER *a1, _DWORD *a2, _QWORD *a3)
{
  __int64 v3; // r11
  _QWORD *v4; // r10
  VIDMM_GLOBAL ***v6; // r9
  char *v7; // rax
  char *v8; // r12
  char *v9; // rdx
  char *v10; // rdi
  unsigned int i; // r13d
  _QWORD *v12; // r8
  _QWORD *v13; // r15
  _QWORD *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rcx
  _QWORD *v18; // r14
  __int64 **v19; // rax
  __int64 *v20; // r11
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v24; // rax
  char **v25; // rcx
  __int64 MostPreferredSegment; // rax
  __int64 v27; // r11
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r10
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // r8
  unsigned __int64 LargestGap; // rax
  bool v34; // cf
  __int64 v35; // rbx
  VIDMM_GLOBAL ***v36; // [rsp+30h] [rbp-78h]
  __int64 v37; // [rsp+38h] [rbp-70h]
  _QWORD *v38; // [rsp+40h] [rbp-68h]
  struct VIDMM_GLOBAL_ALLOC ***v39; // [rsp+48h] [rbp-60h]
  _QWORD *v40; // [rsp+50h] [rbp-58h]
  _QWORD *v41; // [rsp+58h] [rbp-50h]
  char v42; // [rsp+B0h] [rbp+8h]
  bool v45; // [rsp+C8h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = a3;
  if ( *((char *)a1 + 558) < 0 )
  {
    v6 = (VIDMM_GLOBAL ***)*((_QWORD *)a1 + 7);
    v7 = (char *)a1 + 600;
    v8 = (char *)*((_QWORD *)a1 + 75);
    v36 = v6;
    while ( 1 )
    {
      v9 = v8;
      if ( v8 == v7 )
        return 0;
      v10 = v8;
      v8 = *(char **)v8;
      if ( *((_QWORD *)v10 + 36) != v3 || *((_QWORD *)v10 + 35) != v3 )
        break;
      v42 = v3;
      v37 = v3;
      if ( (*((_QWORD *)v10 + 32) != v3 || *((_QWORD *)v10 + 33) != v3 || *((_QWORD *)v10 + 34) != v3)
        && *((_QWORD *)v10 + 25) < *((_QWORD *)v10 + 3) )
      {
        goto LABEL_6;
      }
      v24 = *(_QWORD *)v9;
      if ( *(char **)(*(_QWORD *)v9 + 8LL) != v10 || (v25 = (char **)*((_QWORD *)v10 + 1), *v25 != v10) )
        __fastfail(3u);
      *v25 = (char *)v24;
      *(_QWORD *)(v24 + 8) = v25;
      *(_QWORD *)v9 = v3;
      *((_QWORD *)v10 + 1) = v3;
LABEL_37:
      v7 = (char *)a1 + 600;
    }
    v42 = 1;
    v37 = v3;
LABEL_6:
    for ( i = v3; ; ++i )
    {
      if ( i >= *((_DWORD *)a1 + 34) )
        goto LABEL_37;
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 219) + 8LL * i) + 108LL) != 1 )
        break;
LABEL_9:
      ;
    }
    v12 = (_QWORD *)(*(_QWORD *)(304LL * *((unsigned __int16 *)a1 + 36) + *(_QWORD *)(*((_QWORD *)v10 + 2) + 8LL))
                   + 184LL * (unsigned __int16)i
                   + 40);
    v40 = v12;
LABEL_11:
    v13 = (_QWORD *)*v12;
    do
    {
LABEL_12:
      v14 = v13;
      v38 = v13;
      if ( v13 == v12 )
        goto LABEL_9;
      v15 = v13[4];
      v13 = (_QWORD *)*v13;
      v16 = *(_QWORD *)(v15 + 32);
    }
    while ( !v16
         || (*(_BYTE *)(v15 + 312) & 7u) >= 3
         || *(_QWORD *)(v16 + 200) < (__int64)v6[5641] && !VidSchIsDeviceBusy(v16) );
    v17 = v14 + 2;
    v18 = (_QWORD *)v14[2];
    v41 = v14 + 2;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v18 == v17 )
          {
            v12 = v40;
            v3 = 0LL;
            if ( *v13 )
              goto LABEL_12;
            goto LABEL_11;
          }
          v39 = (struct VIDMM_GLOBAL_ALLOC ***)(v18 - 7);
          v19 = (__int64 **)*(v18 - 7);
          v20 = *v19;
          v21 = **v19;
          do
            v18 = (_QWORD *)*v18;
          while ( v18 != v17 && (__int64 **)*(v18 - 7) == v19 );
          if ( (v20[3] & 0x10) == 0 )
          {
            v22 = v20[46];
            if ( !*(_WORD *)(v22 + 8) && *(int *)(v22 + 16) <= 0 )
              break;
          }
        }
        if ( v42 )
          break;
        v17 = v14 + 2;
        if ( (unsigned __int64)(*(_QWORD *)(v21 + 16) + v37) <= *((_QWORD *)v10 + 3) - *((_QWORD *)v10 + 25) )
          goto LABEL_42;
      }
      if ( *(_DWORD *)(v21 + 48) >= 0xA0000000 )
      {
LABEL_42:
        if ( (*((_DWORD *)v20 + 7) & 0x80u) == 0 || !*((_DWORD *)v20 + 46) )
        {
          if ( *a2
            && (*v4 + *(_QWORD *)(v21 + 16) > (unsigned __int64)qword_14008A5C0 || *a2 > (unsigned int)dword_14008A5C8) )
          {
            return 1;
          }
          if ( (*((_DWORD *)v6[3] + 111) & 0x200) != 0
            && *(_DWORD *)(v21 + 48) < 0xA0000000
            && (MostPreferredSegment = (__int64)VidMmGetMostPreferredSegment(
                                                  a1,
                                                  *(struct _D3DDDI_SEGMENTPREFERENCE *)(v21 + 44),
                                                  &v45),
                v6 = v36,
                v28 = MostPreferredSegment - 8,
                v29 = -MostPreferredSegment,
                (v30 = v28 & -(__int64)(v29 != 0)) != 0) )
          {
            v31 = *(_QWORD *)(v21 + 16);
            v32 = *(_QWORD *)((v28 & -(__int64)(v29 != 0)) + 0x50) - *(_QWORD *)((v28 & -(__int64)(v29 != 0)) + 0x58);
            v17 = v41;
            if ( v32 < 3 * v31 )
            {
              v14 = v38;
              v4 = a3;
            }
            else
            {
              LargestGap = VIDMM_SEGMENT::GetLargestGap(v30, v27, 0, 1u);
              v6 = v36;
              v34 = LargestGap < v31;
              v14 = v38;
              v4 = a3;
              v17 = v38 + 2;
              if ( !v34 )
                goto LABEL_52;
            }
          }
          else
          {
LABEL_52:
            if ( (*(_BYTE *)(v14[4] + 58LL) & 4) == 0 )
            {
              ++*((_DWORD *)v6 + 11286);
              v35 = v14[4];
              *(_BYTE *)(v35 + 58) |= 4u;
              *(LARGE_INTEGER *)(v35 + 48) = KeQueryPerformanceCounter(0LL);
              v14 = v38;
            }
            ++*a2;
            *a3 += *(_QWORD *)(v21 + 16);
            v37 += *(_QWORD *)(v21 + 16);
            VIDMM_GLOBAL::StartPreparation((__int64)v36, 0xFFFFFFFF, 0LL, 0LL, 0x3ECu);
            VidMmSuspendAccessToAllocation(*v36, **v39);
            VIDMM_GLOBAL::EndPreparation((VIDMM_GLOBAL *)v36, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
            v6 = v36;
            v4 = a3;
            *((_DWORD *)**v39 + 6) |= 0x100000u;
            v17 = v14 + 2;
          }
        }
      }
    }
  }
  return 0;
}
