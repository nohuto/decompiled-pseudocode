/*
 * XREFs of CmpIsHiveAlreadyLoaded @ 0x14085F3EC
 * Callers:
 *     CmpResolveHiveLoadConflict @ 0x140ADF3F4 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     CmpUnfreezeHive @ 0x14077DF2C (CmpUnfreezeHive.c)
 *     CmpGetNextActiveHive @ 0x1408B95EC (CmpGetNextActiveHive.c)
 *     CmpConstructName @ 0x1408CB970 (CmpConstructName.c)
 *     CmpIsThisSameFile @ 0x140A89598 (CmpIsThisSameFile.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C5E750 (CmpIsKeyDeletedForKeyBody.c)
 */

bool __fastcall CmpIsHiveAlreadyLoaded(__int64 a1, __int64 a2, char a3, __int64 *a4, __int64 *a5)
{
  char v5; // bl
  __int64 v9; // rax
  bool v10; // zf
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 i; // rcx
  __int64 NextActiveHive; // rax
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rbx

  v5 = 0;
  if ( (a3 & 0x20) == 0 )
  {
    if ( a1 )
    {
      if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
      {
        v9 = *(_QWORD *)(a1 + 8);
        v10 = (*(_DWORD *)(v9 + 184) & 0x40000) == 0;
        v11 = *(_QWORD *)(v9 + 32);
        *a4 = v11;
        if ( !v10 )
        {
          if ( (unsigned __int8)CmpIsThisSameFile(a2, *(_QWORD *)(v11 + 1544)) )
          {
            v12 = *a4;
            if ( (*(_DWORD *)(*a4 + 4120) & 0x40) == 0 && (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) & 0x40000) == 0 )
            {
              v5 = 1;
              if ( *(_BYTE *)(v12 + 2952) == 1 )
              {
                CmpUnfreezeHive(v12);
                *(_BYTE *)(*a4 + 2952) = 0;
              }
            }
          }
        }
      }
    }
    else if ( (a3 & 0x10) != 0 )
    {
      for ( i = 0LL; ; i = v15 )
      {
        NextActiveHive = CmpGetNextActiveHive(i);
        v15 = NextActiveHive;
        if ( !NextActiveHive )
          break;
        if ( (*(_DWORD *)(NextActiveHive + 4120) & 0x20) != 0
          && (unsigned __int8)CmpIsThisSameFile(a2, *(_QWORD *)(NextActiveHive + 1544))
          && (*(_DWORD *)(v15 + 4120) & 0x40) == 0 )
        {
          v16 = *(_QWORD *)(v15 + 2944);
          *a4 = v15;
          v17 = CmpConstructName(v16);
          *a5 = v17;
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v15 + 1640));
          return v17 != 0;
        }
      }
    }
  }
  return v5;
}
