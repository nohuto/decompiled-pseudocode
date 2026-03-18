/*
 * XREFs of ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1400D61F4
 * Callers:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1400D5DF8 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ?OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z @ 0x1400D7BC8 (-OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z.c)
 * Callees:
 *     ?SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z @ 0x14012E294 (-SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z.c)
 */

void __fastcall CIT_USER_ACTIVE_TRACKER::CalculateUpToTime(CIT_USER_ACTIVE_TRACKER *this, int a2, int a3)
{
  unsigned __int64 v3; // rdi
  int v5; // edx
  int v6; // ecx
  __int64 UserSessionState; // rbp
  __int64 v8; // r8
  unsigned int v9; // eax
  unsigned int v10; // esi
  int v11; // r8d
  unsigned int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int v16; // eax
  unsigned __int64 v17; // rdx

  LODWORD(v3) = a2;
  UserSessionState = W32GetUserSessionState((_DWORD)this, a2, a3);
  if ( !*(_DWORD *)(UserSessionState + 18960) )
  {
    v8 = *(_QWORD *)(W32GetUserSessionState(v6, v5, v8) + 18952);
    *(_DWORD *)(UserSessionState + 18960) = *(_DWORD *)(v8 + 8);
  }
  v9 = *((_DWORD *)this + 2);
  v10 = v3 - v9;
  if ( (_DWORD)v3 != v9 )
  {
    if ( (unsigned int)v3 >= v9 )
      goto LABEL_22;
    v16 = *((_DWORD *)this + 2);
    v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v10 = v3 - v16;
    if ( (unsigned int)v3 >= v16 )
      goto LABEL_22;
    v17 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
          * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
        - *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v6, v5, v8) + 18952) + 64LL);
    if ( v17 > 0xFFFFFFFF )
      LODWORD(v17) = -1;
    if ( v10 <= (unsigned int)v17 && v10 <= 0x240C8400 )
    {
LABEL_22:
      if ( *(_DWORD *)this )
      {
        *((_DWORD *)this + 4) += v10;
      }
      else
      {
        v11 = *((_DWORD *)this + 1);
        v12 = *((_DWORD *)this + 2) - v11;
        v13 = *(_DWORD *)(UserSessionState + 18960);
        if ( v12 < v13 )
        {
          if ( (int)v3 - v11 > v13 )
          {
            v15 = *((_DWORD *)this + 5);
            v14 = v13 - v12;
            if ( v15 < 0 )
              *((_DWORD *)this + 5) = v15 & 0x7FFFFFFF;
          }
          else
          {
            v14 = v10;
          }
          *((_DWORD *)this + 4) += v14;
        }
      }
      *((_DWORD *)this + 2) = v3;
    }
    else
    {
      ++*((_DWORD *)this + 3);
      *((_DWORD *)this + 2) = v3;
      *((_DWORD *)this + 1) = v3 - *(_DWORD *)(UserSessionState + 18960);
      CIT_USER_ACTIVITY_STAT::SetActive((CIT_USER_ACTIVE_TRACKER *)((char *)this + 16), 0);
    }
  }
}
