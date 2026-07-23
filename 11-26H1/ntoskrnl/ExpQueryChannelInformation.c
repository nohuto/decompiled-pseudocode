/*
 * XREFs of ExpQueryChannelInformation @ 0x140B693A4
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     MmGetProcessPartitionId @ 0x1404A34A8 (MmGetProcessPartitionId.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     MmGetChannelInformation @ 0x140B0E978 (MmGetChannelInformation.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpQueryChannelInformation(unsigned int *a1, unsigned int a2, _DWORD *a3, char a4)
{
  size_t v6; // r14
  int ChannelInformation; // ebx
  unsigned __int16 ProcessPartitionId; // ax
  unsigned int v10; // edx
  size_t v11; // r8
  void *Src; // [rsp+30h] [rbp-28h] BYREF
  size_t Size[4]; // [rsp+38h] [rbp-20h] BYREF

  v6 = a2;
  Size[0] = 0LL;
  Src = 0LL;
  if ( a2 >= 4 )
  {
    if ( a4 )
      RtlReadULongFromUser(a1);
    ProcessPartitionId = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
    ChannelInformation = MmGetChannelInformation(ProcessPartitionId, v10, &Src, Size);
    if ( ChannelInformation >= 0 )
    {
      v11 = Size[0];
      *a3 = Size[0];
      if ( v11 <= 0xFFFFFFFF )
      {
        if ( v6 >= v11 )
        {
          if ( a4 )
            RtlCopyToUser(a1, Src, v11);
          else
            RtlCopyVolatileMemory(a1, Src, v11);
          ChannelInformation = 0;
        }
        else
        {
          ChannelInformation = -1073741789;
        }
      }
      else
      {
        ChannelInformation = -1073741670;
      }
    }
  }
  else
  {
    ChannelInformation = -1073741306;
  }
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  return (unsigned int)ChannelInformation;
}
