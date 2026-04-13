/*
 * XREFs of ??0_lambda_798ec8630cdce9ee98b03af562801a4a_@@QEAA@AEBQEAVUniqueExtendedExecutionSession@@AEBQ81@EAAJPEAUIInspectable@@PEAUIExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@Windows@@@Z@Z @ 0x18008E388
 * Callers:
 *     ?RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ @ 0x180090858 (-RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _lambda_798ec8630cdce9ee98b03af562801a4a_::_lambda_798ec8630cdce9ee98b03af562801a4a_(
        __int64 a1,
        _QWORD *a2,
        _OWORD *a3)
{
  __int64 result; // rax

  *(_QWORD *)a1 = *a2;
  result = a1;
  *(_OWORD *)(a1 + 8) = *a3;
  return result;
}
