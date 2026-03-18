/*
 * XREFs of IoQueryVhdBootInformation @ 0x14077BBF0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 */

__int64 __fastcall IoQueryVhdBootInformation(__int64 a1, void *a2, unsigned int a3, _DWORD *a4, char a5)
{
  unsigned int v6; // ebx
  int v7; // eax

  v6 = 0;
  *a4 = 0;
  v7 = Size;
  if ( a3 < (unsigned int)Size )
  {
    v6 = -1073741789;
  }
  else
  {
    if ( a5 )
      RtlCopyToUser(a2, off_140E0A5F8, (unsigned int)Size);
    else
      RtlCopyVolatileMemory(a2, off_140E0A5F8, (unsigned int)Size);
    v7 = Size;
  }
  *a4 = v7;
  return v6;
}
