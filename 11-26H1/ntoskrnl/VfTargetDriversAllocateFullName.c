/*
 * XREFs of VfTargetDriversAllocateFullName @ 0x140C2EE74
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x140C3EA60 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     RtlUShortAdd @ 0x14047AFC0 (RtlUShortAdd.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

void __fastcall VfTargetDriversAllocateFullName(__int64 a1, __int64 a2)
{
  USHORT v4; // ax
  void *Pool2; // rax
  USHORT v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v6 = 0;
    if ( a2 )
    {
      if ( !*(_QWORD *)(a1 + 32) )
      {
        if ( RtlUShortAdd(*(_WORD *)(a2 + 72), 2u, &v6) == -1073741675 )
          v4 = -1;
        else
          v4 = v6;
        Pool2 = (void *)ExAllocatePool2(64LL, v4, 0x44536656u);
        *(_QWORD *)(a1 + 32) = Pool2;
        if ( Pool2 )
        {
          *(_WORD *)(a1 + 24) = *(_WORD *)(a2 + 72);
          *(_WORD *)(a1 + 26) = *(_WORD *)(a2 + 74);
          memmove(Pool2, *(const void **)(a2 + 80), *(unsigned __int16 *)(a2 + 72));
        }
      }
    }
  }
}
