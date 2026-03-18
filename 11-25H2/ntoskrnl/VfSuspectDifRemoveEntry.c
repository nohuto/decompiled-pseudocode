/*
 * XREFs of VfSuspectDifRemoveEntry @ 0x140B8A660
 * Callers:
 *     VfVolatileApplyDifVerification @ 0x1406088A4 (VfVolatileApplyDifVerification.c)
 *     VfDriverRemoveDifVerification @ 0x140B7A510 (VfDriverRemoveDifVerification.c)
 *     VfSuspectRemoveDifVolatileVerification @ 0x140B8B158 (VfSuspectRemoveDifVolatileVerification.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     ViSuspectDriversLookupEntry @ 0x140B8B1C4 (ViSuspectDriversLookupEntry.c)
 */

void __fastcall VfSuspectDifRemoveEntry(const UNICODE_STRING *a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  void *v5; // rcx

  v1 = (_QWORD *)ViSuspectDriversLookupEntry(a1);
  v2 = v1;
  if ( v1 )
  {
    v3 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v4 = (_QWORD *)v1[1], (_QWORD *)*v4 != v2) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    v5 = (void *)v2[4];
    if ( v5 )
      ExFreePoolWithTag(v5, 0x44536656u);
    ExFreePoolWithTag(v2, 0x44536656u);
  }
}
