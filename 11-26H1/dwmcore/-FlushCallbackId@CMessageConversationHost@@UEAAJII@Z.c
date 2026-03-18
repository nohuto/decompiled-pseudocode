/*
 * XREFs of ?FlushCallbackId@CMessageConversationHost@@UEAAJII@Z @ 0x1801997E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMessageConversationHost::FlushCallbackId(CMessageConversationHost *this, __int64 a2, __int64 a3)
{
  unsigned int v3; // ecx
  __int64 result; // rax

  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**((_QWORD **)this + 3) + 80LL))(
         *((_QWORD *)this + 3),
         a2,
         a3,
         0LL);
  result = 0LL;
  if ( v3 != -2018375675 )
    return v3;
  return result;
}
