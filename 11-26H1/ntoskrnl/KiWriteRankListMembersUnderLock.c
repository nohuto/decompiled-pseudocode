/*
 * XREFs of KiWriteRankListMembersUnderLock @ 0x1405FDD10
 * Callers:
 *     KiCompleteKernelInit @ 0x140BF96A8 (KiCompleteKernelInit.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall KiWriteRankListMembersUnderLock(unsigned __int8 *a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // r9
  __int64 v4; // rdx
  unsigned __int8 result; // al

  v3 = 0;
  v4 = a2 - (_QWORD)a1;
  do
  {
    result = v3;
    if ( _bittest64(&a3, v3) )
    {
      result = a1[v4];
      *a1 = result;
    }
    ++v3;
    ++a1;
  }
  while ( v3 < 0x40u );
  return result;
}
