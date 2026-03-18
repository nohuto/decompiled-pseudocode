/*
 * XREFs of ?AddRef@CAdapter@@UEAAJXZ @ 0x14004DA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAdapter::AddRef(CAdapter *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 48);
}
