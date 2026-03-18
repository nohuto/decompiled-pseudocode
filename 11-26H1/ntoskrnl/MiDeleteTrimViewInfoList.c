/*
 * XREFs of MiDeleteTrimViewInfoList @ 0x140A841F8
 * Callers:
 *     MiLocateSharedPageViews @ 0x1406F8320 (MiLocateSharedPageViews.c)
 *     MiQueryBadAddresses @ 0x140869F40 (MiQueryBadAddresses.c)
 *     MiTrimSharedPageFromViews @ 0x140A84144 (MiTrimSharedPageFromViews.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027C870 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteTrimViewInfoList(_QWORD *P)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdi
  void *v3; // rcx

  if ( P )
  {
    v1 = P;
    do
    {
      v2 = v1;
      v1 = (_QWORD *)*v1;
      v3 = (void *)v2[1];
      if ( v3 )
        ObDereferenceObjectDeferDeleteWithTag(v3, 0x77566D4Du);
      ExFreePoolWithTag(v2, 0);
    }
    while ( v1 );
  }
}
