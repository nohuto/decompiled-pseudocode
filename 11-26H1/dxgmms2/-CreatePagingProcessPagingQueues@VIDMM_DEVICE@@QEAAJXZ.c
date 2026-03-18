/*
 * XREFs of ?CreatePagingProcessPagingQueues@VIDMM_DEVICE@@QEAAJXZ @ 0x1400A70A8
 * Callers:
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1400A320C (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?VidMmiQuerySystemTime@@YA_JXZ @ 0x140037658 (-VidMmiQuerySystemTime@@YA_JXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x14003F480 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z @ 0x1400CA0E0 (-Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z.c)
 */

__int64 __fastcall VIDMM_DEVICE::CreatePagingProcessPagingQueues(VIDMM_DEVICE *this)
{
  __int64 v2; // rax
  unsigned int v3; // esi
  __int64 v4; // rax
  char *v5; // rax
  char *v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  __int64 result; // rax
  unsigned int v10; // esi
  __int64 v11; // rax
  char *v12; // rax
  char *v13; // rbx
  unsigned int v14; // esi
  __int64 v15; // rax
  char *v16; // rax
  char *v17; // rbx
  unsigned int i; // ebx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rbx
  int v22; // [rsp+20h] [rbp-38h]
  int v23; // [rsp+20h] [rbp-38h]

  if ( g_IsInternalReleaseOrDbg )
  {
    v2 = WdLogNewEntry5_WdTrace();
    *(_QWORD *)(v2 + 24) = this;
    *(_QWORD *)(v2 + 32) = *(_QWORD *)this;
    WdLogGlobalForLineNumber = 662;
  }
  v3 = *((_DWORD *)this + 15);
  v4 = 32LL * v3;
  if ( !is_mul_ok(v3, 0x20uLL) )
    v4 = -1LL;
  v5 = (char *)operator new[](v4, 0x38346956u, 256LL);
  v6 = v5;
  if ( v5 )
    `vector constructor iterator'(
      v5,
      32LL,
      v3,
      (void (__fastcall *)(char *))VIDMM_DEVICE_PAGING_QUEUE::VIDMM_DEVICE_PAGING_QUEUE);
  else
    v6 = 0LL;
  *((_QWORD *)this + 9) = v6;
  if ( !v6 )
  {
    WdLogSingleEntry0(1LL);
    v8 = 674;
LABEL_10:
    WdLogGlobalForLineNumber = v8;
    DxgkLogInternalTriageEvent(v7, 0x40000LL);
    return 3221225495LL;
  }
  v10 = *((_DWORD *)this + 15);
  v11 = 32LL * v10;
  if ( !is_mul_ok(v10, 0x20uLL) )
    v11 = -1LL;
  v12 = (char *)operator new[](v11, 0x38346956u, 256LL);
  v13 = v12;
  if ( v12 )
    `vector constructor iterator'(
      v12,
      32LL,
      v10,
      (void (__fastcall *)(char *))VIDMM_DEVICE_PAGING_QUEUE::VIDMM_DEVICE_PAGING_QUEUE);
  else
    v13 = 0LL;
  *((_QWORD *)this + 10) = v13;
  if ( !v13 )
  {
    WdLogSingleEntry0(1LL);
    v8 = 681;
    goto LABEL_10;
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 1) + 136LL) & 2) != 0 )
  {
    v14 = *((_DWORD *)this + 15);
    v15 = 32LL * v14;
    if ( !is_mul_ok(v14, 0x20uLL) )
      v15 = -1LL;
    v16 = (char *)operator new[](v15, 0x38346956u, 256LL);
    v17 = v16;
    if ( v16 )
      `vector constructor iterator'(
        v16,
        32LL,
        v14,
        (void (__fastcall *)(char *))VIDMM_DEVICE_PAGING_QUEUE::VIDMM_DEVICE_PAGING_QUEUE);
    else
      v17 = 0LL;
    *((_QWORD *)this + 11) = v17;
    if ( !v17 )
    {
      WdLogSingleEntry0(1LL);
      v8 = 697;
      goto LABEL_10;
    }
  }
  for ( i = 0; i < *((_DWORD *)this + 15); ++i )
  {
    v19 = 32LL * i;
    LOBYTE(v22) = 1;
    result = VIDMM_DEVICE_PAGING_QUEUE::Initialize(v19 + *((_QWORD *)this + 9), this, i, 1LL, v22);
    if ( (int)result < 0 )
      return result;
    LOBYTE(v23) = 1;
    result = VIDMM_DEVICE_PAGING_QUEUE::Initialize(v19 + *((_QWORD *)this + 10), this, i, 2LL, v23);
    if ( (int)result < 0 )
      return result;
    v20 = *((_QWORD *)this + 11);
    if ( v20 )
    {
      LOBYTE(v22) = 1;
      result = VIDMM_DEVICE_PAGING_QUEUE::Initialize(v19 + v20, this, i, 3LL, v22);
      if ( (int)result < 0 )
        return result;
    }
  }
  v21 = qword_14008A5A0;
  *((_QWORD *)this + 28) = v21 + VidMmiQuerySystemTime();
  return 0LL;
}
