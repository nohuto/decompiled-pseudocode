/*
 * XREFs of ?HrFindInterface@CMessageConversationHost@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18028D7F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMessageConversationHost::HrFindInterface(
        CMessageConversationHost *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    result = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_6dfae6da_7941_4c1e_a565_c18161b30018.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6dfae6da_7941_4c1e_a565_c18161b30018.Data1 )
      result = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_6dfae6da_7941_4c1e_a565_c18161b30018.Data4;
    if ( result )
      return 2147500034LL;
    else
      *a3 = this;
  }
  return result;
}
