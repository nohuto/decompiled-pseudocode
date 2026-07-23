/*
 * XREFs of PpmIdleInstallNewVetoList @ 0x140604C30
 * Callers:
 *     PpmIdleAllocateVetoReasons @ 0x1407CC754 (PpmIdleAllocateVetoReasons.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037BF70 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037E240 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

void __fastcall PpmIdleInstallNewVetoList(__int64 a1, int a2, char *a3)
{
  unsigned __int16 v6; // r8
  unsigned __int16 i; // cx
  unsigned __int64 v8; // rdx
  KIRQL v9; // al
  const void *v10; // rdx
  char *v11; // rbx
  __int64 v12; // rsi
  KIRQL v13; // r14
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  unsigned int v16; // edx
  char *v17; // rcx
  char **v18; // rax
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-68h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-58h] BYREF

  Affinity = 0LL;
  v6 = *(_WORD *)(a1 + 64);
  PreviousAffinity = 0LL;
  for ( i = 0; i < v6; ++i )
  {
    v8 = *(_QWORD *)(a1 + 8LL * i + 72);
    if ( v8 )
    {
      Affinity.Group = i;
      Affinity.Mask = v8;
      break;
    }
  }
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  v9 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
  v10 = *(const void **)(a1 + 48);
  v11 = (char *)(a1 + 24);
  v12 = *(unsigned int *)(a1 + 44);
  v13 = v9;
  while ( 1 )
  {
    v14 = *(_QWORD **)v11;
    if ( *(char **)v11 == v11 )
      break;
    if ( (char *)v14[1] != v11 || (v15 = (_QWORD *)*v14, *(_QWORD **)(*v14 + 8LL) != v14) )
LABEL_17:
      __fastfail(3u);
    *(_QWORD *)v11 = v15;
    v15[1] = v11;
  }
  memmove(a3, v10, v12 << 6);
  *(_QWORD *)(a1 + 48) = a3;
  v16 = 0;
  for ( *(_DWORD *)(a1 + 44) = a2; v16 < (unsigned int)v12; ++v16 )
  {
    v17 = &a3[64 * (unsigned __int64)v16];
    if ( *((_DWORD *)v17 + 5) )
    {
      v18 = *(char ***)(a1 + 32);
      if ( *v18 != v11 )
        goto LABEL_17;
      *(_QWORD *)v17 = v11;
      *((_QWORD *)v17 + 1) = v18;
      *v18 = v17;
      *(_QWORD *)(a1 + 32) = v17;
    }
  }
  KeReleaseSpinLock(&PpmIdleVetoLock, v13);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
