/*
 * XREFs of VrpFreeCallbackContext @ 0x140949DB4
 * Callers:
 *     VrpPostOpenOrCreate @ 0x1409494F0 (VrpPostOpenOrCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall VrpFreeCallbackContext(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)P[7];
  if ( v2 )
    ExFreePoolWithTag(v2, 0x67655256u);
  v3 = (void *)P[3];
  if ( v3 )
    ExFreePoolWithTag(v3, 0x67655256u);
  ExFreePoolWithTag(P, 0x67655256u);
}
