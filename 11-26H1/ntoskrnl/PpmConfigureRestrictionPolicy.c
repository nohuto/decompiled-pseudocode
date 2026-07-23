/*
 * XREFs of PpmConfigureRestrictionPolicy @ 0x14025B2B4
 * Callers:
 *     PpmParkApplyPolicy @ 0x14025AAD0 (PpmParkApplyPolicy.c)
 * Callees:
 *     <none>
 */

char __fastcall PpmConfigureRestrictionPolicy(__int64 a1)
{
  unsigned int v1; // eax
  unsigned __int16 v3; // r9
  _BYTE *v4; // r11
  __int64 Next_high; // rbx
  __int64 v6; // rsi
  char *v7; // rcx
  __int64 v8; // r10
  __int64 v9; // rdi
  __int64 WriteTransferCount; // rdx
  __int16 v11; // ax
  int v12; // edx
  unsigned __int64 v13; // rcx
  _BYTE *i; // rax
  unsigned __int16 v15; // ax

  v1 = *(_DWORD *)(a1 + 1192);
  if ( v1 < 2 )
    return v1;
  v3 = *(_WORD *)(a1 + 8);
  v4 = &unk_140E0B59C;
  Next_high = SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next);
  v6 = 7LL;
  v7 = 0LL;
  v8 = 0LL;
  do
  {
    v9 = *((unsigned int *)v4 - 1);
    if ( !*v4 )
      v3 = *(_WORD *)(a1 + 8);
    switch ( (_DWORD)v9 )
    {
      case 0:
        goto LABEL_10;
      case 1:
        WriteTransferCount = *(_QWORD *)&PopDirectedDripsDiagLock.ThreadTimerDelay;
        goto LABEL_12;
      case 2:
        WriteTransferCount = PopDirectedDripsDiagLock.WriteTransferCount;
LABEL_12:
        if ( !WriteTransferCount )
          goto LABEL_15;
        v7 = (char *)(WriteTransferCount + 712 * Next_high + 40);
        goto LABEL_14;
      case 3:
        if ( !PopDirectedDripsDiagLock.OtherTransferCount )
          goto LABEL_10;
        v7 = (char *)(712 * Next_high + PopDirectedDripsDiagLock.OtherTransferCount + 40);
LABEL_14:
        v8 = *(_QWORD *)v7;
        goto LABEL_15;
    }
    if ( (_DWORD)v9 != 4 )
    {
      if ( (_DWORD)v9 == 5 )
      {
        WriteTransferCount = (__int64)PopDirectedDripsDiagLock.QueuedScb;
      }
      else
      {
        if ( (_DWORD)v9 != 6 )
          goto LABEL_10;
        WriteTransferCount = PopDirectedDripsDiagLock.ReadTransferCount;
      }
      goto LABEL_12;
    }
LABEL_10:
    v7 = (char *)PpmCurrentProfile + 712 * SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) + 40;
    v8 |= 0x8000000000000uLL;
LABEL_15:
    if ( v7 && (v8 & 0x8000000000000LL) != 0 )
    {
      v15 = (unsigned __int8)v7[708];
      if ( v3 )
      {
        if ( (_BYTE)v15 && v3 >= v15 )
          v3 = (unsigned __int8)v7[708];
      }
      else
      {
        v3 = (unsigned __int8)v7[708];
      }
    }
    v4 += 8;
    v11 = v3 < *(_WORD *)(a1 + 8) ? v3 : 0;
    *(_WORD *)(a1 + 2 * v9 + 1198) = v11;
    v3 = v11;
    --v6;
  }
  while ( v6 );
  v12 = *(_DWORD *)(a1 + 1192);
  v13 = 14LL;
  for ( i = (_BYTE *)(a1 + 1198); ((unsigned __int8)i & 7) != 0 && v13; ++i )
  {
    if ( *i )
    {
LABEL_45:
      v1 = 3;
      goto LABEL_43;
    }
    --v13;
  }
  while ( v13 >= 8 )
  {
    if ( *(_QWORD *)i )
      goto LABEL_45;
    i += 8;
    v13 -= 8LL;
  }
  while ( v13 )
  {
    if ( *i )
      goto LABEL_45;
    ++i;
    --v13;
  }
  v1 = 2;
LABEL_43:
  *(_DWORD *)(a1 + 1192) = v1;
  LOBYTE(v1) = v1 != v12;
  *(_BYTE *)(a1 + 1196) = v1;
  return v1;
}
