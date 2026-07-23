/*
 * XREFs of ExpFindCurrentThread @ 0x14042E1B0
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x1402C3C28 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14042D7E0 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExpExpandResourceOwnerTable @ 0x14042E344 (ExpExpandResourceOwnerTable.c)
 */

unsigned __int64 __fastcall ExpFindCurrentThread(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, unsigned int a6)
{
  __int64 v6; // r11
  unsigned __int64 result; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r8
  __int64 v15; // rcx
  unsigned __int64 v16; // r11
  unsigned __int64 v17; // rcx
  int v18; // edx

  v6 = *(_QWORD *)(a1 + 48);
  result = a1 + 48;
  if ( v6 != a2 )
  {
    v12 = 0LL;
    v13 = 0LL;
    if ( !v6 )
    {
      v13 = a1 + 48;
      if ( a5 )
        v13 = 0LL;
    }
    v14 = *(_QWORD *)(a1 + 48) != 0LL;
    if ( !a6
      || (v15 = *(_QWORD *)(a1 + 16)) == 0
      || a6 >= *(_DWORD *)(v15 + 8)
      || (result = v15 + 16LL * a6, *(_QWORD *)result != a2) )
    {
      result = *(_QWORD *)(a1 + 16);
      v16 = *(unsigned int *)(a1 + 64) + (unsigned __int64)*(unsigned int *)(a1 + 72);
      if ( result && (v12 = result + 16LL * *(unsigned int *)(result + 8), result += 16LL, v14 < v16) )
      {
        while ( *(_QWORD *)result != a2 )
        {
          if ( *(_QWORD *)result )
          {
            if ( ++v14 == v16 )
            {
              result += 16LL;
              goto LABEL_9;
            }
          }
          else
          {
            v17 = result;
            if ( v13 )
              v17 = v13;
            v13 = v17;
          }
          result += 16LL;
          if ( result == v12 )
            goto LABEL_9;
        }
        v18 = result;
      }
      else
      {
LABEL_9:
        if ( !a4 )
          return 0LL;
        if ( !v13 && (result >= v12 || (v13 = result) == 0) )
        {
          ExpExpandResourceOwnerTable(a1, a3);
          return 0LL;
        }
        v18 = v13;
        result = v13;
      }
      KeGetCurrentThread()->ResourceIndex = (__int64)(unsigned int)(v18 - *(_DWORD *)(a1 + 16)) >> 4;
    }
  }
  return result;
}
