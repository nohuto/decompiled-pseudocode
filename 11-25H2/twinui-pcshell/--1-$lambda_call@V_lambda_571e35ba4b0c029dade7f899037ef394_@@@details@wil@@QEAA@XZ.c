/*
 * XREFs of ??1?$lambda_call@V_lambda_571e35ba4b0c029dade7f899037ef394_@@@details@wil@@QEAA@XZ @ 0x180623F3C
 * Callers:
 *     _Util::TryOpenFileMappingHandleForWindow_::_1_::dtor$3 @ 0x1806DB498 (_Util--TryOpenFileMappingHandleForWindow_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::lambda_call<_lambda_571e35ba4b0c029dade7f899037ef394_>::~lambda_call<_lambda_571e35ba4b0c029dade7f899037ef394_>(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    RtlFreeUnicodeString(*(PUNICODE_STRING *)a1);
  }
}
