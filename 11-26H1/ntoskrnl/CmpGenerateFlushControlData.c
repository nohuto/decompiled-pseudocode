/*
 * XREFs of CmpGenerateFlushControlData @ 0x1408BA65C
 * Callers:
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 * Callees:
 *     CmpIsWriteQueueActive @ 0x1404B6690 (CmpIsWriteQueueActive.c)
 *     HvGetHiveLogFileStatus @ 0x1408BD598 (HvGetHiveLogFileStatus.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x140AA8CA4 (HvGetEffectiveLogSizeCapForHive.c)
 *     HvIsCurrentLogSwappable @ 0x140B11ED4 (HvIsCurrentLogSwappable.c)
 */

char __fastcall CmpGenerateFlushControlData(__int64 a1, char a2, __int64 a3)
{
  char v6; // al
  char v7; // si
  int v8; // r10d
  _BYTE *v9; // r11
  int v10; // edx
  _BYTE *v11; // rcx
  int v12; // eax
  _BYTE *v13; // r8
  int v14; // edx
  int v15; // edx
  int v16; // r10d
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // edx
  char v21; // r8
  int v22; // edx
  int v23; // edx
  int v24; // edx

  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_DWORD *)(a3 + 20) = 0;
  v6 = *(_BYTE *)(a1 + 195);
  if ( !v6 && !*(_DWORD *)(a1 + 104) && !*(_DWORD *)(a1 + 128) )
  {
    v7 = 0;
    v8 = 0;
LABEL_7:
    v9 = (_BYTE *)(a1 + 194);
    goto LABEL_8;
  }
  v7 = 1;
  if ( !*(_DWORD *)(a1 + 104) )
  {
    v8 = 0;
    if ( !v6 )
      goto LABEL_7;
  }
  v16 = 9;
  *(_DWORD *)a3 = 9;
  if ( *(_BYTE *)(a1 + 194) )
  {
    v16 = 27;
    *(_DWORD *)a3 = 27;
  }
  if ( *(_DWORD *)(a1 + 4236) )
    *(_DWORD *)a3 = v16 | 0x82;
  *(_DWORD *)(a3 + 24) = HvGetEffectiveLogSizeCapForHive();
LABEL_8:
  v10 = v8;
  v11 = v9;
  if ( v7 && (a2 & 4) != 0 )
  {
    v10 = v8 | 0x42;
    v11 = (_BYTE *)(a1 + 194);
    *(_DWORD *)a3 = v8 | 0x42;
  }
  v12 = *(_DWORD *)(a1 + 160);
  v13 = v9;
  if ( (v12 & 2) != 0
    || (v13 = v11,
        LOBYTE(v12) = (CmpFreezeListLock.WaitRegister.Flags & 1) == 0,
        (((*(_DWORD *)(a1 + 4120) & 0x800) == 0) & (unsigned __int8)v12) == 0) )
  {
    if ( *(_DWORD *)(a1 + 104) || (v9 = v13, *(_BYTE *)(a1 + 195)) )
    {
      v14 = v10 | 0x46;
      *(_DWORD *)a3 = v14;
      if ( *v9 )
        v14 |= 0x10u;
      v15 = v14 | 0x500;
      goto LABEL_30;
    }
    v12 = *(_DWORD *)(a1 + 4232);
    if ( (v12 & 1) != 0 || (a2 & 0x20) == 0 )
      return v12;
LABEL_38:
    v15 = v10 | 0x202;
LABEL_30:
    *(_DWORD *)a3 = v15;
    return v12;
  }
  if ( (a2 & 8) != 0 && (!*v9 || (v10 & 0x10) != 0) )
  {
    v22 = v10 | 0x107;
    *(_DWORD *)a3 = v22;
    if ( (v22 & 8) != 0 )
    {
      HvGetHiveLogFileStatus(a1, *(unsigned int *)(a3 + 24), a3 + 8);
      v12 = *(_DWORD *)(a3 + 8);
      if ( (v12 & 0xC) != 0 )
        *(_DWORD *)a3 |= 0x400u;
    }
    return v12;
  }
  if ( (v10 & 0x48) == 8 )
  {
    HvGetHiveLogFileStatus(a1, *(unsigned int *)(a3 + 24), a3 + 8);
    v12 = *(_DWORD *)(a3 + 8);
    if ( (v12 & 1) != 0 )
    {
      *(_DWORD *)a3 |= 2u;
      return v12;
    }
    if ( (v12 & 0xA) != 0 )
    {
      *(_DWORD *)a3 |= 0x42u;
    }
    else if ( (v12 & 4) != 0 )
    {
      *(_DWORD *)a3 |= 2u;
      if ( (unsigned __int8)HvIsCurrentLogSwappable(a1) )
        v24 = v23 | 0x22;
      else
        v24 = v23 | 0x42;
      *(_DWORD *)a3 = v24;
    }
  }
  v10 = *(_DWORD *)a3;
  if ( (*(_DWORD *)a3 & 0x40) != 0 )
  {
    LOBYTE(v12) = CmpIsWriteQueueActive((_QWORD *)(a1 + 4216));
    if ( (_BYTE)v12 )
      return v12;
    if ( (*(_DWORD *)(a3 + 8) & 8) != 0 )
    {
      v10 = v19 | 0x504;
    }
    else
    {
      *(_DWORD *)a3 = v19 | 1;
      if ( (unsigned __int8)HvIsCurrentLogSwappable(a1) )
      {
        v10 = v20 | 0x21;
      }
      else
      {
        v10 = v20 | 5;
        *(_DWORD *)a3 = v10;
        if ( (v21 & 4) == 0 )
          goto LABEL_17;
        v10 |= 0x400u;
      }
    }
    *(_DWORD *)a3 = v10;
  }
LABEL_17:
  if ( (v10 & 0x48) == 8 )
  {
    v17 = v10;
    if ( !*(_DWORD *)(a1 + 128) )
    {
      v17 = v10 | 0x800;
      *(_DWORD *)a3 = v10 | 0x800;
    }
    v18 = *(_DWORD *)(a3 + 8);
    if ( (v18 & 0x10) != 0 || (v10 = v17, (v18 & 4) != 0) )
    {
      v10 = v17 | 0x1000;
      *(_DWORD *)a3 = v17 | 0x1000;
    }
  }
  v12 = *(_DWORD *)(a1 + 4232);
  if ( (v12 & 1) == 0 )
  {
    if ( *(_QWORD *)(a1 + 1544) )
    {
      LOBYTE(v12) = (a2 & 0x20) == 0;
      if ( (((v10 & 8) == 0) & (unsigned __int8)v12) == 0 )
        goto LABEL_38;
    }
  }
  return v12;
}
