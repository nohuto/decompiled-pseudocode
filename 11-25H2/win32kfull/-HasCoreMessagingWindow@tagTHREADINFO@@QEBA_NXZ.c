/*
 * XREFs of ?HasCoreMessagingWindow@tagTHREADINFO@@QEBA_NXZ @ 0x140143750
 * Callers:
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 * Callees:
 *     <none>
 */

char __fastcall tagTHREADINFO::HasCoreMessagingWindow(tagTHREADINFO *this)
{
  __int64 i; // rax

  for ( i = 0LL; (unsigned int)i < 2; i = (unsigned int)(i + 1) )
  {
    if ( *((_QWORD *)this + i + 207) )
      return 1;
  }
  return 0;
}
