/*
 * XREFs of MmStoreAllocateVirtualMemory @ 0x1409EE268
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x140384A48 (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiDecommitPages @ 0x140361EF0 (MiDecommitPages.c)
 *     MiFreeVadRange @ 0x1403C67C8 (MiFreeVadRange.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     MiLockPageTableRange @ 0x1404AA38C (MiLockPageTableRange.c)
 *     MiMakeSecureExclusive @ 0x1404C6418 (MiMakeSecureExclusive.c)
 *     MiObtainReferencedSecureVad @ 0x1404DE4B8 (MiObtainReferencedSecureVad.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MmUnsecureVirtualMemory @ 0x140992B70 (MmUnsecureVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1409EFC34 (MiAllocateVirtualMemory.c)
 */

unsigned __int64 __fastcall MmStoreAllocateVirtualMemory(__int64 a1, int a2)
{
  __int64 v2; // r14
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // r8
  struct _LIST_ENTRY *v7; // rax
  ULONG_PTR v8; // rdi
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  __int64 PteAddress; // rax
  __int64 v12; // r10
  __int64 v13; // r8
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r8
  _BYTE v17[8]; // [rsp+40h] [rbp-89h] BYREF
  __int64 v18; // [rsp+48h] [rbp-81h]
  __int64 v19; // [rsp+50h] [rbp-79h]
  __int64 v20; // [rsp+58h] [rbp-71h]
  int v21; // [rsp+68h] [rbp-61h]
  int v22; // [rsp+6Ch] [rbp-5Dh]
  int v23; // [rsp+70h] [rbp-59h]
  char v24; // [rsp+75h] [rbp-54h]
  int v25; // [rsp+7Ch] [rbp-4Dh]
  int v26; // [rsp+80h] [rbp-49h]
  HANDLE *p_SecureHandle; // [rsp+88h] [rbp-41h]
  ULONG_PTR v28; // [rsp+98h] [rbp-31h]
  ULONG_PTR BugCheckParameter4; // [rsp+A0h] [rbp-29h]
  _OWORD v30[3]; // [rsp+C0h] [rbp-9h] BYREF
  __int64 v31; // [rsp+F0h] [rbp+27h]
  unsigned __int64 v32; // [rsp+130h] [rbp+67h] BYREF
  int VirtualMemory; // [rsp+138h] [rbp+6Fh] BYREF
  HANDLE SecureHandle; // [rsp+140h] [rbp+77h] BYREF

  v2 = 0LL;
  v32 = 0LL;
  v31 = 0LL;
  SecureHandle = 0LL;
  memset(v30, 0, sizeof(v30));
  CurrentThread = KeGetCurrentThread();
  memset_0(v17, 0, 0x80uLL);
  BugCheckParameter4 = (ULONG_PTR)CurrentThread->ApcState.Process;
  v28 = BugCheckParameter4;
  v19 = 0x10000LL;
  v18 = 0x7FFFFFFEFFFFLL;
  v20 = a1;
  p_SecureHandle = &SecureHandle;
  v21 = 12288;
  v22 = 2;
  v25 = 1;
  v26 = -2147483647;
  v24 = 0;
  v23 = a2;
  VirtualMemory = MiAllocateVirtualMemory((unsigned int)v17, 0, 0, 0, (__int64)&v32);
  if ( VirtualMemory < 0 )
    return v2;
  v7 = MiObtainReferencedSecureVad(qword_140E2D7C0 ^ (unsigned __int64)SecureHandle, &VirtualMemory, v6);
  v8 = (ULONG_PTR)v7;
  if ( !v7 )
    return v2;
  if ( (unsigned int)MiMakeSecureExclusive((__int64)v7) )
  {
    v10 = ((*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32)) << 12) | 0xFFF;
    MiGetPteAddress(v32);
    PteAddress = MiGetPteAddress(v10);
    MiDecommitPages(v12, ((PteAddress - v12) >> 3) + 1, 0, BugCheckParameter4, v8, 1, 0LL, (__int64)v30);
    if ( (int)MiLockPageTableRange(v32, v10, v13) < 0 )
    {
      v15 = *(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32);
      v16 = *(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32);
      LOBYTE(VirtualMemory) = 0;
      MiFreeVadRange(v8, (int)&VirtualMemory, v16, v15, BugCheckParameter4, 0, 0LL);
    }
    else
    {
      MiUnlockAndDereferenceVad((volatile signed __int32 *)v8);
      return v32;
    }
    return v2;
  }
  MiUnlockAndDereferenceVad((volatile signed __int32 *)v9);
  MmUnsecureVirtualMemory(SecureHandle);
  return 0LL;
}
