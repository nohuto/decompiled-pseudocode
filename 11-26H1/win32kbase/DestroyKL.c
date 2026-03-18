/*
 * XREFs of DestroyKL @ 0x140118548
 * Callers:
 *     ?DestroyKLIfSupported@@YAXPEAUtagKL@@@Z @ 0x1401181A0 (-DestroyKLIfSupported@@YAXPEAUtagKL@@@Z.c)
 *     _lambda_003a05ce5104f89dcc953024da4d9dc6_::operator() @ 0x140191374 (_lambda_003a05ce5104f89dcc953024da4d9dc6_--operator().c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x140049540 (-Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z.c)
 *     _HMPheFromObjectWorker @ 0x140071E30 (_HMPheFromObjectWorker.c)
 *     HMAssignmentUnlock @ 0x14009B8C0 (HMAssignmentUnlock.c)
 *     HMFreeObject @ 0x1401187F0 (HMFreeObject.c)
 *     DestroyKF @ 0x140118D3C (DestroyKF.c)
 */

__int64 __fastcall DestroyKL(struct _HEAD *a1, int a2, int a3)
{
  struct _HANDLEENTRY *v4; // rax
  int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  char *v9; // rcx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 result; // rax
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  struct _HEAD *v17; // rax
  __int64 i; // rdi
  __int64 *v19; // rcx
  struct _HEAD *v20; // rax
  char v21; // [rsp+30h] [rbp+8h] BYREF

  v21 = 0;
  v4 = (struct _HANDLEENTRY *)HMPheFromObjectWorker(a1, a2, a3);
  IdentifyPrimaryDestroyTarget::Identify((Identify *)&v21, v4, v5);
  *(_QWORD *)(*((_QWORD *)a1 + 3) + 16LL) = *((_QWORD *)a1 + 2);
  *(_QWORD *)(*((_QWORD *)a1 + 2) + 24LL) = *((_QWORD *)a1 + 3);
  if ( HMAssignmentUnlock((__int64 *)a1 + 6) )
  {
    v17 = (struct _HEAD *)HMAssignmentUnlock((__int64 *)a1 + 7);
    if ( v17 )
      DestroyKF(v17);
  }
  if ( *((_QWORD *)a1 + 12) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 22); i = (unsigned int)(i + 1) )
    {
      v19 = (__int64 *)(*((_QWORD *)a1 + 12) + 8 * i);
      if ( !*v19 )
        break;
      v20 = (struct _HEAD *)HMAssignmentUnlock(v19);
      if ( v20 )
        DestroyKF(v20);
    }
    GreDeleteFastMutex(*((char **)a1 + 12), v6, v7, v8);
  }
  v9 = (char *)*((_QWORD *)a1 + 10);
  if ( v9 )
    GreDeleteFastMutex(v9, v6, v7, v8);
  if ( a1 == *(struct _HEAD **)(W32GetUserSessionState((_DWORD)v9, v6, v7) + 14216) )
    *(_QWORD *)(W32GetUserSessionState(v11, v10, v12) + 14216) = 0LL;
  result = HMFreeObject(a1);
  if ( v21 )
  {
    result = W32GetUserSessionState(v15, v14, v16);
    *(_QWORD *)(result + 19800) = 0LL;
  }
  return result;
}
