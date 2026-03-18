/*
 * XREFs of ?InitDomainLocks@@YAJXZ @ 0x14013E668
 * Callers:
 *     InitCreateUserCrit @ 0x1402EB1A4 (InitCreateUserCrit.c)
 * Callees:
 *     ?LockInitialize@tagDomLock@@QEBAJXZ @ 0x14013E850 (-LockInitialize@tagDomLock@@QEBAJXZ.c)
 */

__int64 __fastcall InitDomainLocks(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rbx
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  v3 = UserSessionState + 42272;
  *(_QWORD *)(UserSessionState + 42456) = 0LL;
  *(_QWORD *)(UserSessionState + 42464) = 0LL;
  *(_DWORD *)(UserSessionState + 42472) = 0;
  *(_QWORD *)(UserSessionState + 42480) = 0LL;
  *(_QWORD *)(UserSessionState + 42488) = 0LL;
  *(_DWORD *)(UserSessionState + 42496) = 0;
  *(_QWORD *)(UserSessionState + 42504) = 0LL;
  *(_QWORD *)(UserSessionState + 42512) = 0LL;
  *(_DWORD *)(UserSessionState + 42520) = 0;
  *(_QWORD *)(UserSessionState + 42528) = 0LL;
  result = tagDomLock::LockInitialize((tagDomLock *)(UserSessionState + 42272));
  if ( (int)result >= 0 )
  {
    result = tagDomLock::LockInitialize((tagDomLock *)(v3 + 8));
    if ( (int)result >= 0 )
    {
      result = tagDomLock::LockInitialize((tagDomLock *)(v3 + 16));
      if ( (int)result >= 0 )
      {
        result = tagDomLock::LockInitialize((tagDomLock *)(v3 + 32));
        if ( (int)result >= 0 )
        {
          result = tagDomLock::LockInitialize((tagDomLock *)(v3 + 40));
          if ( (int)result >= 0 )
          {
            result = tagDomLock::LockInitialize((tagDomLock *)(v3 + 48));
            if ( (int)result >= 0 )
            {
              result = tagDomLock::LockInitialize((tagDomLock *)(v3 + 56));
              if ( (int)result >= 0 )
              {
                result = tagDomLock::LockInitialize((tagDomLock *)(v3 + 64));
                if ( (int)result >= 0 )
                {
                  result = tagDomLock::LockInitialize((tagDomLock *)(v3 + 72));
                  if ( (int)result >= 0 )
                  {
                    result = tagDomLock::LockInitialize((tagDomLock *)(v3 + 80));
                    if ( (int)result >= 0 )
                    {
                      result = tagDomLock::LockInitialize((tagDomLock *)(v3 + 88));
                      if ( (int)result >= 0 )
                      {
                        result = tagDomLock::LockInitialize((tagDomLock *)(v3 + 96));
                        if ( (int)result >= 0 )
                        {
                          result = tagDomLock::LockInitialize((tagDomLock *)(v3 + 104));
                          if ( (int)result >= 0 )
                          {
                            result = tagDomLock::LockInitialize((tagDomLock *)(v3 + 112));
                            if ( (int)result >= 0 )
                            {
                              result = tagDomLock::LockInitialize((tagDomLock *)(v3 + 128));
                              if ( (int)result >= 0 )
                              {
                                result = tagDomLock::LockInitialize((tagDomLock *)(v3 + 120));
                                if ( (int)result >= 0 )
                                {
                                  result = tagDomLock::LockInitialize((tagDomLock *)(v3 + 136));
                                  if ( (int)result >= 0 )
                                  {
                                    result = tagDomLock::LockInitialize((tagDomLock *)(v3 + 144));
                                    if ( (int)result >= 0 )
                                    {
                                      result = tagDomLock::LockInitialize((tagDomLock *)(v3 + 152));
                                      if ( (int)result >= 0 )
                                      {
                                        result = tagDomLock::LockInitialize((tagDomLock *)(v3 + 160));
                                        if ( (int)result >= 0 )
                                        {
                                          result = tagDomLock::LockInitialize((tagDomLock *)(v3 + 168));
                                          if ( (int)result >= 0 )
                                            return tagDomLock::LockInitialize((tagDomLock *)(v3 + 176));
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
