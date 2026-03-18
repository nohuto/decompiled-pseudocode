/*
 * XREFs of IntPartIsInterruptSteerable @ 0x140071FC4
 * Callers:
 *     ProcessorpValidateTargetSet @ 0x1400D323C (ProcessorpValidateTargetSet.c)
 * Callees:
 *     KeQueryGroupAffinity_0 @ 0x140055E09 (KeQueryGroupAffinity_0.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 */

__int64 __fastcall IntPartIsInterruptSteerable(__int64 a1, bool *a2)
{
  int v4; // eax
  int v5; // ebx
  unsigned int v6; // eax
  unsigned int i; // esi
  unsigned int v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+28h] [rbp-30h] BYREF

  v10 = 0LL;
  v9 = 0;
  if ( *(_WORD *)(a1 + 8) )
  {
    *a2 = 0;
    return 0;
  }
  v4 = KeQueryInterruptPartitionCount(0LL, &v9);
  v5 = v4;
  if ( v4 == 259 )
  {
    *a2 = KeQueryGroupAffinity_0(*(_WORD *)(a1 + 8)) == *(_QWORD *)a1;
  }
  else
  {
    if ( v4 < 0 || (v6 = v9) == 0 )
    {
      *a2 = 0;
      return 0;
    }
    *a2 = 1;
    for ( i = 0; i < v6; ++i )
    {
      v5 = KeQueryInterruptPartitionInformation(*(unsigned __int16 *)(a1 + 8), i, &v10);
      if ( v5 < 0 || ((unsigned __int64)v10 & *(_QWORD *)a1) == 0 )
      {
        *a2 = 0;
        return (unsigned int)v5;
      }
      v6 = v9;
    }
  }
  return (unsigned int)v5;
}
