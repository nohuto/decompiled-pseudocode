/*
 * XREFs of ?bFilteredOut@PFEOBJ@@QEAAHPEAU_EFFILTER_INFO@@@Z @ 0x1401064D0
 * Callers:
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x140104440 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z.c)
 * Callees:
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x140106730 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x140106E28 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

__int64 __fastcall PFEOBJ::bFilteredOut(PFEOBJ *this, struct _EFFILTER_INFO *a2)
{
  PFEOBJ *v3; // r15
  int v4; // r9d
  unsigned int *v5; // r8
  __int64 v6; // rdx
  BOOL v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct tagPvtData *v12; // rax
  __int64 v13; // rbp
  char v14; // di
  char v15; // si
  char *v16; // rax
  char *v17; // rdx
  struct _LIST_ENTRY *i; // r14
  struct _LIST_ENTRY *Flink; // rcx
  __int64 Blink_low; // rax
  _BYTE *v21; // rax
  _BYTE *v22; // rdx
  __int64 v23[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = this;
  v4 = *(_DWORD *)(*(_QWORD *)this + 12LL);
  v5 = *(unsigned int **)(*(_QWORD *)this + 32LL);
  if ( (v4 & 2) != 0 )
    return 1LL;
  v6 = v5[12];
  if ( (v6 & 0x800000) != 0 || (v4 & 8) != 0 || *((_DWORD *)a2 + 6) && (v6 & 2) != 0 )
    return 1LL;
  if ( *((_DWORD *)a2 + 3) && (v6 & 1) != 0 )
    return 1LL;
  if ( *((_DWORD *)a2 + 4) && (v6 & 1) == 0 )
    return 1LL;
  if ( *(_DWORD *)a2 )
  {
    LOBYTE(this) = (v4 & 1) == 0;
    if ( ((unsigned __int8)this & ((v6 & 2) != 0)) != 0
      && (*((_DWORD *)a2 + 1) != v5[32] || *((_DWORD *)a2 + 2) != v5[33]) )
    {
      return 1LL;
    }
  }
  if ( *((_DWORD *)a2 + 7) && *((_DWORD *)a2 + 8) && (v6 & 2) != 0 )
    return 1LL;
  v8 = 1;
  v23[0] = **(_QWORD **)v3;
  v10 = *(_QWORD *)(W32GetSessionState(this, v6, v5) + 96);
  if ( *(_QWORD *)(v23[0] + 136) == *(_QWORD *)(v10 + 20408) )
  {
    v12 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v23);
    if ( v12 )
    {
      v10 = (unsigned int)-(*((_DWORD *)v12 + 1) != 0);
      v8 = *((_DWORD *)v12 + 1) != 0;
    }
    if ( !v8 )
      goto LABEL_18;
    return 1LL;
  }
  if ( !*(_DWORD *)(v23[0] + 56) )
    return 1LL;
LABEL_18:
  if ( *((_DWORD *)a2 + 5) )
  {
    v10 = *(unsigned int *)(*(_QWORD *)v3 + 12LL);
    if ( (v10 & 1) == 0 )
      return 1LL;
  }
  if ( (*(_DWORD *)(*(_QWORD *)v3 + 12LL) & 0x44) != 0 )
    return 1LL;
  if ( *((_DWORD *)a2 + 9) != 1 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)v3 + 32LL);
    v14 = *((_BYTE *)a2 + 36);
    if ( *(_DWORD *)(v13 + 40) )
    {
      if ( v14 == 1 )
        v14 = *(_BYTE *)(*(_QWORD *)(W32GetSessionState(v10, v9, v11) + 96) + 19736LL);
      v15 = -2;
      if ( v14 != -2 )
      {
        v16 = (char *)(v13 + *(int *)(v13 + 40));
        v15 = *v16;
        v17 = v16 + 16;
        while ( v16 < v17 )
        {
          if ( *v16 == v14 )
          {
LABEL_41:
            v15 = v14;
            goto LABEL_42;
          }
          if ( *v16 == 1 )
            break;
          ++v16;
        }
        if ( *(_QWORD *)(*(_QWORD *)v3 + 120LL) )
        {
          for ( i = PFEOBJ::pGetLinkedFontList(v3)->Flink; i != PFEOBJ::pGetLinkedFontList(v3); i = i->Flink )
          {
            Flink = i[2].Flink[2].Flink;
            Blink_low = SLODWORD(Flink[2].Blink);
            if ( (_DWORD)Blink_low )
            {
              v21 = (char *)Flink + Blink_low;
              v22 = v21 + 16;
              while ( v21 < v22 )
              {
                if ( *v21 == v14 )
                  goto LABEL_41;
                if ( *v21 == 1 )
                  break;
                ++v21;
              }
            }
            else if ( BYTE4(Flink[2].Blink) == v14 )
            {
              goto LABEL_41;
            }
          }
        }
      }
    }
    else
    {
      v15 = *(_BYTE *)(v13 + 44);
    }
LABEL_42:
    if ( v15 != *((_BYTE *)a2 + 36) )
      return 1LL;
  }
  return 0LL;
}
