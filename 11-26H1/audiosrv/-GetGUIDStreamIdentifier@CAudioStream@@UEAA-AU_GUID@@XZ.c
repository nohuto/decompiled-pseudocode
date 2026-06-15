/*
 * XREFs of ?GetGUIDStreamIdentifier@CAudioStream@@UEAA?AU_GUID@@XZ @ 0x18007E630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CAudioStream::GetGUIDStreamIdentifier(struct _GUID *this, struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = this[26];
  return result;
}
