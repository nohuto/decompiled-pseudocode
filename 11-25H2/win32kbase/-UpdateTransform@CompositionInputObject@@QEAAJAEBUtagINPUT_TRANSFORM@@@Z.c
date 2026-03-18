/*
 * XREFs of ?UpdateTransform@CompositionInputObject@@QEAAJAEBUtagINPUT_TRANSFORM@@@Z @ 0x1400652D8
 * Callers:
 *     NtUpdateInputSinkTransforms @ 0x1400F1110 (NtUpdateInputSinkTransforms.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140065374 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x140065DD0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 */

__int64 __fastcall CompositionInputObject::UpdateTransform(char *Object, const struct tagINPUT_TRANSFORM *a2)
{
  NTSTATUS v4; // ebx

  v4 = ObReferenceObjectByPointer(Object, 3u, ExCompositionObjectType, 0);
  if ( v4 >= 0 )
  {
    v4 = CPushLock::AcquireLockExclusive((CPushLock *)(Object + 32));
    if ( v4 < 0 )
    {
      ObfDereferenceObject(Object);
    }
    else
    {
      *((_OWORD *)Object + 7) = *(_OWORD *)a2;
      *((_OWORD *)Object + 8) = *((_OWORD *)a2 + 1);
      *((_OWORD *)Object + 9) = *((_OWORD *)a2 + 2);
      *((_OWORD *)Object + 10) = *((_OWORD *)a2 + 3);
      CInputSink::UnlockAndRelease((CInputSink *)(Object + 24));
    }
  }
  return (unsigned int)v4;
}
