/*
 * XREFs of MmCommitDecommitSecuredMemory @ 0x140871154
 * Callers:
 *     VmpUpdateCommitStateMemoryRange @ 0x1406C57F0 (VmpUpdateCommitStateMemoryRange.c)
 * Callees:
 *     MiObtainReferencedSecureVad @ 0x1404DE4B8 (MiObtainReferencedSecureVad.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiAllocateVirtualMemory @ 0x1409EFC34 (MiAllocateVirtualMemory.c)
 *     MiFreeVirtualMemory @ 0x140A05050 (MiFreeVirtualMemory.c)
 */

__int64 __fastcall MmCommitDecommitSecuredMemory(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  int v6; // r12d
  _KPROCESS *Process; // r13
  struct _LIST_ENTRY *v8; // r15
  __int64 v9; // rsi
  __int64 v10; // r14
  _QWORD v12[5]; // [rsp+60h] [rbp-59h] BYREF
  int v13; // [rsp+88h] [rbp-31h]
  int v14; // [rsp+8Ch] [rbp-2Dh]
  char v15; // [rsp+95h] [rbp-24h]
  _KPROCESS *v16; // [rsp+B8h] [rbp-1h]
  _KPROCESS *v17; // [rsp+C0h] [rbp+7h]
  __int64 v18; // [rsp+120h] [rbp+67h] BYREF
  __int64 v19; // [rsp+138h] [rbp+7Fh] BYREF

  v18 = a1;
  v4 = qword_140E2D7C0 ^ a4;
  LODWORD(v19) = 0;
  v6 = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = MiObtainReferencedSecureVad(qword_140E2D7C0 ^ a4, &v19, a3);
  if ( !v8 )
    return (unsigned int)v19;
  v9 = v18;
  v10 = a2 + v18 - 1;
  v19 = v10;
  if ( !v6 )
    return MiFreeVirtualMemory(Process, v8, &v18, &v19, a2, 0x4000, 0, 0, 0, 0LL, v4);
  memset_0(v12, 0, 0x80uLL);
  v17 = Process;
  v12[2] = 4096LL;
  v13 = 4096;
  v16 = Process;
  v12[0] = v9;
  v12[1] = v10;
  v12[3] = a2;
  v14 = v6;
  v15 = 0;
  return MiAllocateVirtualMemory((unsigned int)v12, 0, (_DWORD)v8, v4, (__int64)&v18);
}
