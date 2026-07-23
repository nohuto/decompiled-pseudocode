/*
 * XREFs of MmAdjustSecuredVirtualMemorySize @ 0x14087103C
 * Callers:
 *     VmpUnsecureMemoryForPin @ 0x1408240F4 (VmpUnsecureMemoryForPin.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiWriteSecureFlags @ 0x1404C73A4 (MiWriteSecureFlags.c)
 *     PfpPartitionToParent @ 0x1404CF710 (PfpPartitionToParent.c)
 *     MiObtainReferencedSecureVad @ 0x1404DE4B8 (MiObtainReferencedSecureVad.c)
 */

__int64 __fastcall MmAdjustSecuredVirtualMemorySize(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v8; // rax
  volatile signed __int32 *v9; // r9
  __int64 v10; // r10
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = qword_140E2D7C0 ^ a1;
  v5 = 0;
  v11 = 0;
  if ( !MiObtainReferencedSecureVad(qword_140E2D7C0 ^ a1, &v11, a3) )
    return v11;
  v8 = PfpPartitionToParent(v4 + 24);
  if ( a2 < (v8 & 0xFFFFFFFFFFFFF000uLL)
    || a2 + ((a3 + (a2 & 0xFFF) + 4095) & 0xFFFFFFFFFFFFF000uLL) - 1 > *(_QWORD *)(v4 + 32) )
  {
    v5 = -1073741637;
  }
  else
  {
    MiWriteSecureFlags((_QWORD *)(v4 + 24), a2 | v8 & 0xFFF);
    *(_QWORD *)(v4 + 32) = v10;
  }
  MiUnlockAndDereferenceVad(v9);
  return v5;
}
