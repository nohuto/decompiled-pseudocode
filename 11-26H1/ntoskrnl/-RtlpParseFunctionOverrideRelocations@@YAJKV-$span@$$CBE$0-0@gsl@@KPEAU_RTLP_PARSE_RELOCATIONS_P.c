/*
 * XREFs of ?RtlpParseFunctionOverrideRelocations@@YAJKV?$span@$$CBE$0?0@gsl@@KPEAU_RTLP_PARSE_RELOCATIONS_PACKET@@@Z @ 0x140A6B6C0
 * Callers:
 *     ?RtlpCreateFunctionOverrideFixupInfo@@YAJV?$span@$$CBE$0?0@gsl@@KKPEBU_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@PEAPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@PEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@@Z @ 0x140A6B17C (-RtlpCreateFunctionOverrideFixupInfo@@YAJV-$span@$$CBE$0-0@gsl@@KKPEBU_RTL_FUNCTION_OVERRIDE_CAP.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpParseFunctionOverrideRelocations(int a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v4; // rcx
  unsigned int v6; // r11d
  unsigned __int64 *v7; // r9
  _DWORD *v8; // r10
  unsigned __int16 v9; // r14
  unsigned int v10; // eax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r8
  _WORD *v13; // rbx
  _WORD *v14; // r13
  char v15; // bp
  unsigned __int8 v16; // r12
  unsigned __int8 v17; // r15
  int v18; // esi
  unsigned int v19; // r8d
  unsigned int v20; // r8d
  unsigned __int64 v21; // rax
  __int64 v22; // r8
  unsigned __int64 v23; // r10
  __int64 v24; // r12
  unsigned int v25; // r8d
  unsigned int v26; // eax
  __int64 v27; // r14
  unsigned int v28; // eax
  __int64 v29; // r8
  __int16 v30; // ax
  __int64 v31; // r8
  __int64 v32; // r10
  unsigned int v33; // r8d
  __int64 v34; // rbp
  unsigned int v35; // eax
  __int64 v36; // r9
  unsigned int v37; // eax
  __int64 v38; // r8
  __int64 v39; // r8
  __int16 v40; // ax
  bool v42; // r11
  char v43; // [rsp+20h] [rbp-68h]
  _DWORD *v44; // [rsp+28h] [rbp-60h]
  __int128 v45; // [rsp+30h] [rbp-58h]
  __int128 v46; // [rsp+30h] [rbp-58h]
  __int128 v47; // [rsp+40h] [rbp-48h]
  unsigned __int64 *v49; // [rsp+98h] [rbp+10h]

  v49 = (unsigned __int64 *)a2;
  v4 = *(_QWORD *)a2;
  v6 = a3;
  v7 = (unsigned __int64 *)a2;
  if ( *(_QWORD *)a2 < 0xAuLL )
    return 3221225595LL;
  if ( v4 < 8 )
  {
    v8 = 0LL;
    v44 = 0LL;
    goto LABEL_4;
  }
  v8 = *(_DWORD **)(a2 + 8);
  v11 = v4 - 8;
  v44 = v8;
  *(_QWORD *)&v46 = v11;
  if ( v11 == -1LL )
    goto LABEL_61;
  *((_QWORD *)&v46 + 1) = v8 + 2;
  *(_OWORD *)a2 = v46;
LABEL_4:
  v9 = -1;
  if ( v8 )
  {
    v10 = v8[1];
    v11 = v10 - 8;
    if ( v10 > 8 && (v10 & 3) == 0 )
    {
      v12 = *v7;
      if ( v11 <= *v7 && (*v8 & 0xFFF) == 0 )
      {
        v13 = (_WORD *)v7[1];
        if ( !v13 )
          goto LABEL_61;
        if ( (((_BYTE)v10 - 8) & 1) != 0 )
          goto LABEL_61;
        a2 = v11 >> 1;
        *(_QWORD *)&v45 = v12 - v11;
        if ( v12 - v11 == -1LL )
          goto LABEL_61;
        *((_QWORD *)&v45 + 1) = (char *)v13 + v11;
        v14 = &v13[a2];
        v15 = 1;
        v43 = 0;
        v16 = -1;
        *(_OWORD *)v7 = v45;
        while ( 1 )
        {
          if ( v13 == v14 )
          {
            v7 = v49;
            if ( (unsigned __int64)v45 < 8 )
            {
              v8 = 0LL;
              v44 = 0LL;
              goto LABEL_4;
            }
            v11 = *v49;
            v8 = (_DWORD *)v49[1];
            v44 = v8;
            if ( *v49 >= 8 )
            {
              v11 -= 8LL;
              *(_QWORD *)&v47 = v11;
              if ( v11 != -1LL )
              {
                *((_QWORD *)&v47 + 1) = v8 + 2;
                *(_OWORD *)v49 = v47;
                goto LABEL_4;
              }
            }
LABEL_61:
            guard_dispatch_icall_no_overrides(v11, a2);
            __debugbreak();
          }
          v17 = 4;
          v11 = (unsigned __int16)*v13;
          LOWORD(v11) = *v13 & 0xFFF;
          v18 = *v13 >> 12;
          if ( v18 == 1 )
            goto LABEL_15;
          if ( !(*v13 >> 12) )
            break;
          if ( v18 != 2 )
          {
            if ( v18 != 3 )
              return 3221225595LL;
            v17 = 8;
          }
          v19 = 4;
LABEL_16:
          a2 = (unsigned __int16)v11 % v19;
          if ( (_DWORD)a2 )
            return 3221225595LL;
          v20 = (unsigned __int16)v11 + *v8;
          if ( v20 >= a1 - (unsigned int)v17 || v20 < v6 )
            return 3221225595LL;
          if ( v15 )
          {
            v42 = (unsigned __int16)v11 > 4096 - v17;
          }
          else
          {
            if ( v43 )
            {
              if ( (_WORD)v11 )
                return 3221225595LL;
LABEL_52:
              v43 = 1;
              goto LABEL_43;
            }
            if ( !(_WORD)v11 )
              goto LABEL_52;
            if ( (unsigned __int16)v11 <= v9 )
              return 3221225595LL;
            a2 = v9 + (unsigned int)v16;
            if ( (unsigned __int16)v11 < (unsigned int)a2 )
              return 3221225595LL;
            v42 = (unsigned __int16)v11 > 4096 - v17;
          }
          if ( !(_WORD)v18 )
            return 3221225595LL;
          v21 = *(_QWORD *)(a4 + 8);
          v22 = v20 >> 12;
          v23 = (unsigned int)v22;
          if ( *(_DWORD *)a4 )
          {
            if ( (unsigned int)v22 >= v21 )
              goto LABEL_61;
            _mm_lfence();
            a2 = *(_QWORD *)(a4 + 24);
            v24 = *(unsigned int *)(*(_QWORD *)(a4 + 16) + 4 * v22);
            v25 = *(_DWORD *)(a2 + 32);
            if ( (unsigned int)v23 < v25 || (v26 = *(_DWORD *)(a2 + 36), (unsigned int)v23 > v26) )
            {
              v29 = 0LL;
            }
            else
            {
              v27 = *(_QWORD *)(a2 + 24);
              v28 = v26 - v25 + 1;
              if ( !v27 && v28 )
                goto LABEL_61;
              a2 = (unsigned int)v23 - v25;
              if ( a2 >= v28 )
                goto LABEL_61;
              _mm_lfence();
              v29 = *(_QWORD *)(v27 + 8LL * ((unsigned int)v23 - v25));
            }
            v30 = *(_WORD *)(v29 + 8 * v24 + 4);
            v31 = v29 + 8 * v24;
            *(_WORD *)(v31 + 4) = *v13 & 0xFFF | v30 & 0xF000;
            *(_DWORD *)(v31 + 8) = *(_DWORD *)(a4 + 32);
            *(_WORD *)(v31 + 4) = v11 & 0xFFF | ((_WORD)v18 << 12);
            if ( v23 >= *(_QWORD *)(a4 + 8) )
              goto LABEL_61;
            ++*(_DWORD *)(*(_QWORD *)(a4 + 16) + 4 * v23);
            if ( v42 )
            {
              v32 = (unsigned int)(v23 + 1);
              *(_WORD *)(v31 + 6) ^= ((unsigned __int8)*(_WORD *)(v31 + 6) ^ (unsigned __int8)(-8 * *(_BYTE *)(v31 + 4))) & 0x38;
              a2 = (unsigned int)v32;
              if ( (unsigned __int64)(unsigned int)v32 >= *(_QWORD *)(a4 + 8) )
                goto LABEL_61;
              _mm_lfence();
              a2 = *(_QWORD *)(a4 + 24);
              v33 = *(_DWORD *)(a2 + 32);
              v34 = *(unsigned int *)(*(_QWORD *)(a4 + 16) + 4 * v32);
              if ( (unsigned int)v32 < v33 || (v35 = *(_DWORD *)(a2 + 36), (unsigned int)v32 > v35) )
              {
                v38 = 0LL;
              }
              else
              {
                v36 = *(_QWORD *)(a2 + 24);
                v37 = v35 - v33 + 1;
                if ( !v36 && v37 )
                  goto LABEL_61;
                a2 = (unsigned int)v32 - v33;
                if ( a2 >= v37 )
                  goto LABEL_61;
                _mm_lfence();
                v38 = *(_QWORD *)(v36 + 8LL * ((unsigned int)v32 - v33));
              }
              *(_WORD *)(v38 + 8 * v34 + 4) &= 0xF000u;
              v39 = v38 + 8 * v34;
              *(_DWORD *)(v39 + 8) = *(_DWORD *)(a4 + 32);
              v40 = *(_WORD *)(v39 + 6);
              *(_WORD *)(v39 + 4) = (_WORD)v18 << 12;
              *(_WORD *)(v39 + 6) = v40 ^ ((unsigned __int8)v40 ^ (unsigned __int8)(v11 + v17)) & 7;
              a2 = (unsigned int)v32;
              if ( (unsigned __int64)(unsigned int)v32 >= *(_QWORD *)(a4 + 8) )
                goto LABEL_61;
              ++*(_DWORD *)(*(_QWORD *)(a4 + 16) + 4 * v32);
            }
          }
          else
          {
            if ( (unsigned int)v22 >= v21 )
              goto LABEL_61;
            ++*(_DWORD *)(*(_QWORD *)(a4 + 16) + 4 * v22);
            if ( v42 )
            {
              a2 = (unsigned int)(v22 + 1);
              if ( a2 >= *(_QWORD *)(a4 + 8) )
                goto LABEL_61;
              ++*(_DWORD *)(*(_QWORD *)(a4 + 16) + 4 * a2);
            }
          }
LABEL_43:
          v8 = v44;
          v15 = 0;
          v6 = a3;
          ++v13;
          v9 = v11;
          v16 = v17;
        }
        if ( v15 || (_WORD)v11 )
          return 3221225595LL;
LABEL_15:
        v19 = 1;
        goto LABEL_16;
      }
    }
    return 3221225595LL;
  }
  return *v7 != 0 ? 0xC000007B : 0;
}
