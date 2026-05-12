/*
 * XREFs of sub_14019595C @ 0x14019595C
 * Callers:
 *     sub_140195A38 @ 0x140195A38 (sub_140195A38.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14003CC48 @ 0x14003CC48 (sub_14003CC48.c)
 */

__int64 __fastcall sub_14019595C(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  bool v5; // cc
  _DWORD *v8; // rax
  _DWORD *v9; // rdi
  void *v10; // rcx

  v3 = 0;
  v5 = *(_DWORD *)(a1 + 56) <= 0xFFu;
  *a2 = 0LL;
  *a3 = 0;
  if ( v5 )
  {
    v8 = (_DWORD *)sub_1400143E0(64LL, 128LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    v9 = v8;
    if ( v8 )
    {
      *v8 = 1145917490;
      v8[1] = 4098;
      v8[2] = 104;
      v10 = *(void **)(a1 + 8);
      *a3 = 128;
      ObfReferenceObject(v10);
      *((_QWORD *)v9 + 2) = a1;
      *((_WORD *)v9 + 41) = 0;
      *((_BYTE *)v9 + 84) = *(_BYTE *)(a1 + 56) - 1;
      sub_14003CC48(17, (__int64)(v9 + 12), (_WORD *)v9 + 40);
      *a2 = v9;
      *a3 = 128;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741808;
  }
  return v3;
}
