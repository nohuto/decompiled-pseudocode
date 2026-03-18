/*
 * XREFs of ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400D9F90
 * Callers:
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1400D9E38 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400DA3C8 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140030174 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x140037CA4 (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x14003B2E8 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ?VidMmGetFullPfnArray@@YAPEB_KPEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14003E1A4 (-VidMmGetFullPfnArray@@YAPEB_KPEBUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400DA3C8 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 */

__int64 __fastcall CVirtualAddressAllocator::RecommitVirtualAddressRanges(
        struct _KTHREAD **this,
        __int64 a2,
        struct VIDMM_ALLOC **a3)
{
  DXGPUSHLOCK *v3; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  CVirtualAddressAllocator *v8; // rsi
  unsigned __int64 v9; // r15
  unsigned int i; // ebx
  unsigned __int64 m; // rbp
  _QWORD *j; // rcx
  int v13; // edx
  unsigned int v14; // r10d
  unsigned __int64 v15; // r11
  _QWORD **v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  const struct VIDMM_GLOBAL_ALLOC *v20; // r15
  VIDMM_SEGMENT *v21; // rcx
  const unsigned __int64 *FullPfnArray; // rax
  _QWORD *v23; // r9
  const unsigned __int64 *v24; // r8
  __int64 v25; // rdx
  unsigned __int64 LogicalAddress; // rax
  int v27; // eax
  _QWORD *k; // rcx
  unsigned __int16 v29; // ax
  int v30; // edx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  const unsigned __int64 *v35; // [rsp+60h] [rbp-78h]
  __int64 v36; // [rsp+68h] [rbp-70h]
  char *v37; // [rsp+80h] [rbp-58h]
  __int128 v38; // [rsp+88h] [rbp-50h] BYREF
  char v39; // [rsp+E0h] [rbp+8h]
  unsigned int v41; // [rsp+F8h] [rbp+20h]

  v3 = (DXGPUSHLOCK *)(this + 8);
  v39 = 0;
  v37 = (char *)(this + 8);
  if ( this[9] != KeGetCurrentThread() )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v3, 0LL) )
    {
      DXGPUSHLOCK::LogEvent(v3, v6, v7);
      ExAcquirePushLockExclusiveEx(v3, 0LL);
    }
    *((_QWORD *)v3 + 1) = KeGetCurrentThread();
    v39 = 1;
  }
  v8 = this[4];
  LODWORD(v9) = 0;
  while ( v8 != (CVirtualAddressAllocator *)(this + 4) )
  {
    for ( i = 0; i < *((_DWORD *)this[12] + 1738); ++i )
    {
      if ( _bittest64(&a2, i) )
      {
        m = 0LL;
        for ( j = (_QWORD *)*((_QWORD *)v8 + 3 * i + 7); j; j = (_QWORD *)*j )
          m = (unsigned __int64)j;
        while ( 1 )
        {
          if ( !m )
            goto LABEL_11;
          v13 = *(_DWORD *)(m + 64) & 0xF;
          v35 = 0LL;
          v41 = 0;
          v14 = 0;
          v15 = 0LL;
          v38 = 0LL;
          if ( v13 != 5 )
          {
            switch ( v13 )
            {
              case 1:
              case 3:
              case 4:
                break;
              case 2:
                v31 = *(_QWORD *)(m + 56);
                v32 = *(_QWORD *)(v31 + 56);
                v23 = *(_QWORD **)(v31 + 64);
                v9 = *(unsigned int *)(v32 + 40);
                v24 = (const unsigned __int64 *)(v32 + 48);
                v35 = (const unsigned __int64 *)(v32 + 48);
                goto LABEL_33;
              case 6:
                v14 = -2;
                goto LABEL_49;
              case 7:
                v33 = *(_QWORD *)(m + 56);
                v34 = *(_QWORD *)(v33 + 72);
                v23 = *(_QWORD **)(v33 + 80);
                v9 = *(unsigned int *)(v34 + 40);
                v24 = (const unsigned __int64 *)(v34 + 48);
                v35 = (const unsigned __int64 *)(v34 + 48);
                goto LABEL_33;
              case 8:
              case 9:
                goto LABEL_49;
              default:
                goto LABEL_17;
            }
          }
          v20 = *(const struct VIDMM_GLOBAL_ALLOC **)(m + 56);
          if ( v13 == 1 )
            goto LABEL_27;
          if ( v13 == 3 )
            goto LABEL_29;
          v30 = v13 - 4;
          if ( !v30 )
            break;
          if ( v30 == 1 )
          {
            v20 = (const struct VIDMM_GLOBAL_ALLOC *)*((_QWORD *)v20 + 4);
            goto LABEL_27;
          }
LABEL_50:
          v20 = 0LL;
LABEL_29:
          if ( *((_DWORD *)v20 + 18) )
          {
            v36 = *(_QWORD *)v20;
            v21 = *(VIDMM_SEGMENT **)(*(_QWORD *)v20 + 64LL);
            if ( *((_DWORD *)v21 + 27) == 1 )
            {
              v29 = VIDMM_SEGMENT::DriverId(v21);
              v15 = *(_QWORD *)(v25 + 72);
              v14 = v29;
              v41 = v29;
            }
            else
            {
              FullPfnArray = VidMmGetFullPfnArray(v20);
              v23 = (_QWORD *)*((_QWORD *)v20 + 43);
              v24 = FullPfnArray;
              v25 = v36;
              v14 = 0;
              v15 = 0LL;
              v35 = FullPfnArray;
            }
            v9 = *(_QWORD *)(v25 + 16);
LABEL_33:
            if ( v24 )
            {
              LogicalAddress = SysMmGetLogicalAddress(v23);
              v14 = v41;
              *(_QWORD *)&v38 = (unsigned int)(v9 >> 12);
              if ( LogicalAddress )
              {
                *((_QWORD *)&v38 + 1) = LogicalAddress >> 12;
                DWORD1(v38) = 1;
              }
              else
              {
                *((_QWORD *)&v38 + 1) = v35;
              }
            }
            else
            {
LABEL_49:
              *((_QWORD *)&v38 + 1) = v15 >> 12;
              LODWORD(v38) = (unsigned int)v9 >> 12;
              DWORD1(v38) = 1;
            }
            LODWORD(v9) = 0;
            v27 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                    this,
                    m - 8,
                    i,
                    v14,
                    *(_QWORD *)(m + 72),
                    &v38,
                    0,
                    a3,
                    0LL,
                    0,
                    0LL);
            if ( v27 < 0 )
            {
              WdLogSingleEntry4(1LL, v27, *(_QWORD *)(m + 96), *(_QWORD *)(m + 104), i);
              WdLogGlobalForLineNumber = 3548;
              DxgkLogInternalTriageEvent(v18, 0x40000LL);
              goto LABEL_23;
            }
          }
          else
          {
LABEL_17:
            LODWORD(v9) = 0;
          }
          v16 = *(_QWORD ***)(m + 8);
          v17 = m;
          if ( v16 )
          {
            m = *(_QWORD *)(m + 8);
            for ( k = *v16; k; k = (_QWORD *)*k )
              m = (unsigned __int64)k;
          }
          else
          {
            for ( m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL; m; m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL )
            {
              if ( *(_QWORD *)m == v17 )
                break;
              v17 = m;
            }
          }
        }
        v20 = (const struct VIDMM_GLOBAL_ALLOC *)*((_QWORD *)v20 + 7);
LABEL_27:
        if ( v20 )
        {
          v20 = **(const struct VIDMM_GLOBAL_ALLOC ***)v20;
          goto LABEL_29;
        }
        goto LABEL_50;
      }
LABEL_11:
      ;
    }
    v8 = *(CVirtualAddressAllocator **)v8;
  }
LABEL_23:
  if ( v39 )
  {
    *((_QWORD *)v37 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v37, 0LL);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
