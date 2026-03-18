/*
 * XREFs of AlpcpReleaseAttributes @ 0x1409BCAB0
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1408E6A30 (AlpcpAcceptConnectPort.c)
 *     AlpcpReplaceAttributes @ 0x1409BCA1C (AlpcpReplaceAttributes.c)
 *     AlpcMessageCleanupProcedure @ 0x1409BD190 (AlpcMessageCleanupProcedure.c)
 *     AlpcpSendMessage @ 0x1409BD2F0 (AlpcpSendMessage.c)
 *     AlpcpCaptureAttributes @ 0x1409BE688 (AlpcpCaptureAttributes.c)
 * Callees:
 *     AlpcpReleaseDirectAttribute @ 0x1405FFB08 (AlpcpReleaseDirectAttribute.c)
 *     AlpcpDereferenceBlobEx @ 0x1409C0380 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReleaseViewAttribute @ 0x140AE38D8 (AlpcpReleaseViewAttribute.c)
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
