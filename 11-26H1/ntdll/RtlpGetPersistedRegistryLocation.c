/*
 * XREFs of RtlpGetPersistedRegistryLocation @ 0x180148940
 * Callers:
 *     RtlpEtcGetDwordFromPersistedState @ 0x180148714 (RtlpEtcGetDwordFromPersistedState.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x180037BF0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlGetPersistedStateLocation @ 0x18003E210 (RtlGetPersistedStateLocation.c)
 */

__int64 __fastcall RtlpGetPersistedRegistryLocation(wchar_t *String, _WORD *a2, _QWORD *a3, _DWORD *a4)
{
  int PersistedStateLocation; // eax
  int v9; // ebx
  unsigned int v10; // ebx
  void *Atom; // rdi
  unsigned int v13[4]; // [rsp+40h] [rbp-28h] BYREF

  v13[0] = 0;
  PersistedStateLocation = RtlGetPersistedStateLocation(String, L"TargetNtPath", a2, 0, 0LL, 0, v13);
  v9 = PersistedStateLocation;
  if ( PersistedStateLocation == -2147483643 )
  {
    v10 = v13[0];
    Atom = (void *)RtlpAllocateAtom(v13[0]);
    if ( Atom )
    {
      v9 = RtlGetPersistedStateLocation(String, L"TargetNtPath", a2, 0, Atom, v10, v13);
      if ( v9 < 0 )
      {
        RtlpSysVolFree((__int64)Atom);
      }
      else
      {
        *a3 = Atom;
        if ( a4 )
          *a4 = (v13[0] >> 1) - 1;
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
  return (unsigned int)v9;
}
