/*
 * XREFs of DestroyKL @ 0x1400F6658
 * Callers:
 *     ?DestroyKLIfSupported@@YAXPEAUtagKL@@@Z @ 0x1400F6380 (-DestroyKLIfSupported@@YAXPEAUtagKL@@@Z.c)
 *     _lambda_003a05ce5104f89dcc953024da4d9dc6_::operator() @ 0x14014CA0C (_lambda_003a05ce5104f89dcc953024da4d9dc6_--operator().c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     HMAssignmentUnlock @ 0x1400379C0 (HMAssignmentUnlock.c)
 *     _HMPheFromObjectWorker @ 0x14003B3B0 (_HMPheFromObjectWorker.c)
 *     DestroyKF @ 0x1400F6304 (DestroyKF.c)
 *     HMFreeObject @ 0x1400F67F0 (HMFreeObject.c)
 *     ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1400F6C9C (-Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z.c)
 */

__int64 __fastcall DestroyKL(void *a1, __int64 a2)
{
  struct _HANDLEENTRY *v3; // rax
  __int64 v4; // rdx
  char *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  void *v11; // rax
  __int64 i; // rdi
  __int64 *v13; // rcx
  void *v14; // rax
  __int64 v15; // rdx
  char v16; // [rsp+30h] [rbp+8h] BYREF

  v16 = 0;
  v3 = (struct _HANDLEENTRY *)HMPheFromObjectWorker((int *)a1, a2);
  IdentifyPrimaryDestroyTarget::Identify((IdentifyPrimaryDestroyTarget *)&v16, v3);
  *(_QWORD *)(*((_QWORD *)a1 + 3) + 16LL) = *((_QWORD *)a1 + 2);
  *(_QWORD *)(*((_QWORD *)a1 + 2) + 24LL) = *((_QWORD *)a1 + 3);
  if ( HMAssignmentUnlock((__int64 *)a1 + 6) )
  {
    v11 = (void *)HMAssignmentUnlock((__int64 *)a1 + 7);
    if ( v11 )
      DestroyKF(v11, v4);
  }
  if ( *((_QWORD *)a1 + 12) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 22); i = (unsigned int)(i + 1) )
    {
      v13 = (__int64 *)(*((_QWORD *)a1 + 12) + 8 * i);
      if ( !*v13 )
        break;
      v14 = (void *)HMAssignmentUnlock(v13);
      if ( v14 )
        DestroyKF(v14, v15);
    }
    GreDeleteFastMutex(*((char **)a1 + 12));
  }
  v5 = (char *)*((_QWORD *)a1 + 10);
  if ( v5 )
    GreDeleteFastMutex(v5);
  if ( a1 == *(void **)(W32GetUserSessionState(v5, v4) + 14224) )
    *(_QWORD *)(W32GetUserSessionState(v7, v6) + 14224) = 0LL;
  result = HMFreeObject(a1);
  if ( v16 )
  {
    result = W32GetUserSessionState(v10, v9);
    *(_QWORD *)(result + 19768) = 0LL;
  }
  return result;
}
