/*
 * XREFs of sub_14001EBFC @ 0x14001EBFC
 * Callers:
 *     sub_14000DBA0 @ 0x14000DBA0 (sub_14000DBA0.c)
 * Callees:
 *     sub_1400069C0 @ 0x1400069C0 (sub_1400069C0.c)
 *     sub_140007D80 @ 0x140007D80 (sub_140007D80.c)
 *     sub_14000D3D0 @ 0x14000D3D0 (sub_14000D3D0.c)
 *     sub_140018930 @ 0x140018930 (sub_140018930.c)
 */

__int64 __fastcall sub_14001EBFC(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int *v7; // r9
  unsigned int v8; // eax
  unsigned __int64 v9; // r9
  unsigned int v10; // eax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rax
  unsigned int v13; // r10d
  int v14; // ecx
  unsigned int i; // esi
  int v16; // eax
  int v17; // eax
  signed __int32 v19[8]; // [rsp+0h] [rbp-38h] BYREF

  LODWORD(v2) = 0;
  v3 = *(_QWORD *)(a1 + 1560);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL) & 1) != 0
    && !sub_140018930(a1, a2, 0LL)
    && (*(_DWORD *)(v6 + 24) & 0x440000) == 0 )
  {
    v7 = *(unsigned int **)(v6 + 3720);
    if ( !v7 || (v8 = sub_1400069C0(a1, 0, v2, *v7, (__int64)(v7 + 2), v7[1]), (v2 = v8) == 0) )
    {
      if ( (unsigned __int8)sub_140007D80(a1, v5, v2, (__int64)v7) )
      {
        v10 = *(_DWORD *)(v3 + 88);
        if ( v10 )
          v11 = sub_14000D3D0(v10, 0x2710uLL) / 0x2710;
        else
          LODWORD(v11) = 500;
        if ( *(_BYTE *)(a1 + 47) )
        {
          v12 = sub_14000D3D0((unsigned int)v11, 0x64uLL);
          v14 = v13;
          v9 = v12 / 0x64;
          if ( (unsigned int)(v12 / 0x64) > v13 )
            v14 = v12 / 0x64;
          LODWORD(v11) = 100 * v14;
        }
        *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) & 0xFFFF3FFF | 0x4000;
        _InterlockedOr(v19, 0);
        for ( i = 0; i < (unsigned int)v11; ++i )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL) & 0xC) == 8 )
            break;
          StorPortExtendedFunction(81LL, a1, 10000LL, v9);
        }
        v16 = *(_DWORD *)(a1 + 24);
        if ( i < (unsigned int)v11 )
        {
          v17 = v16 | 0x20000;
          LODWORD(v2) = 0;
        }
        else
        {
          v17 = v16 | 0x200000;
          LODWORD(v2) = -1056964594;
        }
        *(_DWORD *)(a1 + 24) = v17;
      }
      else
      {
        LODWORD(v2) = -1056964599;
      }
    }
  }
  return (unsigned int)v2;
}
