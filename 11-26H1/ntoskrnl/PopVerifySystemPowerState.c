/*
 * XREFs of PopVerifySystemPowerState @ 0x140B268C4
 * Callers:
 *     PopActionRetrieveInitialState @ 0x1404E99E4 (PopActionRetrieveInitialState.c)
 *     PdcPoVerifyPowerState @ 0x1407DF7E0 (PdcPoVerifyPowerState.c)
 *     PopVerifySystemPowerPolicy @ 0x1409BFC64 (PopVerifySystemPowerPolicy.c)
 *     PopExecutePowerAction @ 0x1409F3918 (PopExecutePowerAction.c)
 *     PopAdvanceSystemPowerState @ 0x140B584D4 (PopAdvanceSystemPowerState.c)
 * Callees:
 *     PopIsHiberbootSupported @ 0x140779C04 (PopIsHiberbootSupported.c)
 *     PopIsHibernateSupported @ 0x140B30758 (PopIsHibernateSupported.c)
 */

void __fastcall PopVerifySystemPowerState(int *a1, unsigned int a2)
{
  unsigned int v2; // r10d
  int *v3; // r11
  int v4; // r9d
  int v5; // r8d
  char v6; // al

  v2 = a2;
  v3 = a1;
  if ( a1 )
  {
    v4 = *a1;
    v5 = *a1;
    if ( *a1 )
    {
      if ( v4 < 6 && v4 != 1 )
      {
        if ( a2 > 1 )
        {
          if ( a2 != 2 )
            goto LABEL_9;
          v6 = 1;
          if ( v5 != 2 )
          {
            if ( v5 != 3 )
            {
              if ( v5 != 4 )
              {
                if ( v5 != 5 )
                  goto LABEL_9;
LABEL_34:
                if ( !v6
                  || !PopIsHiberbootSupported((__int64)&PpmIdlePolicyLock.Padding[1])
                  && !(unsigned __int8)PopIsHibernateSupported(&PpmIdlePolicyLock.Padding[1]) )
                {
                  v4 = 1;
                }
                goto LABEL_9;
              }
LABEL_33:
              if ( BYTE5(PpmIdlePolicyLock.Padding[1]) )
                goto LABEL_9;
              goto LABEL_34;
            }
LABEL_31:
            if ( BYTE4(PpmIdlePolicyLock.Padding[1]) )
              goto LABEL_9;
            v4 = 4;
            goto LABEL_33;
          }
LABEL_29:
          if ( BYTE3(PpmIdlePolicyLock.Padding[1]) )
            goto LABEL_9;
          v4 = 3;
          goto LABEL_31;
        }
        if ( v4 == 5 )
        {
          if ( PopIsHiberbootSupported((__int64)&PpmIdlePolicyLock.Padding[1])
            || (unsigned __int8)PopIsHibernateSupported(&PpmIdlePolicyLock.Padding[1]) )
          {
            goto LABEL_9;
          }
          v4 = 4;
        }
        else if ( v5 != 4 )
        {
          if ( v5 != 3 )
          {
            if ( v5 != 2 )
              goto LABEL_9;
            goto LABEL_26;
          }
LABEL_24:
          if ( BYTE4(PpmIdlePolicyLock.Padding[1]) )
            goto LABEL_9;
          v4 = 2;
LABEL_26:
          if ( BYTE3(PpmIdlePolicyLock.Padding[1]) )
            goto LABEL_9;
          v4 = 1;
          if ( v2 != 1 )
            goto LABEL_9;
          v6 = 0;
          v4 = 2;
          goto LABEL_29;
        }
        if ( BYTE5(PpmIdlePolicyLock.Padding[1]) )
        {
LABEL_9:
          *v3 = v4;
          return;
        }
        v4 = 3;
        goto LABEL_24;
      }
    }
  }
}
