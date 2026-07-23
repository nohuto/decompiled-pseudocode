/*
 * XREFs of AslEnvExpandStrings @ 0x1408914E8
 * Callers:
 *     AslEnvExpandStrings2 @ 0x1408917B4 (AslEnvExpandStrings2.c)
 * Callees:
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     AslEnvVarQuery @ 0x140891A64 (AslEnvVarQuery.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     AslAlloc @ 0x1409D8260 (AslAlloc.c)
 */

__int64 __fastcall AslEnvExpandStrings(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        _QWORD *a6)
{
  _WORD *v7; // rbx
  _WORD *v8; // r14
  _WORD *v9; // rcx
  _WORD *v10; // rax
  unsigned int v12; // r12d
  __int64 v13; // r13
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  int v17; // eax
  _WORD *v18; // [rsp+38h] [rbp-60h]
  __int64 v19; // [rsp+40h] [rbp-58h]

  v7 = (_WORD *)a2;
  v8 = 0LL;
  if ( MmIsUserAddress(a2) )
  {
    v10 = (_WORD *)AslAlloc(v9, 2 * a3);
    v8 = v10;
    if ( !v10 )
    {
      AslLogCallPrintf(1, (unsigned int)"AslEnvExpandStrings", 631, (unsigned int)"Out of memory");
      return 3221225495LL;
    }
    RtlCopyFromUser(v10, v7, 2 * a3);
    v7 = v8;
  }
  v12 = 0;
  v13 = 0LL;
  while ( a3 )
  {
    if ( *v7 != 37 )
      goto LABEL_21;
    v9 = v7 + 1;
    v18 = v7 + 1;
    v15 = 0LL;
    v19 = 0LL;
    v16 = a3 - 1;
    if ( a3 != 1 )
    {
      do
      {
        if ( *v9 == 37 )
          break;
        v18 = ++v9;
        v19 = ++v15;
      }
      while ( v15 < v16 );
    }
    if ( v15 && v15 < v16 )
    {
      v17 = AslEnvVarQuery(a1, v7 + 1, v15);
      if ( v17 == -1073741789 )
      {
        --v13;
        v7 = v18 + 1;
        a3 += -2 - v19;
        v12 = -1073741789;
      }
      else if ( v17 >= 0 )
      {
        v9 = 0LL;
        v7 = v18 + 1;
        a3 += -2 - v19;
        if ( !a5 )
          v12 = -1073741789;
      }
      else
      {
        if ( v17 != -1073741568 )
          AslLogCallPrintf(1, (unsigned int)"AslEnvExpandStrings", 698, (unsigned int)"AslEnvVarQuery failed [%x]");
        ++v13;
        --a3;
        ++v7;
      }
    }
    else
    {
LABEL_21:
      if ( v12 != -1073741789 )
      {
        if ( a5 <= 1 )
        {
          v12 = -1073741789;
        }
        else
        {
          --a5;
          *a4++ = *v7;
        }
      }
      ++v13;
      --a3;
      ++v7;
    }
  }
  if ( v12 != -1073741789 )
  {
    if ( a5 )
      *a4 = 0;
    else
      v12 = -1073741789;
  }
  if ( a6 )
  {
    v9 = (_WORD *)(v13 + 1);
    *a6 = v13 + 1;
  }
  if ( v8 )
    AslFree(v9, v8);
  return v12;
}
