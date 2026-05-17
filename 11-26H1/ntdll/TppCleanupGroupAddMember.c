/*
 * XREFs of TppCleanupGroupAddMember @ 0x18004EB90
 * Callers:
 *     TpAllocWork @ 0x18004E830 (TpAllocWork.c)
 *     TppInitializeTimer @ 0x18004E9C0 (TppInitializeTimer.c)
 *     TpAllocTimer @ 0x18004EC00 (TpAllocTimer.c)
 *     TpAllocWait @ 0x18004F460 (TpAllocWait.c)
 *     TppAllocAlpcCompletion @ 0x180064DE4 (TppAllocAlpcCompletion.c)
 *     TpAllocIoCompletion @ 0x180065290 (TpAllocIoCompletion.c)
 *     TpSimpleTryPost @ 0x1800DAE30 (TpSimpleTryPost.c)
 *     TpAllocJobNotification @ 0x1800FB800 (TpAllocJobNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 */

struct _TEB *__fastcall TppCleanupGroupAddMember(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h]

  v6 = *(_QWORD *)(a1 + 16);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v6 + 8), a2);
  v3 = (_QWORD *)(a1 + 40);
  v4 = *(_QWORD **)(v6 + 24);
  if ( *v4 != v6 + 16 )
    __fastfail(3u);
  *v3 = v6 + 16;
  v3[1] = v4;
  *v4 = v3;
  *(_QWORD *)(v6 + 24) = v3;
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v6 + 8));
}
