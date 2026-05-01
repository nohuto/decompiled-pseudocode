/*
 * XREFs of ?HampActCanBeStartedInHostState@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x18000CDA4
 * Callers:
 *     ?HampActCanBeStarted@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x18000C808 (-HampActCanBeStarted@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003F9C0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampActCanBeStartedInHostState(__int64 a1)
{
  __int64 v2; // r11
  unsigned int v3; // ecx
  unsigned __int64 v4; // r8
  BOOL v5; // edx
  int v6; // eax
  bool v8; // cf
  struct _HAM_ACTIVITY *FirstActivity; // r8
  int v10; // r9d
  __int64 v11; // rdx
  __int64 v12; // rcx

  if ( (*(_BYTE *)(a1 + 552) & 8) != 0 )
  {
    return 12;
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 80);
    v3 = 7;
    v4 = *(_QWORD *)(v2 + 664);
    v5 = ((v4 >> 29) & 7) != 0 && (unsigned int)((unsigned __int8)HIBYTE(*(_DWORD *)(v2 + 664)) >> 5) - 1 > 1;
    v6 = *(_DWORD *)(a1 + 116);
    if ( (v6 & 0x40) != 0 && (unsigned __int8)HIBYTE(*(_DWORD *)(v2 + 664)) >> 5 )
    {
      return 6;
    }
    else if ( (v6 & 0x80u) == 0 || !v5 )
    {
      if ( (v6 & 0x100) != 0
        && ((v4 & 0x30000) != 0 ? (v8 = (v4 & 0x8000000000LL) != 0) : (v8 = (v4 & 0x4000000000LL) != 0), v8) )
      {
        return 8;
      }
      else if ( (*(_DWORD *)(a1 + 112) & 0x40000) != 0 && ((v4 & 0x30000) != 0 || (v4 & 0x2000000000000LL) == 0) )
      {
        return 10;
      }
      else
      {
        if ( (v6 & 0x200) == 0 )
          return 0;
        FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)v2);
        if ( !FirstActivity )
          return 0;
        do
        {
          if ( *((_BYTE *)FirstActivity + 562) == 3 && v10 <= ((*((_DWORD *)FirstActivity + 28) >> 7) & 3) )
            v10 = (*((_DWORD *)FirstActivity + 28) >> 7) & 3;
          v11 = *((_QWORD *)FirstActivity + 12);
          v12 = *((_QWORD *)FirstActivity + 10);
          FirstActivity = 0LL;
          if ( v11 != v12 + 608 )
            FirstActivity = (struct _HAM_ACTIVITY *)(v11 - 96);
        }
        while ( FirstActivity );
        if ( v10 == 1 )
          return 11;
        else
          return 0;
      }
    }
  }
  return v3;
}
