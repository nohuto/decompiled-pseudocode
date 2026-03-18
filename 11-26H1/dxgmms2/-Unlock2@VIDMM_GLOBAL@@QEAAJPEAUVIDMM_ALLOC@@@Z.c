/*
 * XREFs of ?Unlock2@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1400F5558
 * Callers:
 *     VidMmUnlock @ 0x140039990 (VidMmUnlock.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14002E900 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     McTemplateK0x_EtwWriteTransfer @ 0x140031A48 (McTemplateK0x_EtwWriteTransfer.c)
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

__int64 __fastcall VIDMM_GLOBAL::Unlock2(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2)
{
  volatile signed __int32 **v2; // rsi
  volatile signed __int32 *v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rcx
  VIDMM_PROCESS *v8; // rcx
  int v9; // eax
  VIDMM_PROCESS *v10; // rcx
  __int64 v11; // r8
  __int64 v13; // rcx
  VIDMM_PROCESS *v14; // rcx
  _BYTE v15[8]; // [rsp+20h] [rbp-99h] BYREF
  __int64 *v16; // [rsp+28h] [rbp-91h] BYREF
  char v17; // [rsp+30h] [rbp-89h]
  _QWORD v18[12]; // [rsp+40h] [rbp-79h] BYREF
  char v19[8]; // [rsp+A0h] [rbp-19h] BYREF
  struct _KAPC_STATE v20; // [rsp+A8h] [rbp-11h] BYREF
  VIDMM_PROCESS *v21; // [rsp+D8h] [rbp+1Fh]

  v2 = *(volatile signed __int32 ***)a2;
  v5 = **(volatile signed __int32 ***)a2;
  v6 = *(_QWORD *)v5;
  if ( DXGPROCESS::GetCurrent() && (v7 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8)) != 0 )
    v8 = *(VIDMM_PROCESS **)(v7 + 8);
  else
    v8 = 0LL;
  v21 = v8;
  VIDMM_PROCESS::SafeAttach(v8, &v20);
  v19[0] = 1;
  v16 = (__int64 *)(v5 + 76);
  v15[0] = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v5 + 76, 0LL);
  *((_QWORD *)v5 + 39) = KeGetCurrentThread();
  v9 = *((_DWORD *)v2 + 17);
  v17 = 1;
  if ( v9 )
  {
    if ( *((_BYTE *)v5 + 40) )
    {
      _InterlockedDecrement(v5 + 46);
      if ( !_InterlockedDecrement((volatile signed __int32 *)v2 + 17) )
      {
        if ( (*(_DWORD *)(v6 + 56) & 0x10) != 0 )
        {
          v13 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * ((*(_DWORD *)(v6 + 52) >> 2) & 0x3F));
          (*(void (__fastcall **)(__int64, struct VIDMM_ALLOC *, _BYTE *))(*(_QWORD *)v13 + 288LL))(v13, a2, v15);
        }
        else
        {
          UnmapFromSystemMemory(v2);
        }
      }
      if ( !*((_DWORD *)v5 + 46) )
        *((_BYTE *)v5 + 40) = 0;
      *((_QWORD *)v5 + 39) = 0LL;
      ExReleasePushLockExclusiveEx(v5 + 76, 0LL);
      KeLeaveCriticalRegion();
      if ( v15[0] )
      {
        memset(v18, 0, 0x58uLL);
        LODWORD(v18[0]) = 129;
        v18[5] = v6;
        VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v18, 1);
      }
      if ( v19[0] )
        VIDMM_PROCESS::SafeDetach(v10, &v20);
      if ( (byte_14008A201 & 1) != 0 )
        McTemplateK0x_EtwWriteTransfer((__int64)v10, &EventUnlock2, v11, a2);
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 23474;
      DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v16);
      VIDMM_PROCESS_AUTOATTACH::~VIDMM_PROCESS_AUTOATTACH((VIDMM_PROCESS_AUTOATTACH *)v19);
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, a2);
    WdLogGlobalForLineNumber = 23468;
    *((_QWORD *)v5 + 39) = 0LL;
    ExReleasePushLockExclusiveEx(v5 + 76, 0LL);
    KeLeaveCriticalRegion();
    if ( v19[0] )
      VIDMM_PROCESS::SafeDetach(v14, &v20);
  }
  return 0LL;
}
