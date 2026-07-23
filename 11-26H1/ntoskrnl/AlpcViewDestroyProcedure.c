/*
 * XREFs of AlpcViewDestroyProcedure @ 0x140992BD0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiRemoveFromSystemSpace @ 0x140489AA8 (MiRemoveFromSystemSpace.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     AlpcpDestroyBlob @ 0x1408EE980 (AlpcpDestroyBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14098FEF0 (AlpcpLockForCachedReferenceBlob.c)
 *     MmUnsecureVirtualMemory @ 0x140992B70 (MmUnsecureVirtualMemory.c)
 *     AlpcpUnlockBlob @ 0x1409936F0 (AlpcpUnlockBlob.c)
 *     MiUnmapViewOfSection @ 0x140994C10 (MiUnmapViewOfSection.c)
 *     AlpcpRestoreWriteAccess @ 0x140A8F764 (AlpcpRestoreWriteAccess.c)
 */

__int64 __fastcall AlpcViewDestroyProcedure(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  ULONG_PTR v4; // rsi
  ULONG_PTR v6; // rbx
  _KPROCESS *Process; // r15
  int v8; // ecx
  int v9; // eax
  _QWORD *v10; // rbx
  unsigned __int64 *v11; // rbp
  struct _KLOCK_ENTRIES *v12; // r9
  AutoBoost *v13; // rax
  void *v14; // rdx
  AutoBoost *v15; // r14
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  _KPROCESS *v18; // rcx
  void *v19; // rcx
  struct _KLOCK_ENTRIES *v20; // r9
  signed __int64 v21; // rax
  bool v22; // cc
  ULONG_PTR BugCheckParameter4; // rax
  ULONG_PTR v24; // r8
  signed __int64 v25; // rax
  ULONG_PTR v26; // rax
  unsigned __int64 *v27; // rbp
  AutoBoost *v28; // rax
  void *v29; // rdx
  AutoBoost *v30; // rsi
  __int64 v31; // rsi
  _OWORD v33[3]; // [rsp+30h] [rbp-58h] BYREF

  v4 = 0LL;
  memset(v33, 0, sizeof(v33));
  v6 = *(_QWORD *)(a1 + 16);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( v6 )
  {
    AlpcpLockForCachedReferenceBlob(*(_QWORD *)(a1 + 16), a2, a3, a4);
    **(_QWORD **)(a1 + 8) = *(_QWORD *)a1;
    *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)(a1 + 8);
    v8 = *(_DWORD *)(v6 + 52) - 1;
    *(_DWORD *)(v6 + 52) = v8;
    if ( (*(_DWORD *)(a1 + 72) & 4) == 0 )
    {
      v9 = *(_DWORD *)(v6 + 48);
      if ( (v9 & 1) != 0 )
      {
        *(_QWORD *)(v6 + 80) = 0LL;
        v4 = *(_QWORD *)(v6 + 72);
        if ( v4 )
        {
          AlpcpRestoreWriteAccess(*(_QWORD *)(v6 + 72));
        }
        else if ( !v8 )
        {
          *(_DWORD *)(v6 + 48) = v9 & 0xFFFFFFFE;
        }
      }
    }
    AlpcpUnlockBlob(v6);
    v10 = (_QWORD *)(a1 - 48);
    v11 = (unsigned __int64 *)(*(_QWORD *)(a1 + 24) + 328LL);
    v13 = (AutoBoost *)KeAbPreAcquire((__int64)v11, 0LL, 0LL, v12);
    v15 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(v11, v13, (__int64)v11);
    if ( v15 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v15, v14);
      else
        *((_BYTE *)v15 + 10) = 1;
    }
    v16 = (_QWORD *)*v10;
    if ( (_QWORD *)*v10 != v10 )
    {
      if ( (_QWORD *)v16[1] != v10 || (v17 = (_QWORD *)v10[1], (_QWORD *)*v17 != v10) )
        __fastfail(3u);
      *v17 = v16;
      v16[1] = v17;
      v10[1] = v10;
      *v10 = v10;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v11);
    KeAbPostRelease((unsigned __int64)v11);
    ObfDereferenceObject(*(PVOID *)(a1 + 24));
    if ( (*(_DWORD *)(a1 + 72) & 8) != 0 )
    {
      MiRemoveFromSystemSpace(*(_QWORD *)(a1 + 40));
    }
    else
    {
      v18 = *(_KPROCESS **)(a1 + 32);
      if ( Process != v18 )
        KiStackAttachProcess(v18, 0, (__int64)v33);
      v19 = *(void **)(a1 + 56);
      if ( v19 )
        MmUnsecureVirtualMemory(v19);
      MiUnmapViewOfSection(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), 0LL, 0LL);
      if ( Process != *(_KPROCESS **)(a1 + 32) )
        KiUnstackDetachProcess((__int64)v33, 0);
    }
    if ( v4 )
    {
      v21 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 - 24), 0xFFFFFFFFFFFFFFFFuLL);
      v22 = v21 <= 1;
      BugCheckParameter4 = v21 - 1;
      if ( v22 )
      {
        if ( BugCheckParameter4 )
          KeBugCheckEx(0x18u, 0LL, v4, 0x21uLL, BugCheckParameter4);
        AlpcpDestroyBlob(v4, 0LL);
      }
    }
    v24 = *(_QWORD *)(a1 + 16);
    v25 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 - 24), 0xFFFFFFFFFFFFFFFFuLL);
    v22 = v25 <= 1;
    v26 = v25 - 1;
    if ( v22 )
    {
      if ( v26 )
        KeBugCheckEx(0x18u, 0LL, v24, 0x21uLL, v26);
      AlpcpDestroyBlob(v24, 0LL);
    }
    v27 = (unsigned __int64 *)(*(_QWORD *)(a1 + 32) + 1408LL);
    v28 = (AutoBoost *)KeAbPreAcquire((__int64)v27, 0LL, 0LL, v20);
    v30 = v28;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v27, 0LL) )
      ExfAcquirePushLockExclusiveEx(v27, v28, (__int64)v27);
    if ( v30 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v30, v29);
      else
        *((_BYTE *)v30 + 10) = 1;
    }
    **(_QWORD **)(a1 + 88) = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8LL) = *(_QWORD *)(a1 + 88);
    v31 = *(_QWORD *)(a1 + 32);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + 1408), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v31 + 1408));
    KeAbPostRelease(v31 + 1408);
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 32), 0x63706C41u);
  }
  return 0LL;
}
