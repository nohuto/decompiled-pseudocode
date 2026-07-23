/*
 * XREFs of KiVerifyXcpt10 @ 0x140CD2260
 * Callers:
 *     <none>
 * Callees:
 *     _local_unwind @ 0x140538480 (_local_unwind.c)
 *     KiVerifyXcptFilter @ 0x140CD2880 (KiVerifyXcptFilter.c)
 */

__int64 __fastcall KiVerifyXcpt10(__int64 a1)
{
  int *v1; // rax
  _DWORD *v2; // rcx
  int v3; // eax
  _DWORD **v4; // r8
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  __int64 *v8; // [rsp+28h] [rbp-10h]
  __int64 v9; // [rsp+40h] [rbp+8h]
  _DWORD *v10; // [rsp+48h] [rbp+10h]
  _DWORD **v11; // [rsp+50h] [rbp+18h]

  v9 = a1;
  v8 = &v7;
  v11 = (_DWORD **)a1;
  v1 = (int *)(a1 + 12);
  v10 = (_DWORD *)(a1 + 12);
  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    *v1 = 1;
    while ( 1 )
    {
      v2 = v10;
      v3 = *v10;
      if ( !*v10 )
        break;
      if ( v3 == 11 )
        local_unwind(v8, &loc_140CD23BF);
      if ( v3 == 1 )
        local_unwind(v8, &loc_140CD229A);
      *v2 = 0;
    }
    *v10 = 11;
    v4 = v11;
    ++**v11;
    v5 = v9;
    *v10 += 11;
    if ( *v10 == 99 )
      local_unwind(v8, &loc_140CD23BF);
    ++**v4;
    *v2 += 11;
    if ( *v2 == 55 )
      *v2 = 66;
    else
      ++**v4;
    *v2 += 11;
    if ( *v2 == 99 )
    {
      ++**v4;
      *v2 += 11;
      if ( *v2 == 99 )
        ++**v4;
      else
        KiVerifyXcptFilter(v5);
    }
    else
    {
      local_unwind(v8, &loc_140CD23BF);
    }
    a1 = v9;
    v1 = v10;
  }
  else
  {
    *v1 = -1;
    *(_DWORD *)(a1 + 16) = 1;
  }
  result = *v1;
  *(_QWORD *)(a1 + 24) += result;
  return result;
}
