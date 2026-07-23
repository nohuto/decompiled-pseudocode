/*
 * XREFs of RtlpTreeDoubleRotateNodes @ 0x140445700
 * Callers:
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     MiInsertVad @ 0x140318030 (MiInsertVad.c)
 *     MiInsertListSentinel @ 0x140445440 (MiInsertListSentinel.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140450590 (MiUpdateSystemProtoPtesTree.c)
 * Callees:
 *     RtlpRbReportFatalError @ 0x14061CC2C (RtlpRbReportFatalError.c)
 */

__int64 __fastcall RtlpTreeDoubleRotateNodes(_QWORD *a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v4; // rbx
  unsigned __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r12
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rbp
  _QWORD *v16; // r15
  __int64 *v17; // r15
  __int64 v18; // rsi
  __int64 v19; // rax

  v4 = *(_QWORD *)a3;
  if ( !a4 )
    v4 = *(_QWORD *)(a3 + 8);
  v6 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v6 != a3 )
    RtlpRbReportFatalError(v6, a3);
  v7 = *(_QWORD *)(a3 + 8 * (a4 ^ 1LL));
  if ( v7 != v4 )
    RtlpRbReportFatalError(v7, v4);
  v8 = 8LL * a4;
  v9 = *(_QWORD **)(v8 + a2);
  if ( v9 != (_QWORD *)a3 )
    RtlpRbReportFatalError(v9, a3);
  v10 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v10 != a2 )
    RtlpRbReportFatalError(v10, a2);
  *(_QWORD *)(v8 + a2) = v4;
  *(_QWORD *)(v4 + 16) = a2 | *(_DWORD *)(v4 + 16) & 3;
  v11 = *(_QWORD *)(v8 + v4);
  if ( v11 )
  {
    v12 = *(_QWORD *)(v11 + 16);
    if ( (v12 & 0xFFFFFFFFFFFFFFFCuLL) != v4 )
      RtlpRbReportFatalError(v12 & 0xFFFFFFFFFFFFFFFCuLL, v4);
    *(_QWORD *)(v11 + 16) = a3 | v12 & 3;
  }
  *(_QWORD *)(a3 + 8 * (a4 ^ 1LL)) = v11;
  *(_QWORD *)(v8 + v4) = a3;
  *(_QWORD *)(a3 + 16) = v4 | *(_DWORD *)(a3 + 16) & 3;
  v13 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v13 != a2 )
    RtlpRbReportFatalError(v13, a2);
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
  v17 = (__int64 *)(v4 + 8LL * (a4 ^ 1));
  *(_QWORD *)(v4 + 16) ^= (v15 ^ *(_QWORD *)(v4 + 16)) & 0xFFFFFFFFFFFFFFFCuLL;
  v18 = *v17;
  if ( *v17 )
  {
    v19 = *(_QWORD *)(v18 + 16);
    if ( (v19 & 0xFFFFFFFFFFFFFFFCuLL) != v4 )
      RtlpRbReportFatalError(v19 & 0xFFFFFFFFFFFFFFFCuLL, v4);
    *(_QWORD *)(v18 + 16) = a2 | v19 & 3;
  }
  *(_QWORD *)(a2 + 8LL * a4) = v18;
  *v17 = a2;
  *(_QWORD *)(a2 + 16) = v4 | *(_DWORD *)(a2 + 16) & 3;
  return v4;
}
