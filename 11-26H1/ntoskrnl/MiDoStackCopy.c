/*
 * XREFs of MiDoStackCopy @ 0x1403E7C50
 * Callers:
 *     <none>
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x140262E30 (KeExpandKernelStackAndCalloutInternal.c)
 *     RtlpGetStackLimits @ 0x140263230 (RtlpGetStackLimits.c)
 *     MiJumpStackTarget @ 0x1403E7E30 (MiJumpStackTarget.c)
 *     KeGetCurrentStackPointer @ 0x14072BF60 (KeGetCurrentStackPointer.c)
 */

__int64 __fastcall MiDoStackCopy(__int64 a1, unsigned __int64 *a2, ULONG_PTR a3, ULONG_PTR a4)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 *v5; // rdi
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 *v11; // rbx
  ULONG_PTR BugCheckParameter3[4]; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v13; // [rsp+88h] [rbp+38h] BYREF
  __int64 v14; // [rsp+90h] [rbp+40h] BYREF

  v4 = *a2;
  v5 = a2;
  v6 = 6 * *a2;
  v7 = a2[6];
  BugCheckParameter3[0] = (ULONG_PTR)a2;
  BugCheckParameter3[1] = a3;
  BugCheckParameter3[2] = a4;
  LOWORD(a2) = (v7 != 0) + 1;
  if ( v4 > qword_140E2D920
    || ((*(_QWORD *)(8 * v6 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0
    || ((*(_QWORD *)(8 * v6 - 0x220000000000LL + 40) >> 60) & 7) != 2
    || ((v9 = *(_QWORD *)(8 * v6 - 0x220000000000LL), (v9 & 0xFFFFFFFFFFELL) != 0)
      ? (v10 = 8 * (v9 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL))
      : (v10 = 0LL),
        v10 == -32LL
     || (*(_BYTE *)(8 * v6 - 0x220000000000LL + 34) & 7) != 6
     || (unsigned __int16)*(_DWORD *)(8 * v6 - 0x220000000000LL + 32) != (_WORD)a2) )
  {
    *((_DWORD *)v5 + 8) = -1073740748;
    return MiJumpStackTarget(BugCheckParameter3, a2);
  }
  v13 = 0LL;
  v14 = 0LL;
  if ( (unsigned __int8)RtlpGetStackLimits((__int64)&v13, (__int64)&v14) && (v13 != 0xFFFF800000000000uLL || v14 != -1) )
  {
    v11 = (unsigned __int64 *)(((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    a2 = (unsigned __int64 *)((((unsigned __int64)KeGetCurrentStackPointer() >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    while ( v11 <= a2 )
    {
      if ( ((*v11 >> 12) & 0xFFFFFFFFFFLL) == v4 )
        goto LABEL_20;
      ++v11;
    }
    return MiJumpStackTarget(BugCheckParameter3, a2);
  }
LABEL_20:
  result = KeExpandKernelStackAndCalloutInternal(
             (ULONG_PTR)MiJumpStackTarget,
             (ULONG_PTR)BugCheckParameter3,
             KeKernelStackSize,
             1,
             0LL);
  if ( (int)result < 0 )
  {
    *((_DWORD *)v5 + 8) = result;
    return MiJumpStackTarget(BugCheckParameter3, a2);
  }
  return result;
}
