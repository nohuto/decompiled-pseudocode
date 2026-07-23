/*
 * XREFs of SeQuerySigningPolicy @ 0x140A3B45C
 * Callers:
 *     PspCreateProcess @ 0x140AD9D10 (PspCreateProcess.c)
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 * Callees:
 *     Feature_ID51912085__private_IsEnabledPreCheck @ 0x14048E9D0 (Feature_ID51912085__private_IsEnabledPreCheck.c)
 *     SepIsMinTCB @ 0x140979428 (SepIsMinTCB.c)
 *     SepIsSystemAppTCB @ 0x140A3B608 (SepIsSystemAppTCB.c)
 *     SeQuerySigningPolicyWorker @ 0x140A3D144 (SeQuerySigningPolicyWorker.c)
 *     SeCompareSigningLevels @ 0x140A8FB90 (SeCompareSigningLevels.c)
 */

__int64 __fastcall SeQuerySigningPolicy(
        void *a1,
        const UNICODE_STRING *a2,
        unsigned int a3,
        unsigned __int8 a4,
        char *a5,
        char *a6,
        unsigned __int8 *a7)
{
  char Affinity; // r14
  __int64 v9; // rdx
  int IsMinTCB; // ebp
  int IsSystemAppTCB; // eax
  __int64 v12; // rcx
  char v13; // bl
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx

  Affinity = SeILSigningPolicy;
  if ( !SeILSigningPolicy )
    Affinity = (char)RtlpBootStatHandleLock.Affinity;
  IsMinTCB = SepIsMinTCB(a2, a3, a4, Affinity, a5, a6, a7);
  if ( IsMinTCB >= 0
    || (Feature_ID51912085__private_IsEnabledPreCheck(), IsMinTCB == -1073741275)
    && ((IsSystemAppTCB = SepIsSystemAppTCB(a2, (__int64)a5, (__int64)a6, (__int64)a7),
         IsMinTCB = IsSystemAppTCB,
         IsSystemAppTCB >= 0)
     || IsSystemAppTCB == -1073741275
     && (IsMinTCB = SeQuerySigningPolicyWorker(a1, Affinity, (__int64)a5, (__int64)a6, (__int64)a7), IsMinTCB >= 0)) )
  {
    v12 = (*a7 & 7u) - 1;
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
      v13 = 8;
      if ( (*a5 & 0xF) != 8 )
      {
        LOBYTE(v9) = 8;
        LOBYTE(v12) = *a5;
        if ( (unsigned int)SeCompareSigningLevels(v12, v9) )
        {
          if ( (BYTE4(RtlpBootStatHandleLock.Affinity) & 4) != 0
            || (BYTE4(RtlpBootStatHandleLock.Affinity) & 2) != 0
            && (_BYTE)KdDebuggerEnabled
            && !(_BYTE)KdDebuggerNotPresent )
          {
            LOBYTE(v14) = 8;
            LOBYTE(v15) = Affinity;
            if ( (unsigned int)SeCompareSigningLevels(v15, v14) || (*a7 & 7) == 0 )
            {
              LOBYTE(v17) = Affinity;
              v13 = Affinity & 0xF;
            }
            else
            {
              LOBYTE(v17) = 8;
            }
            *a5 = v13 | *a5 & 0x30;
            LOBYTE(v16) = *a6;
            if ( !(unsigned int)SeCompareSigningLevels(v17, v16) )
              *a6 = v13 | *a6 & 0x30;
          }
        }
      }
    }
  }
  return (unsigned int)IsMinTCB;
}
