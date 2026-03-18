/*
 * XREFs of ?UnlockInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_N@Z @ 0x1400F51E0
 * Callers:
 *     ?Unlock1@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@K@Z @ 0x1400F69DC (-Unlock1@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@K@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14002E900 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140035970 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ??1VIDMM_PROCESS_AUTOATTACH@@QEAA@XZ @ 0x14003BA5C (--1VIDMM_PROCESS_AUTOATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400E499C (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400F57D0 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400F57F0 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     UnmapFromSystemMemory @ 0x1400F5810 (UnmapFromSystemMemory.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UnlockInternal(VIDMM_GLOBAL *this, __int64 ***a2, unsigned __int8 a3)
{
  __int64 **v3; // rsi
  int v5; // r12d
  __int64 *v7; // rdi
  __int64 v8; // r14
  __int64 v9; // rcx
  VIDMM_PROCESS *v10; // rcx
  int v11; // eax
  VIDMM_PROCESS *v12; // rcx
  __int64 v14; // rcx
  VIDMM_PROCESS *v15; // rcx
  _BYTE v16[8]; // [rsp+20h] [rbp-A9h] BYREF
  __int64 *v17; // [rsp+28h] [rbp-A1h] BYREF
  char v18; // [rsp+30h] [rbp-99h]
  _QWORD v19[12]; // [rsp+40h] [rbp-89h] BYREF
  char v20[8]; // [rsp+A0h] [rbp-29h] BYREF
  struct _KAPC_STATE v21; // [rsp+A8h] [rbp-21h] BYREF
  VIDMM_PROCESS *v22; // [rsp+D8h] [rbp+Fh]

  v3 = *a2;
  v5 = a3;
  v7 = **a2;
  v8 = *v7;
  if ( DXGPROCESS::GetCurrent() && (v9 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8)) != 0 )
    v10 = *(VIDMM_PROCESS **)(v9 + 8);
  else
    v10 = 0LL;
  v22 = v10;
  VIDMM_PROCESS::SafeAttach(v10, &v21);
  v20[0] = 1;
  v17 = v7 + 38;
  v16[0] = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v7 + 38, 0LL);
  v7[39] = (__int64)KeGetCurrentThread();
  v11 = *((_DWORD *)v3 + 17);
  v18 = 1;
  if ( !v11 )
  {
    WdLogSingleEntry1(2LL, a2);
    WdLogGlobalForLineNumber = 23468;
    v7[39] = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 38, 0LL);
    KeLeaveCriticalRegion();
    if ( v20[0] )
      VIDMM_PROCESS::SafeDetach(v15, &v21);
    return 3221225485LL;
  }
  if ( v5 != (*((_BYTE *)v7 + 40) != 0) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 23474;
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v17);
    VIDMM_PROCESS_AUTOATTACH::~VIDMM_PROCESS_AUTOATTACH((VIDMM_PROCESS_AUTOATTACH *)v20);
    return 3221225485LL;
  }
  _InterlockedDecrement((volatile signed __int32 *)v7 + 46);
  _InterlockedDecrement((volatile signed __int32 *)v3 + 17);
  if ( !*((_DWORD *)v3 + 17) )
  {
    if ( (*(_DWORD *)(v8 + 56) & 0x10) != 0 )
    {
      v14 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * ((*(_DWORD *)(v8 + 52) >> 2) & 0x3F));
      (*(void (__fastcall **)(__int64, __int64 ***, _BYTE *))(*(_QWORD *)v14 + 288LL))(v14, a2, v16);
    }
    else
    {
      UnmapFromSystemMemory(v3);
    }
  }
  if ( !*((_DWORD *)v7 + 46) )
    *((_BYTE *)v7 + 40) = 0;
  v7[39] = 0LL;
  ExReleasePushLockExclusiveEx(v7 + 38, 0LL);
  KeLeaveCriticalRegion();
  if ( v16[0] )
  {
    memset(v19, 0, 0x58uLL);
    LODWORD(v19[0]) = 129;
    v19[5] = v8;
    VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v19, 1);
  }
  if ( v20[0] )
    VIDMM_PROCESS::SafeDetach(v12, &v21);
  return 0LL;
}
