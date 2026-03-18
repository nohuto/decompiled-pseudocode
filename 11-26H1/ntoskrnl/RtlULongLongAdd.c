/*
 * XREFs of RtlULongLongAdd @ 0x140470320
 * Callers:
 *     SPCall2ServerInternal @ 0x140A1AE00 (SPCall2ServerInternal.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongLongAdd(ULONGLONG ullAugend, ULONGLONG ullAddend, ULONGLONG *pullResult)
{
  ULONGLONG v3; // rax
  ULONGLONG v4; // rdx
  NTSTATUS result; // eax

  v3 = ullAugend + ullAddend;
  v4 = -1LL;
  if ( v3 >= ullAugend )
    v4 = v3;
  result = v3 < ullAugend ? 0xC0000095 : 0;
  *pullResult = v4;
  return result;
}
