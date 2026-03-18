/*
 * XREFs of RtlpGetPersistedRegistryLocation @ 0x14061EC48
 * Callers:
 *     RtlpEtcGetDwordFromPersistedState @ 0x14061EA14 (RtlpEtcGetDwordFromPersistedState.c)
 * Callees:
 *     RtlGetPersistedStateLocation @ 0x140A10D20 (RtlGetPersistedStateLocation.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpGetPersistedRegistryLocation(PCWSTR SourceString, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  int PersistedStateLocation; // eax
  int v8; // ebx
  int v9; // ebx
  void *Pool2; // rdi
  _DWORD v12[4]; // [rsp+40h] [rbp-28h] BYREF

  v12[0] = 0;
  PersistedStateLocation = RtlGetPersistedStateLocation(SourceString, 0LL, 0, (__int64)v12);
  v8 = PersistedStateLocation;
  if ( PersistedStateLocation == -2147483643 )
  {
    v9 = v12[0];
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      v8 = RtlGetPersistedStateLocation(SourceString, Pool2, v9, (__int64)v12);
      if ( v8 < 0 )
      {
        ExFreePoolWithTag(Pool2, 0);
      }
      else
      {
        *a3 = Pool2;
        if ( a4 )
          *a4 = (v12[0] >> 1) - 1;
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else if ( PersistedStateLocation >= 0 )
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v8;
}
