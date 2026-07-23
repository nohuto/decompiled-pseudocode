/*
 * XREFs of ExpQueryNumaProcessorMap @ 0x140AF8958
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x140201320 (KeQueryNodeActiveAffinity.c)
 *     KeQueryHighestNodeNumber @ 0x140481FE0 (KeQueryHighestNodeNumber.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 */

__int64 __fastcall ExpQueryNumaProcessorMap(_DWORD *a1, unsigned int a2, char a3, _DWORD *a4)
{
  USHORT HighestNodeNumber; // ax
  unsigned int v9; // edi
  unsigned int i; // ebx
  _DWORD *v11; // rcx
  _GROUP_AFFINITY Affinity; // [rsp+28h] [rbp-40h] BYREF

  if ( a2 < 4 )
  {
    if ( a4 )
      *a4 = 4;
    return 3221225476LL;
  }
  else
  {
    HighestNodeNumber = KeQueryHighestNodeNumber();
    v9 = HighestNodeNumber + 1;
    if ( a3 )
      RtlWriteULongToUser(a1, HighestNodeNumber);
    else
      *a1 = HighestNodeNumber;
    if ( (a2 - 8) >> 4 <= v9 )
      v9 = (a2 - 8) >> 4;
    if ( a2 >= 8 && v9 )
    {
      *a4 = 16 * v9 + 8;
      for ( i = 0; i < v9; ++i )
      {
        Affinity = 0LL;
        KeQueryNodeActiveAffinity(i, &Affinity, 0LL);
        v11 = &a1[4 * i + 2];
        if ( a3 )
          RtlCopyToUser(v11, &Affinity, 0x10uLL);
        else
          RtlCopyVolatileMemory(v11, &Affinity, 0x10uLL);
      }
    }
    else
    {
      *a4 = 4;
    }
    return 0LL;
  }
}
