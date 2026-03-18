/*
 * XREFs of SmQueryStoreInformation @ 0x140B26304
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     SmProcessCompressionAcceleratorRequest @ 0x140819228 (SmProcessCompressionAcceleratorRequest.c)
 *     SmProcessCompressionReadStatsRequest @ 0x1408193C4 (SmProcessCompressionReadStatsRequest.c)
 *     SmProcessListRequest @ 0x1408199A8 (SmProcessListRequest.c)
 *     SmProcessProcessStoreInfoRequest @ 0x140819CB4 (SmProcessProcessStoreInfoRequest.c)
 *     SmProcessRegistrationRequest @ 0x140819E3C (SmProcessRegistrationRequest.c)
 *     SmProcessStatsRequest @ 0x140819F3C (SmProcessStatsRequest.c)
 *     SmcProcessListRequest @ 0x14081A284 (SmcProcessListRequest.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     SmProcessCompressionInfoRequest @ 0x140B26488 (SmProcessCompressionInfoRequest.c)
 */

__int64 __fastcall SmQueryStoreInformation(__int64 a1, void *a2, unsigned int a3, KPROCESSOR_MODE a4, unsigned int *a5)
{
  int v7; // eax
  void *Src[2]; // [rsp+28h] [rbp-20h] BYREF
  size_t Size; // [rsp+38h] [rbp-10h]

  if ( a3 < 0x18 )
    return 3221225990LL;
  *(_OWORD *)Src = 0LL;
  Size = 0LL;
  if ( a4 )
    RtlCopyFromUser(Src, a2, 0x18uLL);
  else
    RtlCopyVolatileMemory(Src, a2, 0x18uLL);
  if ( LODWORD(Src[0]) != 1 )
    return 3221225561LL;
  if ( a3 != 24 )
    return 3221225476LL;
  if ( HIDWORD(Src[0]) > 0x18 || (v7 = 29368612, !_bittest(&v7, HIDWORD(Src[0]))) )
  {
    if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
      return 3221225506LL;
  }
  switch ( HIDWORD(Src[0]) )
  {
    case 2:
      return SmProcessStatsRequest(Src[1], Size, a5, a4);
    case 5:
      return SmProcessListRequest(Src[1], Size, a5, a4);
    case 8:
      return SmcProcessListRequest(Src[1], Size, a5, a4);
    case 0xD:
      return 3221225659LL;
    case 0xF:
      return SmProcessRegistrationRequest(Src[1], Size, a5, a4);
    case 0x16:
      return SmProcessCompressionInfoRequest(Src[1], (unsigned int)Size);
    case 0x17:
      return SmProcessProcessStoreInfoRequest(Src[1], Size, a4);
    case 0x18:
      return SmProcessCompressionReadStatsRequest((char *)Src[1], (unsigned int)Size, a5, a4);
    case 0x19:
      return SmProcessCompressionAcceleratorRequest((char *)Src[1], (unsigned int)Size, a5, a4);
  }
  return 3221225475LL;
}
