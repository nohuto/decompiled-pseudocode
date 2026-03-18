/*
 * XREFs of ExpQueryMemoryTopologyInformation @ 0x1407740EC
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     MmGetNodeChannelRanges @ 0x140B1FB9C (MmGetNodeChannelRanges.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpQueryMemoryTopologyInformation(void *a1, unsigned int a2, _DWORD *a3, char a4)
{
  size_t v6; // r14
  int NodeChannelRanges; // ebx
  size_t v9; // r8
  void *Src; // [rsp+28h] [rbp-30h] BYREF
  size_t Size[5]; // [rsp+30h] [rbp-28h] BYREF

  v6 = a2;
  Size[0] = 0LL;
  Src = 0LL;
  NodeChannelRanges = MmGetNodeChannelRanges(&Src, Size);
  if ( NodeChannelRanges >= 0 )
  {
    v9 = Size[0];
    *a3 = Size[0];
    if ( v9 <= 0xFFFFFFFF )
    {
      if ( v9 <= v6 )
      {
        if ( a4 )
          RtlCopyToUser(a1, Src, v9);
        else
          RtlCopyVolatileMemory(a1, Src, v9);
        NodeChannelRanges = 0;
      }
      else
      {
        NodeChannelRanges = -1073741789;
      }
    }
    else
    {
      NodeChannelRanges = -1073741670;
    }
  }
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  return (unsigned int)NodeChannelRanges;
}
