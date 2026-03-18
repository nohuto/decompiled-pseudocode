/*
 * XREFs of ?EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ @ 0x14009D838
 * Callers:
 *     VidMmEnableIoMmuIsolation @ 0x14004D520 (VidMmEnableIoMmuIsolation.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D09E8 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140031E00 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035970 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1400D1928 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400D8DB4 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400E499C (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::EnableIoMmuIsolation(VIDMM_GLOBAL *this)
{
  _DWORD *v2; // rdi
  unsigned __int16 v3; // bp
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  _DWORD *v7; // rbp
  __int64 v8; // rbx
  unsigned __int64 LogicalAddress; // rax
  int v10; // eax
  __int64 v11; // rdx
  unsigned __int16 v13; // bx
  __int64 v14; // rcx
  VIDMM_GLOBAL *i; // r14
  __int64 v16; // rbx
  unsigned __int64 v17; // rax
  int v18; // eax
  VIDMM_GLOBAL *j; // r14
  __int64 v20; // rbx
  unsigned __int64 v21; // rax
  int v22; // eax
  __int64 *k; // rdi
  __int64 v24; // rbx
  unsigned __int64 v25; // rax
  int v26; // eax
  char v27; // [rsp+20h] [rbp-A8h]
  int v28; // [rsp+20h] [rbp-A8h]
  _BYTE v29[16]; // [rsp+40h] [rbp-88h] BYREF
  _DWORD v30[24]; // [rsp+50h] [rbp-78h] BYREF

  if ( (*((_BYTE *)this + 41064) & 0xC) != 0 )
    return 0LL;
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
  {
    v2 = (_DWORD *)((char *)this + 6952);
    v3 = 0;
    if ( *((_DWORD *)this + 1738) )
    {
      while ( 1 )
      {
        v4 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * v3);
        v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 152LL))(v4);
        v6 = v5;
        if ( v5 < 0 )
          break;
        if ( (unsigned int)++v3 >= *v2 )
        {
          v7 = (_DWORD *)((char *)this + 6952);
          goto LABEL_9;
        }
      }
      WdLogSingleEntry1(3LL, v5);
      WdLogGlobalForLineNumber = 29247;
    }
    else
    {
      v7 = (_DWORD *)((char *)this + 6952);
LABEL_9:
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
      v8 = *((_QWORD *)this + 5660);
      LogicalAddress = VidMmiGetLogicalAddress(*((void **)this + 5661), 0LL);
      v27 = 0;
      v10 = SysMmMapPagesToIommu(
              *(_QWORD *)(*((_QWORD *)this + 3) + 224LL),
              LogicalAddress,
              v8 + 48,
              (unsigned __int64)*(unsigned int *)(v8 + 40) >> 12,
              v27,
              8,
              this);
      v6 = v10;
      if ( v10 >= 0 )
      {
        v13 = 0;
        if ( *v2 )
        {
          do
          {
            LOBYTE(v11) = 1;
            v14 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * v13);
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 208LL))(v14, v11);
            ++v13;
          }
          while ( (unsigned int)v13 < *v7 );
        }
        DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
          (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v29,
          (VIDMM_GLOBAL *)((char *)this + 3768),
          1);
        for ( i = (VIDMM_GLOBAL *)*((_QWORD *)this + 467);
              i != (VIDMM_GLOBAL *)((char *)this + 3736);
              i = *(VIDMM_GLOBAL **)i )
        {
          v16 = *((_QWORD *)i + 5);
          v17 = VidMmiGetLogicalAddress(*((void **)i + 6), 0LL);
          LOBYTE(v28) = 0;
          v18 = SysMmMapPagesToIommu(
                  *(_QWORD *)(*((_QWORD *)this + 3) + 224LL),
                  v17,
                  v16 + 48,
                  (unsigned __int64)*(unsigned int *)(v16 + 40) >> 12,
                  v28,
                  4,
                  (char *)i - 16);
          v6 = v18;
          if ( v18 < 0 )
          {
            WdLogSingleEntry1(3LL, v18);
            WdLogGlobalForLineNumber = 29322;
            goto LABEL_31;
          }
        }
        for ( j = (VIDMM_GLOBAL *)*((_QWORD *)this + 469);
              j != (VIDMM_GLOBAL *)((char *)this + 3752);
              j = *(VIDMM_GLOBAL **)j )
        {
          v20 = *((_QWORD *)j + 8);
          v21 = VidMmiGetLogicalAddress(*((void **)j + 9), 0LL);
          LOBYTE(v28) = 0;
          v22 = SysMmMapPagesToIommu(
                  *(_QWORD *)(*((_QWORD *)this + 3) + 224LL),
                  v21,
                  v20 + 48,
                  (unsigned __int64)*(unsigned int *)(v20 + 40) >> 12,
                  v28,
                  5,
                  (char *)j - 8);
          v6 = v22;
          if ( v22 < 0 )
          {
            WdLogSingleEntry1(3LL, v22);
            WdLogGlobalForLineNumber = 29341;
            goto LABEL_31;
          }
        }
        *((_BYTE *)this + 40100) = 1;
        DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v29);
        DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
          (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v29,
          (VIDMM_GLOBAL *)((char *)this + 40120),
          1);
        for ( k = (__int64 *)*((_QWORD *)this + 5013); ; k = (__int64 *)*k )
        {
          if ( k == (__int64 *)((char *)this + 40104) )
          {
            *((_BYTE *)this + 40144) = 1;
            DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v29);
            *((_BYTE *)this + 40098) = 1;
            return 0LL;
          }
          v24 = k[6];
          v25 = VidMmiGetLogicalAddress((void *)k[7], 0LL);
          LOBYTE(v28) = 0;
          v26 = SysMmMapPagesToIommu(
                  *(_QWORD *)(*((_QWORD *)this + 3) + 224LL),
                  v25,
                  v24 + 48,
                  (unsigned __int64)*(unsigned int *)(v24 + 40) >> 12,
                  v28,
                  6,
                  k);
          v6 = v26;
          if ( v26 < 0 )
            break;
        }
        WdLogSingleEntry1(3LL, v26);
        WdLogGlobalForLineNumber = 29369;
LABEL_31:
        DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v29);
      }
      else
      {
        WdLogSingleEntry2(3LL, this, v10);
        WdLogGlobalForLineNumber = 29272;
      }
    }
    return v6;
  }
  else
  {
    memset(&v30[1], 0, 0x54uLL);
    v30[0] = 130;
    return VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v30, 1);
  }
}
