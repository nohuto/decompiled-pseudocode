/*
 * XREFs of ?HampActResetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@E@Z @ 0x18007CE68
 * Callers:
 *     ?HamSrvResetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KE@Z @ 0x18007AFC8 (-HamSrvResetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KE@Z.c)
 * Callees:
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017D00 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180018CB0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampRmContextResetExternalResourcePriority@@YAJPEAXE@Z @ 0x18007E8D8 (-HampRmContextResetExternalResourcePriority@@YAJPEAXE@Z.c)
 */

__int64 __fastcall HampActResetExternalResourcePriority(struct _HAM_ACTIVITY *a1, unsigned __int8 a2)
{
  int *v4; // rsi
  int v5; // eax
  int v6; // ebx
  struct _RM_HAM_ACTIVITY_HOST *v7; // rcx

  HampHostAcquireLockExclusiveEx(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10), 0);
  v4 = (int *)((char *)a1 + 552);
  v5 = *((_DWORD *)a1 + 138);
  if ( (v5 & 1) != 0 )
  {
    v6 = -1073740682;
  }
  else if ( *((_BYTE *)a1 + 562) == 4 )
  {
    v6 = -1073741275;
  }
  else if ( (v5 & 8) != 0 )
  {
    v6 = -1058275327;
  }
  else
  {
    v7 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 10);
    *v4 = v5 | 1;
    HampHostReleaseLockExclusive(v7);
    v6 = HampRmContextResetExternalResourcePriority(*((void **)a1 + 11), a2);
    HampHostAcquireLockExclusiveEx(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10), 0);
    *v4 &= ~1u;
    if ( v6 >= 0 )
      v6 = 0;
  }
  HampHostReleaseLockExclusive(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10));
  RtlWakeAddressAll((char *)a1 + 552);
  return (unsigned int)v6;
}
