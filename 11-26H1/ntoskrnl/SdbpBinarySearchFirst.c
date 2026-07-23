/*
 * XREFs of SdbpBinarySearchFirst @ 0x140B1B218
 * Callers:
 *     SdbpGetFirstIndexedRecord @ 0x1409D6DD4 (SdbpGetFirstIndexedRecord.c)
 * Callees:
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 */

__int64 __fastcall SdbpBinarySearchFirst(unsigned __int64 a1, unsigned int a2, unsigned __int64 a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  int v5; // esi
  int v6; // r15d
  unsigned int v9; // r14d
  bool v11; // r8
  int v12; // eax
  __int64 v13; // rdi
  unsigned __int64 *v14; // r14
  unsigned __int64 ULong64FromUser; // rax
  __int64 v17; // rax
  bool IsUserAddress; // [rsp+78h] [rbp+20h]

  v4 = 0;
  v5 = a2 - 1;
  v6 = 0;
  v9 = a2;
  IsUserAddress = MmIsUserAddress(a1);
  v11 = IsUserAddress;
  *a4 = -1;
  if ( v5 >= 0 )
  {
    while ( 1 )
    {
      v12 = (v5 + v6) / 2;
      v13 = v12;
      if ( v12 < 0 || v12 >= v9 )
        break;
      v14 = (unsigned __int64 *)(a1 + 12LL * v12);
      if ( v11 )
      {
        ULong64FromUser = RtlReadULong64FromUser((volatile void *)(a1 + 12LL * v12));
        v11 = IsUserAddress;
      }
      else
      {
        ULong64FromUser = *v14;
      }
      if ( a3 == ULong64FromUser )
      {
        if ( !(_DWORD)v13
          || ((v5 = v13 - 1, !v11)
            ? (v17 = *(_QWORD *)(a1 + 12 * v13 - 12))
            : (v17 = RtlReadULong64FromUser((char *)v14 - 12), v11 = IsUserAddress),
              v17 != a3) )
        {
          v4 = 1;
          *a4 = v13;
          return v4;
        }
      }
      else if ( a3 >= ULong64FromUser )
      {
        v6 = v13 + 1;
      }
      else
      {
        v5 = v13 - 1;
      }
      if ( v5 < v6 )
        return v4;
      v9 = a2;
    }
  }
  return 0LL;
}
