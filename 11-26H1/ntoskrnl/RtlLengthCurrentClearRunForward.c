/*
 * XREFs of RtlLengthCurrentClearRunForward @ 0x14046AC48
 * Callers:
 *     MiCheckHintedPageFileSpace @ 0x14046ABBC (MiCheckHintedPageFileSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlLengthCurrentClearRunForward(int *a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r9
  int v4; // ebx
  _DWORD *v6; // r10
  int v7; // edi
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // r9d
  int v11; // r8d
  unsigned int v12; // edx
  unsigned int v13; // r8d
  char v14; // r8
  bool v15; // zf
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  char v18; // r8
  __int64 v19; // rcx
  unsigned int v20; // edx

  v3 = *((_QWORD *)a1 + 1);
  v4 = *a1;
  v6 = (_DWORD *)(v3 + 4 * ((unsigned __int64)a2 >> 5));
  v7 = *a1 & 0x1F;
  v8 = v3 + 4 * ((unsigned __int64)(unsigned int)(*a1 - 1) >> 5) - 4;
  if ( !v7 )
    v8 = v3 + 4 * ((unsigned __int64)(unsigned int)(v4 - 1) >> 5);
  v9 = a2 & 0x1F;
  v10 = v9;
  v11 = *((_DWORD *)qword_1400195D0 + v9);
  v12 = 0;
  v13 = *v6 & ~v11;
  if ( (unsigned __int64)v6 <= v8 )
  {
    while ( !v13 )
    {
      v12 += 32;
      if ( v12 >= a3 && v12 - v10 >= a3 )
        goto LABEL_17;
      if ( v6 == (_DWORD *)v8 )
        goto LABEL_4;
      v13 = *++v6;
    }
    v17 = v13;
    v18 = -1;
    v15 = !_BitScanForward64((unsigned __int64 *)&v19, v17);
    if ( !v15 )
      v18 = v19;
    v12 += v18;
  }
  else
  {
LABEL_4:
    if ( v7 )
    {
      if ( v12 )
        v13 = v6[1];
      v16 = v13;
      v14 = -1;
      v15 = !_BitScanForward64(
               (unsigned __int64 *)&v16,
               v16 | (unsigned int)~*((_DWORD *)qword_1400195D0 + (v4 & 0x1F)));
      if ( !v15 )
        v14 = v16;
      v12 += v14;
    }
  }
LABEL_17:
  v20 = v12 - v10;
  if ( v20 > a3 )
    return a3;
  return v20;
}
