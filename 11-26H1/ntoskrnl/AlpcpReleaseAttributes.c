/*
 * XREFs of AlpcpReleaseAttributes @ 0x14098DA90
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1408ECFF0 (AlpcpAcceptConnectPort.c)
 *     AlpcpReplaceAttributes @ 0x14098D9FC (AlpcpReplaceAttributes.c)
 *     AlpcMessageCleanupProcedure @ 0x14098E170 (AlpcMessageCleanupProcedure.c)
 *     AlpcpSendMessage @ 0x14098E2D0 (AlpcpSendMessage.c)
 *     AlpcpCaptureAttributes @ 0x14098F668 (AlpcpCaptureAttributes.c)
 * Callees:
 *     AlpcpReleaseDirectAttribute @ 0x140602558 (AlpcpReleaseDirectAttribute.c)
 *     AlpcpDereferenceBlobEx @ 0x140991360 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReleaseViewAttribute @ 0x140AE13E0 (AlpcpReleaseViewAttribute.c)
 */

unsigned __int64 __fastcall AlpcpReleaseAttributes(__int64 a1, _QWORD *a2)
{
  ULONG_PTR v3; // rcx
  ULONG_PTR v4; // rcx
  ULONG_PTR v5; // rcx
  unsigned __int64 result; // rax

  v3 = a2[4];
  if ( v3 )
  {
    AlpcpDereferenceBlobEx(v3);
    a2[4] = 0LL;
  }
  v4 = a2[5];
  if ( v4 )
  {
    AlpcpReleaseViewAttribute(v4);
    a2[5] = 0LL;
  }
  v5 = a2[6];
  if ( v5 )
  {
    AlpcpDereferenceBlobEx(v5);
    a2[6] = 0LL;
  }
  result = a2[7];
  if ( (result & 1) != 0 )
  {
    if ( result >= 4 )
      result = AlpcpReleaseDirectAttribute(a2[7]);
    a2[7] = 0LL;
  }
  return result;
}
