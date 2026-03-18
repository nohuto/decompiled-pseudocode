/*
 * XREFs of ?vTransparentCopy@@YAXPEAUBLTINFO@@@Z @ 0x1400CF950
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1400D08C0 (XLATEOBJ_iXlate.c)
 *     ?StartPixel@@YAPEAEPEAEKK@Z @ 0x1400D0C9C (-StartPixel@@YAPEAEPEAEKK@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall vTransparentCopy(struct BLTINFO *a1)
{
  XLATEOBJ *v1; // r11
  unsigned __int8 v2; // si
  int v3; // r15d
  int v5; // edi
  __int64 v6; // rax
  int v7; // r12d
  unsigned __int8 *started; // rax
  unsigned int v9; // r8d
  unsigned __int8 *v10; // rcx
  unsigned int v11; // edx
  unsigned __int8 *v12; // rax
  unsigned __int8 v13; // r10
  XLATEOBJ *v14; // r11
  unsigned __int8 *v15; // rdx
  unsigned __int8 *v16; // r8
  int v17; // ecx
  int v18; // r13d
  unsigned __int8 *v19; // r14
  int v20; // r15d
  unsigned __int8 *v21; // rdi
  int v22; // eax
  ULONG v23; // edx
  ULONG v24; // eax
  int v25; // eax
  char v26; // al
  unsigned int v27; // edx
  char v28; // al
  char v29; // al
  unsigned __int8 v30; // si
  ULONG v31; // eax
  __int16 v32; // ax
  unsigned __int8 v33; // al
  char v34; // si
  char v35; // cl
  unsigned __int8 v36; // [rsp+20h] [rbp-40h]
  int v37; // [rsp+24h] [rbp-3Ch]
  _WORD v38[4]; // [rsp+28h] [rbp-38h]
  XLATEOBJ *v39; // [rsp+30h] [rbp-30h]
  int v40; // [rsp+38h] [rbp-28h]
  int v41; // [rsp+3Ch] [rbp-24h]
  unsigned __int8 *v42; // [rsp+40h] [rbp-20h]
  unsigned __int8 *v43; // [rsp+48h] [rbp-18h]
  _DWORD v44[2]; // [rsp+50h] [rbp-10h]

  v1 = *(XLATEOBJ **)a1;
  v2 = 0;
  v3 = *((_DWORD *)a1 + 7);
  v5 = *((_DWORD *)a1 + 8);
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 9) + 128LL);
  v41 = v3;
  v39 = v1;
  v36 = 0;
  v44[0] = -524255232;
  v44[1] = -16975632;
  v38[0] = -4096;
  if ( v6 )
    v7 = **(_DWORD **)(v6 + 112) | *(_DWORD *)(*(_QWORD *)(v6 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v6 + 112) + 8LL);
  else
    v7 = -1;
  started = StartPixel(*((unsigned __int8 **)a1 + 1), *((_DWORD *)a1 + 12), *((_DWORD *)a1 + 35));
  v9 = *((_DWORD *)a1 + 36);
  v10 = (unsigned __int8 *)*((_QWORD *)a1 + 2);
  v11 = *((_DWORD *)a1 + 14);
  v42 = started;
  v12 = StartPixel(v10, v11, v9);
  v15 = v42;
  v16 = v12;
  while ( 1 )
  {
    v43 = v16;
    v40 = v5 - 1;
    if ( !v5 )
      break;
    v17 = v3;
    v18 = *((_DWORD *)a1 + 12);
    v19 = v15;
    v20 = *((_DWORD *)a1 + 14);
    v21 = v16;
    if ( *((_DWORD *)a1 + 35) == 1 )
    {
      if ( (v18 & 7) != 0 )
      {
        v13 = *v15 << (v18 & 7);
        v36 = v13;
      }
      else
      {
        v19 = v15 - 1;
      }
    }
    v22 = *((_DWORD *)a1 + 36);
    if ( v22 == 1 )
    {
      v34 = *((_BYTE *)v44 + (v20 & 7));
    }
    else
    {
      if ( v22 != 2 )
        goto LABEL_10;
      v34 = *((_BYTE *)v38 + (v20 & 1));
    }
    v2 = *v16 & v34;
LABEL_10:
    while ( 1 )
    {
      v37 = v17 - 1;
      if ( !v17 )
        break;
      switch ( *((_DWORD *)a1 + 35) )
      {
        case 1:
          if ( (v18 & 7) == 0 )
            v13 = *++v19;
          v23 = v13 >> 7;
          v36 = 2 * v13;
          goto LABEL_15;
        case 2:
          v27 = *v19;
          if ( (v18 & 1) != 0 )
          {
            v23 = v27 & 0xF;
            ++v19;
          }
          else
          {
            v23 = v27 >> 4;
          }
LABEL_15:
          LOBYTE(v18) = v18 + 1;
          break;
        case 3:
          v23 = *v19++;
          break;
        case 4:
          v23 = (unsigned __int16)(v7 & *(_WORD *)v19);
          v19 += 2;
          break;
        case 5:
          v23 = *v19 | (*(unsigned __int16 *)(v19 + 1) << 8);
          v19 += 3;
          break;
        case 6:
          v23 = *(_DWORD *)v19 & v7;
          v19 += 4;
          break;
        default:
          return;
      }
      switch ( *((_DWORD *)a1 + 36) )
      {
        case 1:
          if ( v23 == *((_DWORD *)a1 + 37) )
          {
            v29 = (*v21 << (v20 & 7)) & 0x80;
          }
          else
          {
            v28 = XLATEOBJ_iXlate(v14, v23);
            v14 = v39;
            v29 = v28 << 7;
          }
          v30 = v29 | v2;
          if ( (++v20 & 7) != 0 )
          {
            v2 = v30 >> 1;
          }
          else
          {
            *v21++ = v30;
            v2 = 0;
          }
          break;
        case 2:
          if ( (v20 & 1) != 0 )
          {
            if ( v23 == *((_DWORD *)a1 + 37) )
              v26 = *v21 & 0xF;
            else
              v26 = XLATEOBJ_iXlate(v14, v23);
            v2 |= v26;
            *v21++ = v2;
          }
          else if ( v23 == *((_DWORD *)a1 + 37) )
          {
            v2 = *v21 & 0xF0;
          }
          else
          {
            v2 = 16 * XLATEOBJ_iXlate(v14, v23);
          }
          v14 = v39;
          ++v20;
          break;
        case 3:
          if ( v23 != *((_DWORD *)a1 + 37) )
          {
            v33 = XLATEOBJ_iXlate(v14, v23);
            v14 = v39;
            *v21 = v33;
          }
          ++v21;
          break;
        case 4:
          if ( v23 != *((_DWORD *)a1 + 37) )
          {
            v32 = XLATEOBJ_iXlate(v14, v23);
            v14 = v39;
            *(_WORD *)v21 = v32;
          }
          v21 += 2;
          break;
        case 5:
          if ( v23 != *((_DWORD *)a1 + 37) )
          {
            v31 = XLATEOBJ_iXlate(v14, v23);
            v14 = v39;
            *v21 = v31;
            v21[2] = BYTE2(v31);
            v21[1] = BYTE1(v31);
          }
          v21 += 3;
          break;
        case 6:
          if ( v23 != *((_DWORD *)a1 + 37) )
          {
            v24 = XLATEOBJ_iXlate(v14, v23);
            v14 = v39;
            *(_DWORD *)v21 = v24;
          }
          v21 += 4;
          break;
        default:
          return;
      }
      v13 = v36;
      v17 = v37;
    }
    v25 = *((_DWORD *)a1 + 36);
    if ( v25 == 1 )
    {
      if ( (v20 & 7) != 0 )
      {
        v35 = *((_BYTE *)v44 + (v20 & 7));
LABEL_71:
        *v21 = v2 & v35 | *v21 & ~v35;
      }
    }
    else if ( v25 == 2 && (v20 & 1) != 0 )
    {
      v35 = *((_BYTE *)v38 + (v20 & 1));
      goto LABEL_71;
    }
    v15 = &v42[*((int *)a1 + 10)];
    v5 = v40;
    v16 = &v43[*((int *)a1 + 11)];
    v3 = v41;
    v42 = v15;
  }
}
