/*
 * XREFs of PpmHeteroDispatchRegisterWpsUpdates @ 0x1407D9200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmHeteroDispatchRegisterWpsUpdates(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  char v4; // cl

  v2 = 0;
  if ( a1 )
  {
    *(_OWORD *)a1 = 0LL;
    v4 = PpmHeteroHgsEnabled;
    *(_DWORD *)a1 = (unsigned __int8)PpmHeteroHgsEnabled;
    *(_DWORD *)(a1 + 4) = PpmHeteroWorkloadClasses;
    if ( v4 )
    {
      *(_QWORD *)(a1 + 8) = PpmHeteroDispatchHgsInterrupt;
      if ( PpmHeteroRegisterWpsUpdates )
        return (unsigned int)guard_dispatch_icall_no_overrides(a1, a2);
      else
        return (unsigned int)-1073741661;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
