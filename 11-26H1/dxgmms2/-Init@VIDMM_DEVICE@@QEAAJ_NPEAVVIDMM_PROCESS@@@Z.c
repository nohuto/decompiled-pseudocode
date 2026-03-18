/*
 * XREFs of ?Init@VIDMM_DEVICE@@QEAAJ_NPEAVVIDMM_PROCESS@@@Z @ 0x1400C9AE0
 * Callers:
 *     VidMmInitDevice @ 0x140043380 (VidMmInitDevice.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1400C8FA4 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14002E900 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?VidMmiQuerySystemTime@@YA_JXZ @ 0x140037658 (-VidMmiQuerySystemTime@@YA_JXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x14003F480 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z @ 0x1400CA0E0 (-Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z.c)
 *     ?Initialize@VIDMM_PHYSICAL_DEVICE@@QEAAJXZ @ 0x1400CB154 (-Initialize@VIDMM_PHYSICAL_DEVICE@@QEAAJXZ.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1400CB9E0 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 */

__int64 __fastcall VIDMM_DEVICE::Init(VIDMM_DEVICE *this, __int64 a2, struct VIDMM_PROCESS *a3)
{
  __int64 v5; // rax
  struct VIDMM_PROCESS *v6; // r8
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int i; // r15d
  __int64 v11; // rax
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  char *v14; // rax
  char *v15; // rsi
  unsigned int v16; // ebp
  __int64 v17; // rax
  char *v18; // rax
  char *v19; // rsi
  unsigned int j; // esi
  __int64 v21; // r14
  int v22; // r15d
  __int64 v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // r9
  VIDMM_PHYSICAL_DEVICE *v26; // rcx
  int v27; // r13d
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 result; // rax
  __int64 v32; // rbx
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned int v37; // ebp
  __int64 v38; // rax
  char *v39; // rax
  char *v40; // rsi
  int v41; // [rsp+20h] [rbp-58h]
  int v42; // [rsp+20h] [rbp-58h]

  if ( g_IsInternalReleaseOrDbg )
  {
    v5 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v5 + 24) = this;
    *(_QWORD *)(v5 + 32) = *(_QWORD *)this;
    WdLogGlobalForLineNumber = 423;
  }
  if ( a3 )
  {
    v6 = a3;
  }
  else if ( *((_QWORD *)this + 3) )
  {
    if ( DXGPROCESS::GetCurrent() && (v28 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8)) != 0 )
      v6 = *(struct VIDMM_PROCESS **)(v28 + 8);
    else
      v6 = 0LL;
  }
  else
  {
    v6 = *(struct VIDMM_PROCESS **)(*(_QWORD *)this + 40512LL);
  }
  *((_QWORD *)this + 1) = v6;
  if ( !v6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 432;
    DxgkLogInternalTriageEvent(v36, 0x40000LL);
    return 3221225473LL;
  }
  if ( *((_QWORD *)this + 3) )
  {
    v22 = VIDMM_PROCESS::OpenAdapter(v6, *(struct VIDMM_GLOBAL **)this);
    if ( v22 < 0 )
    {
      _InterlockedAdd(&dword_14008A708, 1u);
      WdLogSingleEntry0(6LL);
      v30 = 262145LL;
      WdLogGlobalForLineNumber = 448;
LABEL_42:
      DxgkLogInternalTriageEvent(v29, v30);
      return (unsigned int)v22;
    }
    *((_BYTE *)this + 58) |= 1u;
    v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 32LL)
                   + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 240LL));
  }
  else
  {
    v7 = *(_QWORD *)(*((_QWORD *)v6 + 4) + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 240LL));
  }
  *((_QWORD *)this + 2) = v7;
  v8 = 8LL * *((unsigned int *)this + 15);
  if ( !is_mul_ok(*((unsigned int *)this + 15), 8uLL) )
    v8 = -1LL;
  v9 = operator new[](v8, 0x61346956u, 256LL);
  *((_QWORD *)this + 5) = v9;
  if ( v9 )
  {
    for ( i = 0; ; ++i )
    {
      v11 = *((unsigned int *)this + 15);
      if ( i >= (unsigned int)v11 )
        break;
      v24 = (_QWORD *)operator new(24LL, 0x62346956u, 256LL);
      v25 = v24;
      if ( v24 )
      {
        *v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 40320LL) + 8LL * i);
        v24[1] = this;
        v24[2] = 0LL;
      }
      else
      {
        v25 = 0LL;
      }
      *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * i) = v25;
      v26 = *(VIDMM_PHYSICAL_DEVICE **)(*((_QWORD *)this + 5) + 8LL * i);
      if ( !v26 )
      {
        _InterlockedAdd(&dword_14008A8B0, 1u);
        WdLogSingleEntry0(6LL);
        v34 = 475;
        goto LABEL_62;
      }
      v27 = VIDMM_PHYSICAL_DEVICE::Initialize(v26);
      if ( v27 < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 482;
        DxgkLogInternalTriageEvent(0LL, 0x40000LL);
        return (unsigned int)v27;
      }
    }
    if ( !*((_QWORD *)this + 3) && a3 )
    {
LABEL_43:
      v32 = qword_14008A5A0;
      *((_QWORD *)this + 28) = v32 + VidMmiQuerySystemTime();
      return 0LL;
    }
    v12 = *((unsigned int *)this + 15);
    v13 = 32 * v11;
    if ( !is_mul_ok(v12, 0x20uLL) )
      v13 = -1LL;
    v14 = (char *)operator new[](v13, 0x38346956u, 256LL);
    v15 = v14;
    if ( v14 )
      `vector constructor iterator'(
        v14,
        32LL,
        v12,
        (void (__fastcall *)(char *))VIDMM_DEVICE_PAGING_QUEUE::VIDMM_DEVICE_PAGING_QUEUE);
    else
      v15 = 0LL;
    *((_QWORD *)this + 9) = v15;
    if ( v15 )
    {
      v16 = *((_DWORD *)this + 15);
      v17 = 32LL * v16;
      if ( !is_mul_ok(v16, 0x20uLL) )
        v17 = -1LL;
      v18 = (char *)operator new[](v17, 0x38346956u, 256LL);
      v19 = v18;
      if ( v18 )
        `vector constructor iterator'(
          v18,
          32LL,
          v16,
          (void (__fastcall *)(char *))VIDMM_DEVICE_PAGING_QUEUE::VIDMM_DEVICE_PAGING_QUEUE);
      else
        v19 = 0LL;
      *((_QWORD *)this + 10) = v19;
      if ( v19 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)this + 1) + 136LL) & 2) == 0 )
          goto LABEL_25;
        v37 = *((_DWORD *)this + 15);
        v38 = 32LL * v37;
        if ( !is_mul_ok(v37, 0x20uLL) )
          v38 = -1LL;
        v39 = (char *)operator new[](v38, 0x38346956u, 256LL);
        v40 = v39;
        if ( v39 )
          `vector constructor iterator'(
            v39,
            32LL,
            v37,
            (void (__fastcall *)(char *))VIDMM_DEVICE_PAGING_QUEUE::VIDMM_DEVICE_PAGING_QUEUE);
        else
          v40 = 0LL;
        *((_QWORD *)this + 11) = v40;
        if ( v40 )
        {
LABEL_25:
          for ( j = 0; ; ++j )
          {
            if ( j >= *((_DWORD *)this + 15) )
              goto LABEL_43;
            v21 = 32LL * j;
            LOBYTE(v41) = 0;
            v22 = VIDMM_DEVICE_PAGING_QUEUE::Initialize(v21 + *((_QWORD *)this + 9), this, j, 1LL, v41);
            if ( v22 < 0 )
              break;
            LOBYTE(v42) = 0;
            v22 = VIDMM_DEVICE_PAGING_QUEUE::Initialize(v21 + *((_QWORD *)this + 10), this, j, 2LL, v42);
            if ( v22 < 0 )
            {
              WdLogSingleEntry2(1LL, this, j);
              WdLogGlobalForLineNumber = 539;
LABEL_41:
              v30 = 0x40000LL;
              goto LABEL_42;
            }
            v23 = *((_QWORD *)this + 11);
            if ( v23 )
            {
              LOBYTE(v41) = 0;
              result = VIDMM_DEVICE_PAGING_QUEUE::Initialize(v21 + v23, this, j, 3LL, v41);
              if ( (int)result < 0 )
                return result;
            }
          }
          WdLogSingleEntry2(1LL, this, j);
          WdLogGlobalForLineNumber = 532;
          goto LABEL_41;
        }
        WdLogSingleEntry0(1LL);
        v34 = 522;
      }
      else
      {
        WdLogSingleEntry0(1LL);
        v34 = 506;
      }
    }
    else
    {
      WdLogSingleEntry0(1LL);
      v34 = 499;
    }
    v35 = 0x40000LL;
  }
  else
  {
    _InterlockedAdd(&dword_14008A8AC, 1u);
    WdLogSingleEntry0(6LL);
    v34 = 465;
LABEL_62:
    v35 = 262145LL;
  }
  WdLogGlobalForLineNumber = v34;
  DxgkLogInternalTriageEvent(v33, v35);
  return 3221225495LL;
}
