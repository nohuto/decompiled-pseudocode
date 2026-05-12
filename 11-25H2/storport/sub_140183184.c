/*
 * XREFs of sub_140183184 @ 0x140183184
 * Callers:
 *     sub_140183278 @ 0x140183278 (sub_140183278.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400BB0C8 @ 0x1400BB0C8 (sub_1400BB0C8.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_140183184(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  void *v4; // rcx

  v2 = 0;
  if ( (_DWORD)dword_140169184 && dword_140168DB0 )
  {
    v3 = a1[76];
    if ( *(_QWORD *)(v3 + 16) )
    {
      memset_0(*(void **)(v3 + 16), 0, (unsigned int)dword_140169184);
    }
    else
    {
      *(_QWORD *)(a1[76] + 16) = sub_1400143E0(72LL, (unsigned int)dword_140169184, 1700028754LL, a1[1]);
      if ( !*(_QWORD *)(a1[76] + 16) )
        goto LABEL_9;
    }
    v4 = *(void **)(a1[76] + 40);
    if ( v4 )
    {
      memset_0(v4, 0, (unsigned int)dword_14016917C);
    }
    else
    {
      *(_QWORD *)(a1[76] + 40) = sub_1400143E0(72LL, (unsigned int)dword_14016917C, 1700028754LL, a1[1]);
      if ( !*(_QWORD *)(a1[76] + 40) )
      {
LABEL_9:
        v2 = -1073741801;
        sub_1400BB0C8((__int64)a1);
        return v2;
      }
    }
    a1[14] |= 0x100uLL;
  }
  return v2;
}
