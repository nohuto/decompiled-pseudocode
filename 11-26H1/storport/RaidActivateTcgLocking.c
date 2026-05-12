/*
 * XREFs of RaidActivateTcgLocking @ 0x14009277C
 * Callers:
 *     RaidAdapterStorageTcgActivateLocking @ 0x140083308 (RaidAdapterStorageTcgActivateLocking.c)
 *     RaidUnitStorageTcgActivateLocking @ 0x140087B5C (RaidUnitStorageTcgActivateLocking.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x140076CE0 (RtlStringCbCopyA.c)
 *     RaidFillTcgAuthKey @ 0x140094074 (RaidFillTcgAuthKey.c)
 *     RaidRefreshTcg @ 0x140095C48 (RaidRefreshTcg.c)
 *     TcglibActivateLockingSpEx @ 0x140130754 (TcglibActivateLockingSpEx.c)
 *     TcglibCloseSession @ 0x140130A70 (TcglibCloseSession.c)
 *     TcglibConfigureLockingSpEx @ 0x140130B4C (TcglibConfigureLockingSpEx.c)
 *     TcglibOpenSession @ 0x140131260 (TcglibOpenSession.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidActivateTcgLocking(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned int a4,
        __int64 a5,
        NTSTRSAFE_PSTR pszDest)
{
  unsigned int v6; // r12d
  int refreshed; // ebx
  char v8; // r15
  __int64 v10; // rdi
  _BYTE *v11; // rax
  const char *v13; // r8
  __int64 v14; // r8
  _OWORD v15[2]; // [rsp+30h] [rbp-59h] BYREF
  int v16; // [rsp+50h] [rbp-39h]
  _OWORD v17[3]; // [rsp+58h] [rbp-31h] BYREF
  __int64 v18; // [rsp+88h] [rbp-1h]

  v6 = a3;
  v16 = 0;
  refreshed = 0;
  v18 = 0LL;
  v8 = a2;
  memset(v15, 0, sizeof(v15));
  memset(v17, 0, sizeof(v17));
  if ( a3 >= 2u || !(_BYTE)a2 && a3 != 1 )
    return (unsigned int)-1073741811;
  if ( *(_DWORD *)a1 == 1431193940 )
  {
    if ( (*(_BYTE *)(a1 + 507) & 0x40) != 0 )
      return (unsigned int)-1073741637;
    v10 = *(_QWORD *)(a1 + 3592);
    if ( !v10 )
      return (unsigned int)-1073741637;
    v11 = *(_BYTE **)(a1 + 3600);
  }
  else
  {
    if ( *(_DWORD *)a1 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*(_BYTE *)(a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v10 = *(_QWORD *)(a1 + 6120);
    if ( !v10 )
      return (unsigned int)-1073741637;
    v11 = *(_BYTE **)(a1 + 6128);
  }
  if ( !v11 || !(_BYTE)a2 && (!v11[152] || !v11[153]) )
    return (unsigned int)-1073741637;
  if ( !v11[53] )
  {
    LOBYTE(a2) = 1;
    refreshed = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, _OWORD *, NTSTRSAFE_PSTR))RaidFillTcgAuthKey)(
                  v10,
                  a2,
                  a4,
                  a5,
                  v15,
                  pszDest);
    if ( refreshed >= 0 )
    {
      refreshed = TcglibOpenSession(v10, 1LL, v17);
      if ( refreshed < 0 )
      {
LABEL_22:
        RtlStringCbCopyA(pszDest, 0x20uLL, "TcglibOpenSession");
        return (unsigned int)refreshed;
      }
      refreshed = TcglibActivateLockingSpEx(v10, v17, v6, v15);
      if ( refreshed >= 0 )
      {
        TcglibCloseSession(v10, v17);
        refreshed = RaidRefreshTcg(a1, pszDest);
        if ( refreshed < 0 )
          return (unsigned int)refreshed;
        refreshed = TcglibOpenSession(v10, 2LL, v17);
        if ( refreshed < 0 )
          goto LABEL_22;
        LOBYTE(v14) = v8 == 0;
        refreshed = TcglibConfigureLockingSpEx(v10, v17, v14, v15);
        if ( refreshed >= 0 )
        {
LABEL_30:
          TcglibCloseSession(v10, v17);
          return (unsigned int)refreshed;
        }
        v13 = "TcglibConfigureLockingSpEx";
      }
      else
      {
        v13 = "TcglibActivateLockingSpEx";
      }
      RtlStringCbCopyA(pszDest, 0x20uLL, v13);
      goto LABEL_30;
    }
  }
  return (unsigned int)refreshed;
}
