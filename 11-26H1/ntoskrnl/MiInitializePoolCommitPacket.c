/*
 * XREFs of MiInitializePoolCommitPacket @ 0x140365F04
 * Callers:
 *     MmAllocateSecurePoolMemory @ 0x140700968 (MmAllocateSecurePoolMemory.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x1403667E0 (MiMakeProtectionMask.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiInitializePoolCommitPacket(
        unsigned __int64 *a1,
        ULONG_PTR *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  ULONG_PTR v9; // rbx
  unsigned __int8 CurrentIrql; // al
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  unsigned int ProtectionMask; // eax
  int v15; // r8d
  unsigned int v16; // r9d
  __int64 v17; // r10
  ULONG_PTR v18; // r11
  __int16 v19; // ax
  __int64 result; // rax
  int v21; // ecx

  v9 = *a2;
  *(_WORD *)(a8 + 100) = 0;
  CurrentIrql = KeGetCurrentIrql();
  *(_BYTE *)(a8 + 102) = CurrentIrql;
  v11 = *a1;
  v12 = *a1 + v9 - 1;
  *(_QWORD *)a8 = *a1;
  *(_QWORD *)(a8 + 48) = 0LL;
  v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a8 + 80) = v13;
  *(_QWORD *)(a8 + 88) = 0LL;
  *(_DWORD *)(a8 + 96) = a6;
  *(_QWORD *)(a8 + 8) = ((__int64)(v13 - ((v11 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL) >> 3) + 1;
  *(_QWORD *)(a8 + 56) = 0LL;
  *(_QWORD *)(a8 + 40) = 0LL;
  ProtectionMask = MiMakeProtectionMask(a4);
  if ( ProtectionMask != 4 )
  {
    if ( ProtectionMask > 0x18 || (v21 = 16777282, !_bittest(&v21, ProtectionMask)) )
      KeBugCheckEx(0x1Au, 0x5300uLL, v18, v9, v16);
  }
  v19 = 8 * (ProtectionMask & 0x1F);
  *(_WORD *)(v17 + 100) = v19;
  if ( (v15 & 0x40000000) != 0 )
    *(_WORD *)(v17 + 100) = v19 | 0x200;
  *(_OWORD *)(v17 + 16) = 0LL;
  *(_QWORD *)(v17 + 32) = 0LL;
  result = (__int64)&unk_140E375C0;
  *(_QWORD *)(v17 + 64) = 4LL;
  *(_QWORD *)(v17 + 72) = &unk_140E375C0;
  if ( (a5 & 0x100) != 0 )
  {
    *(_WORD *)(v17 + 100) |= 2u;
    result = (__int64)&unk_140E37200;
    *(_QWORD *)(v17 + 72) = &unk_140E37200;
    *(_DWORD *)(v17 + 64) = 5;
  }
  else if ( (v15 & 0x20000000) != 0 )
  {
    *(_WORD *)(v17 + 100) |= 4u;
  }
  else
  {
    result = a7;
    if ( a7 )
    {
      *(_WORD *)(v17 + 100) |= 0x100u;
      *(_QWORD *)(v17 + 40) = a7;
      *(_DWORD *)(v17 + 64) = 14;
    }
  }
  if ( (a5 & 0x200) != 0 )
  {
    result = 2048LL;
    *(_WORD *)(v17 + 100) |= 0x800u;
  }
  return result;
}
