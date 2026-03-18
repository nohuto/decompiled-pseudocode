/*
 * XREFs of MiFindProcessorsForMemoryOnlyNode @ 0x140CFD7F4
 * Callers:
 *     MiReassignProcessorsToMemoryOnlyNodes @ 0x140CFDB40 (MiReassignProcessorsToMemoryOnlyNodes.c)
 * Callees:
 *     KeFindFirstSetRightGroupAffinity @ 0x1403E9FB0 (KeFindFirstSetRightGroupAffinity.c)
 */

__int64 __fastcall MiFindProcessorsForMemoryOnlyNode(unsigned int a1, unsigned int a2)
{
  _DWORD *v3; // r14
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  unsigned int *i; // r15
  int v7; // r13d
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _WORD *j; // rdi
  unsigned int v11; // esi
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 FirstSetRightGroupAffinity; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  bool v17; // zf
  __int64 v18; // r11
  __int64 v19; // r10
  __int64 v20; // rcx
  __int16 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbx
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 result; // rax
  __int64 v27; // [rsp+20h] [rbp-68h]
  unsigned __int64 v28; // [rsp+28h] [rbp-60h]
  __int64 v29; // [rsp+30h] [rbp-58h]
  __int128 v30[5]; // [rsp+38h] [rbp-50h] BYREF
  __int16 v31; // [rsp+90h] [rbp+8h]
  _QWORD *v32; // [rsp+A0h] [rbp+18h]
  __int64 v33; // [rsp+A8h] [rbp+20h]

  v3 = *(_DWORD **)(384LL * a1 + qword_140E2D6B8 + 376);
  v4 = qword_140E2D690 + 4LL * (unsigned __int16)KeNumberNodes * a1;
  v5 = v4 + 4LL * (unsigned __int16)KeNumberNodes;
  v28 = v5;
  for ( i = (unsigned int *)(v4 + 4); (unsigned __int64)i < v5; ++i )
  {
    v7 = 1;
    v29 = *i;
    v8 = *(_QWORD **)(384 * v29 + qword_140E2D6B8 + 376);
    v9 = 1LL;
    v32 = v8;
    for ( j = (_WORD *)v8 + 13; ; ++j )
    {
      v27 = v9;
      if ( v9 >= 3 )
        break;
      v31 = *(j - 3);
      if ( v31 )
      {
        v11 = *((unsigned __int16 *)v8 + 8) - 1;
        while ( 2 )
        {
          v12 = 16LL * v11;
          v30[0] = *(_OWORD *)(*v8 + v12);
          v13 = *(_QWORD *)&v30[0];
          while ( 1 )
          {
            if ( !v13 )
              goto LABEL_25;
            FirstSetRightGroupAffinity = (unsigned int)KeFindFirstSetRightGroupAffinity((unsigned __int64 *)v30);
            v15 = KiProcessorBlock[FirstSetRightGroupAffinity];
            v16 = *(_QWORD *)(v15 + 200);
            v13 &= ~v16;
            v17 = *(_BYTE *)(v15 + 35352) == 1;
            *(_QWORD *)&v30[0] = v13;
            if ( !v17 + 1 == v7 )
            {
              v18 = *(_QWORD *)(v15 + 36512);
              v19 = 0LL;
              v33 = v13;
              v20 = v16 | v13 & v18;
              v21 = 0;
              while ( v20 )
              {
                v22 = KiProcessorBlock[FirstSetRightGroupAffinity];
                if ( (*(_BYTE *)(v22 + 35352) != 1) + 1 != v7 )
                  break;
                v23 = *(_QWORD *)(v22 + 200);
                v19 |= v23;
                ++v21;
                v24 = ~v23;
                v20 &= v24;
                v13 = v33 & v24;
                v33 = v13;
                v25 = v13;
                *(_QWORD *)&v30[0] = v13;
                if ( a2 == 1 )
                {
                  v13 &= ~v18;
                  *(_QWORD *)&v30[0] = v25 & ~v18;
                  v20 = v20 == 0;
                  break;
                }
                if ( a2 == 2 )
                {
                  v20 = 0LL;
                  break;
                }
                FirstSetRightGroupAffinity = (unsigned int)(FirstSetRightGroupAffinity + 1);
              }
              if ( (!v21 || a2 == 2 || v21 != v31) && !v20 )
                break;
            }
          }
          if ( v21 )
          {
            if ( a2 > 1 )
              goto LABEL_32;
            if ( *(j - 3) != v21 )
            {
              *(_QWORD *)(*v32 + 16LL * v11) &= ~v19;
              *(j - 3) -= v21;
              if ( !a2 )
                --*j;
LABEL_32:
              result = 1LL;
              **(_QWORD **)v3 = v19;
              *(_WORD *)(*(_QWORD *)v3 + 8LL) = *(_WORD *)(*(_QWORD *)v3 + v12 + 8);
              *((_WORD *)v3 + v7 + 9) = v21;
              *((_WORD *)v3 + v7 + 12) = 1;
              v3[11] = v29;
              return result;
            }
          }
LABEL_25:
          v8 = v32;
          if ( v11 )
          {
            --v11;
            continue;
          }
          break;
        }
        v9 = v27;
      }
      ++v7;
      ++v9;
    }
    v5 = v28;
  }
  return 0LL;
}
