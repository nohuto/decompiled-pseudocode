/*
 * XREFs of ?_Decref@facet@locale@std@@UEAAPEAV_Facet_base@3@XZ @ 0x18005A620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct std::_Facet_base *__fastcall std::locale::facet::_Decref(std::locale::facet *this)
{
  struct std::_Facet_base *result; // rax

  result = 0LL;
  if ( !_InterlockedAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF) )
    return this;
  return result;
}
