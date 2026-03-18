/*
 * XREFs of RtlHpKInitializeHeapManager @ 0x1406D308C
 * Callers:
 *     ExInitializePoolHeapManagement @ 0x1406D2B44 (ExInitializePoolHeapManagement.c)
 * Callees:
 *     RtlHpGlobalsInitialize @ 0x1406254D0 (RtlHpGlobalsInitialize.c)
 *     RtlHpHeapManagerInitialize @ 0x14062561C (RtlHpHeapManagerInitialize.c)
 *     RtlpHpMetadataHeapCreate @ 0x140638990 (RtlpHpMetadataHeapCreate.c)
 *     RtlpHpVaMgrCtxStart @ 0x140638EB0 (RtlpHpVaMgrCtxStart.c)
 *     RtlCSparseBitmapStart @ 0x140639CF8 (RtlCSparseBitmapStart.c)
 */

int RtlHpKInitializeHeapManager()
{
  __int64 v0; // r8
  int result; // eax
  __int128 Parameter; // [rsp+30h] [rbp-10h] BYREF
  union _RTL_RUN_ONCE v3; // [rsp+50h] [rbp+10h] BYREF

  RtlHpGlobalsInitialize();
  v3.Value = 0x120300010200LL;
  if ( byte_140FC7BE8 )
    *((_BYTE *)&v3.2 + 4) = 1;
  RtlHpHeapManagerInitialize((union _RTL_RUN_ONCE *)&ExpUuidLock.StackLimit, &v3);
  *(_QWORD *)&stru_140E6BCE8.Header.Lock = 0LL;
  HIDWORD(stru_140E6BCE8.Header.WaitListHead.Flink) = (unsigned __int16)KeNumberNodes;
  if ( (unsigned __int16)KeNumberNodes > 0x40u )
    HIDWORD(stru_140E6BCE8.Header.WaitListHead.Flink) = 64;
  ExpUuidLock.StackBase = (void *)0xFFFF800000000000LL;
  result = RtlCSparseBitmapStart((__int64)&ExpUuidLock.ThreadLock, 0x10000000uLL, v0, 1);
  if ( result >= 0 )
  {
    result = RtlpHpVaMgrCtxStart((__int64)&ExpUuidLock.FirstArgument);
    if ( result >= 0 )
    {
      Parameter = 0LL;
      *(_WORD *)((char *)&Parameter + 1) = 1;
      LOBYTE(Parameter) = 3;
      RtlpHpMetadataHeapCreate(&RunOnce, &Parameter, 0LL);
      return 0;
    }
  }
  return result;
}
