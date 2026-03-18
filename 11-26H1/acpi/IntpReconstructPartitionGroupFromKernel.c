/*
 * XREFs of IntpReconstructPartitionGroupFromKernel @ 0x14007210C
 * Callers:
 *     IntPartArbInit @ 0x1400BFF80 (IntPartArbInit.c)
 * Callees:
 *     RtlNumberOfSetBitsUlongPtr_0 @ 0x140055E1B (RtlNumberOfSetBitsUlongPtr_0.c)
 *     IntpAllocateGroupContext @ 0x1400720B4 (IntpAllocateGroupContext.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 */

__int64 __fastcall IntpReconstructPartitionGroupFromKernel(__int64 a1, _QWORD *a2)
{
  _QWORD *GroupContext; // rsi
  int v4; // eax
  __int64 v5; // rcx
  int InterruptPartitionInformation; // edi
  unsigned __int8 v7; // r14
  unsigned __int8 i; // bp
  int v10; // [rsp+20h] [rbp-38h] BYREF
  ULONG_PTR Target[2]; // [rsp+28h] [rbp-30h] BYREF

  v10 = 0;
  GroupContext = 0LL;
  *(_OWORD *)Target = 0LL;
  v4 = KeQueryInterruptPartitionCount(0LL, &v10);
  InterruptPartitionInformation = v4;
  if ( v4 != 259 )
  {
    if ( v4 < 0 )
      return (unsigned int)InterruptPartitionInformation;
    v7 = v10;
    GroupContext = (_QWORD *)IntpAllocateGroupContext(v5, v10);
    if ( !GroupContext )
      return (unsigned int)-1073741670;
    for ( i = 0; i < v7; ++i )
    {
      InterruptPartitionInformation = KeQueryInterruptPartitionInformation(0LL, i, Target);
      if ( InterruptPartitionInformation < 0 )
        goto LABEL_12;
      GroupContext[2 * i + 2] = Target[0];
      BYTE1(GroupContext[2 * i + 1]) = RtlNumberOfSetBitsUlongPtr_0(Target[0]);
    }
    *a2 = GroupContext;
  }
  if ( InterruptPartitionInformation < 0 && GroupContext )
LABEL_12:
    ExFreePoolWithTag(GroupContext, 0);
  return (unsigned int)InterruptPartitionInformation;
}
