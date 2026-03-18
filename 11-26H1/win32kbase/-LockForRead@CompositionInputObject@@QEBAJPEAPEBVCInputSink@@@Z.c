/*
 * XREFs of ?LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z @ 0x1401330E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CompositionInputObject::LockForRead(CompositionInputObject *this, const struct CInputSink **a2)
{
  NTSTATUS result; // eax
  const struct CInputSink *v5; // rbx

  *a2 = 0LL;
  result = ObReferenceObjectByPointer(this, 3u, ExCompositionObjectType, 0);
  if ( result >= 0 )
  {
    KeEnterCriticalRegion();
    v5 = (CompositionInputObject *)((char *)this + 24);
    ExAcquirePushLockSharedEx((char *)v5 + 8, 0LL);
    result = 0;
    *a2 = v5;
  }
  return result;
}
