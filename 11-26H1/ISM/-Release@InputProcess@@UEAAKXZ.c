/*
 * XREFs of ?Release@InputProcess@@UEAAKXZ @ 0x180020830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall InputProcess::Release(InputProcess *this)
{
  return InputContext::Release(this);
}
