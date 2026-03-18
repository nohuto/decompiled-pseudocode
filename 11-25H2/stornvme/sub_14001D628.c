/*
 * XREFs of sub_14001D628 @ 0x14001D628
 * Callers:
 *     sub_1400070B0 @ 0x1400070B0 (sub_1400070B0.c)
 *     sub_14000EBE0 @ 0x14000EBE0 (sub_14000EBE0.c)
 *     sub_1400146F0 @ 0x1400146F0 (sub_1400146F0.c)
 *     sub_14001D940 @ 0x14001D940 (sub_14001D940.c)
 * Callees:
 *     <none>
 */

__int64 sub_14001D628(__int64 a1, _QWORD *a2, int a3, char a4, char a5, ...)
{
  __int64 v5; // rdi
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rbx
  _QWORD v20[2]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v21; // [rsp+40h] [rbp-10h]

  v5 = 0LL;
  v20[0] = 1LL;
  v20[1] = 0LL;
  v10 = 0LL;
  v21 = 0LL;
  if ( byte_140042130 )
  {
    if ( a2[20] )
    {
      StorPortExtendedFunction(93LL, a1, 1LL, a2 + 8);
      v11 = a2[20];
      if ( v11 )
      {
        if ( a2[18] )
          *(_QWORD *)(a2[19] + 8LL) = v11;
        else
          a2[18] = v11;
        a2[19] = a2[21];
        a2[20] = 0LL;
        a2[21] = 0LL;
      }
      result = StorPortNotification(4100LL, a1, v20);
    }
  }
  else
  {
    a5 = 0;
    if ( a2[18] )
    {
      StorPortExtendedFunction(93LL, a1, 1LL, a2 + 8);
      v14 = a2[20];
      if ( v14 )
      {
        if ( a2[18] )
          *(_QWORD *)(a2[19] + 8LL) = v14;
        else
          a2[18] = v14;
        a2[19] = a2[21];
        a2[20] = 0LL;
        a2[21] = 0LL;
      }
      result = StorPortNotification(4100LL, a1, v20);
    }
  }
  if ( a2[18] )
  {
    StorPortExtendedFunction(93LL, a1, 1LL, a2 + 8);
    v15 = a2[18];
    if ( v15 )
    {
      do
      {
        v16 = *(_QWORD *)(v15 + 8);
        if ( a4 == 1 || *(unsigned __int8 *)(v15 + 3) == a3 )
        {
          if ( v5 )
            *(_QWORD *)(v5 + 8) = v16;
          else
            a2[18] = v16;
          if ( !v16 )
            a2[19] = v5;
          *(_QWORD *)(v15 + 8) = v10;
          v10 = v15;
        }
        else
        {
          v5 = v15;
        }
        v15 = v16;
      }
      while ( v16 );
    }
    result = StorPortNotification(4100LL, a1, v20);
    v5 = 0LL;
  }
  if ( byte_140042130 && a5 && a2[22] )
  {
    StorPortExtendedFunction(93LL, a1, 1LL, a2 + 8);
    v17 = a2[22];
    if ( v17 )
    {
      do
      {
        v18 = *(_QWORD *)(v17 + 8);
        if ( a4 == 1 || *(unsigned __int8 *)(v17 + 3) == a3 )
        {
          if ( v5 )
            *(_QWORD *)(v5 + 8) = v18;
          else
            a2[22] = v18;
          if ( !v18 )
            a2[23] = v5;
          *(_QWORD *)(v17 + 8) = v10;
          v10 = v17;
        }
        else
        {
          v5 = v17;
        }
        v17 = v18;
      }
      while ( v18 );
    }
    result = StorPortNotification(4100LL, a1, v20);
  }
  if ( v10 )
  {
    do
    {
      v19 = *(_QWORD *)(v10 + 8);
      result = StorPortNotification(0x2000LL, a1, v10);
      v10 = v19;
    }
    while ( v19 );
  }
  return result;
}
