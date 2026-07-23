/*
 * XREFs of RtlpTreeDoubleRotateNodes @ 0x1800D9868
 * Callers:
 *     RtlAvlInsertNodeEx @ 0x180078EE0 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x1800D8200 (RtlAvlRemoveNode.c)
 * Callees:
 *     RtlpRbReportFatalError @ 0x1801416C8 (RtlpRbReportFatalError.c)
 */

__int64 __fastcall RtlpTreeDoubleRotateNodes(_QWORD *a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v4; // rbx
  unsigned __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rax
  unsigned int v12; // ebp
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r15
  _QWORD *v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 result; // rax

  v4 = *(_QWORD *)a3;
  if ( !a4 )
    v4 = *(_QWORD *)(a3 + 8);
  v6 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v6 != a3 )
    RtlpRbReportFatalError(v6, a3);
  v7 = *(_QWORD *)(a3 + 8 * (a4 ^ 1LL));
  if ( v7 != v4 )
    RtlpRbReportFatalError(v7, v4);
  v8 = *(_QWORD **)(a2 + 8LL * a4);
  if ( v8 != (_QWORD *)a3 )
    RtlpRbReportFatalError(v8, a3);
  v9 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v9 != a2 )
    RtlpRbReportFatalError(v9, a2);
  *(_QWORD *)(a2 + 8LL * a4) = v4;
  *(_QWORD *)(v4 + 16) = a2 | *(_DWORD *)(v4 + 16) & 3;
  v10 = *(_QWORD *)(v4 + 8LL * a4);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 16);
    if ( (v11 & 0xFFFFFFFFFFFFFFFCuLL) != v4 )
      RtlpRbReportFatalError(v11 & 0xFFFFFFFFFFFFFFFCuLL, v4);
    *(_QWORD *)(v10 + 16) = a3 | v11 & 3;
  }
  *(_QWORD *)(a3 + 8 * (a4 ^ 1LL)) = v10;
  *(_QWORD *)(v4 + 8LL * a4) = a3;
  *(_QWORD *)(a3 + 16) &= 3uLL;
  *(_QWORD *)(a3 + 16) |= v4;
  v13 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v13 != a2 )
    RtlpRbReportFatalError(v13, a2);
  v12 = a4 ^ 1;
  v14 = *(_QWORD *)(a2 + 8LL * a4);
  if ( v14 != v4 )
    RtlpRbReportFatalError(v14, v4);
  v15 = *(_QWORD *)(a2 + 16);
  v16 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCuLL);
  if ( (v15 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    if ( v16[1] == a2 )
    {
      v16[1] = v4;
    }
    else
    {
      if ( *v16 != a2 )
        RtlpRbReportFatalError(*v16, a2);
      *v16 = v4;
    }
  }
  else
  {
    if ( *a1 != a2 )
      RtlpRbReportFatalError(*a1, a2);
    *a1 = v4;
  }
  *(_QWORD *)(v4 + 16) ^= (v15 ^ *(_QWORD *)(v4 + 16)) & 0xFFFFFFFFFFFFFFFCuLL;
  v17 = *(_QWORD *)(v4 + 8LL * v12);
  if ( v17 )
  {
    v18 = *(_QWORD *)(v17 + 16);
    if ( (v18 & 0xFFFFFFFFFFFFFFFCuLL) != v4 )
      RtlpRbReportFatalError(v18 & 0xFFFFFFFFFFFFFFFCuLL, v4);
    *(_QWORD *)(v17 + 16) = a2 | v18 & 3;
  }
  *(_QWORD *)(a2 + 8LL * a4) = v17;
  result = v4;
  *(_QWORD *)(v4 + 8LL * v12) = a2;
  *(_QWORD *)(a2 + 16) &= 3uLL;
  *(_QWORD *)(a2 + 16) |= v4;
  return result;
}
