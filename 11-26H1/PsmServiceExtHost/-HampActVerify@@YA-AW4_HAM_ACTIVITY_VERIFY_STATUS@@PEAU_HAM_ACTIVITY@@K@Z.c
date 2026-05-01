/*
 * XREFs of ?HampActVerify@@YA?AW4_HAM_ACTIVITY_VERIFY_STATUS@@PEAU_HAM_ACTIVITY@@K@Z @ 0x18007D0A8
 * Callers:
 *     ?HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18007CAD0 (-HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     CempListEntryIsNull @ 0x180014218 (CempListEntryIsNull.c)
 */

__int64 __fastcall HampActVerify(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  __int64 v3; // rcx
  unsigned int v4; // r11d
  __int64 v5; // r10
  __int64 v6; // rdx
  bool v7; // zf
  char v8; // cl
  int v9; // r9d
  int v10; // ecx
  int v11; // edx
  __int64 v12; // r8
  char v13; // dl
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rdx
  int v17; // ecx
  __int64 v18; // r9
  int v19; // eax
  int v20; // eax

  v1 = a1;
  result = 1LL;
  if ( ((*(_QWORD *)(a1 + 40) >> 57) & 7) == 5 )
  {
    v3 = *(_QWORD *)(a1 + 88);
    LOBYTE(v4) = 2;
    v5 = 0LL;
    if ( v3 )
    {
      v6 = *(_QWORD *)(v3 + 8);
      if ( (*(_BYTE *)(v6 + 552) & 1) == 0 )
      {
        v7 = *(_QWORD *)(v3 + 16) == -1LL;
        v8 = *(_BYTE *)(v6 + 562);
        v9 = !v7;
        if ( v8 == 2 || (v7 = v8 == 3, v10 = 0, v7) )
          v10 = 1;
        if ( v9 != v10 )
          return 3LL;
      }
    }
    v11 = *(_DWORD *)(v1 + 552);
    if ( (v11 & 2) != 0 && (v11 & 1) == 0 )
      return 10LL;
    if ( *(_BYTE *)(v1 + 562) )
    {
      switch ( *(_BYTE *)(v1 + 562) )
      {
        case 1:
          if ( (v11 & 0x300) != 0 )
            return 8LL;
          if ( (v11 & 0x40) != 0 || *(_QWORD *)(v1 + 536) )
            return 9LL;
          break;
        case 2:
          if ( (v11 & 1) == 0 && !*(_QWORD *)(v1 + 528) )
            return 12LL;
          break;
        case 3:
          if ( (v11 & 4) == 0 )
            return 6LL;
          break;
        case 4:
          if ( (v11 & 1) == 0
            && (!(unsigned int)CempListEntryIsNull((_QWORD *)(v1 + 48))
             || !(unsigned int)CempListEntryIsNull((_QWORD *)(v12 + 96))) )
          {
            return v4;
          }
          break;
        default:
          return 5LL;
      }
    }
    else
    {
      result = 4LL;
      if ( (v11 & 4) != 0 )
        return result;
    }
    v13 = *(_BYTE *)(v1 + 562);
    v14 = v5;
    v15 = v5;
    LOBYTE(v14) = *(_BYTE *)(v1 + 563) != 6;
    LOBYTE(v15) = v13 == (char)v4;
    if ( v15 == v14 )
    {
      if ( v13 == (_BYTE)v4 || *(_QWORD *)(v1 + 528) == v5 )
      {
        v16 = *(_QWORD *)(v1 + 544);
        v17 = v5;
        v18 = *(_QWORD *)(v1 + 536);
        v19 = v5;
        LOBYTE(v17) = v16 == 0;
        LOBYTE(v19) = v18 == 0;
        if ( v19 != v17 )
          return 14LL;
        v20 = *(_DWORD *)(v1 + 552);
        if ( (v20 & 0x40) != 0 && (v18 || v16) )
        {
          return 14LL;
        }
        else if ( (v20 & 0x3C00) != 0
               || (v20 & 0x300) == 0 && *(_WORD *)(v1 + 560) == (_WORD)v5 && *(_DWORD *)(v1 + 556) == (_DWORD)v5 )
        {
          return (unsigned int)v5;
        }
        else
        {
          return 15LL;
        }
      }
      else
      {
        return 13LL;
      }
    }
    else
    {
      return 7LL;
    }
  }
  return result;
}
