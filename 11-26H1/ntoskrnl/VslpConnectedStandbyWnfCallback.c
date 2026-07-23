/*
 * XREFs of VslpConnectedStandbyWnfCallback @ 0x140B58300
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1409C4288 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     ExpWnfReadStateData @ 0x1409C5AC8 (ExpWnfReadStateData.c)
 */

__int64 __fastcall VslpConnectedStandbyWnfCallback(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  struct _EX_RUNDOWN_REF *v9; // rdi
  int v10; // edi
  int v11; // ebx
  int v13; // eax
  char Right; // cl
  unsigned int v15; // [rsp+30h] [rbp-69h] BYREF
  int v16; // [rsp+38h] [rbp-61h] BYREF
  struct _KLOCK_ENTRIES Buf1; // [rsp+40h] [rbp-59h] BYREF

  v16 = a4;
  memset(&Buf1, 0, 24);
  memset_0(&Buf1.Entries[0].TreeNode, 0, sizeof(struct _KLOCK_ENTRIES));
  v15 = 24;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = (struct _EX_RUNDOWN_REF *)ExpWnfAcquireSubscriptionNameInstance(v6, a1, v7, v8);
  if ( !v9 )
  {
    v10 = -1073741772;
    KeLeaveCriticalRegion();
    return (unsigned int)v10;
  }
  v11 = ExpWnfReadStateData((__int64)v9, 0, &v16, &Buf1, v15, (int *)&v15);
  ExReleaseRundownProtection_0(v9 + 1);
  v10 = 0;
  if ( v11 < 0 )
    v10 = v11;
  KeLeaveCriticalRegion();
  if ( v10 < 0 )
    return (unsigned int)v10;
  v13 = memcmp(&Buf1, &GUID_SPM_LOW_POWER_CS, 0x10uLL);
  Right = (char)Buf1.Entries[0].TreeNode.Right;
  LODWORD(Buf1.Entries[0].OwnerTree.Root) = 0;
  if ( !v13 )
    Right = 1;
  Buf1.Entries[0].TreeNode.ParentValue = (unsigned __int64)Buf1.Entries[0].LockState.LockState;
  LOBYTE(Buf1.Entries[0].TreeNode.Right) = Right;
  return VslpEnterIumSecureMode(2u, 0x42u, 0, (__int64)&Buf1.Entries[0].TreeNode);
}
