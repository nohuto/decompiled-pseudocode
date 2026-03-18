/*
 * XREFs of ?bFilteredOut@PFEOBJ@@QEAAHPEAU_EFFILTER_INFO@@@Z @ 0x1400FF73C
 * Callers:
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x1400FF484 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z.c)
 * Callees:
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1400FF980 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x140101320 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

__int64 __fastcall PFEOBJ::bFilteredOut(PFEOBJ *this, struct _EFFILTER_INFO *a2)
{
  PFEOBJ *v3; // r15
  __int64 v4; // r8
  _DWORD *v5; // rdx
  int v6; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct tagPvtData *v11; // rax
  __int64 v12; // rbp
  char v13; // di
  char v14; // si
  char *v15; // rcx
  char *v16; // rdx
  struct _LIST_ENTRY *i; // r14
  struct _LIST_ENTRY *Flink; // rcx
  __int64 Blink_low; // rax
  _BYTE *v20; // rcx
  _BYTE *v21; // rdx
  __int64 v22[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = this;
  v4 = *(unsigned int *)(*(_QWORD *)this + 12LL);
  v5 = *(_DWORD **)(*(_QWORD *)this + 32LL);
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
    LOBYTE(this) = (v6 & 2) != 0;
    if ( ((unsigned __int8)this & ((v4 & 1) == 0)) != 0
      && (*((_DWORD *)a2 + 1) != v5[32] || *((_DWORD *)a2 + 2) != v5[33]) )
    {
      return 1LL;
    }
  }
  if ( *((_DWORD *)a2 + 7) && *((_DWORD *)a2 + 8) && (v5[12] & 2) != 0 )
    return 1LL;
  v22[0] = **(_QWORD **)v3;
  v9 = *(_QWORD *)(W32GetSessionState(this, v5, v4) + 96);
  if ( *(_QWORD *)(v22[0] + 136) != *(_QWORD *)(v9 + 20384) )
  {
    if ( *(_DWORD *)(v22[0] + 56) )
      goto LABEL_19;
    return 1LL;
  }
  v11 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v22);
  if ( !v11 || *((_DWORD *)v11 + 1) )
    return 1LL;
LABEL_19:
  if ( *((_DWORD *)a2 + 5) )
  {
    v9 = *(unsigned int *)(*(_QWORD *)v3 + 12LL);
    if ( (v9 & 1) == 0 )
      return 1LL;
  }
  if ( (*(_DWORD *)(*(_QWORD *)v3 + 12LL) & 0x44) != 0 )
    return 1LL;
  if ( *((_DWORD *)a2 + 9) != 1 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)v3 + 32LL);
    v13 = *((_BYTE *)a2 + 36);
    if ( *(_DWORD *)(v12 + 40) )
    {
      if ( v13 == 1 )
        v13 = *(_BYTE *)(*(_QWORD *)(W32GetSessionState(v9, v8, v10) + 96) + 19712LL);
      v14 = -2;
      if ( v13 != -2 )
      {
        v15 = (char *)(v12 + *(int *)(v12 + 40));
        v14 = *v15;
        v16 = v15 + 16;
        while ( v15 < v16 )
        {
          if ( *v15 == v13 )
          {
LABEL_47:
            v14 = v13;
            goto LABEL_48;
          }
          if ( *v15 == 1 )
            break;
          ++v15;
        }
        if ( *(_QWORD *)(*(_QWORD *)v3 + 120LL) )
        {
          for ( i = PFEOBJ::pGetLinkedFontList(v3)->Flink; i != PFEOBJ::pGetLinkedFontList(v3); i = i->Flink )
          {
            Flink = i[2].Flink[2].Flink;
            Blink_low = SLODWORD(Flink[2].Blink);
            if ( (_DWORD)Blink_low )
            {
              v20 = (char *)Flink + Blink_low;
              v21 = v20 + 16;
              while ( v20 < v21 )
              {
                if ( *v20 == v13 )
                  goto LABEL_47;
                if ( *v20 == 1 )
                  break;
                ++v20;
              }
            }
            else if ( BYTE4(Flink[2].Blink) == v13 )
            {
              goto LABEL_47;
            }
          }
        }
      }
    }
    else
    {
      v14 = *(_BYTE *)(v12 + 44);
    }
LABEL_48:
    if ( v14 != *((_BYTE *)a2 + 36) )
      return 1LL;
  }
  return 0LL;
}
