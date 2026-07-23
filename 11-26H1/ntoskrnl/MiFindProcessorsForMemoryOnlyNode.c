/*
 * XREFs of MiFindProcessorsForMemoryOnlyNode @ 0x140D03B74
 * Callers:
 *     MiReassignProcessorsToMemoryOnlyNodes @ 0x140D03EE8 (MiReassignProcessorsToMemoryOnlyNodes.c)
 * Callees:
 *     KeFindFirstSetRightGroupAffinity @ 0x1402F6E90 (KeFindFirstSetRightGroupAffinity.c)
 */

__int64 __fastcall MiFindProcessorsForMemoryOnlyNode(unsigned int a1, unsigned int a2)
{
  __int64 v3; // r8
  unsigned __int64 v4; // rax
  unsigned int *v5; // r15
  int v6; // r13d
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _WORD *i; // rdi
  unsigned int j; // esi
  __int64 v11; // rbp
  __int64 v12; // rbx
  __int64 FirstSetRightGroupAffinity; // r9
  __int64 v14; // rcx
  __int64 v15; // rdx
  bool v16; // zf
  __int64 v17; // r11
  __int16 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r10
  __int64 v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 result; // rax
  __int64 v26; // [rsp+20h] [rbp-78h]
  _WORD *v27; // [rsp+28h] [rbp-70h]
  unsigned int *v28; // [rsp+30h] [rbp-68h]
  _DWORD *v29; // [rsp+38h] [rbp-60h]
  unsigned __int64 v30; // [rsp+40h] [rbp-58h]
  __int64 v31; // [rsp+48h] [rbp-50h]
  __int128 v32[4]; // [rsp+50h] [rbp-48h] BYREF
  __int16 v33; // [rsp+A0h] [rbp+8h]
  _QWORD *v34; // [rsp+B0h] [rbp+18h]
  __int64 v35; // [rsp+B8h] [rbp+20h]

  v29 = *(_DWORD **)(384LL * a1 + qword_140E2D838 + 376);
  v3 = qword_140E2D810 + 4LL * (unsigned __int16)KeNumberNodes * a1;
  v4 = v3 + 4LL * (unsigned __int16)KeNumberNodes;
  v5 = (unsigned int *)(v3 + 4);
  v30 = v4;
LABEL_2:
  v28 = v5;
  if ( (unsigned __int64)v5 >= v4 )
    return 0LL;
  v6 = 1;
  v31 = *v5;
  v7 = *(_QWORD **)(384 * v31 + qword_140E2D838 + 376);
  v8 = 1LL;
  v34 = v7;
  for ( i = (_WORD *)v7 + 13; ; ++i )
  {
    v27 = i;
    v26 = v8;
    if ( v8 >= 3 )
    {
      v4 = v30;
      ++v5;
      goto LABEL_2;
    }
    v33 = *(i - 3);
    if ( v33 )
      break;
LABEL_28:
    ++v6;
    ++v8;
  }
  for ( j = *((unsigned __int16 *)v7 + 8) - 1; ; --j )
  {
    v11 = 16LL * j;
    v32[0] = *(_OWORD *)(*v7 + v11);
    v12 = *(_QWORD *)&v32[0];
    if ( *(_QWORD *)&v32[0] )
    {
      do
      {
        FirstSetRightGroupAffinity = (unsigned int)KeFindFirstSetRightGroupAffinity((unsigned __int64 *)v32);
        v14 = KiProcessorBlock[FirstSetRightGroupAffinity];
        v15 = *(_QWORD *)(v14 + 200);
        v12 &= ~v15;
        v16 = *(_BYTE *)(v14 + 35352) == 1;
        *(_QWORD *)&v32[0] = v12;
        if ( !v16 + 1 == v6 )
        {
          v17 = *(_QWORD *)(v14 + 36512);
          v18 = 0;
          v35 = v12;
          v19 = v15 | v12 & v17;
          v20 = 0LL;
          while ( v19 )
          {
            v21 = KiProcessorBlock[FirstSetRightGroupAffinity];
            if ( (*(_BYTE *)(v21 + 35352) != 1) + 1 != v6 )
              break;
            v22 = *(_QWORD *)(v21 + 200);
            v20 |= v22;
            ++v18;
            v23 = ~v22;
            v19 &= v23;
            v12 = v35 & v23;
            v35 = v12;
            v24 = v12;
            *(_QWORD *)&v32[0] = v12;
            if ( a2 == 1 )
            {
              v12 &= ~v17;
              *(_QWORD *)&v32[0] = v24 & ~v17;
              v19 = v19 == 0;
              break;
            }
            if ( a2 == 2 )
            {
              v19 = 0LL;
              break;
            }
            FirstSetRightGroupAffinity = (unsigned int)(FirstSetRightGroupAffinity + 1);
          }
          if ( (!v18 || a2 == 2 || v18 != v33) && !v19 )
            break;
        }
        v20 = 0LL;
        v18 = 0;
      }
      while ( v12 );
      i = v27;
      v5 = v28;
      if ( v18 )
      {
        if ( a2 > 1 )
          goto LABEL_32;
        if ( *(v27 - 3) != v18 )
          break;
      }
    }
    v7 = v34;
    if ( !j )
    {
      v8 = v26;
      goto LABEL_28;
    }
  }
  *(_QWORD *)(*v34 + 16LL * j) &= ~v20;
  *(v27 - 3) -= v18;
  if ( !a2 )
    --*v27;
LABEL_32:
  result = 1LL;
  **(_QWORD **)v29 = v20;
  *(_WORD *)(*(_QWORD *)v29 + 8LL) = *(_WORD *)(*(_QWORD *)v29 + v11 + 8);
  *((_WORD *)v29 + v6 + 9) = v18;
  *((_WORD *)v29 + v6 + 12) = 1;
  v29[11] = v31;
  return result;
}
