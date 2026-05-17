/*
 * XREFs of RtlFindSetBits @ 0x18010AE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindSetBits(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r14d
  int v6; // r9d
  int v7; // r10d
  __int64 v8; // r8
  int v9; // eax
  int v10; // r15d
  unsigned int v11; // edx
  unsigned int v12; // r11d
  __int64 v13; // rsi
  __int64 v14; // r8
  unsigned int v15; // ebp
  unsigned __int64 v16; // rdi
  _QWORD *v17; // rdx
  signed __int64 v18; // r8
  int v19; // r9d
  _QWORD *v20; // r11
  bool v21; // zf
  __int64 v22; // rax
  unsigned int v23; // r10d
  unsigned __int64 v24; // r9
  unsigned int v25; // r9d
  bool v26; // cc
  unsigned int v27; // r10d
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v31; // rax
  int v32; // r8d
  unsigned int v33; // ecx
  __int64 v34; // rax
  unsigned __int64 v35; // r10
  __int64 v36; // rax
  int v37; // ecx
  _QWORD *v38; // rcx
  __int64 v39; // r8
  char v40; // r8
  _QWORD *v41; // rcx
  unsigned int v42; // r8d
  __int64 v43; // rcx
  __int64 v44; // [rsp+40h] [rbp+8h]
  int v45; // [rsp+48h] [rbp+10h]

  v3 = *(_DWORD *)a1;
  v6 = a3 < *(_DWORD *)a1 ? a3 : 0;
  v7 = *(_DWORD *)a1 - 1;
  if ( !a2 )
    return v6 & 0xFFFFFFF8;
  v8 = *(_QWORD *)(a1 + 8);
  v44 = v8;
  v9 = v6;
  v10 = (v8 & 4) != 0 ? 0x20 : 0;
  while ( 1 )
  {
    v45 = v9;
    v11 = v10 + v9;
    v12 = v10 + v7;
    v13 = v8 - ((v44 & 4) != 0 ? 4 : 0);
    if ( v7 - v9 + 1 >= a2 )
    {
      v14 = (1LL << v11) - 1;
      v15 = v12 - a2 + 1;
      v16 = v13 + 8 * ((unsigned __int64)v15 >> 6);
      v17 = (_QWORD *)(v13 + 8 * ((unsigned __int64)v11 >> 6));
      v18 = ~*v17 | v14;
      if ( a2 > 0x7F )
      {
        v35 = v16 + 8;
        if ( (v15 & 0x3F) == 0 )
          v35 = v13 + 8 * ((unsigned __int64)(v12 - a2 + 1) >> 6);
        if ( !v18 )
        {
          v37 = 0;
          goto LABEL_66;
        }
        if ( *++v17 != -1LL )
          goto LABEL_61;
        v21 = !_BitScanReverse64((unsigned __int64 *)&v36, v18);
        if ( !v21 )
        {
          v37 = 63 - v36;
          goto LABEL_66;
        }
LABEL_78:
        v37 = 64;
LABEL_66:
        while ( 1 )
        {
          v25 = ((unsigned int)(((__int64)v17 - v13) >> 3) << 6) - v37;
          if ( v25 > v15 )
            goto LABEL_21;
          v40 = a2 - v37;
          v41 = &v17[(unsigned __int64)(a2 - v37) >> 6];
          while ( ++v17 != v41 )
          {
            if ( *v17 != -1LL )
              goto LABEL_61;
          }
          v42 = v40 & 0x3F;
          if ( !v42 )
            goto LABEL_37;
          v21 = !_BitScanForward64((unsigned __int64 *)&v43, ~*v17);
          if ( v21 )
            LODWORD(v43) = 64;
          if ( (unsigned int)v43 >= v42 )
            goto LABEL_37;
          do
          {
LABEL_61:
            v38 = v17;
            if ( (unsigned __int64)v17 > v35 )
              goto LABEL_21;
            ++v17;
          }
          while ( *v17 != -1LL );
          v21 = !_BitScanReverse64((unsigned __int64 *)&v39, ~*v38);
          if ( v21 )
            goto LABEL_78;
          v37 = 63 - v39;
        }
      }
      if ( a2 < 0x40 )
      {
        if ( a2 <= 1 )
        {
          while ( v18 == -1 )
          {
            if ( (unsigned __int64)++v17 > v16 )
              goto LABEL_21;
            v18 = ~*v17;
          }
          _BitScanForward64(&v29, ~v18);
          v25 = ((unsigned int)(((__int64)v17 - v13) >> 3) << 6) + v29;
          v26 = v25 <= v15;
LABEL_20:
          if ( v26 )
          {
LABEL_37:
            if ( v25 != -1 )
            {
              v25 -= v10;
              return v25;
            }
            goto LABEL_22;
          }
        }
        else
        {
          v19 = 0;
          v20 = (_QWORD *)(v13 + 8 * ((unsigned __int64)v12 >> 6));
          while ( v18 != -1 )
          {
LABEL_12:
            v21 = !_BitScanForward64((unsigned __int64 *)&v22, v18);
            if ( v21 )
              LODWORD(v22) = 64;
            if ( v19 + (int)v22 >= a2 )
            {
              LODWORD(v24) = -v19;
LABEL_19:
              v25 = ((unsigned int)(((__int64)v17 - v13) >> 3) << 6) + v24;
              v26 = v25 <= v15;
              goto LABEL_20;
            }
            v23 = a2;
            v24 = ~v18;
            while ( 1 )
            {
              v24 &= v24 >> (v23 >> 1);
              if ( !v24 )
                break;
              v23 -= v23 >> 1;
              if ( v23 <= 1 )
              {
                _BitScanForward64(&v24, v24);
                goto LABEL_19;
              }
            }
            if ( v17 == v20 )
              goto LABEL_21;
            v21 = !_BitScanReverse64((unsigned __int64 *)&v28, v18);
            if ( v21 )
              v19 = 64;
            else
              v19 = 63 - v28;
            v18 = ~*++v17;
          }
          while ( (unsigned __int64)++v17 <= v16 )
          {
            v18 = ~*v17;
            if ( *v17 )
            {
              v19 = 0;
              goto LABEL_12;
            }
          }
        }
LABEL_21:
        v25 = -1;
LABEL_22:
        v8 = v44;
        goto LABEL_23;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v18 < 0 )
          {
            if ( (unsigned __int64)++v17 > v16 )
              goto LABEL_21;
            v18 = ~*v17;
          }
          v21 = !_BitScanReverse64((unsigned __int64 *)&v31, v18);
          if ( v21 )
            v32 = 64;
          else
            v32 = 63 - v31;
          v25 = (((unsigned int)(((__int64)v17 - v13) >> 3) + 1) << 6) - v32;
          if ( v25 > v15 )
            goto LABEL_21;
          v33 = a2 - v32;
          if ( a2 == v32 )
            goto LABEL_37;
          v18 = ~*++v17;
          if ( v33 >= 0x40 )
            break;
LABEL_46:
          v21 = !_BitScanForward64((unsigned __int64 *)&v34, v18);
          if ( v21 )
            LODWORD(v34) = 64;
          if ( (unsigned int)v34 >= v33 )
            goto LABEL_37;
        }
        if ( *v17 == -1LL )
        {
          v33 -= 64;
          if ( !v33 )
            goto LABEL_37;
          v18 = ~*++v17;
          goto LABEL_46;
        }
      }
    }
    v25 = -1;
LABEL_23:
    if ( !v45 )
      return v25;
    v27 = a2 + a3;
    if ( a2 + a3 > v3 )
      v27 = v3;
    v7 = v27 - 1;
    v9 = 0;
  }
}
