/*
 * XREFs of RtlHpKInitializeHeapManager @ 0x1406D70BC
 * Callers:
 *     ExInitializePoolHeapManagement @ 0x1406D6B74 (ExInitializePoolHeapManagement.c)
 * Callees:
 *     RtlHpGlobalsInitialize @ 0x140628520 (RtlHpGlobalsInitialize.c)
 *     RtlHpHeapManagerInitialize @ 0x14062866C (RtlHpHeapManagerInitialize.c)
 *     RtlpHpMetadataHeapCreate @ 0x14063B9A0 (RtlpHpMetadataHeapCreate.c)
 *     RtlpHpVaMgrCtxStart @ 0x14063BEC0 (RtlpHpVaMgrCtxStart.c)
 *     RtlCSparseBitmapStart @ 0x14063CD08 (RtlCSparseBitmapStart.c)
 */

int RtlHpKInitializeHeapManager()
{
  __int64 v0; // r8
  int result; // eax
  __int128 v2; // [rsp+30h] [rbp-10h] BYREF
  _RTL_RUN_ONCE v3; // [rsp+50h] [rbp+10h] BYREF

  RtlHpGlobalsInitialize();
  v3.Value = 0x120300010200LL;
  if ( byte_140FC8BD8 )
    *((_BYTE *)&v3.2 + 4) = 1;
  RtlHpHeapManagerInitialize((_RTL_RUN_ONCE *)&ExpUuidLock.StackBase, &v3);
  *(_QWORD *)&stru_140E6BFE8.Header.Lock = 0LL;
  HIDWORD(stru_140E6BFE8.Header.WaitListHead.Flink) = (unsigned __int16)KeNumberNodes;
  if ( (unsigned __int16)KeNumberNodes > 0x40u )
    HIDWORD(stru_140E6BFE8.Header.WaitListHead.Flink) = 64;
  ExpUuidLock.ThreadLock = 0xFFFF800000000000uLL;
  result = RtlCSparseBitmapStart((__int64)&ExpUuidLock.CycleTime, 0x10000000uLL, v0, 1);
  if ( result >= 0 )
  {
    result = RtlpHpVaMgrCtxStart((__int64)&ExpUuidLock.TrapFrame);
    if ( result >= 0 )
    {
      v2 = 0LL;
      *(_WORD *)((char *)&v2 + 1) = 1;
      LOBYTE(v2) = 3;
      RtlpHpMetadataHeapCreate(&stru_140E6BF30, &v2, 0LL);
      return 0;
    }
  }
  return result;
}
