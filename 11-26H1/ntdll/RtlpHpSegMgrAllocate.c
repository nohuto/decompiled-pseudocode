/*
 * XREFs of RtlpHpSegMgrAllocate @ 0x18006E9CC
 * Callers:
 *     RtlpHpSegSegmentAllocate @ 0x18006DF50 (RtlpHpSegSegmentAllocate.c)
 * Callees:
 *     RtlpHpSegMgrRelease @ 0x18006DBFC (RtlpHpSegMgrRelease.c)
 *     RtlpHpSegMgrReserve @ 0x18006EA9C (RtlpHpSegMgrReserve.c)
 *     RtlpHpSegMgrCommit @ 0x18008A260 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x180158450 (RtlpHpSegMgrVaCtxInsert.c)
 */

void *__fastcall RtlpHpSegMgrAllocate(__int64 a1, int a2, int a3)
{
  int v6; // r9d
  void *v7; // rbx
  void *v8; // rdi
  int v10; // [rsp+20h] [rbp-38h]
  unsigned int v11; // [rsp+40h] [rbp-18h] BYREF
  void *v12; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v13; // [rsp+78h] [rbp+20h] BYREF

  v11 = 0;
  v13 = 0;
  v12 = 0LL;
  if ( (int)RtlpHpSegMgrReserve(a1, a3, (unsigned int)&v12, (unsigned int)&v11, (__int64)&v13) < 0 )
  {
    v7 = v12;
    v8 = 0LL;
  }
  else
  {
    v6 = a2;
    v10 = a2;
    v7 = v12;
    if ( (int)RtlpHpSegMgrCommit(a1, (_DWORD)v12, 0, v6, v10, 1073745920, a3) < 0 )
    {
      v8 = 0LL;
    }
    else
    {
      if ( v11 < v13 )
        RtlpHpSegMgrVaCtxInsert(a1, v7);
      v8 = v7;
      v7 = 0LL;
    }
  }
  if ( v7 )
    RtlpHpSegMgrRelease(a1, v7, 0);
  return v8;
}
