/*
 * XREFs of ?CheckAndEmitRequiredHaptic@MoveSizeHaptic@@QEAAXXZ @ 0x1402EFC08
 * Callers:
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x14027B320 (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     ?CheckIfScreenBoundaryLimitHapticNeeded@MoveSizeHaptic@@AEAA_NXZ @ 0x1402EFD30 (-CheckIfScreenBoundaryLimitHapticNeeded@MoveSizeHaptic@@AEAA_NXZ.c)
 *     ?ResetStateForNewRound@MoveSizeHaptic@@AEAAXXZ @ 0x1402F013C (-ResetStateForNewRound@MoveSizeHaptic@@AEAAXXZ.c)
 */

void __fastcall MoveSizeHaptic::CheckAndEmitRequiredHaptic(MoveSizeHaptic *this)
{
  __int64 v2; // rcx
  int v3; // edx
  char v4; // bp
  char v5; // si
  char v6; // di
  int v7; // eax
  unsigned int v8; // eax
  bool v9; // al
  __int64 v10; // rcx

  v2 = *(_QWORD *)this;
  v3 = *(_DWORD *)(v2 + 176);
  if ( v3 != 9
    || *(_DWORD *)(v2 + 248) != 4
    || !_bittest((const signed __int32 *)(v2 + 200), 0x13u)
    || (*((_DWORD *)this + 2) & 0x10) != 0
    && *(_QWORD *)((char *)this + 12) == *(_QWORD *)(v2 + 72)
    && *(_QWORD *)((char *)this + 20) == *(_QWORD *)(v2 + 80) )
  {
    v4 = 0;
    if ( !_bittest((const signed __int32 *)(v2 + 200), 0x13u) )
      goto LABEL_14;
  }
  else
  {
    v4 = 1;
  }
  if ( (*((_DWORD *)this + 2) & 0x10) == 0
    || v3 == 9
    && (*(_QWORD *)((char *)this + 12) != *(_QWORD *)(v2 + 72) || *(_QWORD *)((char *)this + 20) != *(_QWORD *)(v2 + 80)) )
  {
    v5 = 1;
    goto LABEL_15;
  }
LABEL_14:
  v5 = 0;
LABEL_15:
  v6 = 0;
  if ( v3 == 9 )
    goto LABEL_26;
  v7 = *((_DWORD *)this + 2);
  if ( (v7 & 0x40) != 0 )
  {
    if ( (v7 & 1) == 0 )
      goto LABEL_21;
    v7 &= ~1u;
    v6 = 1;
  }
  else
  {
    v7 |= 1u;
  }
  *((_DWORD *)this + 2) = v7;
LABEL_21:
  if ( (v7 & 0x80u) == 0 )
  {
    v8 = v7 | 2;
  }
  else
  {
    if ( (v7 & 2) == 0 )
      goto LABEL_26;
    v8 = v7 & 0xFFFFFFFD;
    v6 = 1;
  }
  *((_DWORD *)this + 2) = v8;
LABEL_26:
  v9 = MoveSizeHaptic::CheckIfScreenBoundaryLimitHapticNeeded(this);
  if ( v4 )
  {
    v10 = 1LL;
LABEL_34:
    InputHapticsTrigger(v10);
    goto LABEL_35;
  }
  if ( v5 )
  {
    v10 = 0LL;
    goto LABEL_34;
  }
  if ( v6 )
  {
    v10 = 3LL;
    goto LABEL_34;
  }
  if ( v9 )
  {
    v10 = 4LL;
    goto LABEL_34;
  }
LABEL_35:
  MoveSizeHaptic::ResetStateForNewRound(this);
}
