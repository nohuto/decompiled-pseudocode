/*
 * XREFs of IcCheckIrqConflict @ 0x1400D065C
 * Callers:
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1400BCCF0 (ProcessorpFindAffinitizedIdtEntries.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001B3DC (WPP_RECORDER_SF_.c)
 *     IcIsActiveBothPrimaryInterrupt @ 0x1400BEC28 (IcIsActiveBothPrimaryInterrupt.c)
 */

__int64 __fastcall IcCheckIrqConflict(unsigned int a1, int a2, char a3, _BYTE *a4)
{
  __int64 v4; // r10
  bool v5; // si
  int v9; // edi
  __int64 i; // rcx
  unsigned int j; // edx
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r9
  char v15; // r11
  int v16; // eax
  int v17; // r9d
  int v18; // ebx
  unsigned int k; // r8d
  __int64 v20; // r9
  bool IsActiveBothPrimaryInterrupt; // al
  __int64 v22; // r9
  __int64 v23; // r10
  char v24; // r11
  int v25; // r8d
  int v26; // r9d
  int v27; // eax

  v4 = IcListHead;
  v5 = 0;
  while ( 1 )
  {
    if ( &IcListHead == (__int64 *)v4 )
    {
      *a4 = 1;
      return 3221226021LL;
    }
    v9 = *(_DWORD *)(v4 + 28);
    if ( v9 >= 0 && a1 >= *(_DWORD *)(v4 + 16) && a1 <= *(_DWORD *)(v4 + 20) )
      break;
    v4 = *(_QWORD *)v4;
  }
  if ( (v9 & 4) == 0 )
    v5 = (a3 & 2) != 0;
  for ( i = IcListHead; ; i = *(_QWORD *)i )
  {
    if ( &IcListHead == (__int64 *)i )
      goto LABEL_29;
    if ( *(int *)(i + 28) >= 0 && v4 != i )
      break;
LABEL_18:
    ;
  }
  for ( j = 0; ; ++j )
  {
    if ( j >= *(_DWORD *)(i + 20) - *(_DWORD *)(i + 16) + 1 )
      goto LABEL_18;
    v12 = 200LL * j;
    if ( *(_DWORD *)(v12 + i + 36) )
    {
      if ( *(_DWORD *)(v12 + i + 140) == a2 )
        break;
    }
  }
  if ( v5 || IcIsActiveBothPrimaryInterrupt(i, j) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_58;
    v17 = 10;
    goto LABEL_57;
  }
  v16 = *(_DWORD *)(v14 + v13 + 152);
  if ( (v16 || !v15) && (v16 != 1 || v15) )
  {
LABEL_29:
    v18 = *(_DWORD *)(v4 + 16);
    for ( k = 0; ; ++k )
    {
      if ( k >= *(_DWORD *)(v4 + 20) - v18 + 1 )
        goto LABEL_52;
      v20 = 200LL * k;
      if ( *(_DWORD *)(v20 + v4 + 36) )
      {
        if ( *(_DWORD *)(v20 + v4 + 140) == a2 )
          break;
      }
    }
    IsActiveBothPrimaryInterrupt = IcIsActiveBothPrimaryInterrupt(v4, k);
    if ( a1 == v18 + v25 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = 12;
LABEL_51:
        LOBYTE(j) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          j,
          20,
          v26,
          (__int64)&WPP_6f48b283ef1d3f95e3512e12002e6d20_Traceguids);
        goto LABEL_52;
      }
      goto LABEL_52;
    }
    if ( v5 || IsActiveBothPrimaryInterrupt )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_58;
      v17 = 13;
    }
    else
    {
      v27 = *(_DWORD *)(v22 + v23 + 152);
      if ( !v27 && v24 )
        goto LABEL_43;
      if ( v24 )
      {
        if ( (v9 & 1) != 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v26 = 16;
            goto LABEL_51;
          }
          goto LABEL_52;
        }
      }
      else
      {
        if ( v27 == 1 )
        {
LABEL_43:
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_58;
          v17 = 14;
          goto LABEL_57;
        }
        if ( (v9 & 2) != 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v26 = 15;
            goto LABEL_51;
          }
LABEL_52:
          *a4 = 0;
          return 0LL;
        }
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_58;
      v17 = 17;
    }
LABEL_57:
    LOBYTE(j) = 4;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      j,
      20,
      v17,
      (__int64)&WPP_6f48b283ef1d3f95e3512e12002e6d20_Traceguids);
    goto LABEL_58;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = 11;
    goto LABEL_57;
  }
LABEL_58:
  *a4 = 1;
  return 0LL;
}
