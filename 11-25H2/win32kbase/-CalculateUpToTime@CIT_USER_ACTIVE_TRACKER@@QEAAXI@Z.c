/*
 * XREFs of ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x14007C19C
 * Callers:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x14007BDA0 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ?OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z @ 0x14007F064 (-OnDisplayRequiredChange@CIT_USER_ACTIVE_TRACKER@@QEAAXII@Z.c)
 * Callees:
 *     ?SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z @ 0x1400E7D34 (-SetActive@CIT_USER_ACTIVITY_STAT@@QEAAXI@Z.c)
 */

void __fastcall CIT_USER_ACTIVE_TRACKER::CalculateUpToTime(CIT_USER_ACTIVE_TRACKER *this, __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // r14
  unsigned int v7; // eax
  unsigned int v8; // esi
  int v9; // r8d
  unsigned int v10; // edx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // r8
  unsigned int v16; // eax

  LODWORD(v2) = a2;
  UserSessionState = W32GetUserSessionState(this, a2);
  if ( !*(_DWORD *)(UserSessionState + 18920) )
    *(_DWORD *)(UserSessionState + 18920) = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v5, v4) + 18912) + 8LL);
  v7 = *((_DWORD *)this + 2);
  v8 = v2 - v7;
  if ( (_DWORD)v2 != v7 )
  {
    if ( (unsigned int)v2 >= v7 )
      goto LABEL_22;
    v14 = *((_DWORD *)this + 2);
    v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v8 = v2 - v14;
    if ( (unsigned int)v2 >= v14 )
      goto LABEL_22;
    v15 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 18912);
    v16 = -1;
    if ( (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                          - *(_QWORD *)(v15 + 64)) <= 0xFFFFFFFF )
      v16 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
          - *(_DWORD *)(v15 + 64);
    if ( v8 <= v16 && v8 <= 0x240C8400 )
    {
LABEL_22:
      if ( *(_DWORD *)this )
      {
        *((_DWORD *)this + 4) += v8;
      }
      else
      {
        v9 = *((_DWORD *)this + 1);
        v10 = *((_DWORD *)this + 2) - v9;
        v11 = *(_DWORD *)(UserSessionState + 18920);
        if ( v10 < v11 )
        {
          if ( (int)v2 - v9 > v11 )
          {
            v13 = *((_DWORD *)this + 5);
            v12 = v11 - v10;
            if ( v13 < 0 )
              *((_DWORD *)this + 5) = v13 & 0x7FFFFFFF;
          }
          else
          {
            v12 = v8;
          }
          *((_DWORD *)this + 4) += v12;
        }
      }
      *((_DWORD *)this + 2) = v2;
    }
    else
    {
      ++*((_DWORD *)this + 3);
      *((_DWORD *)this + 2) = v2;
      *((_DWORD *)this + 1) = v2 - *(_DWORD *)(UserSessionState + 18920);
      CIT_USER_ACTIVITY_STAT::SetActive((CIT_USER_ACTIVE_TRACKER *)((char *)this + 16), 0);
    }
  }
}
