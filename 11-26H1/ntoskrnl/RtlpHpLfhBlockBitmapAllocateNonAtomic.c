/*
 * XREFs of RtlpHpLfhBlockBitmapAllocateNonAtomic @ 0x1404B7168
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x14052345C (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhBlockBitmapAllocateNonAtomic(_QWORD *a1, unsigned int a2, int a3, __int16 a4)
{
  _QWORD *v5; // r8
  _QWORD *v6; // rcx

  v5 = &a1[a3];
  v6 = &a1[a2 - 1];
  while ( *v5 == -1LL )
  {
    if ( v5 == v6 )
      v5 = a1;
    else
      ++v5;
  }
  _RAX = 1LL << ((unsigned __int16)(a4 * __popcnt(~*v5)) >> 8);
  __asm { pdep    rcx, rax, rdx }
  *v5 |= _RCX;
  __asm { tzcnt   rax, rcx }
  return (unsigned int)(8 * ((_DWORD)v5 - (_DWORD)a1) + _RAX);
}
