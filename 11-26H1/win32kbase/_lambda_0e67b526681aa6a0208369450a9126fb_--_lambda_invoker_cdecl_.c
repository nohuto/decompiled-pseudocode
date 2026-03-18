/*
 * XREFs of _lambda_0e67b526681aa6a0208369450a9126fb_::_lambda_invoker_cdecl_ @ 0x14014C690
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 */

void __fastcall lambda_0e67b526681aa6a0208369450a9126fb_::_lambda_invoker_cdecl_(CInputDest *Buffer)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  CInputDest::~CInputDest(Buffer);
  GreDeleteFastMutex((char *)Buffer, v2, v3, v4);
}
