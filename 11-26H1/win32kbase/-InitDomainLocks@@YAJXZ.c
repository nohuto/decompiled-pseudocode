/*
 * XREFs of ?InitDomainLocks@@YAJXZ @ 0x140172DB8
 * Callers:
 *     InitCreateUserCrit @ 0x1402F1D28 (InitCreateUserCrit.c)
 * Callees:
 *     ?LockInitialize@tagDomLock@@QEBAJXZ @ 0x140172FE0 (-LockInitialize@tagDomLock@@QEBAJXZ.c)
 */

__int64 __fastcall InitDomainLocks(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rbx
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  *(_QWORD *)(UserSessionState + 42480) = 0LL;
  *(_QWORD *)(UserSessionState + 42488) = 0LL;
  *(_DWORD *)(UserSessionState + 42496) = 0;
  *(_QWORD *)(UserSessionState + 42504) = 0LL;
  *(_QWORD *)(UserSessionState + 42512) = 0LL;
  *(_DWORD *)(UserSessionState + 42520) = 0;
  *(_QWORD *)(UserSessionState + 42528) = 0LL;
  *(_QWORD *)(UserSessionState + 42536) = 0LL;
  *(_DWORD *)(UserSessionState + 42544) = 0;
  *(_QWORD *)(UserSessionState + 42552) = 0LL;
  result = tagDomLock::LockInitialize((tagDomLock *)(UserSessionState + 42296));
  if ( (int)result >= 0 )
  {
    result = tagDomLock::LockInitialize((tagDomLock *)(UserSessionState + 42304));
    if ( (int)result >= 0 )
    {
      result = tagDomLock::LockInitialize((tagDomLock *)(UserSessionState + 42312));
      if ( (int)result >= 0 )
      {
        result = tagDomLock::LockInitialize((tagDomLock *)(UserSessionState + 42328));
        if ( (int)result >= 0 )
        {
          result = tagDomLock::LockInitialize((tagDomLock *)(UserSessionState + 42336));
          if ( (int)result >= 0 )
          {
            result = tagDomLock::LockInitialize((tagDomLock *)(UserSessionState + 42344));
            if ( (int)result >= 0 )
            {
              result = tagDomLock::LockInitialize((tagDomLock *)(UserSessionState + 42352));
              if ( (int)result >= 0 )
              {
                result = tagDomLock::LockInitialize((tagDomLock *)(UserSessionState + 42360));
                if ( (int)result >= 0 )
                {
                  result = tagDomLock::LockInitialize((tagDomLock *)(UserSessionState + 42368));
                  if ( (int)result >= 0 )
                  {
                    result = tagDomLock::LockInitialize((tagDomLock *)(UserSessionState + 42376));
                    if ( (int)result >= 0 )
                    {
                      result = tagDomLock::LockInitialize((tagDomLock *)(UserSessionState + 42384));
                      if ( (int)result >= 0 )
                      {
                        result = tagDomLock::LockInitialize((tagDomLock *)(UserSessionState + 42392));
                        if ( (int)result >= 0 )
                        {
                          result = tagDomLock::LockInitialize((tagDomLock *)(UserSessionState + 42400));
                          if ( (int)result >= 0 )
                          {
                            result = tagDomLock::LockInitialize((tagDomLock *)(UserSessionState + 42408));
                            if ( (int)result >= 0 )
                            {
                              result = tagDomLock::LockInitialize((tagDomLock *)(UserSessionState + 42424));
                              if ( (int)result >= 0 )
                              {
                                result = tagDomLock::LockInitialize((tagDomLock *)(UserSessionState + 42416));
                                if ( (int)result >= 0 )
                                {
                                  result = tagDomLock::LockInitialize((tagDomLock *)(UserSessionState + 42432));
                                  if ( (int)result >= 0 )
                                  {
                                    result = tagDomLock::LockInitialize((tagDomLock *)(UserSessionState + 42440));
                                    if ( (int)result >= 0 )
                                    {
                                      result = tagDomLock::LockInitialize((tagDomLock *)(UserSessionState + 42448));
                                      if ( (int)result >= 0 )
                                      {
                                        result = tagDomLock::LockInitialize((tagDomLock *)(UserSessionState + 42456));
                                        if ( (int)result >= 0 )
                                        {
                                          result = tagDomLock::LockInitialize((tagDomLock *)(UserSessionState + 42464));
                                          if ( (int)result >= 0 )
                                            return tagDomLock::LockInitialize((tagDomLock *)(UserSessionState + 42472));
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
