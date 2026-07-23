/*
 * XREFs of RtlIsTextUnicode @ 0x1800BA390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsTextUnicode(PVOID Buffer, ULONG Size, PULONG Result)
{
  __int64 v3; // rax
  int v5; // ecx
  ULONG v6; // edx
  int v7; // esi
  signed __int32 v8; // r8d
  int v9; // ebp
  int v10; // r13d
  int v11; // r12d
  int v12; // r14d
  int v13; // r10d
  int v14; // r11d
  int v15; // edi
  int v16; // r15d
  _WORD *v17; // r9
  unsigned int v18; // eax
  unsigned int v19; // r8d
  unsigned int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // edx
  bool v23; // cc
  unsigned int v24; // ecx
  unsigned int v25; // edx
  unsigned int v26; // ecx
  unsigned int v27; // edx
  unsigned int v28; // edx
  bool v29; // zf
  ULONG v30; // r9d
  unsigned __int64 v31; // rcx
  int v32; // r11d
  unsigned int v33; // r10d
  unsigned int v34; // ebx
  unsigned int v35; // eax
  unsigned __int64 v36; // rcx
  unsigned int v37; // ecx
  int v38; // ebx
  int v39; // edx
  int v40; // ecx
  int v41; // edx
  int v42; // ecx
  int v43; // r8d
  int v44; // ecx
  int v45; // eax
  ULONG v46; // ecx
  unsigned int v48; // r8d
  unsigned int v49; // r8d
  unsigned int v50; // eax
  __int16 v51; // dx
  unsigned int v52; // eax
  signed __int32 v53; // [rsp+0h] [rbp-D8h] BYREF
  unsigned int v54; // [rsp+4h] [rbp-D4h]
  int v55; // [rsp+8h] [rbp-D0h]
  int v56; // [rsp+Ch] [rbp-CCh]
  unsigned int v57; // [rsp+10h] [rbp-C8h]
  int v58; // [rsp+14h] [rbp-C4h]
  unsigned int v59; // [rsp+18h] [rbp-C0h]
  int v60; // [rsp+1Ch] [rbp-BCh]
  int v61; // [rsp+20h] [rbp-B8h]
  int v62; // [rsp+24h] [rbp-B4h]
  int v63; // [rsp+28h] [rbp-B0h]
  int v64; // [rsp+2Ch] [rbp-ACh]
  int v65; // [rsp+30h] [rbp-A8h]
  int v66; // [rsp+34h] [rbp-A4h]
  int v67; // [rsp+38h] [rbp-A0h]
  unsigned int v68; // [rsp+3Ch] [rbp-9Ch]
  signed __int32 v69; // [rsp+40h] [rbp-98h]
  int v70; // [rsp+44h] [rbp-94h]
  int v71; // [rsp+48h] [rbp-90h]
  int v72; // [rsp+4Ch] [rbp-8Ch]
  unsigned int v73; // [rsp+50h] [rbp-88h]
  unsigned int v74; // [rsp+54h] [rbp-84h]
  unsigned int v75; // [rsp+58h] [rbp-80h]
  unsigned int v76; // [rsp+5Ch] [rbp-7Ch]
  int v77; // [rsp+60h] [rbp-78h]
  unsigned int v78; // [rsp+64h] [rbp-74h]
  int v79; // [rsp+68h] [rbp-70h]
  unsigned int v80; // [rsp+6Ch] [rbp-6Ch]
  int v81; // [rsp+70h] [rbp-68h]
  __int64 v82; // [rsp+78h] [rbp-60h]
  __int64 v83; // [rsp+80h] [rbp-58h]
  __int64 v84; // [rsp+88h] [rbp-50h]
  bool v88; // [rsp+F8h] [rbp+20h]

  v55 = 0;
  v69 = 0;
  v5 = 0;
  v56 = 0;
  v6 = Size >> 1;
  v3 = v6;
  v70 = 0;
  if ( v6 > 0x100 )
    v6 = 256;
  v64 = 0;
  v7 = 0;
  v65 = 0;
  v8 = 0;
  v66 = 0;
  v9 = 0;
  v58 = 0;
  v10 = 0;
  v62 = 0;
  v11 = 0;
  v60 = 0;
  v12 = 0;
  v61 = 0;
  v13 = 0;
  v67 = 0;
  v14 = 0;
  v63 = 0;
  v15 = 0;
  v71 = 0;
  v76 = 0;
  v59 = 0;
  v57 = 0;
  v68 = 0;
  v75 = 0;
  v54 = 0;
  v72 = 0;
  v84 = v3;
  v88 = 0;
  v83 = 0LL;
  _InterlockedOr(&v53, 0);
  v16 = 0;
  if ( GlobalRtlNlsState.CodePage != 0xFDE9 )
  {
    v11 = 0;
    if ( CodePageTable.CodePage != 0xFDE9 )
    {
      _InterlockedOr(&v53, 0);
      v83 = qword_1801C5020;
      LODWORD(v3) = v84;
      v88 = GlobalRtlNlsState.DBCSCodePage != 0;
    }
  }
  if ( !v6 )
    goto LABEL_96;
  if ( Size == 2 )
  {
    v17 = Buffer;
    if ( !*(_WORD *)Buffer || HIBYTE(*(_WORD *)Buffer) )
      goto LABEL_10;
LABEL_96:
    if ( Result )
      *Result = 5;
    return 0;
  }
  if ( Size <= 2 || (unsigned int)v3 > 0x100 )
  {
    v17 = Buffer;
  }
  else
  {
    v29 = (Size & 1) == 0;
    v17 = Buffer;
    if ( v29 )
    {
      v12 = 0;
      if ( (*((_WORD *)Buffer + v6 - 1) & 0xFF00) == 0 )
        --v6;
      v5 = 0;
    }
  }
LABEL_10:
  if ( !v6 )
    goto LABEL_40;
  v82 = v6;
  while ( 1 )
  {
    v18 = (unsigned __int16)*v17;
    if ( v18 > 0xD00 )
    {
      if ( v18 <= 0x3000 )
      {
        if ( v18 == 12288 )
        {
          v64 = ++v11;
        }
        else if ( v18 == 0x2000 )
        {
          ++v61;
        }
      }
      else if ( v18 != 65279 )
      {
        if ( v18 == 65534 )
        {
          v66 = ++v12;
        }
        else if ( v18 == 0xFFFF )
        {
          v65 = ++v16;
        }
      }
    }
    else if ( v18 == 3328 )
    {
      v58 = v5 + 1;
    }
    else if ( v18 > 0x20 )
    {
      switch ( v18 )
      {
        case 0x900u:
          v60 = v14 + 1;
          break;
        case 0xA00u:
          v62 = v13 + 1;
          break;
        case 0xA0Du:
          v71 = ++v15;
          break;
      }
    }
    else if ( v18 == 32 )
    {
      v70 = ++v10;
    }
    else if ( *v17 )
    {
      switch ( v18 )
      {
        case 9u:
          v56 = v9 + 1;
          break;
        case 0xAu:
          v69 = ++v8;
          break;
        case 0xDu:
          v55 = v7 + 1;
          break;
      }
    }
    else
    {
      ++v63;
    }
    v53 = v8;
    v19 = *(unsigned __int8 *)v17;
    v20 = v18 >> 8;
    v77 = v56;
    v81 = v55;
    if ( (_BYTE)v19 == 13 && v59 == 10 || (_BYTE)v19 == 10 && v59 == 13 )
      v21 = ++v54;
    else
      v21 = v54;
    v78 = v21;
    v80 = v20;
    v22 = v59;
    v23 = v20 <= v59;
    v67 += ((_BYTE)v19 == 0) + (v20 == 0);
    v79 = v67;
    v24 = v20;
    if ( v20 <= v59 )
      v24 = v59;
    v59 = v20;
    if ( v23 )
      v22 = v20;
    v25 = v24 - v22 + v57;
    v26 = v19;
    v57 = v25;
    v73 = v25;
    v27 = v76;
    v23 = v19 <= v76;
    v76 = v19;
    if ( v23 )
    {
      v26 = v27;
      v27 = v19;
    }
    ++v17;
    v28 = v26 - v27 + v68;
    v5 = v58;
    v29 = v82-- == 1;
    v68 = v28;
    v74 = v28;
    if ( v29 )
      break;
    v8 = v69;
    v10 = v70;
    v15 = v71;
    v7 = v55;
    v9 = v56;
    v11 = v64;
    v16 = v65;
    v12 = v66;
    v13 = v62;
    v14 = v60;
  }
  v56 = v77;
  v57 = v73;
  v68 = v74;
  v54 = v78;
  v55 = v81;
  v69 = v53;
  v67 = v79;
  if ( v19 == 13 )
  {
    v57 = v73;
    v67 = v79;
    v68 = v74;
    v48 = v78;
    v55 = v81;
    v69 = v53;
    v56 = v77;
    v59 = v80;
    if ( v80 != 10 )
    {
      v56 = v77;
      v67 = v79;
      v57 = v73;
      v9 = v77;
      v68 = v74;
      v55 = v81;
      v69 = v53;
      v59 = v80;
      v54 = v78;
      goto LABEL_39;
    }
    v7 = v81;
    v9 = v77;
    goto LABEL_106;
  }
  v9 = v77;
  v59 = v80;
  if ( v19 != 10 )
  {
LABEL_39:
    v7 = v81;
    goto LABEL_40;
  }
  v48 = v54;
  v7 = v81;
  v56 = v77;
  v69 = v53;
  v55 = v81;
  v59 = v80;
  if ( v80 == 13 )
LABEL_106:
    v54 = v48 + 1;
LABEL_40:
  v30 = 512;
  v31 = Size;
  v32 = v67 - 1;
  if ( v59 )
    v32 = v67;
  v33 = v54 + 1;
  if ( v59 != 26 )
    v33 = v54;
  if ( Size <= 0x200 )
    v30 = Size;
  if ( v88 )
  {
    v49 = 0;
    v34 = v75;
    if ( v30 )
    {
      do
      {
        v50 = v34 + 1;
        v51 = *(_WORD *)(v83 + 2LL * *((unsigned __int8 *)Buffer + v49));
        if ( !v51 )
          v50 = v34;
        v34 = v50;
        v52 = v49 + 1;
        if ( !v51 )
          v52 = v49;
        v49 = v52 + 1;
      }
      while ( v52 + 1 < v30 );
      v7 = v55;
      v9 = v56;
      v31 = Size;
    }
  }
  else
  {
    v34 = v75;
  }
  v35 = v57;
  if ( v68 < 0x7F )
  {
    if ( !v57 )
    {
      v72 = 1;
      goto LABEL_52;
    }
  }
  else if ( !v57 )
  {
    goto LABEL_52;
  }
  if ( !v68 )
    v72 = 16;
LABEL_52:
  if ( v88 && v34 && Result && (*Result & 0x400) != 0 )
  {
    if ( (unsigned int)v84 <= 0x100 )
      v36 = v31 >> 2;
    else
      LODWORD(v36) = 128;
    v37 = v36 - 1;
    if ( v34 < v37 / 3 )
      v38 = 3;
    else
      v38 = (v34 < 2 * v37 / 3) + 1;
    v35 = v57;
    v39 = v72 | 0x400;
  }
  else
  {
    v39 = v72;
    v38 = 3;
  }
  v40 = v39 | 2;
  if ( v38 * v35 >= v68 )
    v40 = v39;
  v41 = v40 | 0x20;
  if ( v38 * v68 >= v57 )
    v41 = v40;
  v42 = v41 | 4;
  if ( !(v7 + v69 + v9 + v11 + v10) )
    v42 = v41;
  v43 = v42 | 0x40;
  if ( !(v58 + v62 + v60 + v61) )
    v43 = v42;
  if ( v16 + v12 + v15 + v63 || (v44 = v43, v33) && v33 >= v30 / 0x28 )
    v44 = v43 | 0x100;
  v45 = v44 | 0x200;
  if ( (Size & 1) == 0 )
    v45 = v44;
  v46 = v45 | 0x1000;
  if ( !v32 )
    v46 = v45;
  if ( *(_WORD *)Buffer == 0xFEFF )
  {
    v46 |= 8u;
  }
  else if ( *(_WORD *)Buffer == 0xFFFE )
  {
    v46 |= 0x80u;
  }
  if ( Result )
  {
    v46 &= *Result;
    *Result = v46;
  }
  return (v46 & 0xB08) == 8 || (v46 & 0xF0) == 0 && (v46 & 0xF00) == 0 && (v46 & 0xF00F) != 0;
}
