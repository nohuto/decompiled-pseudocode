/*
 * XREFs of MiInvalidatePageFileBitmapsCache @ 0x1404777E4
 * Callers:
 *     MiFindFreePageFileSpace @ 0x1403FEF30 (MiFindFreePageFileSpace.c)
 *     MiModwriterConfirmMdl @ 0x140401828 (MiModwriterConfirmMdl.c)
 *     MiTargetedPageFileReductionApc @ 0x1407124C8 (MiTargetedPageFileReductionApc.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 *     MiBitmapsCachedEntryLengthChanged @ 0x140477AB8 (MiBitmapsCachedEntryLengthChanged.c)
 */

void __fastcall MiInvalidatePageFileBitmapsCache(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  BOOLEAN v5; // bl
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // r8d
  unsigned int v12; // r11d
  unsigned int v13; // ecx
  __int64 v14; // rax
  int v15; // r8d
  unsigned int *v16; // rdx
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rsi
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  int v22; // ecx
  unsigned int v23; // r9d
  unsigned int v24; // ecx
  __int64 *v25; // r14
  __int64 v26; // r8
  unsigned __int64 v27; // rdx
  BOOLEAN v28; // r8
  unsigned __int64 v29; // rax
  _RTL_RB_TREE *v30; // rcx
  unsigned __int64 Root; // rdx
  unsigned __int64 v32; // rax
  unsigned int v33; // eax
  bool v34; // cc

  v5 = 0;
  if ( a4 )
  {
    v12 = a3 + a2;
    goto LABEL_17;
  }
  v9 = a1 + 128;
  v10 = *(_QWORD *)v9;
  if ( (*(_BYTE *)(v9 + 8) & 1) != 0 )
  {
    if ( v10 )
      v10 ^= v9;
    else
      v10 = 0LL;
  }
  v11 = *(_BYTE *)(v9 + 8) & 1;
  if ( v10 )
  {
    v12 = a2 + a3;
    do
    {
      v13 = *(_DWORD *)(v10 + 24);
      if ( v12 <= v13 )
      {
        v14 = *(_QWORD *)v10;
      }
      else
      {
        if ( a2 < *(_DWORD *)(v10 + 28) + v13 )
          break;
        v14 = *(_QWORD *)(v10 + 8);
      }
      if ( v11 && v14 )
        v10 ^= v14;
      else
        v10 = v14;
    }
    while ( v10 );
    if ( v10 )
    {
      a4 = v10 - 24;
LABEL_17:
      v15 = *(_DWORD *)(a4 + 48);
      v16 = (unsigned int *)(a4 + 52);
      if ( v15 == a2 || v12 == *v16 + v15 )
      {
        v17 = *v16 - a3;
        *v16 = v17;
        if ( v15 == a2 )
          *(_DWORD *)(a4 + 48) = v15 + a3;
        v18 = a4;
        if ( !v17 )
        {
          RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 112), (PRTL_BALANCED_NODE)a4);
          RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 128), (PRTL_BALANCED_NODE)(a4 + 24));
          v19 = a1 + 144;
          v20 = *(_QWORD **)(v19 + 8);
          if ( *v20 == v19 )
          {
            *(_QWORD *)a4 = v19;
            *(_QWORD *)(a4 + 8) = v20;
            *v20 = a4;
            *(_QWORD *)(v19 + 8) = a4;
            return;
          }
          goto LABEL_23;
        }
      }
      else
      {
        v21 = (_QWORD *)(a1 + 144);
        v22 = v15 - a2;
        v23 = a2 - v15;
        v24 = *v16 + v22 - a3;
        v25 = *(__int64 **)(a1 + 144);
        if ( v25 != (__int64 *)(a1 + 144) )
        {
          if ( (_QWORD *)v25[1] == v21 )
          {
            v26 = *v25;
            if ( *(__int64 **)(*v25 + 8) == v25 )
            {
              *v21 = v26;
              *(_QWORD *)(v26 + 8) = v21;
              *((_DWORD *)v25 + 13) = v24;
              *((_DWORD *)v25 + 12) = v12;
              *v16 = v23;
              MiBitmapsCachedEntryLengthChanged(a1, a4, 0LL);
              v27 = *(_QWORD *)(a1 + 112);
              if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
              {
                if ( v27 )
                  v27 ^= a1 + 112;
                else
                  v27 = 0LL;
              }
              v28 = 0;
              if ( v27 )
              {
                while ( 1 )
                {
                  if ( (unsigned __int64)v25[6] >= *(_QWORD *)(v27 + 48) )
                  {
                    v29 = *(_QWORD *)(v27 + 8);
                    if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
                    {
                      if ( !v29 )
                        goto LABEL_42;
                      v29 ^= v27;
                    }
                    if ( !v29 )
                    {
LABEL_42:
                      v28 = 1;
                      break;
                    }
                  }
                  else
                  {
                    v29 = *(_QWORD *)v27;
                    if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
                    {
                      if ( !v29 )
                        goto LABEL_63;
                      v29 ^= v27;
                    }
                    if ( !v29 )
                    {
LABEL_63:
                      v28 = 0;
                      break;
                    }
                  }
                  v27 = v29;
                }
              }
              RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 112), (PRTL_BALANCED_NODE)v27, v28, (PRTL_BALANCED_NODE)v25);
              v30 = (_RTL_RB_TREE *)(a1 + 128);
              if ( (*(_BYTE *)(a1 + 136) & 1) != 0 )
              {
                if ( v30->Root )
                  Root = (unsigned __int64)v30->Root ^ (unsigned __int64)v30;
                else
                  Root = 0LL;
              }
              else
              {
                Root = (unsigned __int64)v30->Root;
              }
              if ( Root )
              {
                while ( 1 )
                {
                  if ( *((_DWORD *)v25 + 12) < *(_DWORD *)(Root + 24) )
                  {
                    v32 = *(_QWORD *)Root;
                    if ( (*(_BYTE *)(a1 + 136) & 1) != 0 )
                    {
                      if ( !v32 )
                        break;
                      v32 ^= Root;
                    }
                    if ( !v32 )
                      break;
                  }
                  else
                  {
                    v32 = *(_QWORD *)(Root + 8);
                    if ( (*(_BYTE *)(a1 + 136) & 1) != 0 )
                    {
                      if ( !v32 )
                        goto LABEL_49;
                      v32 ^= Root;
                    }
                    if ( !v32 )
                    {
LABEL_49:
                      v5 = 1;
                      break;
                    }
                  }
                  Root = v32;
                }
              }
              RtlRbInsertNodeEx(v30, (PRTL_BALANCED_NODE)Root, v5, (PRTL_BALANCED_NODE)v25 + 1);
              return;
            }
          }
LABEL_23:
          __fastfail(3u);
        }
        if ( v23 <= v24 )
        {
          *v16 = v24;
          v24 = v23;
          *(_DWORD *)(a4 + 48) = v12;
          v33 = *(_DWORD *)(a1 + 108);
          v34 = v33 <= v23;
        }
        else
        {
          *v16 = v23;
          v33 = *(_DWORD *)(a1 + 108);
          v34 = v33 <= v24;
        }
        if ( !v34 )
          v24 = v33;
        v18 = a4;
        *(_DWORD *)(a1 + 108) = v24;
      }
      MiBitmapsCachedEntryLengthChanged(a1, v18, 0LL);
    }
  }
}
