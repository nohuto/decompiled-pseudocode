/*
 * XREFs of ?InitForPagingProcess@VIDMM_DEVICE@@QEAAJXZ @ 0x1400A7330
 * Callers:
 *     ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1400AAA6C (-InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Initialize@VIDMM_PHYSICAL_DEVICE@@QEAAJXZ @ 0x1400CB154 (-Initialize@VIDMM_PHYSICAL_DEVICE@@QEAAJXZ.c)
 */

__int64 __fastcall VIDMM_DEVICE::InitForPagingProcess(VIDMM_DEVICE *this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  unsigned int i; // edi
  _QWORD *v12; // rax
  _QWORD *v13; // r8
  VIDMM_PHYSICAL_DEVICE *v14; // rcx
  int v15; // esi
  __int64 v16; // rcx

  if ( g_IsInternalReleaseOrDbg )
  {
    v2 = WdLogNewEntry5_WdTrace();
    *(_QWORD *)(v2 + 24) = this;
    *(_QWORD *)(v2 + 32) = *(_QWORD *)this;
    WdLogGlobalForLineNumber = 589;
  }
  v3 = *(_QWORD *)this;
  v4 = *(_QWORD *)(*(_QWORD *)this + 40512LL);
  *((_QWORD *)this + 1) = v4;
  if ( v4 )
  {
    *((_QWORD *)this + 2) = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8LL * *(unsigned int *)(*(_QWORD *)(v3 + 24) + 240LL));
    v7 = 8LL * *((unsigned int *)this + 15);
    if ( !is_mul_ok(*((unsigned int *)this + 15), 8uLL) )
      v7 = -1LL;
    v8 = operator new[](v7, 0x61346956u, 256LL);
    *((_QWORD *)this + 5) = v8;
    if ( v8 )
    {
      for ( i = 0; i < *((_DWORD *)this + 15); ++i )
      {
        v12 = (_QWORD *)operator new(24LL, 0x62346956u, 256LL);
        v13 = v12;
        if ( v12 )
        {
          *v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 40320LL) + 8LL * i);
          v12[1] = this;
          v12[2] = 0LL;
        }
        else
        {
          v13 = 0LL;
        }
        *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * i) = v13;
        v14 = *(VIDMM_PHYSICAL_DEVICE **)(*((_QWORD *)this + 5) + 8LL * i);
        if ( !v14 )
        {
          _InterlockedIncrement(&dword_14008A8B0);
          WdLogSingleEntry0(6LL);
          v10 = 618;
          goto LABEL_9;
        }
        v15 = VIDMM_PHYSICAL_DEVICE::Initialize(v14);
        if ( v15 < 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 625;
          DxgkLogInternalTriageEvent(v16, 0x40000LL);
          return (unsigned int)v15;
        }
      }
      return 0LL;
    }
    else
    {
      _InterlockedIncrement(&dword_14008A8AC);
      WdLogSingleEntry0(6LL);
      v10 = 608;
LABEL_9:
      WdLogGlobalForLineNumber = v10;
      DxgkLogInternalTriageEvent(v9, 262145LL);
      return 3221225495LL;
    }
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 598;
    DxgkLogInternalTriageEvent(v5, 0x40000LL);
    return 3221225473LL;
  }
}
