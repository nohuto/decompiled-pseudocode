/*
 * XREFs of VmPinMemoryRange @ 0x1408233B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     VmPinMemoryRanges @ 0x1408234A0 (VmPinMemoryRanges.c)
 */

__int64 __fastcall VmPinMemoryRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v5; // edx
  unsigned __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v8[2]; // [rsp+38h] [rbp-20h] BYREF

  if ( a5 == -1 )
  {
    v5 = -1073741811;
    if ( _bittest64(*((const signed __int64 **)stru_140F06A28.StackBase + 1), 0) )
      return (unsigned int)-1073741776;
  }
  else if ( (a2 & 0xFFF) != 0 || (a1 & 0xFFF) != 0 || !a3 || (a4 & 0xFFFFFF78) != 0 || (a4 & 0xFFFFFF7F) == 0 )
  {
    return (unsigned int)-1073741811;
  }
  else if ( KeGetCurrentThread()->ApcState.Process[3].ProcessListEntry.Blink )
  {
    v7 = a2 >> 12;
    v8[1] = a3;
    v8[0] = a1 >> 12;
    return (unsigned int)VmPinMemoryRanges((unsigned int)v8, (unsigned int)&v7, 1, a4, a5);
  }
  else
  {
    return (unsigned int)-1073741688;
  }
  return v5;
}
