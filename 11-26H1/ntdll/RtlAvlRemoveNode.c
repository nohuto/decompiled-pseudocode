/*
 * XREFs of RtlAvlRemoveNode @ 0x1800D8200
 * Callers:
 *     RtlDeleteGrowableFunctionTable @ 0x1800796A0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlDeleteFunctionTable @ 0x1800D7FF0 (RtlDeleteFunctionTable.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x1800D9868 (RtlpTreeDoubleRotateNodes.c)
 *     RtlpRbReportFatalError @ 0x1801416C8 (RtlpRbReportFatalError.c)
 */

char __fastcall RtlAvlRemoveNode(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx
  char v9; // bp
  _BYTE *v10; // r14
  char v11; // si
  unsigned __int8 v12; // r12
  __int64 v13; // r15
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r12
  _QWORD *v19; // rsi
  __int64 v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rax
  char v23; // cl
  unsigned __int64 v24; // r15
  bool v25; // zf
  _QWORD *v26; // rax
  unsigned int v27; // r12d
  unsigned __int64 v28; // rsi
  __int64 v29; // r15
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // r14
  __int64 v34; // r15
  __int64 v35; // rcx
  _QWORD *v36; // rcx
  _QWORD *v37; // rcx
  char v38; // dl
  unsigned __int8 v39; // cl
  char v41; // [rsp+78h] [rbp+10h]
  __int64 v42; // [rsp+80h] [rbp+18h]

  v2 = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  v5 = v4;
  if ( *(_QWORD *)a2 )
    v5 = *(_QWORD *)a2;
  v6 = -*(_QWORD *)a2;
  if ( (-(__int64)(*(_QWORD *)a2 != 0LL) & v4) != 0 )
  {
    if ( (*(_BYTE *)(a2 + 16) & 3) == 3 )
    {
      v26 = *(_QWORD **)(v2 + 8);
      v27 = 0;
      v28 = *(_QWORD *)a2;
      v7 = *(_QWORD *)a2;
      if ( v26 )
      {
        v27 = 1;
        do
        {
          v7 = v28;
          v28 = (unsigned __int64)v26;
          v26 = (_QWORD *)v26[1];
        }
        while ( v26 );
      }
      v29 = *(_QWORD *)v28;
    }
    else
    {
      v36 = *(_QWORD **)v4;
      v28 = *(_QWORD *)(a2 + 8);
      v7 = v28;
      v27 = 1;
      if ( *(_QWORD *)v4 )
      {
        v27 = 0;
        do
        {
          v7 = v28;
          v28 = (unsigned __int64)v36;
          v36 = (_QWORD *)*v36;
        }
        while ( v36 );
      }
      v29 = *(_QWORD *)(v28 + 8);
    }
    *(_QWORD *)v28 = v2;
    *(_QWORD *)(v28 + 8) = v4;
    v30 = *(_QWORD *)(v2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v30 != a2 )
      RtlpRbReportFatalError(v30, a2);
    *(_QWORD *)(v2 + 16) &= 3uLL;
    *(_QWORD *)(v2 + 16) |= v28;
    v31 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v31 != a2 )
      RtlpRbReportFatalError(v31, a2);
    *(_QWORD *)(v4 + 16) &= 3uLL;
    *(_QWORD *)(v4 + 16) |= v28;
    v32 = *(_QWORD *)(v28 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v32 != v7 )
      RtlpRbReportFatalError(v32, v7);
    *(_QWORD *)(v7 + 8LL * v27) = v29;
    if ( v29 )
    {
      v37 = *(_QWORD **)(v29 + 16);
      if ( v37 != (_QWORD *)v28 )
        RtlpRbReportFatalError(v37, v28);
      *(_QWORD *)(v29 + 16) = v7;
    }
    *(_QWORD *)(v28 + 16) = *(_QWORD *)(a2 + 16);
    v9 = v27 != 0 ? 3 : 1;
    v33 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v33 )
    {
      v34 = 0LL;
      if ( *(_QWORD *)(v33 + 8) == a2 )
        v34 = 8LL;
      v35 = *(_QWORD *)(v34 + v33);
      if ( v35 != a2 )
        RtlpRbReportFatalError(v35, a2);
      *(_QWORD *)(v34 + v33) = v28;
    }
    else
    {
      if ( *a1 != a2 )
        RtlpRbReportFatalError(*a1, a2);
      *a1 = v28;
    }
    while ( 1 )
    {
LABEL_11:
      v10 = (_BYTE *)(v7 + 16);
      v11 = *(_BYTE *)(v7 + 16);
      LOBYTE(v6) = v9 ^ 2;
      v12 = v11 & 3;
      if ( (v11 & 3) == ((unsigned __int8)v9 ^ 2) )
      {
        *v10 = v11 & 0xFC;
        v13 = *(_QWORD *)v10;
      }
      else
      {
        if ( !v12 )
        {
          LOBYTE(v6) = v11 ^ (v9 ^ v11) & 3;
          *v10 = v6;
          return v6;
        }
        v13 = *(_QWORD *)v10;
        v14 = *(_QWORD *)v7;
        if ( v9 == 1 )
          v14 = *(_QWORD *)(v7 + 8);
        v41 = *(_BYTE *)(v14 + 16) & 3;
        if ( v41 == (_BYTE)v6 )
        {
          v6 = RtlpTreeDoubleRotateNodes(a1, v7, v14, v9 == 1);
          *v10 &= 0xFCu;
          v7 = v6;
          v38 = *(_BYTE *)(v14 + 16);
          *(_BYTE *)(v14 + 16) = v38 & 0xFC;
          v39 = *(_BYTE *)(v6 + 16);
          LODWORD(v6) = v39 & 3;
          if ( v12 == (_DWORD)v6 )
          {
            LOBYTE(v6) = (v12 ^ *v10 ^ 0xFE) & 3;
            *v10 ^= v6;
          }
          else if ( v12 == ((v39 ^ 0xFE) & 3) )
          {
            *(_BYTE *)(v14 + 16) = v38 ^ (v38 ^ v11) & 3;
          }
          *(_BYTE *)(v7 + 16) &= 0xFCu;
        }
        else
        {
          v15 = *(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v15 != v7 )
            RtlpRbReportFatalError(v15, v7);
          v16 = 0LL;
          if ( v9 == 1 )
            v16 = 8LL;
          v42 = v16;
          v17 = *(_QWORD *)(v16 + v7);
          if ( v17 != v14 )
            RtlpRbReportFatalError(v17, v14);
          v18 = *(_QWORD *)v10;
          v19 = (_QWORD *)(*(_QWORD *)v10 & 0xFFFFFFFFFFFFFFFCuLL);
          if ( v19 )
          {
            if ( v19[1] == v7 )
            {
              v19[1] = v14;
            }
            else
            {
              if ( *v19 != v7 )
                RtlpRbReportFatalError(*v19, v7);
              *v19 = v14;
            }
          }
          else
          {
            if ( *a1 != v7 )
              RtlpRbReportFatalError(*a1, v7);
            *a1 = v14;
          }
          *(_QWORD *)(v14 + 16) ^= (*(_QWORD *)(v14 + 16) ^ v18) & 0xFFFFFFFFFFFFFFFCuLL;
          v20 = -(__int64)(v9 != 1) & 8;
          v21 = *(_QWORD *)(v20 + v14);
          if ( v21 )
          {
            v22 = *(_QWORD *)(v21 + 16);
            if ( (v22 & 0xFFFFFFFFFFFFFFFCuLL) != v14 )
              RtlpRbReportFatalError(v22 & 0xFFFFFFFFFFFFFFFCuLL, v14);
            *(_QWORD *)(v21 + 16) = v7 | v22 & 3;
          }
          LOBYTE(v6) = v42;
          *(_QWORD *)(v42 + v7) = v21;
          *(_QWORD *)(v20 + v14) = v7;
          *(_QWORD *)v10 &= 3uLL;
          *(_QWORD *)v10 |= v14;
          v23 = *(_BYTE *)(v14 + 16);
          if ( !v41 )
          {
            LOBYTE(v6) = v23 ^ (v9 ^ v23 ^ 0xFE) & 3;
            *(_BYTE *)(v14 + 16) = v6;
            return v6;
          }
          v7 = v14;
          *(_BYTE *)(v14 + 16) = v23 & 0xFC;
          *v10 &= 0xFCu;
        }
      }
      v24 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v24 )
        return v6;
      v25 = *(_QWORD *)(v24 + 8) == v7;
      v9 = 3;
      v7 = v24;
      if ( !v25 )
        v9 = 1;
    }
  }
  v7 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v5 )
  {
    v8 = *(_QWORD *)(v5 + 16);
    if ( v8 != a2 )
      RtlpRbReportFatalError(v8, a2);
    *(_QWORD *)(v5 + 16) = v7;
  }
  if ( v7 )
  {
    if ( *(_QWORD *)(v7 + 8) == a2 )
    {
      v9 = 3;
      *(_QWORD *)(v7 + 8) = v5;
    }
    else
    {
      if ( *(_QWORD *)v7 != a2 )
        RtlpRbReportFatalError(*(_QWORD *)v7, a2);
      v9 = 1;
      *(_QWORD *)v7 = v5;
    }
    goto LABEL_11;
  }
  if ( *a1 != a2 )
    RtlpRbReportFatalError(*a1, a2);
  *a1 = v5;
  return v6;
}
