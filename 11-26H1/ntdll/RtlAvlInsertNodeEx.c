/*
 * XREFs of RtlAvlInsertNodeEx @ 0x180078EE0
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x1800788F0 (RtlAddGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x1800CA290 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x1800E3560 (RtlAddFunctionTable.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x1800D9868 (RtlpTreeDoubleRotateNodes.c)
 *     RtlpRbReportFatalError @ 0x1801416C8 (RtlpRbReportFatalError.c)
 */

char __fastcall RtlAvlInsertNodeEx(unsigned __int64 *a1, unsigned __int64 a2, bool a3, _QWORD *a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  char v8; // cl
  char v9; // dl
  char v10; // di
  __int64 v11; // r8
  char v12; // r9
  unsigned __int64 v13; // rcx
  _BOOL8 v14; // r13
  __int64 v15; // rcx
  __int64 v16; // rbp
  _QWORD *v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rax

  LOBYTE(v4) = 0;
  a4[2] = a2;
  *a4 = 0LL;
  v5 = (unsigned __int64)a4;
  a4[1] = 0LL;
  v6 = a2;
  if ( a2 )
  {
    *(_QWORD *)(a2 + 8LL * a3) = a4;
    while ( 1 )
    {
      v8 = *(_BYTE *)(v6 + 16);
      v9 = 2 * a3 - 1;
      LOBYTE(v4) = v9 & 3;
      v10 = v8 & 3;
      if ( (v8 & 3) != 0 )
        break;
      v5 = v6;
      LOBYTE(v4) = v8 ^ (v9 ^ v8) & 3;
      *(_BYTE *)(v6 + 16) = v4;
      v6 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v6 )
        return v4;
      a3 = *(_QWORD *)v6 != v5;
    }
    if ( v10 == (_BYTE)v4 )
    {
      if ( (*(_BYTE *)(v5 + 16) & 3) == v10 )
      {
        v13 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v13 != v6 )
          RtlpRbReportFatalError(v13, v6, v5);
        LOBYTE(v4) = a3;
        v14 = !a3;
        v15 = *(_QWORD *)(v6 + 8LL * a3);
        if ( v15 != v5 )
          RtlpRbReportFatalError(v15, v5, v6);
        v16 = *(_QWORD *)(v6 + 16);
        v17 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( (v16 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
        {
          if ( v17[1] == v6 )
          {
            v17[1] = v5;
          }
          else
          {
            if ( *v17 != v6 )
              RtlpRbReportFatalError(*v17, v6, *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL);
            *v17 = v5;
          }
        }
        else
        {
          if ( *a1 != v6 )
            RtlpRbReportFatalError(*a1, v6, a1);
          *a1 = v5;
        }
        *(_QWORD *)(v5 + 16) ^= (v16 ^ *(_QWORD *)(v5 + 16)) & 0xFFFFFFFFFFFFFFFCuLL;
        v18 = *(_QWORD *)(v5 + 8 * v14);
        if ( v18 )
        {
          v19 = *(_QWORD *)(v18 + 16);
          if ( (v19 & 0xFFFFFFFFFFFFFFFCuLL) != v5 )
            RtlpRbReportFatalError(v19 & 0xFFFFFFFFFFFFFFFCuLL, v5, *(_QWORD *)(v5 + 8 * v14));
          v4 = v6 | v19 & 3;
          *(_QWORD *)(v18 + 16) = v4;
        }
        *(_QWORD *)(v6 + 8LL * a3) = v18;
        *(_QWORD *)(v5 + 8 * v14) = v6;
        *(_QWORD *)(v6 + 16) &= 3uLL;
        *(_QWORD *)(v6 + 16) |= v5;
        *(_BYTE *)(v5 + 16) &= 0xFCu;
        *(_BYTE *)(v6 + 16) &= 0xFCu;
      }
      else
      {
        v4 = RtlpTreeDoubleRotateNodes(a1, v6, v5, a3);
        *(_BYTE *)(v6 + 16) &= 0xFCu;
        v11 = v4;
        v12 = *(_BYTE *)(v5 + 16);
        *(_BYTE *)(v5 + 16) = v12 & 0xFC;
        if ( v10 == (*(_BYTE *)(v4 + 16) & 3) )
        {
          *(_BYTE *)(v6 + 16) ^= (v10 ^ *(_BYTE *)(v6 + 16) ^ 0xFE) & 3;
        }
        else if ( v10 == ((*(_BYTE *)(v4 + 16) ^ 0xFE) & 3) )
        {
          LOBYTE(v4) = v12 ^ (v10 ^ v12) & 3;
          *(_BYTE *)(v5 + 16) = v4;
        }
        *(_BYTE *)(v11 + 16) &= 0xFCu;
      }
    }
    else
    {
      *(_BYTE *)(v6 + 16) = v8 & 0xFC;
    }
  }
  else
  {
    *a1 = (unsigned __int64)a4;
  }
  return v4;
}
