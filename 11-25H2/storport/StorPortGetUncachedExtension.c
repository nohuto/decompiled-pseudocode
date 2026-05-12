/*
 * XREFs of StorPortGetUncachedExtension @ 0x140073F80
 * Callers:
 *     sub_1401B73A0 @ 0x1401B73A0 (sub_1401B73A0.c)
 * Callees:
 *     sub_14002285C @ 0x14002285C (sub_14002285C.c)
 *     sub_140039148 @ 0x140039148 (sub_140039148.c)
 *     sub_140053BCC @ 0x140053BCC (sub_140053BCC.c)
 *     sub_14006B2F4 @ 0x14006B2F4 (sub_14006B2F4.c)
 *     sub_1400728C4 @ 0x1400728C4 (sub_1400728C4.c)
 *     sub_140075FA8 @ 0x140075FA8 (sub_140075FA8.c)
 *     sub_14017AF58 @ 0x14017AF58 (sub_14017AF58.c)
 *     sub_14017B0EC @ 0x14017B0EC (sub_14017B0EC.c)
 */

__int64 __fastcall StorPortGetUncachedExtension(__int64 a1, __int64 a2, int a3)
{
  _BYTE *v3; // rcx
  int v4; // esi
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // r8d
  __int64 v10; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 v16; // rcx
  unsigned __int64 v17; // r10
  __int64 v18; // r9
  __int64 v19; // rcx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  bool v24; // zf
  __int64 v25; // rax
  unsigned int v26; // [rsp+70h] [rbp+8h] BYREF

  v3 = *(_BYTE **)(a1 - 16);
  v4 = 0x80000000;
  v26 = 0x80000000;
  if ( (v3[248] & 1) == 0 )
  {
    v12 = sub_140039148(v3);
    v14 = v12;
    if ( !v12 )
      return 0LL;
    if ( *(_DWORD *)(v12 + 928) )
      return *(_QWORD *)(v14 + 912);
    v15 = v12 + 880;
    if ( !(unsigned __int8)sub_14017B0EC(v12 + 880, v13)
      && (int)sub_14017AF58(v16, *(_QWORD *)(v14 + 32), v14 + 384) < 0 )
    {
      return 0LL;
    }
    if ( a2 )
    {
      if ( (*(_DWORD *)(a2 + 220) & 4) != 0 )
      {
        v4 = *(_DWORD *)(v14 + 4656);
        v26 = v4;
      }
      if ( *(_BYTE *)(a2 + 144) == 2 )
      {
        if ( *(_QWORD *)(v14 + 4288) < 0x100000000uLL )
          *(_QWORD *)(v14 + 4288) = -1LL;
        *(_QWORD *)(v14 + 4304) = 0x100000000LL;
      }
      else
      {
        if ( *(_BYTE *)(a2 + 144) != 3 )
        {
          if ( *(_BYTE *)(a2 + 144) == 4 )
          {
            v17 = *(_QWORD *)(v14 + 4288);
            v18 = v17;
            if ( v17 < 0x100000000LL )
            {
              *(_QWORD *)(v14 + 4288) = -1LL;
              v17 = -1LL;
              v18 = -1LL;
            }
            v19 = v18;
            if ( qword_140168410 != -1 )
            {
              if ( (_DWORD)qword_140168410 )
              {
                if ( (unsigned __int64)qword_140168410 > 0x100000000LL )
                {
                  v20 = qword_140168410 & 0xFFFFFFFF00000000uLL;
                  if ( v17 >= (qword_140168410 & 0xFFFFFFFF00000000uLL) )
                  {
                    v19 = v20 - 1;
                    *(_QWORD *)(v14 + 4288) = v20 - 1;
                    v21 = (v20 - 1) & 0xFFFFFFFF00000000uLL;
                    if ( *(_QWORD *)(v14 + 4296) > v21 )
                      *(_QWORD *)(v14 + 4296) = v21;
                  }
                }
              }
            }
            *(_QWORD *)(v14 + 4304) = 0x100000000LL;
            *(_QWORD *)(v14 + 4320) = v19;
            sub_140075FA8(v14, &v26);
            v4 = v26;
          }
          goto LABEL_31;
        }
        if ( *(_QWORD *)(v14 + 4288) < 0x100000000uLL )
          *(_QWORD *)(v14 + 4288) = -1LL;
        *(_QWORD *)(v14 + 4304) = 0LL;
      }
      *(_QWORD *)(v14 + 4320) = -1LL;
    }
LABEL_31:
    if ( (int)sub_14006B2F4(
                v15,
                a3,
                *(_QWORD *)(v14 + 4296),
                *(_QWORD *)(v14 + 4288),
                *(_QWORD *)(v14 + 4304),
                *(_DWORD *)(v14 + 4280),
                v4,
                v14 + 912) >= 0
      || v4 != 0x80000000
      && (int)sub_14006B2F4(
                v15,
                a3,
                *(_QWORD *)(v14 + 4296),
                *(_QWORD *)(v14 + 4288),
                *(_QWORD *)(v14 + 4304),
                *(_DWORD *)(v14 + 4280),
                0x80000000,
                v14 + 912) >= 0 )
    {
      if ( *(_BYTE *)(a2 + 144) == 4 )
      {
        v22 = *(_QWORD *)(v14 + 920);
        v23 = v22 | 0xFFFFFFFFLL;
        v24 = *(_QWORD *)(v14 + 4296) == 0LL;
        *(_QWORD *)(v14 + 4312) = v22 & 0xFFFFFFFF00000000uLL;
        if ( v24 )
          v22 &= 0xFFFFFFFF00000000uLL;
        *(_QWORD *)(v14 + 4320) = v23;
        *(_QWORD *)(v14 + 4296) = v22;
        *(_QWORD *)(v14 + 4288) = v23;
        if ( !*(_QWORD *)(v14 + 120) )
        {
          v25 = 316LL;
          if ( *(_DWORD *)v14 != 1314275652 )
            v25 = 524LL;
          *(_QWORD *)(v14 + 120) = sub_14002285C(((*(_DWORD *)(v25 + v14) + 7) & 0xFFFFFFF8) + 1184, v22, (_QWORD *)v14);
        }
      }
      return *(_QWORD *)(v14 + 912);
    }
    return 0LL;
  }
  v7 = sub_140053BCC(v3);
  v10 = 0LL;
  if ( v7 )
    return sub_1400728C4(v7, v8, v9);
  return v10;
}
