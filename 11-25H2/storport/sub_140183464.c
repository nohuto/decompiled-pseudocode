/*
 * XREFs of sub_140183464 @ 0x140183464
 * Callers:
 *     sub_14017ED90 @ 0x14017ED90 (sub_14017ED90.c)
 *     sub_140183530 @ 0x140183530 (sub_140183530.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400BB1E8 @ 0x1400BB1E8 (sub_1400BB1E8.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_140183464(__int64 a1)
{
  unsigned int v1; // ebx
  void *v3; // rcx
  __int64 v4; // rax
  void *v5; // rcx
  __int64 v6; // rax

  v1 = 0;
  if ( (_DWORD)dword_140169184 && dword_140168DB0 )
  {
    v3 = *(void **)(a1 + 2384);
    if ( v3 )
    {
      memset_0(v3, 0, (unsigned int)dword_140169184);
    }
    else
    {
      v4 = sub_1400143E0(72LL, (unsigned int)dword_140169184, 1700028754LL, *(_QWORD *)(a1 + 8));
      *(_QWORD *)(a1 + 2384) = v4;
      if ( !v4 )
        goto LABEL_9;
    }
    v5 = *(void **)(a1 + 2408);
    if ( v5 )
    {
      memset_0(v5, 0, (unsigned int)dword_14016917C);
    }
    else
    {
      v6 = sub_1400143E0(72LL, (unsigned int)dword_14016917C, 1700028754LL, *(_QWORD *)(a1 + 8));
      *(_QWORD *)(a1 + 2408) = v6;
      if ( !v6 )
      {
LABEL_9:
        v1 = -1073741801;
        sub_1400BB1E8(a1);
        return v1;
      }
    }
    *(_BYTE *)(a1 + 507) |= 0x10u;
  }
  return v1;
}
