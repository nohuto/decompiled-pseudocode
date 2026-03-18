/*
 * XREFs of IovpBuildDriverObjectList @ 0x140C20F98
 * Callers:
 *     ObEnumerateObjectsByType @ 0x1407C36F4 (ObEnumerateObjectsByType.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x140449C10 (ObReferenceObjectSafe.c)
 *     PnpIsLegacyDriver @ 0x140916A34 (PnpIsLegacyDriver.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

char __fastcall IovpBuildDriverObjectList(__int64 a1)
{
  ULONG_PTR Pool2; // rax
  _QWORD *v3; // rbx

  if ( !(unsigned int)PnpIsLegacyDriver(a1) )
    goto LABEL_6;
  Pool2 = ExAllocatePool2(64LL, 0x10uLL, 0x6F7649u);
  v3 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    if ( ObReferenceObjectSafe(a1) )
    {
      v3[1] = a1;
      *v3 = IovDriverListHead;
      IovDriverListHead = v3;
    }
    else
    {
      ExFreePoolWithTag(v3, 0);
    }
LABEL_6:
    LOBYTE(Pool2) = 1;
  }
  return Pool2;
}
