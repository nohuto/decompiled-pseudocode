/*
 * XREFs of MiLogStrongCodeDriverLoadFailure @ 0x140775CFC
 * Callers:
 *     MmLoadSystemImageEx @ 0x140A39A74 (MmLoadSystemImageEx.c)
 *     MiProcessKernelUmaImageLoadConfig @ 0x140B07A50 (MiProcessKernelUmaImageLoadConfig.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x140B07BEC (MiProcessKernelCfgImageLoadConfig.c)
 *     MiSetImportTableProtection @ 0x140B55DE4 (MiSetImportTableProtection.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x140453678 (_tlgCreate1Sz_char.c)
 *     MmReleaseLoadLock @ 0x14049E200 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404A5040 (MmAcquireLoadLock.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

void __fastcall MiLogStrongCodeDriverLoadFailure(const CHAR *Src, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rdi
  __int64 v6; // rbx
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  __int64 v9; // rbx
  void *v10; // rcx
  struct _KTHREAD *Lock; // rax
  struct _LIST_ENTRY *Blink; // rcx
  int v13; // [rsp+20h] [rbp-D8h]
  int v14; // [rsp+28h] [rbp-D0h]
  int v15; // [rsp+40h] [rbp-B8h] BYREF
  int v16; // [rsp+44h] [rbp-B4h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+50h] [rbp-A8h] BYREF
  _BYTE v19[16]; // [rsp+70h] [rbp-88h] BYREF
  _DWORD *v20; // [rsp+80h] [rbp-78h]
  __int64 v21; // [rsp+88h] [rbp-70h]
  __int64 v22; // [rsp+90h] [rbp-68h]
  _DWORD v23[2]; // [rsp+98h] [rbp-60h] BYREF
  int *v24; // [rsp+A0h] [rbp-58h]
  __int64 v25; // [rsp+A8h] [rbp-50h]
  int *v26; // [rsp+B0h] [rbp-48h]
  __int64 v27; // [rsp+B8h] [rbp-40h]
  __int64 *v28; // [rsp+C0h] [rbp-38h]
  __int64 v29; // [rsp+C8h] [rbp-30h]

  if ( stru_140E366D8.FirstArgument )
  {
    if ( *(_DWORD *)stru_140E366D8.FirstArgument > 2u
      && tlgKeywordOn((__int64)stru_140E366D8.FirstArgument, 0x400000004000LL) )
    {
      tlgCreate1Sz_char((__int64)v19, Src);
      v21 = 2LL;
      v29 = 8LL;
      v20 = v23;
      v22 = *(_QWORD *)(a2 + 96);
      v23[0] = *(unsigned __int16 *)(a2 + 88);
      v15 = *(_DWORD *)(a2 + 120);
      v24 = &v15;
      v16 = *(_DWORD *)(a2 + 156);
      v26 = &v16;
      v17 = 2164260864LL;
      v28 = &v17;
      v23[1] = 0;
      v25 = 4LL;
      v27 = 4LL;
      tlgWriteEx_EtwWriteEx(v4, (unsigned __int8 *)&byte_14005894B, v4, 1u, v13, v14, 8u, &v18);
    }
  }
  else
  {
    v5 = -1LL;
    do
      ++v5;
    while ( Src[v5] );
    v6 = *(unsigned __int16 *)(a2 + 88);
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = ExAllocatePoolMm(256LL, v5 + v6 + 49, 1178889549, CurrentProcessorColor | 0x80000000);
    v9 = PoolMm;
    if ( PoolMm )
    {
      *(_QWORD *)(PoolMm + 16) = PoolMm + 48;
      memmove((void *)(PoolMm + 48), Src, v5 + 1);
      v10 = (void *)(v9 + v5 + 49);
      *(_QWORD *)(v9 + 32) = v10;
      memmove(v10, *(const void **)(a2 + 96), *(unsigned __int16 *)(a2 + 88));
      *(_WORD *)(v9 + 24) = *(_WORD *)(a2 + 88);
      *(_WORD *)(v9 + 26) = *(_WORD *)(a2 + 88);
      *(_DWORD *)(v9 + 40) = *(_DWORD *)(a2 + 120);
      *(_DWORD *)(v9 + 44) = *(_DWORD *)(a2 + 156);
      Lock = MmAcquireLoadLock();
      Blink = stru_140E2D2D0.SchedulerApc.ApcListEntry.Blink;
      if ( stru_140E2D2D0.SchedulerApc.ApcListEntry.Blink->Flink != (struct _LIST_ENTRY *)&stru_140E2D2D0.SchedulerApcFill5[16] )
        __fastfail(3u);
      *(_QWORD *)(v9 + 8) = stru_140E2D2D0.SchedulerApc.ApcListEntry.Blink;
      *(_QWORD *)v9 = &stru_140E2D2D0.SchedulerApc.ApcListEntry;
      Blink->Flink = (struct _LIST_ENTRY *)v9;
      stru_140E2D2D0.SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)v9;
      MmReleaseLoadLock(Lock);
    }
  }
}
