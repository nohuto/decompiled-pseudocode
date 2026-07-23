/*
 * XREFs of MiDeleteTrimViewInfoList @ 0x140A8954C
 * Callers:
 *     MiLocateSharedPageViews @ 0x1406FCFF0 (MiLocateSharedPageViews.c)
 *     MiQueryBadAddresses @ 0x140870320 (MiQueryBadAddresses.c)
 *     MiTrimSharedPageFromViews @ 0x140A89498 (MiTrimSharedPageFromViews.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027BDE0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
