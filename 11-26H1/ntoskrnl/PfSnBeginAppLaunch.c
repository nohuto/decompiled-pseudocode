/*
 * XREFs of PfSnBeginAppLaunch @ 0x1409D1320
 * Callers:
 *     PfSnAppLaunchScenarioControl @ 0x1407CA320 (PfSnAppLaunchScenarioControl.c)
 *     PfProcessCreateNotification @ 0x1409D1270 (PfProcessCreateNotification.c)
 * Callees:
 *     PfLockSharedAcquire @ 0x1404ABEA0 (PfLockSharedAcquire.c)
 *     PfLockSharedRelease @ 0x1404AE4B4 (PfLockSharedRelease.c)
 *     PfSnGetAppVersion @ 0x1404CFF74 (PfSnGetAppVersion.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PfSnCheckScenario @ 0x1409D163C (PfSnCheckScenario.c)
 *     PfSnBeginScenario @ 0x1409D16A0 (PfSnBeginScenario.c)
 *     PfSnLogScenarioDecision @ 0x1409D199C (PfSnLogScenarioDecision.c)
 *     PfSnAltProfileFindByScenarioId @ 0x1409D2894 (PfSnAltProfileFindByScenarioId.c)
 *     PfCalculateProcessHash @ 0x1409D2980 (PfCalculateProcessHash.c)
 *     PfSnScanCommandLine @ 0x1409D320C (PfSnScanCommandLine.c)
 *     PfSnIsHostingApplication @ 0x1409D33F0 (PfSnIsHostingApplication.c)
 *     PfSnCheckModernApp @ 0x1409D34B4 (PfSnCheckModernApp.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnBeginAppLaunch(ULONG_PTR a1, unsigned __int16 *a2, int a3)
{
  void *v6; // rdi
  int v7; // r14d
  int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned int v12; // r8d
  _WORD *v13; // rax
  const void *v14; // rdx
  __int64 v15; // rbx
  int v16; // r12d
  unsigned __int8 IsHostingApplication; // al
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // r8
  struct _KLOCK_ENTRIES *v21; // r9
  __int64 v22; // rax
  unsigned __int16 *v24; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v27; // [rsp+50h] [rbp-B0h] BYREF
  int v28; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v29; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v31; // [rsp+68h] [rbp-98h] BYREF
  wchar_t SubStr[8]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v33; // [rsp+90h] [rbp-70h]
  __int128 v34; // [rsp+A0h] [rbp-60h]
  __int128 v35; // [rsp+B0h] [rbp-50h]
  wchar_t Str2[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v37; // [rsp+D0h] [rbp-30h]
  __int128 v38; // [rsp+E0h] [rbp-20h]
  __int128 v39; // [rsp+F0h] [rbp-10h]
  unsigned int v40; // [rsp+100h] [rbp+0h]
  _BYTE v41[256]; // [rsp+110h] [rbp+10h] BYREF

  v28 = 0;
  v27 = 0;
  v25 = 0;
  v26 = 0;
  v31 = 0LL;
  memset_0(Str2, 0, 0x44uLL);
  v24 = 0LL;
  v6 = 0LL;
  memset_0(SubStr, 0, 0x40uLL);
  v7 = 0;
  v8 = PfSnCheckScenario(0LL, &v28);
  if ( v8 < 0 )
    goto LABEL_26;
  if ( !a2 )
  {
    v9 = PfCalculateProcessHash(a1, &v24);
    v6 = v24;
    v8 = v9;
    if ( v9 < 0 )
    {
LABEL_26:
      PfSnLogScenarioDecision(a1, 15, 15, v8, -1LL);
      goto LABEL_22;
    }
    a2 = v24;
  }
  v10 = 0LL;
  v11 = *((_QWORD *)a2 + 1);
  v12 = *a2 >> 1;
  v29 = 256LL;
  LODWORD(v24) = 0;
  v13 = (_WORD *)(v11 + 2 * (v12 - 1LL));
  if ( (unsigned __int64)v13 < v11 )
    goto LABEL_25;
  do
  {
    if ( *v13 == 92 )
      break;
    v10 = (unsigned int)(v10 + 1);
    --v13;
  }
  while ( (unsigned __int64)v13 >= v11 );
  if ( !(_DWORD)v10 || (v14 = (const void *)(v11 + 2LL * (v12 - (unsigned int)v10))) == 0LL )
  {
LABEL_25:
    v8 = -1073741811;
    goto LABEL_26;
  }
  if ( (unsigned int)v10 >= 0x1D )
    v10 = 29LL;
  v15 = v10;
  memmove(SubStr, v14, 2 * v10);
  SubStr[v15] = 0;
  v16 = *(_DWORD *)(a1 + 900);
  IsHostingApplication = PfSnIsHostingApplication(SubStr);
  v8 = PfSnScanCommandLine(&v25, &v27, IsHostingApplication);
  if ( v8 < 0 )
    goto LABEL_26;
  v8 = PfSnCheckModernApp(&v24, &v26, v41, &v29);
  if ( v8 < 0 )
    goto LABEL_26;
  if ( (_DWORD)v24 )
  {
    v7 = 8;
    *((_QWORD *)&v31 + 1) = v41;
    LOWORD(v31) = v29;
    WORD1(v31) = v29;
  }
  else
  {
    v31 = *(_OWORD *)a2;
  }
  v18 = v27;
  HIDWORD(v35) = v16 + v25 + v26;
  v30 = 0LL;
  v29 = v27;
  PfSnGetAppVersion(a1, (__int64)&v30);
  *(_OWORD *)Str2 = *(_OWORD *)SubStr;
  v37 = v33;
  v38 = v34;
  v39 = v35;
  v40 = v18;
  PfLockSharedAcquire((volatile signed __int64 *)&stru_140E67200.WaitBlock[1].Thread, v19, v20, v21);
  v22 = PfSnAltProfileFindByScenarioId(Str2);
  if ( v22 )
  {
    HIDWORD(v35) += *(_DWORD *)(v22 + 124);
    HIDWORD(v29) = *(_DWORD *)(v22 + 124);
  }
  else
  {
    HIDWORD(v35) += v18;
  }
  PfLockSharedRelease((struct _KTHREAD *)&stru_140E67200.WaitBlockFill11[72]);
  HIDWORD(v35) += a3;
  if ( (stru_140E67200.WaitBlockFill5[32] & 0x20) != 0 || v28 == 2 )
    v7 |= 2u;
  v8 = PfSnBeginScenario(a1, (unsigned int)SubStr, 0, v7, (__int64)&v31, (__int64)&v29);
  if ( v8 >= 0 )
    v8 = 0;
LABEL_22:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v8;
}
