/*
 * XREFs of RtlFindNextClearRunUlong @ 0x140444EC4
 * Callers:
 *     MiRescanPagefileBitmaps @ 0x1404441FC (MiRescanPagefileBitmaps.c)
 *     MiFindFreePageFileSpaceForward @ 0x1404442BC (MiFindFreePageFileSpaceForward.c)
 *     MiRescanPageFileBitmapPortion @ 0x140444C08 (MiRescanPageFileBitmapPortion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindNextClearRunUlong(unsigned int *a1, unsigned int a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v5; // ebx
  unsigned int v6; // edi
  __int64 v7; // r13
  _DWORD *v8; // r9
  unsigned __int64 v9; // r15
  unsigned int v10; // r11d
  int v11; // r10d
  bool v12; // zf
  __int64 v13; // rcx
  unsigned int v14; // r8d
  int v15; // ebp
  char v16; // si
  _DWORD *v17; // rax
  char v18; // dl
  __int64 v19; // rcx
  unsigned int v20; // r8d

  v5 = a4;
  if ( a4 < 0x20 )
    return 0LL;
  v6 = *a1;
  if ( *a1 < 0x20 || a2 > v6 - 32 )
    return 0LL;
  v7 = *((_QWORD *)a1 + 1);
  v8 = (_DWORD *)(v7 + 4 * ((unsigned __int64)a2 >> 5));
  v9 = v7 + 4 * ((unsigned __int64)(v6 - 1) >> 5) - 4;
  if ( (v6 & 0x1F) == 0 )
    v9 = v7 + 4 * ((unsigned __int64)(v6 - 1) >> 5);
  v10 = *v8 | *((_DWORD *)qword_1400195D0 + (a2 & 0x1F));
  v11 = 0;
  do
  {
    while ( 1 )
    {
      if ( v10 != -1 )
      {
        v11 = 32 * (((__int64)v8 - v7) >> 2);
        if ( !v10 )
          goto LABEL_12;
        v12 = !_BitScanReverse64((unsigned __int64 *)&v13, v10);
        if ( v12 )
        {
          LOBYTE(v13) = -1;
          break;
        }
        if ( (_BYTE)v13 != 31 )
          break;
      }
      v20 = 0;
      if ( (unsigned __int64)v8 >= v9 )
        goto LABEL_25;
      v10 = *++v8;
    }
    v11 += (char)v13 + 1;
LABEL_12:
    v14 = 0;
    v15 = v11 & 0x1F;
    v10 &= ~*((_DWORD *)qword_1400195D0 + (v11 & 0x1F));
    if ( (unsigned __int64)v8 <= v9 )
    {
      v16 = 0;
      while ( !v10 )
      {
        v14 += 32;
        if ( v14 >= v5 && v14 - v15 >= v5 )
          goto LABEL_22;
        if ( v8 == (_DWORD *)v9 )
          goto LABEL_13;
        v10 = *++v8;
      }
    }
    else
    {
LABEL_13:
      v16 = 1;
      v17 = v8;
      if ( (v6 & 0x1F) == 0 )
        goto LABEL_22;
      if ( v14 )
        v10 = v8[1];
      ++v8;
      if ( !v14 )
        v8 = v17;
      v10 |= ~*((_DWORD *)qword_1400195D0 + (v6 & 0x1F));
    }
    v18 = -1;
    v12 = !_BitScanForward64((unsigned __int64 *)&v19, v10);
    if ( !v12 )
      v18 = v19;
    v14 += v18;
LABEL_22:
    v20 = v14 - v15;
    if ( v20 > v5 )
      goto LABEL_28;
    if ( v20 >= 0x20 )
      break;
    v20 = 0;
  }
  while ( !v16 );
LABEL_25:
  if ( v20 > v5 )
    v20 = v5;
  v5 = v20;
LABEL_28:
  *a5 = v11;
  return v5;
}
