/*
 * XREFs of std::_Partition_by_median_guess_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x180645338
 * Callers:
 *     std::_Sort_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x1806457A4 (std--_Sort_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1__.c)
 * Callees:
 *     std::_Guess_median_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x180644F40 (std--_Guess_median_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f46668a79a17c803ab.c)
 *     ??$swap@URemoteSystem@RemoteSystemData@@$0A@@std@@YAXAEAURemoteSystem@RemoteSystemData@@0@Z @ 0x180648144 (--$swap@URemoteSystem@RemoteSystemData@@$0A@@std@@YAXAEAURemoteSystem@RemoteSystemData@@0@Z.c)
 */

unsigned __int64 *__fastcall std::_Partition_by_median_guess_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r12
  bool v15; // zf
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rcx
  unsigned __int64 *result; // rax

  v3 = a2;
  v4 = a3;
  v5 = a2 + 32 * ((__int64)(a3 - a2) >> 6);
  std::_Guess_median_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___(
    a2,
    v5,
    a3 - 32);
  v6 = v5 + 32;
  while ( v3 < v5 )
  {
    v7 = *(_QWORD *)(v5 - 16);
    if ( v7 < *(_QWORD *)(v5 + 16) || v7 > *(_QWORD *)(v5 + 16) )
      break;
    v5 -= 32LL;
  }
  while ( v6 < v4 )
  {
    v8 = *(_QWORD *)(v6 + 16);
    if ( v8 < *(_QWORD *)(v5 + 16) || v8 > *(_QWORD *)(v5 + 16) )
      break;
    v6 += 32LL;
  }
  v9 = v6;
  v10 = v5;
  while ( 1 )
  {
    v11 = v9;
    if ( v9 < v4 )
    {
      do
      {
        v12 = *(_QWORD *)(v5 + 16);
        if ( v12 >= *(_QWORD *)(v9 + 16) )
        {
          if ( v12 > *(_QWORD *)(v9 + 16) )
            break;
          if ( v6 != v9 )
            std::swap<RemoteSystemData::RemoteSystem,0>(v6, v9);
          v6 += 32LL;
        }
        v9 += 32LL;
        v11 = v9;
      }
      while ( v9 < v4 );
      v3 = a2;
    }
    v13 = v10;
    v14 = v5;
    v15 = v10 == v3;
    if ( v10 > v3 )
    {
      v16 = v10 - 32;
      do
      {
        v17 = *(_QWORD *)(v16 + 16);
        if ( v17 >= *(_QWORD *)(v5 + 16) )
        {
          if ( v17 > *(_QWORD *)(v5 + 16) )
            break;
          v5 -= 32LL;
          if ( v5 != v16 )
            std::swap<RemoteSystemData::RemoteSystem,0>(v5, v16);
        }
        v10 -= 32LL;
        v16 -= 32LL;
        v13 = v10;
        v14 = v5;
      }
      while ( a2 < v10 );
      v3 = a2;
      v4 = a3;
      v15 = v10 == a2;
    }
    if ( v15 )
      break;
    v10 -= 32LL;
    if ( v9 != v4 )
    {
      v14 = v11;
      v11 = v10;
LABEL_38:
      v9 += 32LL;
      goto LABEL_39;
    }
    v5 -= 32LL;
    if ( v13 - 32 != v5 )
      std::swap<RemoteSystemData::RemoteSystem,0>(v10, v5);
    v6 -= 32LL;
    v14 = v5;
    v11 = v6;
LABEL_39:
    std::swap<RemoteSystemData::RemoteSystem,0>(v14, v11);
  }
  if ( v9 != v4 )
  {
    if ( v6 != v9 )
      std::swap<RemoteSystemData::RemoteSystem,0>(v5, v6);
    v6 += 32LL;
    v5 += 32LL;
    goto LABEL_38;
  }
  result = a1;
  *a1 = v5;
  a1[1] = v6;
  return result;
}
