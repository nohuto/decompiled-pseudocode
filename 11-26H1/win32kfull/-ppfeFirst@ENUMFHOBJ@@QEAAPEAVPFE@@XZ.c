/*
 * XREFs of ?ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x14020C6D0
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@@3@Z @ 0x1400C79A0 (-ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1403369CC (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct PFE *__fastcall ENUMFHOBJ::ppfeFirst(ENUMFHOBJ *this)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rax

  v1 = 0LL;
  v2 = *(_QWORD *)(*((_QWORD *)this + 1) + 24LL);
  *((_QWORD *)this + 3) = v2;
  if ( v2 )
    *((_QWORD *)this + 2) = *(_QWORD *)(v2 + 8);
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
    return *(struct PFE **)(v3 + 8);
  return (struct PFE *)v1;
}
