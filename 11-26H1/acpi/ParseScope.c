/*
 * XREFs of ParseScope @ 0x140005CE0
 * Callers:
 *     <none>
 * Callees:
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     FreeDataBuffs @ 0x140007570 (FreeDataBuffs.c)
 *     ParseOpcode @ 0x140007B60 (ParseOpcode.c)
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     AMLIDebugger @ 0x140055228 (AMLIDebugger.c)
 *     PrintIndent @ 0x140055A94 (PrintIndent.c)
 */

__int64 __fastcall ParseScope(__int64 *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  int v6; // ecx
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // r14
  _QWORD *v11; // rdi
  __int64 v12; // r8
  _QWORD *v13; // rax
  _QWORD *i; // rdx
  _QWORD *v15; // rcx
  _QWORD *v16; // r9
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // r9
  _QWORD *v20; // rdi
  __int64 v21; // rdx
  _QWORD *v22; // rax
  int v23; // ecx
  __int64 v24; // r10
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  char v30; // cl
  bool v31; // zf
  int v32; // eax

  v3 = a3;
  if ( a3 && a3 != 32769 && a3 != 32774 )
    goto LABEL_23;
  v6 = *(_DWORD *)(a2 + 16);
  if ( (v6 & 0xF) == 1 )
    goto LABEL_3;
  if ( (v6 & 0xF) != 0 )
  {
    if ( (v6 & 0xF) == 2 )
      goto LABEL_23;
    return v3;
  }
  if ( (gDebugger & 0xD0) != 0 )
  {
    PrintIndent(a1);
    ConPrintf("{");
    ++dword_14008EC34;
    v6 = *(_DWORD *)(a2 + 16) | 0x10000;
  }
  *(_DWORD *)(a2 + 16) = v6 + 1;
  while ( 1 )
  {
LABEL_3:
    if ( v3 == 32769 )
    {
      a1[15] = *(_QWORD *)(a2 + 32);
      if ( (*(_DWORD *)(a2 + 16) & 0x20000) != 0 )
        v3 = 0;
      *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 32);
      goto LABEL_38;
    }
    if ( v3 == 32774 )
    {
      a1[15] = *(_QWORD *)(a2 + 32);
      if ( (*(_DWORD *)(a2 + 16) & 0x20000) != 0 )
        v3 = 0;
      goto LABEL_38;
    }
    do
    {
      if ( (unsigned __int64)a1[15] >= *(_QWORD *)(a2 + 32) )
        goto LABEL_11;
      qword_14008EC40 = a1[15];
      if ( (gDebugger & 0xD0) != 0 )
      {
        v23 = *(_DWORD *)(a2 + 16);
        if ( (v23 & 0x10000) != 0 )
        {
          *(_DWORD *)(a2 + 16) = v23 & 0xFFFEFFFF;
        }
        else if ( (gDebugger & 0x80u) != 0 )
        {
          _InterlockedAnd(&gDebugger, 0xFFFFFF7F);
          AMLIDebugger();
        }
      }
      if ( (gDebugger & 0xD0) != 0 )
      {
        v30 = *(_BYTE *)a1[15];
        if ( v30 != 18 && v30 != 19 )
          PrintIndent(a1);
      }
      FreeDataBuffs(*(_QWORD *)(a2 + 72), 1LL);
      v3 = ParseOpcode(a1, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 72));
    }
    while ( !v3 && a2 == a1[52] );
    if ( v3 == 32769 )
      break;
LABEL_11:
    if ( v3 == 32774 )
    {
      a1[15] = *(_QWORD *)(a2 + 32);
      v3 = 0;
      if ( (*(_DWORD *)(a2 + 16) & 0x20000) == 0 )
        v3 = 32774;
LABEL_38:
      ++*(_DWORD *)(a2 + 16);
      goto LABEL_23;
    }
    if ( v3 == 32772 || a2 != a1[52] )
      return v3;
    if ( v3 || (unsigned __int64)a1[15] >= *(_QWORD *)(a2 + 32) )
      goto LABEL_38;
  }
  a1[15] = *(_QWORD *)(a2 + 32);
  v31 = (*(_DWORD *)(a2 + 16) & 0x20000) == 0;
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 32);
  v32 = 0;
  if ( v31 )
    v32 = 32769;
  ++*(_DWORD *)(a2 + 16);
  v3 = v32;
LABEL_23:
  if ( (gDebugger & 0xD0) != 0 )
  {
    --dword_14008EC34;
    PrintIndent(a1);
    ConPrintf("}");
  }
  DereferenceObjectEx(a1[10]);
  a1[10] = *(_QWORD *)(a2 + 48);
  v8 = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a2 + 48) = 0LL;
  a1[11] = v8;
  a1[40] = *(_QWORD *)(a2 + 64);
  v9 = *(_QWORD *)(a2 + 40);
  if ( v9 )
    a1[15] = v9;
  v10 = (_QWORD *)a1[52];
  v11 = v10 - 2;
  a1[52] = v10[1];
  *((_DWORD *)v10 - 4) = 0;
  byte_14008EB20 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v12 = *(v10 - 1);
  v13 = *(_QWORD **)(v12 + 40);
  for ( i = (_QWORD *)(v12 + 40); v13 != i; v13 = (_QWORD *)*v13 )
  {
    if ( v10 < v13 )
      break;
  }
  v15 = (_QWORD *)v13[1];
  if ( (_QWORD *)*v15 != v13 )
    goto LABEL_39;
  v10[1] = v15;
  *v10 = v13;
  *v15 = v10;
  v13[1] = v10;
  v16 = (_QWORD *)*v10;
  v17 = *v10 - 16LL;
  if ( (_QWORD *)*v10 != i )
  {
    v24 = *((unsigned int *)v11 + 1);
    if ( (_QWORD *)v17 == (_QWORD *)((char *)v11 + v24) )
    {
      *((_DWORD *)v11 + 1) = v24 + *(_DWORD *)(v17 + 4);
      v25 = *v16;
      if ( *(_QWORD **)(*v16 + 8LL) == v16 )
      {
        v26 = (_QWORD *)v16[1];
        if ( (_QWORD *)*v26 == v16 )
        {
          *v26 = v25;
          *(_QWORD *)(v25 + 8) = v26;
          goto LABEL_30;
        }
      }
LABEL_39:
      __fastfail(3u);
    }
  }
LABEL_30:
  v18 = (_QWORD *)v11[3];
  v19 = v18 - 2;
  if ( v18 != i )
  {
    v27 = *((unsigned int *)v19 + 1);
    if ( v11 == (_QWORD *)((char *)v19 + v27) )
    {
      *((_DWORD *)v19 + 1) = *((_DWORD *)v11 + 1) + v27;
      v28 = *v10;
      if ( *(_QWORD **)(*v10 + 8LL) != v10 )
        goto LABEL_39;
      v29 = (_QWORD *)v10[1];
      if ( (_QWORD *)*v29 != v10 )
        goto LABEL_39;
      *v29 = v28;
      v11 = v19;
      *(_QWORD *)(v28 + 8) = v29;
    }
  }
  if ( *(_QWORD *)(v12 + 32) <= (unsigned __int64)v11 + *((unsigned int *)v11 + 1) )
  {
    *(_QWORD *)(v12 + 32) = v11;
    v20 = v11 + 2;
    v21 = *v20;
    if ( *(_QWORD **)(*v20 + 8LL) != v20 )
      goto LABEL_39;
    v22 = (_QWORD *)v20[1];
    if ( (_QWORD *)*v22 != v20 )
      goto LABEL_39;
    *v22 = v21;
    *(_QWORD *)(v21 + 8) = v22;
  }
  KeReleaseSpinLock(&gmutHeap, byte_14008EB20);
  return v3;
}
