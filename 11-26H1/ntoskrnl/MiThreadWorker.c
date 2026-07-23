/*
 * XREFs of MiThreadWorker @ 0x1403CD1F0
 * Callers:
 *     MiDoParentWork @ 0x1404FD268 (MiDoParentWork.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x14028EB40 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContext @ 0x1402D6670 (MiCreateUltraThreadContext.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     KeSignalGate @ 0x1403CC9D0 (KeSignalGate.c)
 *     MiSetThreadAffinity @ 0x1403CD3E0 (MiSetThreadAffinity.c)
 *     MiRevertThreadAffinity @ 0x1403CD44C (MiRevertThreadAffinity.c)
 *     MiInitializeAcceleratorDescriptor @ 0x140714428 (MiInitializeAcceleratorDescriptor.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140735C50 (_alloca_probe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall MiThreadWorker(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  unsigned __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // rcx
  int v11; // r8d
  int UltraThreadContext; // eax
  _BYTE *v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  void *v16; // rsp
  void *v17; // rsp
  __int128 v18; // [rsp+20h] [rbp+0h] BYREF
  __int128 v19; // [rsp+30h] [rbp+10h] BYREF
  __int128 v20; // [rsp+40h] [rbp+20h]
  _BYTE v21[128]; // [rsp+50h] [rbp+30h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  memset_0(v21, 0, sizeof(v21));
  v2 = *(_QWORD *)(a1 + 32);
  MiSetThreadAffinity(a1, &v19);
  v3 = 0LL;
  if ( (_QWORD)v20 )
  {
    v14 = *(_QWORD *)(v20 + 32) + 47LL;
    if ( v14 <= *(_QWORD *)(v20 + 32) + 32LL )
      v14 = 0xFFFFFFFFFFFFFF0LL;
    v15 = v14 & 0xFFFFFFFFFFFFFFF0uLL;
    v16 = alloca(v15);
    v17 = alloca(v15);
    v3 = MiInitializeAcceleratorDescriptor(v20, &v18);
  }
  v4 = *(_QWORD *)(v2 + 520);
  v5 = 0LL;
  v6 = 0LL;
  if ( !v4 )
  {
    v4 = *(unsigned int *)(v2 + 40);
    v6 = v2 + 544;
  }
  if ( (*(_DWORD *)(v2 + 16) & 0x200) != 0 )
  {
    v11 = *(_DWORD *)(v2 + 80) + 1;
    v18 = 0LL;
    MiInitializePageColorBase(0LL, 3, v11, (__int64)&v18);
    UltraThreadContext = MiCreateUltraThreadContext((__int64)v21, (__int64)&v18, 15, *(_DWORD *)(v2 + 16) & 4);
    v13 = v21;
    if ( !UltraThreadContext )
      v13 = 0LL;
    v5 = (__int64)v13;
  }
  v7 = *(_QWORD *)(v2 + 496);
  while ( 1 )
  {
    v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 528), 1uLL);
    if ( v8 >= v4 )
      break;
    if ( v6 )
    {
      v10 = v6 + 136 * v8;
      if ( *(_QWORD *)(v10 + 128) )
      {
        *(_QWORD *)(v10 + 96) = v5;
        v7 = v6 + 136 * v8;
        goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
      guard_dispatch_icall_no_overrides(v7, v3);
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v2 + 536)) == v4 )
      {
        _InterlockedAnd((volatile signed __int32 *)(v2 + 88), 0);
        KeSignalGate(v2 + 96, 1LL, v9);
        break;
      }
    }
  }
  MiRevertThreadAffinity(&v19);
  if ( v5 )
    MiDeleteUltraThreadContext(v5);
}
