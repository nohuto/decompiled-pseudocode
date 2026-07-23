/*
 * XREFs of ExpCaptureWnfStateName @ 0x1409C58F8
 * Callers:
 *     ExpNtDeleteWnfStateData @ 0x1408454E8 (ExpNtDeleteWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x1409C3B60 (NtQueryWnfStateNameInformation.c)
 *     NtUnsubscribeWnfStateChange @ 0x1409C41C0 (NtUnsubscribeWnfStateChange.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x1409C46A4 (ExpWnfSubscribeWnfStateChange.c)
 *     NtDeleteWnfStateName @ 0x1409C4FD0 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateData @ 0x1409C5400 (NtQueryWnfStateData.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 */

__int64 __fastcall ExpCaptureWnfStateName(void *Src, unsigned __int64 *a2, char a3)
{
  __int64 ULong64FromUser; // rcx
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // ecx
  int v9; // ecx
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0LL;
  if ( a3 )
  {
    ULong64FromUser = RtlReadULong64FromUser(Src);
  }
  else
  {
    RtlCopyVolatileMemory(&v11, Src, 8uLL);
    ULong64FromUser = v11;
  }
  v5 = ULong64FromUser ^ 0x41C64E6DA3BC0074LL;
  *a2 = v5;
  if ( (v5 & 0xF) != 1 )
    return 3221225485LL;
  v6 = (v5 >> 6) & 0xF;
  v7 = (v5 >> 10) & 1;
  v8 = (v5 >> 4) & 3;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( (unsigned int)(v9 - 1) > 1 )
        return 3221225485LL;
    }
  }
  if ( (unsigned int)v6 >= 4 && (unsigned int)(v6 - 4) > 1 )
    return 3221225485LL;
  if ( (_DWORD)v7 && (v6 & 0xFFFFFFFD) != 0 )
    return (_DWORD)v6 != 4 ? 0xC000000D : 0;
  return 0LL;
}
