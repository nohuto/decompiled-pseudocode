/*
 * XREFs of ?HampSessionMarkLogoffInProgress@@YAJPEAU_HAM_SESSION@@@Z @ 0x18006E0E8
 * Callers:
 *     ?HampSessionLogoff@@YAJPEAU_HAM_SESSION@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180049CB8 (-HampSessionLogoff@@YAJPEAU_HAM_SESSION@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 * Callees:
 *     ?HampSessionAcquireLockExclusive@@YAXPEAU_HAM_SESSION@@@Z @ 0x18004A2A0 (-HampSessionAcquireLockExclusive@@YAXPEAU_HAM_SESSION@@@Z.c)
 *     ?HampSessionReleaseLockExclusive@@YAXPEAU_HAM_SESSION@@@Z @ 0x18004A330 (-HampSessionReleaseLockExclusive@@YAXPEAU_HAM_SESSION@@@Z.c)
 */

__int64 __fastcall HampSessionMarkLogoffInProgress(struct _HAM_SESSION *a1)
{
  int v2; // eax
  unsigned int v3; // edi

  HampSessionAcquireLockExclusive(a1);
  v2 = *((_DWORD *)a1 + 36);
  if ( (v2 & 2) != 0 )
  {
    v3 = -1073740682;
  }
  else
  {
    *((_DWORD *)a1 + 36) = v2 | 2;
    v3 = 0;
  }
  HampSessionReleaseLockExclusive(a1);
  return v3;
}
