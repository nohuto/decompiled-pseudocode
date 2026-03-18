/*
 * XREFs of ?RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6AX0KIE0@ZP6AX00KEIU_GUID@@I@Z@Z @ 0x14007BF70
 * Callers:
 *     DpiSharedPowerRegister @ 0x140249A00 (DpiSharedPowerRegister.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_G?$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z @ 0x14007BC90 (--_G-$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z.c)
 *     ??_GDXGSHAREDPOWERREGISTRATIONOBJECT@@IEAAPEAXI@Z @ 0x14007BD48 (--_GDXGSHAREDPOWERREGISTRATIONOBJECT@@IEAAPEAXI@Z.c)
 *     ?AcquireShared@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x14007BDD0 (-AcquireShared@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?ReleaseShared@DXGADAPTERLISTLOCK@@QEAAXXZ @ 0x14007C3E0 (-ReleaseShared@DXGADAPTERLISTLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ??0DXGSHAREDPOWERREGISTRATIONOBJECT@@IEAA@PEAVDXGGLOBAL@@QEAX1P6AXPEAXW4_DEVICE_POWER_STATE@@E2@ZP6AX22@ZP6AX2KIE2@ZPEAV?$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@@Z @ 0x1401DBEBC (--0DXGSHAREDPOWERREGISTRATIONOBJECT@@IEAA@PEAVDXGGLOBAL@@QEAX1P6AXPEAXW4_DEVICE_POWER_STATE@@E2@.c)
 *     ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1401E0334 (-ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::RegisterSharedPowerComponent(
        KSPIN_LOCK *this,
        struct DXGADAPTER *a2,
        void *const a3,
        void (*a4)(void *, enum _DEVICE_POWER_STATE, unsigned __int8, void *),
        void (*a5)(void *, void *),
        void (*a6)(void *, unsigned int, unsigned int, unsigned __int8, void *),
        void (*a7)(void *, void *, unsigned int, unsigned __int8, unsigned int, struct _GUID *__struct_ptr, unsigned int))
{
  int v8; // esi
  char *v11; // r15
  _QWORD *v12; // r14
  DXGSHAREDPOWERREGISTRATIONOBJECT *v13; // rbp
  char *v14; // r9
  char *v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  DXGSHAREDPOWERREGISTRATIONOBJECT *v19; // rdi
  __int64 v20; // rax
  unsigned int v21; // r15d
  __int64 v22; // rdi
  __int64 v23; // rbx
  KIRQL CurrentIrql; // al
  __int64 v25; // r8
  __int64 v26; // r9
  KIRQL v27; // al
  int v29; // [rsp+20h] [rbp-B8h]
  int v30; // [rsp+30h] [rbp-A8h]
  DXGADAPTERLISTLOCK *v31; // [rsp+58h] [rbp-80h]
  __int128 v32; // [rsp+60h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-68h] BYREF
  KIRQL v34; // [rsp+E0h] [rbp+8h]

  v8 = 0;
  v31 = (DXGADAPTERLISTLOCK *)(this + 85);
  DXGADAPTERLISTLOCK::AcquireShared((DXGADAPTERLISTLOCK *)(this + 85));
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 222));
  v11 = (char *)(this + 226);
  v12 = 0LL;
  v13 = 0LL;
  if ( !DXGGLOBAL::ValidateAdapterValidAndInRunningState((DXGGLOBAL *)this, a2) )
  {
    v8 = -1073741130;
    goto LABEL_26;
  }
  while ( 1 )
  {
    v15 = 0LL;
    if ( v14 != v11 )
      v15 = v14;
    if ( !v15 )
      break;
    if ( *((void *const *)v15 + 3) == a3 && *((struct DXGADAPTER **)v15 + 4) == a2 )
    {
      v8 = -1073740008;
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 6819;
      goto LABEL_26;
    }
    v14 = *(char **)v14;
  }
  v16 = (_QWORD *)operator new(0x10uLL, 0x4B677844u, 256LL);
  v17 = (__int64)v16;
  if ( !v16 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 6830;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating pInUseList of type SHAREDPOWERCOMPONENTINUSELIST",
      6830LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_25;
  }
  v16[1] = v16;
  *v16 = v16;
  v18 = operator new(0x48uLL, 0x4B677844u, 64LL);
  if ( !v18
    || (v19 = (DXGSHAREDPOWERREGISTRATIONOBJECT *)DXGSHAREDPOWERREGISTRATIONOBJECT::DXGSHAREDPOWERREGISTRATIONOBJECT(
                                                    v18,
                                                    (_DWORD)this,
                                                    (_DWORD)a3,
                                                    (_DWORD)a2,
                                                    (__int64)a4,
                                                    (__int64)a5,
                                                    (__int64)a6,
                                                    v17),
        (v13 = v19) == 0LL) )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 6839;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating pNewSharedPowerObj of type DXGSHAREDPOWERREGISTRATIONOBJECT",
      6839LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v12 = (_QWORD *)v17;
LABEL_25:
    v8 = -1073741801;
    goto LABEL_26;
  }
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(this + 221, &LockHandle);
  v20 = *(_QWORD *)v11;
  if ( *(char **)(*(_QWORD *)v11 + 8LL) != v11 )
    __fastfail(3u);
  v12 = (_QWORD *)v17;
  *(_QWORD *)v19 = v20;
  *((_QWORD *)v19 + 1) = v11;
  *(_QWORD *)(v20 + 8) = v19;
  *(_QWORD *)v11 = v19;
  if ( a7 )
  {
    v21 = 0;
    if ( *((_DWORD *)a2 + 852) )
    {
      do
      {
        v22 = *((_QWORD *)a2 + 408);
        v23 = 520LL * v21;
        if ( *(_DWORD *)(v23 + v22 + 208) == 7 )
        {
          CurrentIrql = KeGetCurrentIrql();
          v25 = *(unsigned int *)(v23 + v22 + 4);
          v30 = *(_DWORD *)(v23 + v22 + 212);
          LOBYTE(v26) = *(_BYTE *)(v23 + v22 + 360) == 0;
          v34 = CurrentIrql;
          v29 = *(_DWORD *)(v23 + v22 + 344);
          v32 = *(_OWORD *)(v23 + v22 + 220);
          ((void (__fastcall *)(struct DXGADAPTER *, void *const, __int64, __int64, int, __int128 *, int))a7)(
            a2,
            a3,
            v25,
            v26,
            v29,
            &v32,
            v30);
          if ( v34 != KeGetCurrentIrql() )
          {
            v27 = KeGetCurrentIrql();
            WdLogSingleEntry5(0LL, 275LL, 16LL, this, v34, v27);
            WdLogGlobalForLineNumber = 6870;
          }
        }
        ++v21;
      }
      while ( v21 < *((_DWORD *)a2 + 852) );
      v8 = 0;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_26:
  this[223] = 0LL;
  ExReleasePushLockExclusiveEx(this + 222, 0LL);
  KeLeaveCriticalRegion();
  DXGADAPTERLISTLOCK::ReleaseShared(v31);
  if ( v8 < 0 )
  {
    if ( v12 )
      DXGNODELIST<DXGGLOBAL,DXGSHAREDPOWERINUSELISTOBJECT>::`scalar deleting destructor'(v12);
    if ( v13 )
      DXGSHAREDPOWERREGISTRATIONOBJECT::`scalar deleting destructor'(v13);
  }
  return (unsigned int)v8;
}
