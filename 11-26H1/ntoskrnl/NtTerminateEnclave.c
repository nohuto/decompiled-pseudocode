/*
 * XREFs of NtTerminateEnclave @ 0x140877380
 * Callers:
 *     DifNtTerminateEnclaveWrapper @ 0x14068F660 (DifNtTerminateEnclaveWrapper.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14027F600 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402D0160 (MiObtainReferencedVadEx.c)
 *     MiReadVadFlags @ 0x1404655D0 (MiReadVadFlags.c)
 *     MiTerminateEnclave @ 0x140876C58 (MiTerminateEnclave.c)
 */

__int64 __fastcall NtTerminateEnclave(unsigned __int64 a1, int a2)
{
  ULONG_PTR v5; // rax
  __int64 v6; // rdi
  unsigned int v7; // ebx
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  if ( (a2 & 0xFFFFFFFA) != 0 )
    return 3221225712LL;
  v5 = MiObtainReferencedVadEx(a1, 0LL, (int *)&v8);
  v6 = v5;
  if ( !v5 )
    return v8;
  if ( (MiReadVadFlags(v5) & 0x880000) == 0x880000
    && (*(unsigned int *)(v6 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32)) << 12 == a1 )
  {
    v7 = MiTerminateEnclave((__int64)KeGetCurrentThread()->ApcState.Process, v6, a2);
  }
  else
  {
    v7 = -1073741800;
  }
  MiUnlockAndDereferenceVad((volatile signed __int32 *)v6);
  return v7;
}
