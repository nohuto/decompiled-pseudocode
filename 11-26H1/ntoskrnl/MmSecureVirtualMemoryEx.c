/*
 * XREFs of MmSecureVirtualMemoryEx @ 0x14077A5F0
 * Callers:
 *     VmpSecureMemoryForPin @ 0x140823D20 (VmpSecureMemoryForPin.c)
 *     MmSecureVirtualMemory @ 0x140AADF70 (MmSecureVirtualMemory.c)
 *     VmSecureBackingMemory @ 0x140B41220 (VmSecureBackingMemory.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 *     MiSecureVad @ 0x140B51BA0 (MiSecureVad.c)
 */

__int64 __fastcall MmSecureVirtualMemoryEx(unsigned __int64 a1, __int64 a2, unsigned int a3, int a4)
{
  int v6; // r14d
  int v7; // esi
  unsigned __int64 v8; // rdi
  ULONG_PTR v9; // rax
  volatile signed __int32 *v10; // rbx
  int v11; // ecx
  unsigned int v12; // r9d
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF
  int v15; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0;
  v14[0] = 0LL;
  v6 = a2;
  v7 = a1;
  if ( (a4 & 0xFFFFFFF0) != 0 )
    return 0LL;
  v8 = a1 + a2;
  if ( a1 + a2 > a1 )
  {
    if ( v8 > 0x7FFFFFFF0000LL )
      return 0LL;
  }
  else if ( a2 || v8 >= 0x7FFFFFFF0000LL )
  {
    return 0LL;
  }
  if ( ((a3 - 1) & 0xFFFFFFFC) == 0 && a3 != 3 )
  {
    v9 = MiObtainReferencedVadEx(a1 & 0xFFFFFFFFFFFFF000uLL, 0LL, &v15);
    v10 = (volatile signed __int32 *)v9;
    if ( v9 )
    {
      if ( ((v8 - 1) | 0xFFF) > (((*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) << 12) | 0xFFF)
        || (MiReadVadFlags(v9) & 0x1C) == 0xC )
      {
        MiUnlockAndDereferenceVad(v10);
      }
      else
      {
        v12 = a3 | 0x80000000;
        if ( (a4 & 2) == 0 )
          v12 = a3;
        v15 = MiSecureVad(v11, v7, v6, v12, a4, (__int64)v14);
        MiUnlockAndDereferenceVad(v10);
        if ( v15 >= 0 )
          return qword_140E2D7C0 ^ v14[0];
      }
    }
  }
  return 0LL;
}
