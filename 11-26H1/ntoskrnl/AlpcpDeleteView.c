/*
 * XREFs of AlpcpDeleteView @ 0x140992A34
 * Callers:
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140991C60 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140992124 (AlpcpCaptureViewAttributeInternal.c)
 *     NtAlpcDeleteSectionView @ 0x140A7DC00 (NtAlpcDeleteSectionView.c)
 *     NtAlpcCreateSectionView @ 0x140AAF390 (NtAlpcCreateSectionView.c)
 *     AlpcpReleaseViewAttribute @ 0x140AE13E0 (AlpcpReleaseViewAttribute.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x1408EE980 (AlpcpDestroyBlob.c)
 *     AlpcpDeleteBlob @ 0x140992A94 (AlpcpDeleteBlob.c)
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
