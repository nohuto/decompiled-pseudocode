/*
 * XREFs of sub_1409E0B70 @ 0x1409E0B70
 * Callers:
 *     sub_1409E0F38 @ 0x1409E0F38 (sub_1409E0F38.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     sub_140906F0C @ 0x140906F0C (sub_140906F0C.c)
 *     sub_140909220 @ 0x140909220 (sub_140909220.c)
 *     sub_140909250 @ 0x140909250 (sub_140909250.c)
 *     sub_140909280 @ 0x140909280 (sub_140909280.c)
 *     sub_1409E1224 @ 0x1409E1224 (sub_1409E1224.c)
 *     sub_1409E1478 @ 0x1409E1478 (sub_1409E1478.c)
 */

__int64 __fastcall sub_1409E0B70(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // rbp
  __int64 v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v8; // rax
  __int64 v9; // r8
  __int64 *v10; // rdi
  __int64 v11; // r15
  int v12; // r12d
  int v13; // edi
  unsigned int v14; // esi
  char (__fastcall *v15)(_QWORD *, __int64); // rax
  _QWORD *v16; // rcx
  __int64 v17; // rax
  bool v18; // sf
  unsigned int v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  int v22; // edi
  _QWORD *v23; // rdx
  __int64 v26; // [rsp+40h] [rbp-58h] BYREF
  int v27; // [rsp+48h] [rbp-50h]
  int v28; // [rsp+4Ch] [rbp-4Ch]

  v3 = (unsigned __int64 *)(a1 + 176);
  v27 = *(_DWORD *)(a2 + 24);
  v26 = *(_QWORD *)(a2 + 32);
  v6 = 0LL;
  v28 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire(a1 + 176, 0LL);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v8, (__int64)v3);
  if ( v10 )
    *((_BYTE *)v10 + 10) = 1;
  v11 = a1 + 136;
  v12 = 0;
  v13 = *(_DWORD *)(v11 + 4) - 1;
  v14 = 0;
  while ( v12 <= v13 )
  {
    v14 = (v13 + v12) / 2;
    v15 = *(char (__fastcall **)(_QWORD *, __int64))(v11 + 32);
    v16 = *(_QWORD **)(*(_DWORD *)v11 * v14 + *(_QWORD *)(v11 + 16));
    if ( v15 == sub_140909220 )
    {
      LOBYTE(v17) = sub_140909220(v16, (__int64)&v26);
    }
    else if ( (char *)v15 == (char *)sub_140909250 )
    {
      LOBYTE(v17) = sub_140909250((__int64)v16, (__int64)&v26);
    }
    else if ( v15 == sub_140909280 )
    {
      LOBYTE(v17) = sub_140909280(v16, (__int64)&v26);
    }
    else
    {
      v17 = guard_dispatch_icall_no_overrides(v16);
    }
    v18 = v17 < 0;
    if ( !v17 )
    {
      v20 = sub_1409E1478(*(_QWORD *)(*(_DWORD *)v11 * v14 + *(_QWORD *)(v11 + 16)));
      v22 = v20;
      if ( v20 >= 0 )
        v6 = v21;
      if ( !v20 )
      {
        if ( a3 )
        {
          sub_1409E1478(v6);
          *v23 = v6;
          v6 = 0LL;
        }
        goto LABEL_28;
      }
      if ( v20 != -1073741198 )
        goto LABEL_28;
      break;
    }
    v19 = v14 - 1;
    if ( !v18 )
      v19 = v13;
    v13 = v19;
    if ( !v18 )
      v12 = ++v14;
  }
  v22 = sub_140906F0C((unsigned int *)v11, a2, v9, (int)&v26, 16, v14);
  if ( v22 >= 0 )
    v22 = sub_1409E1478(a2);
LABEL_28:
  sub_1409E1224(v6);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveGuardedRegion();
  return (unsigned int)v22;
}
