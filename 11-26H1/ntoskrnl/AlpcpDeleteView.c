/*
 * XREFs of AlpcpDeleteView @ 0x1409C1A54
 * Callers:
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1409C0C80 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x1409C1144 (AlpcpCaptureViewAttributeInternal.c)
 *     NtAlpcDeleteSectionView @ 0x140A74EE0 (NtAlpcDeleteSectionView.c)
 *     NtAlpcCreateSectionView @ 0x140AB13A0 (NtAlpcCreateSectionView.c)
 *     AlpcpReleaseViewAttribute @ 0x140AE38D8 (AlpcpReleaseViewAttribute.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x1408E83C0 (AlpcpDestroyBlob.c)
 *     AlpcpDeleteBlob @ 0x1409C1AB4 (AlpcpDeleteBlob.c)
 */

char __fastcall AlpcpDeleteView(ULONG_PTR BugCheckParameter2)
{
  signed __int64 v2; // rax
  bool v3; // cc
  ULONG_PTR BugCheckParameter4; // rax

  if ( !(unsigned __int8)AlpcpDeleteBlob(BugCheckParameter2) )
    return 0;
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  BugCheckParameter4 = v2 - 1;
  if ( v3 )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x21uLL, BugCheckParameter4);
    AlpcpDestroyBlob(BugCheckParameter2, 0LL);
  }
  return 1;
}
