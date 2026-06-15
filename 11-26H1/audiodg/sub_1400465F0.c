/*
 * XREFs of sub_1400465F0 @ 0x1400465F0
 * Callers:
 *     sub_140014350 @ 0x140014350 (sub_140014350.c)
 *     sub_140015070 @ 0x140015070 (sub_140015070.c)
 *     sub_14003B304 @ 0x14003B304 (sub_14003B304.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14005D0FC @ 0x14005D0FC (sub_14005D0FC.c)
 */

__int64 __fastcall sub_1400465F0(HANDLE *a1, unsigned int a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v5; // rcx
  signed int LastError; // eax
  signed int v7; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*a1 )
    return 0LL;
  if ( (byte_1400E8401 & 8) != 0 )
  {
    CurrentThreadId = GetCurrentThreadId();
    sub_14005D0FC(v5, &unk_1400C7F78, a2, CurrentThreadId);
  }
  if ( AvRevertMmThreadCharacteristics(*a1) )
  {
    *a1 = 0LL;
    return 0LL;
  }
  LastError = GetLastError();
  v7 = LastError;
  if ( LastError > 0 )
    v7 = (unsigned __int16)LastError | 0x80070000;
  if ( v7 < 0 )
    sub_14000C2A8((int)retaddr, 2274, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp", v7);
  return (unsigned int)v7;
}
