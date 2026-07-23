/*
 * XREFs of ExpNtDeleteWnfStateData @ 0x1408454E8
 * Callers:
 *     ExWnfCrossVmCallback @ 0x140845490 (ExWnfCrossVmCallback.c)
 *     NtDeleteWnfStateData @ 0x1408458E0 (NtDeleteWnfStateData.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExpWnfDeletePermanentStateData @ 0x14084D268 (ExpWnfDeletePermanentStateData.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1409C3F78 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpWnfDeleteStateData @ 0x1409C4458 (ExpWnfDeleteStateData.c)
 *     ExpWnfCheckCallerAccess @ 0x1409C450C (ExpWnfCheckCallerAccess.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1409C4A4C (ExpWnfCheckCrossScopeAccess.c)
 *     ExpCaptureWnfStateName @ 0x1409C58F8 (ExpCaptureWnfStateName.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1409C59E0 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfResolveScopeInstance @ 0x1409C6D00 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfLookupNameInstance @ 0x1409C7310 (ExpWnfLookupNameInstance.c)
 *     ExpWnfLookupPermanentName @ 0x1409C8E98 (ExpWnfLookupPermanentName.c)
 *     ExpExposeWnfStateName @ 0x1409CB444 (ExpExposeWnfStateName.c)
 *     ExpCrossVmWnfPush @ 0x140AD1704 (ExpCrossVmWnfPush.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpNtDeleteWnfStateData(void *a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r15
  int v6; // esi
  __int64 v7; // r8
  int v8; // r13d
  PEPROCESS v9; // rax
  int v10; // eax
  __int64 v11; // r8
  int v13[2]; // [rsp+38h] [rbp-A0h]
  struct _EX_RUNDOWN_REF *v14; // [rsp+48h] [rbp-90h] BYREF
  int v15[2]; // [rsp+50h] [rbp-88h] BYREF
  PVOID P; // [rsp+60h] [rbp-78h] BYREF
  void *Buf1; // [rsp+68h] [rbp-70h] BYREF
  int v18[2]; // [rsp+70h] [rbp-68h]
  int v19; // [rsp+78h] [rbp-60h]
  __int128 v20; // [rsp+80h] [rbp-58h] BYREF
  __int64 v21; // [rsp+90h] [rbp-48h]
  __int64 v22; // [rsp+98h] [rbp-40h]

  LODWORD(v22) = a3;
  Buf1 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v15 = 0LL;
  v14 = 0LL;
  v20 = 0LL;
  v6 = ExpCaptureWnfStateName(a1);
  if ( v6 >= 0 )
  {
    v21 = 0LL;
    v19 = 0;
    LOBYTE(v7) = PreviousMode;
    v6 = ExpWnfCaptureScopeInstanceId(0LL, a2, v7, &Buf1, &v20);
    if ( v6 >= 0 )
    {
      if ( PreviousMode )
      {
        v8 = 0;
        if ( a2 )
        {
          v6 = ExpWnfCheckCrossScopeAccess(0LL);
          if ( v6 < 0 )
            goto LABEL_24;
        }
      }
      else
      {
        v8 = 1;
      }
      if ( PreviousMode )
      {
        *(_QWORD *)v18 = KeGetCurrentThread();
        v9 = *(PEPROCESS *)(*(_QWORD *)v18 + 184LL);
      }
      else
      {
        *(_QWORD *)v18 = 0LL;
        v9 = PsInitialSystemProcess;
      }
      *(_QWORD *)v13 = v9;
      v6 = ExpWnfResolveScopeInstance((int)v15, (int)v9, v18[0], 0, Buf1);
      if ( v6 >= 0 )
      {
        v10 = ExpWnfLookupNameInstance(*(_QWORD *)v15, 0LL, &v14);
        v6 = v10;
        if ( v10 != -1073741772 || (_DWORD)v21 == 3 )
        {
          if ( v10 >= 0 )
          {
            if ( v8 || (v6 = ExpWnfCheckCallerAccess(v14[9].Ptr, 2u), v6 >= 0) )
            {
              if ( (_DWORD)v21 != 3 || v14[19].Count == *(_QWORD *)v13 )
              {
                ExpWnfDeleteStateData(v14);
LABEL_16:
                v6 = 0;
                goto LABEL_24;
              }
              v6 = -1073741790;
            }
          }
        }
        else
        {
          v6 = ExpWnfLookupPermanentName(0LL, &P);
          if ( v6 >= 0 )
          {
            if ( v8 )
              goto LABEL_16;
            v6 = ExpWnfCheckCallerAccess(*((PSECURITY_DESCRIPTOR *)P + 2), 2u);
            if ( v6 >= 0 )
              goto LABEL_16;
          }
        }
      }
    }
  }
LABEL_24:
  if ( v14 )
    ExReleaseRundownProtection_0(v14 + 1);
  if ( *(_QWORD *)v15 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v15 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegion();
  LOBYTE(v11) = PreviousMode;
  ExpWnfReleaseCapturedScopeInstanceId(0LL, &v20, v11);
  return (unsigned int)v6;
}
