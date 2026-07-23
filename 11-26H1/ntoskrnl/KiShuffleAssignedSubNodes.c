/*
 * XREFs of KiShuffleAssignedSubNodes @ 0x140CD2B5C
 * Callers:
 *     KiPerformAutomaticGroupConfiguration @ 0x140CD0688 (KiPerformAutomaticGroupConfiguration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiShuffleAssignedSubNodes(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // bx
  unsigned __int16 v5; // r9
  __int64 result; // rax
  _QWORD *v7; // r12
  __int64 v8; // r10
  unsigned __int16 v9; // cx
  char v10; // r11
  unsigned __int16 v11; // si
  _QWORD *v12; // rax
  __int64 v13; // r14
  _QWORD *v14; // rax
  unsigned __int16 v15; // r11
  __int64 v16; // r13
  unsigned __int16 v17; // di
  __int64 v18; // r15
  int v19; // r8d
  int v20; // edx
  unsigned int v21; // ecx
  unsigned __int16 v22; // ax
  __int64 *v23; // r10
  unsigned int v24; // ebp
  __int64 v25; // rdx
  __int64 *v26; // r10
  unsigned __int16 v27; // r9
  __int64 v28; // rdx
  __int64 *v29; // r10
  unsigned int v30; // edi
  unsigned __int16 i; // r9
  __int64 v32; // rdx
  __int64 *v33; // r10
  unsigned __int16 v34; // r9
  __int64 v35; // rdx
  unsigned int v36; // ebp
  __int64 v37; // rax
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r8
  __int16 v41; // [rsp+0h] [rbp-78h]
  unsigned __int16 v42; // [rsp+2h] [rbp-76h]
  unsigned __int16 v43; // [rsp+4h] [rbp-74h]
  unsigned int v44; // [rsp+8h] [rbp-70h]
  int v45; // [rsp+Ch] [rbp-6Ch]
  _QWORD *v46; // [rsp+10h] [rbp-68h]
  _QWORD *v47; // [rsp+18h] [rbp-60h]
  __int64 v48; // [rsp+20h] [rbp-58h]
  __int64 v49; // [rsp+28h] [rbp-50h]
  char v51; // [rsp+88h] [rbp+10h]

  v4 = KiSubNodeCount;
  v5 = 0;
  LODWORD(result) = 0;
  v7 = a1;
  v8 = a3;
  v45 = 0;
  v9 = -1;
  do
  {
    v51 = 0;
    v10 = 0;
    v43 = 0;
    v11 = 0;
    if ( v4 )
    {
      v12 = v7;
      v47 = v7;
      while ( 1 )
      {
        v13 = *v12;
        v48 = *v12;
        if ( (*(_BYTE *)(*v12 + 5LL) & 1) == 0 )
          goto LABEL_47;
        v14 = v7;
        v41 = -1;
        v46 = v7;
        v15 = 0;
        v44 = 0;
        do
        {
          v16 = *v14;
          if ( (*(_BYTE *)(*v14 + 5LL) & 1) != 0 && v11 != v15 )
          {
            v17 = *(_WORD *)(v16 + 6);
            v18 = *(unsigned __int16 *)(v13 + 6);
            v42 = v17;
            if ( (_WORD)v18 != v17 )
            {
              v19 = *(unsigned __int8 *)(v13 + 4);
              v20 = *(unsigned __int8 *)(v16 + 4);
              v21 = v19 - v20;
              if ( (unsigned __int8)v20 >= (unsigned __int8)v19 )
                v21 = *(unsigned __int8 *)(v16 + 4) - v19;
              v22 = *(_WORD *)(v16 + 6);
              if ( (unsigned __int8)v20 >= (unsigned __int8)v19 )
                v22 = *(_WORD *)(v13 + 6);
              if ( *(_DWORD *)(v8 + 4LL * v22) >= v21 )
              {
                v23 = v7;
                v24 = 0;
                do
                {
                  v25 = *v23;
                  if ( v5 != v11 && (*(_BYTE *)(v25 + 5) & 1) != 0 && *(_WORD *)(v25 + 6) == (_WORD)v18 )
                    v24 += *((_DWORD *)KeNodeDistance
                           + *(unsigned __int16 *)(v25 + 2)
                           + *(unsigned __int16 *)(v13 + 2) * (unsigned __int16)KeNumberNodes)
                         / ((unsigned int)*(unsigned __int16 *)(a4 + 2 * v18) - 1);
                  ++v5;
                  ++v23;
                }
                while ( v5 < v4 );
                v26 = a1;
                v27 = 0;
                v49 = v17;
                do
                {
                  v28 = *v26;
                  if ( v27 != v15 && (*(_BYTE *)(v28 + 5) & 1) != 0 && *(_WORD *)(v28 + 6) == v17 )
                    v24 += *((_DWORD *)KeNodeDistance
                           + *(unsigned __int16 *)(v28 + 2)
                           + (unsigned __int16)KeNumberNodes * *(unsigned __int16 *)(v16 + 2))
                         / ((unsigned int)*(unsigned __int16 *)(a4 + 2LL * v17) - 1);
                  ++v27;
                  ++v26;
                }
                while ( v27 < v4 );
                v29 = a1;
                v11 = v43;
                v30 = 0;
                for ( i = 0; i < v4; ++i )
                {
                  v32 = *v29;
                  if ( i != v43 && (*(_BYTE *)(v32 + 5) & 1) != 0 && *(_WORD *)(v32 + 6) == (_WORD)v18 )
                    v30 += *((_DWORD *)KeNodeDistance
                           + *(unsigned __int16 *)(v32 + 2)
                           + (unsigned __int16)KeNumberNodes * *(unsigned __int16 *)(v16 + 2))
                         / ((unsigned int)*(unsigned __int16 *)(a4 + 2 * v18) - 1);
                  ++v29;
                }
                v33 = a1;
                v34 = 0;
                v13 = v48;
                do
                {
                  v35 = *v33;
                  if ( v34 != v15 && (*(_BYTE *)(v35 + 5) & 1) != 0 && *(_WORD *)(v35 + 6) == v42 )
                    v30 += *((_DWORD *)KeNodeDistance
                           + *(unsigned __int16 *)(v35 + 2)
                           + (unsigned __int16)KeNumberNodes * *(unsigned __int16 *)(v48 + 2))
                         / ((unsigned int)*(unsigned __int16 *)(a4 + 2 * v49) - 1);
                  ++v34;
                  ++v33;
                }
                while ( v34 < v4 );
                v7 = a1;
                v8 = a3;
                if ( v30 >= v24 )
                {
                  v5 = 0;
                }
                else
                {
                  v36 = v24 - v30;
                  v5 = 0;
                  if ( v44 < v36 )
                  {
                    v9 = v15;
                    v44 = v36;
                    v41 = v15;
                    goto LABEL_43;
                  }
                }
              }
              v9 = v41;
            }
          }
LABEL_43:
          ++v15;
          v14 = ++v46;
        }
        while ( v15 < v4 );
        if ( v9 == 0xFFFF )
        {
          v10 = v51;
          v9 = -1;
        }
        else
        {
          v37 = v9;
          v10 = 1;
          v51 = 1;
          v9 = -1;
          v38 = v7[v37];
          v39 = *(unsigned __int16 *)(v13 + 6);
          v40 = *(unsigned __int16 *)(v38 + 6);
          *(_WORD *)(v13 + 6) = v40;
          *(_WORD *)(v38 + 6) = v39;
          *(_DWORD *)(v8 + 4 * v39) += *(unsigned __int8 *)(v13 + 4);
          *(_DWORD *)(v8 + 4 * v39) -= *(unsigned __int8 *)(v38 + 4);
          *(_DWORD *)(v8 + 4 * v40) += *(unsigned __int8 *)(v38 + 4);
          *(_DWORD *)(v8 + 4 * v40) -= *(unsigned __int8 *)(v13 + 4);
        }
LABEL_47:
        ++v11;
        v12 = v47 + 1;
        v43 = v11;
        ++v47;
        v5 = 0;
        if ( v11 >= v4 )
        {
          LODWORD(result) = v45;
          break;
        }
      }
    }
    result = (unsigned int)(result + 1);
    v45 = result;
  }
  while ( v10 && (unsigned int)result < 0xA );
  return result;
}
