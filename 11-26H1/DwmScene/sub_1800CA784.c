/*
 * XREFs of sub_1800CA784 @ 0x1800CA784
 * Callers:
 *     sub_1800CA0F0 @ 0x1800CA0F0 (sub_1800CA0F0.c)
 * Callees:
 *     sub_1800CA04C @ 0x1800CA04C (sub_1800CA04C.c)
 */

__int64 __fastcall sub_1800CA784(__int64 a1, __int64 a2)
{
  int v4; // ecx
  int v5; // ecx
  __int64 result; // rax

  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_DWORD *)(a2 + 8) = *(unsigned __int8 *)(a1 + 64);
  *(_DWORD *)(a2 + 32) = 1;
  *(_DWORD *)(a2 + 24) = 1;
  *(_DWORD *)(a2 + 36) = 1;
  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
        *(_DWORD *)(a2 + 4) = 1;
    }
    else
    {
      *(_DWORD *)(a2 + 4) = 3;
    }
  }
  else
  {
    *(_DWORD *)(a2 + 4) = 2;
  }
  if ( *(_DWORD *)a1 )
  {
    if ( *(_DWORD *)a1 == 1 )
      *(_DWORD *)a2 = 2;
  }
  else
  {
    *(_DWORD *)a2 = 3;
  }
  *(_DWORD *)(a2 + 12) = sub_1800CA04C(*(float *)(a1 + 12), *(_BYTE *)(a1 + 24));
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 16);
  result = *(unsigned __int8 *)(a1 + 60);
  *(_DWORD *)(a2 + 28) = result;
  return result;
}
