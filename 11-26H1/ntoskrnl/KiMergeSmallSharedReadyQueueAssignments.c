/*
 * XREFs of KiMergeSmallSharedReadyQueueAssignments @ 0x1405FEC28
 * Callers:
 *     KiAssignCooperativeIdleSearchContexts @ 0x1405ECC18 (KiAssignCooperativeIdleSearchContexts.c)
 *     KiComputeSharedReadyQueueAssignments @ 0x1405FE3F0 (KiComputeSharedReadyQueueAssignments.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiMergeSmallSharedReadyQueueAssignments(__int64 a1, unsigned int a2, unsigned __int8 *a3)
{
  unsigned __int8 v6; // r9
  unsigned __int8 *v7; // r10
  unsigned __int8 v8; // r9
  unsigned __int8 *v9; // r11
  unsigned int v10; // edx
  unsigned __int8 v11; // r8
  unsigned int v12; // r10d
  unsigned __int8 i; // cl
  __int64 result; // rax
  unsigned __int8 v15; // r11
  unsigned __int8 *v16; // rdx
  unsigned __int8 v17; // r10
  unsigned __int8 j; // cl
  _BYTE v19[64]; // [rsp+20h] [rbp-58h] BYREF

  memset_0(v19, 0, sizeof(v19));
  v6 = 0;
  v7 = a3;
  do
  {
    if ( _bittest64(&a1, v6) )
      ++v19[*v7];
    ++v6;
    ++v7;
  }
  while ( v6 < 0x40u );
  while ( 2 )
  {
    v8 = -1;
    v9 = v19;
    v10 = 255;
    v11 = -1;
    v12 = 255;
    for ( i = 0; i < 0x40u; ++i )
    {
      result = *v9;
      if ( !(_BYTE)result )
        goto LABEL_17;
      if ( v8 == 0xFF )
      {
LABEL_14:
        v8 = i;
        v12 = *v9;
        goto LABEL_17;
      }
      if ( v11 != 0xFF )
      {
        if ( (unsigned int)result >= v12 )
        {
          if ( (unsigned int)result >= v10 )
            goto LABEL_17;
        }
        else if ( (unsigned int)result >= v10 || v12 >= v10 && (v12 > v10 || v8 < v11) )
        {
          goto LABEL_14;
        }
      }
      v10 = *v9;
      v11 = i;
LABEL_17:
      ++v9;
    }
    if ( v8 != 0xFF && v11 != 0xFF )
    {
      result = v10 + v12;
      if ( (unsigned int)result <= a2 )
      {
        v15 = v8;
        v16 = a3;
        if ( v8 >= v11 )
          v15 = v11;
        v17 = v11;
        if ( v8 >= v11 )
          v17 = v8;
        for ( j = 0; j < 0x40u; ++j )
        {
          if ( _bittest64(&a1, j) )
          {
            if ( *v16 == v17 )
            {
              *v16 = v15;
              ++v19[v15];
              --v19[v17];
            }
          }
          ++v16;
        }
        continue;
      }
    }
    return result;
  }
}
