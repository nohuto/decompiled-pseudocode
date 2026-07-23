/*
 * XREFs of RtlpHpSegHeapCheckCommitLimit @ 0x140354258
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x140350BD0 (RtlpHpSegMgrCommit.c)
 *     RtlpHpLargeAlloc @ 0x140353E20 (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpSegHeapCheckCommitLimit(__int64 a1, _QWORD *a2)
{
  unsigned __int8 *p_WaitType; // r10
  unsigned int v3; // ebx
  unsigned __int64 v4; // r8
  __int64 v6; // rax

  p_WaitType = (unsigned __int8 *)(a2 + 4);
  v3 = 0;
  v4 = a2[4];
  if ( (v4
     || (v4 = *(_QWORD *)&PspTlsContext.WaitBlockFill11[16],
         p_WaitType = &PspTlsContext.WaitBlock[0].WaitType,
         *(_QWORD *)&PspTlsContext.WaitBlockFill11[16]))
    && ((a2[17] + a2[12]) << 12) + a1 > v4 )
  {
    v6 = *((_QWORD *)p_WaitType + 1);
    if ( v6 )
      RtlpLogHeapFailure(21, (_DWORD)a2, 0, v6, a1, (a2[17] + a2[12]) << 12);
  }
  else
  {
    return 1;
  }
  return v3;
}
