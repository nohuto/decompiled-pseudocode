/*
 * XREFs of MiInsertListSentinel @ 0x140445440
 * Callers:
 *     MiWalkAllWorkingSets @ 0x1402A8780 (MiWalkAllWorkingSets.c)
 *     MiWalkAllHardLimitWorkingSets @ 0x1402A8D7C (MiWalkAllHardLimitWorkingSets.c)
 *     MiPruneUnusedList @ 0x140488FD0 (MiPruneUnusedList.c)
 *     MiDeleteDeleteOnCloseSubsections @ 0x1406EC1A0 (MiDeleteDeleteOnCloseSubsections.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x1406EC344 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x1406EC5B0 (MiProcessDeleteOnClose.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x140445700 (RtlpTreeDoubleRotateNodes.c)
 *     RtlpRbReportFatalError @ 0x14061CC2C (RtlpRbReportFatalError.c)
 */

char __fastcall MiInsertListSentinel(unsigned __int64 *a1, _QWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 *v8; // rdi
  unsigned __int64 v9; // rax
  bool v10; // dl
  _BYTE *v11; // rsi
  char v12; // cl
  char v13; // r8
  char v14; // bp
  __int64 v15; // r8
  char v16; // r9
  _BOOL8 v17; // r15
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rcx
  __int64 v20; // rbp
  _QWORD *v21; // rsi
  __int64 v22; // rsi
  unsigned __int64 v23; // rcx

  a2[3] = a3;
  v3 = (unsigned __int64)a2;
  v4 = *a1;
  if ( *a1 )
  {
    while ( 1 )
    {
      if ( a3 < *(_QWORD *)(v4 + 24) )
      {
        v9 = *(_QWORD *)v4;
        if ( !*(_QWORD *)v4 )
        {
          v6 = (__int64)(a2 + 4);
          goto LABEL_8;
        }
      }
      else
      {
        if ( a3 <= *(_QWORD *)(v4 + 24) )
        {
          v6 = *(_QWORD *)(v4 + 40);
          v7 = v4 + 32;
          v8 = a2 + 4;
          if ( *(_QWORD *)v6 != v7 )
            __fastfail(3u);
          *v8 = v7;
          a2[5] = v6;
          *(_QWORD *)v6 = v8;
          *(_QWORD *)(v7 + 8) = v8;
          return v6;
        }
        v9 = *(_QWORD *)(v4 + 8);
        if ( !v9 )
        {
          v10 = 1;
          v6 = v3 + 32;
          goto LABEL_9;
        }
      }
      v4 = v9;
    }
  }
  v6 = (__int64)(a2 + 4);
LABEL_8:
  v10 = 0;
LABEL_9:
  *(_QWORD *)(v6 + 8) = v6;
  *(_QWORD *)v6 = v6;
  *(_QWORD *)v3 = 0LL;
  *(_QWORD *)(v3 + 8) = 0LL;
  *(_QWORD *)(v3 + 16) = v4;
  if ( v4 )
  {
    *(_QWORD *)(v4 + 8LL * v10) = v3;
    while ( 1 )
    {
      v11 = (_BYTE *)(v4 + 16);
      v12 = *(_BYTE *)(v4 + 16);
      v13 = 2 * v10 - 1;
      LOBYTE(v6) = v13 & 3;
      v14 = v12 & 3;
      if ( (v12 & 3) != 0 )
        break;
      v3 = v4;
      LOBYTE(v6) = v12 ^ (v13 ^ v12) & 3;
      *v11 = v6;
      v4 = *(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v4 )
        return v6;
      v10 = *(_QWORD *)v4 != v3;
    }
    if ( v14 == (_BYTE)v6 )
    {
      if ( (*(_BYTE *)(v3 + 16) & 3) == v14 )
      {
        v17 = !v10;
        v18 = *(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v18 != v4 )
          RtlpRbReportFatalError(v18, v4);
        v19 = *(_QWORD **)(v4 + 8LL * v10);
        if ( v19 != (_QWORD *)v3 )
          RtlpRbReportFatalError(v19, v3);
        v20 = *(_QWORD *)(v4 + 16);
        v21 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( (v20 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
        {
          if ( v21[1] == v4 )
          {
            v21[1] = v3;
          }
          else
          {
            if ( *v21 != v4 )
              RtlpRbReportFatalError(*v21, v4);
            *v21 = v3;
          }
        }
        else
        {
          if ( *a1 != v4 )
            RtlpRbReportFatalError(*a1, v4);
          *a1 = v3;
        }
        *(_QWORD *)(v3 + 16) ^= (v20 ^ *(_QWORD *)(v3 + 16)) & 0xFFFFFFFFFFFFFFFCuLL;
        v22 = *(_QWORD *)(v3 + 8 * v17);
        if ( v22 )
        {
          v23 = *(_QWORD *)(v22 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v23 != v3 )
            RtlpRbReportFatalError(v23, v3);
          *(_QWORD *)(v22 + 16) = v4 | *(_DWORD *)(v22 + 16) & 3;
        }
        *(_QWORD *)(v4 + 8LL * v10) = v22;
        *(_QWORD *)(v3 + 8 * v17) = v4;
        v6 = v3 | *(_DWORD *)(v4 + 16) & 3;
        *(_QWORD *)(v4 + 16) = v6;
        *(_BYTE *)(v3 + 16) &= 0xFCu;
        *(_BYTE *)(v4 + 16) &= 0xFCu;
      }
      else
      {
        v6 = RtlpTreeDoubleRotateNodes(a1, v4, v3, v10);
        *v11 &= 0xFCu;
        v15 = v6;
        v16 = *(_BYTE *)(v3 + 16);
        *(_BYTE *)(v3 + 16) = v16 & 0xFC;
        if ( v14 == (*(_BYTE *)(v6 + 16) & 3) )
        {
          LOBYTE(v6) = *v11;
          *v11 ^= (v14 ^ *v11 ^ 0xFE) & 3;
        }
        else if ( v14 == ((*(_BYTE *)(v6 + 16) ^ 0xFE) & 3) )
        {
          LOBYTE(v6) = v16 ^ (v14 ^ v16) & 3;
          *(_BYTE *)(v3 + 16) = v6;
        }
        *(_BYTE *)(v15 + 16) &= 0xFCu;
      }
    }
    else
    {
      *v11 = v12 & 0xFC;
    }
  }
  else
  {
    *a1 = v3;
  }
  return v6;
}
