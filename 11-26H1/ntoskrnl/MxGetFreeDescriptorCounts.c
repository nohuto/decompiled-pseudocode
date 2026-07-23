/*
 * XREFs of MxGetFreeDescriptorCounts @ 0x140CFCF84
 * Callers:
 *     MxReducePhysicalPageCount @ 0x140CFE55C (MxReducePhysicalPageCount.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MxGetFreeDescriptorCounts(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  _QWORD *v4; // rdx
  __int64 v5; // r9
  __int64 v6; // r11
  unsigned __int64 result; // rax
  _QWORD *v8; // rcx
  unsigned __int64 **v9; // rdx
  unsigned __int64 *v10; // rdx

  v2 = 0LL;
  v4 = (_QWORD *)(a1 + 32);
  v5 = 0LL;
  v6 = 2LL;
  do
  {
    v5 += v4[1];
    v2 += *v4;
    v4 += 4;
    --v6;
  }
  while ( v6 );
  result = *(_QWORD *)(a1 + 8);
  *a2 = v5;
  a2[1] = v2;
  if ( (result & 1) != 0 )
  {
    if ( result == 1 )
      return result;
    v8 = (_QWORD *)(result ^ (a1 | 1));
  }
  else
  {
    v8 = (_QWORD *)result;
  }
  if ( v8 )
  {
    do
    {
      v2 += v8[5];
      ++v5;
      v9 = (unsigned __int64 **)v8[1];
      result = (unsigned __int64)v8;
      if ( v9 )
      {
        v8 = (_QWORD *)v8[1];
        v10 = *v9;
        if ( v10 )
        {
          do
          {
            result = *v10;
            v8 = v10;
            v10 = (unsigned __int64 *)result;
          }
          while ( result );
        }
      }
      else
      {
        while ( 1 )
        {
          v8 = (_QWORD *)(v8[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v8 || *v8 == result )
            break;
          result = (unsigned __int64)v8;
        }
      }
    }
    while ( v8 );
    a2[1] = v2;
    *a2 = v5;
  }
  return result;
}
