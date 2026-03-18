/*
 * XREFs of SeQuerySigningPolicy @ 0x140A283BC
 * Callers:
 *     PspCreateProcess @ 0x140ADC7C0 (PspCreateProcess.c)
 *     NtCreateUserProcess @ 0x140B77FE0 (NtCreateUserProcess.c)
 * Callees:
 *     Feature_ID51912085__private_IsEnabledPreCheck @ 0x140494E80 (Feature_ID51912085__private_IsEnabledPreCheck.c)
 *     SepIsMinTCB @ 0x14091E9C8 (SepIsMinTCB.c)
 *     SepIsSystemAppTCB @ 0x140A28568 (SepIsSystemAppTCB.c)
 *     SeQuerySigningPolicyWorker @ 0x140A2A0A4 (SeQuerySigningPolicyWorker.c)
 *     SeCompareSigningLevels @ 0x140A88910 (SeCompareSigningLevels.c)
 */

__int64 __fastcall SeQuerySigningPolicy(
        int a1,
        const UNICODE_STRING *a2,
        unsigned int a3,
        unsigned __int8 a4,
        char *a5,
        char *a6,
        unsigned __int8 *a7)
{
  char AffinityVersion; // r14
  __int64 v11; // rdx
  int IsMinTCB; // ebp
  int IsSystemAppTCB; // eax
  int v14; // r9d
  __int64 v15; // rcx
  char v16; // bl
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx

  AffinityVersion = SeILSigningPolicy;
  if ( !SeILSigningPolicy )
    AffinityVersion = RtlpBootStatHandleLock.AffinityVersion;
  IsMinTCB = SepIsMinTCB(a2, a3, a4, AffinityVersion, a5, a6, a7);
  if ( IsMinTCB >= 0
    || (Feature_ID51912085__private_IsEnabledPreCheck(), IsMinTCB == -1073741275)
    && ((IsSystemAppTCB = SepIsSystemAppTCB(a2, (__int64)a5, (__int64)a6, (__int64)a7),
         IsMinTCB = IsSystemAppTCB,
         IsSystemAppTCB >= 0)
     || IsSystemAppTCB == -1073741275
     && (LOBYTE(v14) = a4,
         IsMinTCB = SeQuerySigningPolicyWorker(
                      a1,
                      (_DWORD)a2,
                      a3,
                      v14,
                      AffinityVersion,
                      (__int64)a5,
                      (__int64)a6,
                      (__int64)a7),
         IsMinTCB >= 0)) )
  {
    v15 = (*a7 & 7u) - 1;
    if ( (*a7 & 7) == 1 )
    {
      *a5 |= 0x30u;
    }
    else if ( (*a7 & 7) == 2 )
    {
      *a5 |= 0x10u;
      *a6 |= 0x10u;
    }
    if ( IsMinTCB >= 0 )
    {
      v16 = 8;
      if ( (*a5 & 0xF) != 8 )
      {
        LOBYTE(v11) = 8;
        LOBYTE(v15) = *a5;
        if ( (unsigned int)SeCompareSigningLevels(v15, v11) )
        {
          if ( (RtlpBootStatHandleLock.AffinityVersion & 0x400000000LL) != 0
            || (RtlpBootStatHandleLock.AffinityVersion & 0x200000000LL) != 0
            && (_BYTE)KdDebuggerEnabled
            && !(_BYTE)KdDebuggerNotPresent )
          {
            LOBYTE(v17) = 8;
            LOBYTE(v18) = AffinityVersion;
            if ( (unsigned int)SeCompareSigningLevels(v18, v17) || (*a7 & 7) == 0 )
            {
              LOBYTE(v20) = AffinityVersion;
              v16 = AffinityVersion & 0xF;
            }
            else
            {
              LOBYTE(v20) = 8;
            }
            *a5 = v16 | *a5 & 0x30;
            LOBYTE(v19) = *a6;
            if ( !(unsigned int)SeCompareSigningLevels(v20, v19) )
              *a6 = v16 | *a6 & 0x30;
          }
        }
      }
    }
  }
  return (unsigned int)IsMinTCB;
}
