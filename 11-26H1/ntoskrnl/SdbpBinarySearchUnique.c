/*
 * XREFs of SdbpBinarySearchUnique @ 0x140B56874
 * Callers:
 *     SdbpGetFirstIndexedRecord @ 0x1409D6DD4 (SdbpGetFirstIndexedRecord.c)
 * Callees:
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 */

__int64 __fastcall SdbpBinarySearchUnique(unsigned __int64 a1, unsigned int a2, unsigned __int64 a3, int *a4)
{
  int v5; // edi
  int v9; // ebx
  int v10; // esi
  bool IsUserAddress; // al
  bool v12; // r12
  int v13; // eax
  _QWORD *v14; // rcx
  unsigned __int64 ULong64FromUser; // rax
  __int64 result; // rax
  int v17; // [rsp+68h] [rbp+10h]
  int v18; // [rsp+78h] [rbp+20h]

  v5 = a2 - 1;
  v9 = 0;
  v10 = -1;
  IsUserAddress = MmIsUserAddress(a1);
  *a4 = -1;
  v12 = IsUserAddress;
  if ( v5 < 0 )
  {
LABEL_12:
    result = 1LL;
    if ( v9 - v5 > 1 )
    {
      *a4 = v10;
      return result;
    }
  }
  else
  {
    while ( 1 )
    {
      v18 = v9;
      v17 = v5;
      v13 = (v5 + v9) / 2;
      v10 = v13;
      if ( v13 < 0 || v13 >= a2 )
        break;
      v14 = (_QWORD *)(a1 + 12LL * v13);
      if ( v12 )
        ULong64FromUser = RtlReadULong64FromUser(v14);
      else
        ULong64FromUser = *v14;
      v5 = v10 - 1;
      v9 = v10 + 1;
      if ( a3 > ULong64FromUser )
        v5 = v17;
      if ( a3 < ULong64FromUser )
        v9 = v18;
      if ( v5 < v9 )
        goto LABEL_12;
    }
  }
  return 0LL;
}
