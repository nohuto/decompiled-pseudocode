/*
 * XREFs of FsRtlIsDbcsInExpression @ 0x1409DFCF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall FsRtlIsDbcsInExpression(PANSI_STRING Expression, PANSI_STRING Name)
{
  unsigned int v2; // esi
  PANSI_STRING v3; // rdi
  char v4; // dl
  int Length; // ebx
  unsigned __int16 v6; // bp
  char *Buffer; // rax
  char *v8; // r9
  unsigned __int16 v9; // r11
  unsigned int i; // eax
  __int64 v11; // rdx
  char *v12; // r8
  __int16 v13; // bp
  int v14; // r10d
  char *v15; // r13
  unsigned __int16 v16; // r11
  unsigned __int8 *v17; // r8
  __int16 v18; // dx
  __int16 v19; // ax
  __int64 v20; // r15
  unsigned int v21; // ebx
  unsigned int v22; // r12d
  __int16 v23; // r14
  unsigned int v24; // edi
  PANSI_STRING v25; // r9
  int v26; // eax
  unsigned __int16 v27; // r14
  __int64 v28; // rsi
  __int16 v29; // bp
  char *v30; // r9
  char v31; // dl
  char v32; // r8
  __int16 v33; // si
  __int16 v34; // bp
  __int16 v35; // ax
  char *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rcx
  __int16 v40; // bx
  __int64 v42; // rax
  PANSI_STRING v43; // rax
  unsigned __int16 v44; // dx
  unsigned __int8 *v45; // r10
  __int16 v46; // r9
  __int16 v47; // ax
  __int16 v48; // r10
  __int64 v49; // rax
  __int64 v50; // rbx
  char *v51; // rax
  _OWORD *Pool2; // rax
  __int128 v53; // xmm1
  __int64 v54; // rcx
  __int64 v55; // rdx
  int v56; // r8d
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  char v60; // [rsp+20h] [rbp-C8h]
  __int16 v61; // [rsp+24h] [rbp-C4h]
  unsigned __int16 v62; // [rsp+28h] [rbp-C0h]
  __int16 v63; // [rsp+2Ah] [rbp-BEh]
  char *v65; // [rsp+38h] [rbp-B0h]
  char *v66; // [rsp+38h] [rbp-B0h]
  unsigned int v67; // [rsp+40h] [rbp-A8h]
  PVOID P; // [rsp+48h] [rbp-A0h]
  _WORD v70[16]; // [rsp+70h] [rbp-78h] BYREF
  char v71; // [rsp+90h] [rbp-58h] BYREF

  v2 = 0;
  v3 = Name;
  v4 = 0;
  v61 = 0;
  P = 0LL;
  v60 = 0;
  Length = v3->Length;
  if ( !(_WORD)Length )
    return Expression->Length + Length == 0;
  v6 = Expression->Length;
  if ( !Expression->Length )
    return Expression->Length + Length == 0;
  if ( v6 == 1 && *Expression->Buffer == 42 )
    return 1;
  Buffer = Expression->Buffer;
  if ( *Buffer == 42 )
  {
    v8 = Buffer + 1;
    v65 = Buffer + 1;
    v9 = *(_OWORD *)Expression - 1;
    for ( i = 0; ; ++i )
    {
      while ( 1 )
      {
        if ( i >= (unsigned __int16)(*(_OWORD *)Expression - 1) )
        {
          if ( (unsigned __int16)Length < (unsigned __int16)(v6 - 1) )
            return 0;
          v55 = Length - (unsigned int)v9;
          if ( !(_BYTE)NlsMbOemCodePageTag || !(_DWORD)v55 )
            return memcmp(v8, &v3->Buffer[v55], v9) == 0;
          do
          {
            v56 = 1;
            v57 = (unsigned __int8)v3->Buffer[v2];
            if ( (unsigned __int8)v57 >= 0x80u && *((_WORD *)NlsOemLeadByteInfo + v57) )
              v56 = 2;
            v2 += v56;
          }
          while ( v2 < (unsigned int)v55 );
          v8 = v65;
          return v2 <= (unsigned int)v55 && memcmp(v8, &v3->Buffer[v55], v9) == 0;
        }
        v11 = (unsigned __int8)v8[i];
        if ( (unsigned __int8)v11 < 0x80u || !(_BYTE)NlsMbOemCodePageTag || !*((_WORD *)NlsOemLeadByteInfo + v11) )
          break;
        i += 2;
      }
      if ( (v11 & 0x80u) == 0LL && (*((_BYTE *)qword_140017650 + (char)v11) & 8) != 0 )
        break;
    }
    v4 = 0;
  }
  v70[0] = 0;
  v12 = (char *)v70;
  v67 = 1;
  v13 = 2 * v6;
  v66 = (char *)v70;
  v14 = 1;
  v63 = v13;
  v15 = &v71;
  v62 = 0;
  v16 = 0;
LABEL_13:
  if ( !v4 )
  {
    if ( v16 >= v3->Length )
    {
      v39 = (unsigned int)(v14 - 1);
      v4 = 1;
      v60 = 1;
      if ( *(_WORD *)&v12[2 * v39] == v13 )
        goto LABEL_53;
    }
    else
    {
      v17 = (unsigned __int8 *)&v3->Buffer[v16];
      v18 = (char)*v17;
      if ( *v17 >= 0x80u && (_BYTE)NlsMbOemCodePageTag && *((_WORD *)NlsOemLeadByteInfo + (unsigned __int8)v18) )
      {
        v19 = 2;
        v61 = v18 + ((char)v17[1] << 8);
      }
      else
      {
        v19 = 1;
        v61 = (char)*v17;
      }
      v12 = v66;
      v16 += v19;
      v4 = v60;
      v62 = v16;
    }
    LODWORD(v20) = 0;
    v21 = 0;
    v22 = 0;
LABEL_21:
    v23 = 0;
    v24 = ((unsigned int)*(unsigned __int16 *)&v12[2 * (unsigned int)v20] + 1) >> 1;
    v20 = (unsigned int)(v20 + 1);
LABEL_22:
    v25 = Expression;
    while ( 1 )
    {
      v26 = v25->Length;
      if ( (_WORD)v24 == (_WORD)v26 )
        goto LABEL_39;
      v27 = v24 + v23;
      LOWORD(v24) = v27;
      v28 = v27;
      v29 = 2 * v27;
      if ( v27 == (_WORD)v26 )
      {
        *(_WORD *)&v15[2 * v21] = v63;
        goto LABEL_44;
      }
      if ( v27 == v26 - 1 )
      {
        v51 = v25->Buffer;
        if ( (unsigned __int8)v51[v27] < 0x80u )
        {
          v32 = Expression->Buffer[v27];
LABEL_27:
          v33 = v32;
          v12 = v66;
LABEL_28:
          v23 = 1;
          goto LABEL_29;
        }
        if ( (_BYTE)NlsMbOemCodePageTag && *((_WORD *)NlsOemLeadByteInfo + (unsigned __int8)v51[v27]) )
        {
          v33 = v51[v27];
          goto LABEL_28;
        }
        v30 = Expression->Buffer;
        v32 = v30[v27];
        v31 = v32;
      }
      else
      {
        v30 = v25->Buffer;
        v31 = v30[v27];
        v32 = v31;
        if ( (unsigned __int8)v31 < 0x80u )
          goto LABEL_27;
      }
      if ( !(_BYTE)NlsMbOemCodePageTag || !*((_WORD *)NlsOemLeadByteInfo + (unsigned __int8)v31) )
        goto LABEL_27;
      v12 = v66;
      v23 = 2;
      v33 = v31 + (v30[v28 + 1] << 8);
LABEL_29:
      if ( v21 < 0xE || P )
      {
        v25 = Expression;
      }
      else
      {
        Pool2 = (_OWORD *)ExAllocatePool2(0x122uLL);
        v25 = Expression;
        v16 = v62;
        *Pool2 = *(_OWORD *)v15;
        P = Pool2;
        v53 = *((_OWORD *)v15 + 1);
        v15 = (char *)Pool2;
        Pool2[1] = v53;
        v54 = Expression->Length;
        *(_OWORD *)((char *)Pool2 + 4 * v54 + 4) = *(_OWORD *)v66;
        *(_OWORD *)((char *)Pool2 + 4 * v54 + 20) = *((_OWORD *)v66 + 1);
        v12 = (char *)Pool2 + 4 * Expression->Length + 4;
        v66 = v12;
      }
      if ( v33 == 42 )
      {
        v4 = v60;
        v37 = v21;
        v38 = v21 + 1;
        *(_WORD *)&v15[2 * v37] = v29;
        *(_WORD *)&v15[2 * v38] = v29 + 1;
        v21 = v38 + 1;
      }
      else
      {
        if ( v33 == 60 )
        {
          if ( v60 || v61 != 46 )
          {
LABEL_75:
            v4 = v60;
            v49 = v21;
            v50 = v21 + 1;
            *(_WORD *)&v15[2 * v49] = v29;
            *(_WORD *)&v15[2 * v50] = v29 + 1;
            v21 = v50 + 1;
          }
          else
          {
            v43 = Name;
            v44 = v16;
            while ( v44 < Name->Length )
            {
              v45 = (unsigned __int8 *)&v43->Buffer[v44];
              v46 = (char)*v45;
              if ( *v45 >= 0x80u && (_BYTE)NlsMbOemCodePageTag && *((_WORD *)NlsOemLeadByteInfo + (unsigned __int8)v46) )
              {
                v47 = 2;
                v48 = v46 + ((char)v45[1] << 8);
              }
              else
              {
                v48 = (char)*v45;
                v47 = 1;
              }
              if ( v48 == 46 )
                goto LABEL_75;
              v44 += v47;
              v43 = Name;
            }
            v4 = 0;
            v59 = v21++;
            *(_WORD *)&v15[2 * v59] = v29 + 1;
          }
          goto LABEL_22;
        }
        v4 = v60;
        v34 = 2 * v23 + v29;
        if ( v33 == 62 )
        {
          if ( !v60 && v61 != 46 )
            goto LABEL_63;
        }
        else
        {
          if ( v33 != 34 )
          {
            if ( v60 )
              goto LABEL_39;
            if ( v33 != 63 )
            {
              v35 = v61;
              goto LABEL_38;
            }
            v58 = v21++;
            *(_WORD *)&v15[2 * v58] = v34;
LABEL_39:
            if ( (unsigned int)v20 < v67 )
            {
              while ( v22 < v21 )
              {
                while ( *(_WORD *)&v12[2 * v20] < *(_WORD *)&v15[2 * v22] )
                {
                  v20 = (unsigned int)(v20 + 1);
                  if ( (unsigned int)v20 >= v67 )
                    goto LABEL_40;
                }
                ++v22;
                if ( (unsigned int)v20 >= v67 )
                  goto LABEL_40;
              }
              goto LABEL_21;
            }
LABEL_40:
            if ( !v21 )
            {
              if ( P )
                ExFreePoolWithTag(P, 0);
              return 0;
            }
            v3 = Name;
            v36 = v12;
            v13 = v63;
            v12 = v15;
            v66 = v15;
            v14 = v21;
            v15 = v36;
            v67 = v21;
            goto LABEL_13;
          }
          if ( !v60 )
          {
            v35 = v61;
            if ( v61 == 46 )
            {
LABEL_63:
              v42 = v21++;
              *(_WORD *)&v15[2 * v42] = v34;
              goto LABEL_39;
            }
LABEL_38:
            if ( v33 != v35 )
              goto LABEL_39;
            *(_WORD *)&v15[2 * v21] = v34;
LABEL_44:
            ++v21;
            goto LABEL_39;
          }
        }
      }
    }
  }
  v39 = (unsigned int)(v14 - 1);
LABEL_53:
  v40 = *(_WORD *)&v12[2 * v39];
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v40 == v13;
}
