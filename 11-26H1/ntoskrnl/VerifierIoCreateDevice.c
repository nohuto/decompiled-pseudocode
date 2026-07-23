/*
 * XREFs of VerifierIoCreateDevice @ 0x140C365C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ViDevObjAdd @ 0x140C368A8 (ViDevObjAdd.c)
 */

__int64 __fastcall VerifierIoCreateDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6, _QWORD *a7)
{
  int v7; // ebx

  v7 = guard_dispatch_icall_no_overrides(a1, a2);
  if ( v7 >= 0 && (MmVerifierData & 0x10) != 0 )
    ViDevObjAdd(*a7);
  return (unsigned int)v7;
}
