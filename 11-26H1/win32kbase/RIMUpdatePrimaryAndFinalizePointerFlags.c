/*
 * XREFs of RIMUpdatePrimaryAndFinalizePointerFlags @ 0x140073F9C
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x140072D40 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     RIMCmActiveContactsBeginNoButton @ 0x140072854 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMGetPointerInputType @ 0x140074390 (RIMGetPointerInputType.c)
 *     RIMCmActiveContactsNext @ 0x140074BA4 (RIMCmActiveContactsNext.c)
 *     RIMCmIsContactSuppressed @ 0x14007615C (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x14007B5D0 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMUpdatePrimaryDevice @ 0x14013B858 (RIMUpdatePrimaryDevice.c)
 *     RIMApiSetIsPointerInputTypeRedirected @ 0x14013B8B4 (RIMApiSetIsPointerInputTypeRedirected.c)
 *     rimFinalizePointerFlags @ 0x1401AF8AC (rimFinalizePointerFlags.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimIsPointerDevicePrimaryContactDown @ 0x14020DE50 (rimIsPointerDevicePrimaryContactDown.c)
 */

__int64 __fastcall RIMUpdatePrimaryAndFinalizePointerFlags(__int64 a1, __int64 a2)
{
  int v2; // r15d
  __int64 *v4; // rbp
  int v5; // r12d
  __int64 **v7; // rax
  int v8; // esi
  __int64 *v9; // xmm1_8
  _QWORD *v10; // r14
  __int64 result; // rax
  int v12; // edx
  __int64 *v13; // rbx
  _DWORD *v14; // rcx
  BOOL v15; // r14d
  unsigned int v16; // eax
  int IsPointerInputTypeRedirected; // eax
  __int64 v18; // rcx
  int v19; // r14d
  int v20; // edx
  _DWORD *v21; // rax
  int v22; // ecx
  int v23; // ebp
  __int64 v24; // rcx
  int v25; // ebx
  bool v26; // zf
  int IsContactDeliveringPointerData; // [rsp+28h] [rbp-70h]
  __int128 v28; // [rsp+30h] [rbp-68h] BYREF
  __int64 *v29; // [rsp+40h] [rbp-58h]
  __int64 *v30; // [rsp+48h] [rbp-50h] BYREF

  v2 = 0;
  IsContactDeliveringPointerData = 0;
  v4 = 0LL;
  v5 = 0;
  v7 = RIMCmActiveContactsBeginNoButton(&v30, a2);
  v8 = 1;
  v9 = v7[2];
  v28 = *(_OWORD *)v7;
  v29 = v9;
  while ( 1 )
  {
    v10 = (_QWORD *)(a2 + 1000);
    if ( !*(_DWORD *)(a2 + 1008) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 470LL);
    if ( !*v10 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 64LL);
    if ( !*(_DWORD *)(a2 + 1008) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 65LL);
    result = *(_QWORD *)(a2 + 1000) + 16LL * *(unsigned int *)(a2 + 1008);
    if ( DWORD2(v28) == *(_DWORD *)(a2 + 1008) && v29 == (__int64 *)result && (_QWORD *)v28 == v10 )
      break;
    v12 = *((_DWORD *)v29 + 667);
    v13 = v29 - 2;
    v14 = (_DWORD *)v29 + 607;
    if ( (v12 & 2) == 0 && (*v14 & 2) != 0 )
      v2 = 1;
    v15 = (v12 & 4) == 0 && (*v14 & 4) != 0;
    if ( (v13[4] & 2) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1777LL);
    if ( (v13[4] & 4) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1778LL);
    if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v13) )
      ++v5;
    if ( (*((_DWORD *)v13 + 591) & 1) != 0 )
    {
      if ( !*(_QWORD *)(a2 + 1024) && (v2 || v15) && !v4 && !(unsigned int)RIMCmIsContactSuppressed(v13) )
      {
        IsContactDeliveringPointerData = RIMCmIsContactDeliveringPointerData(v13);
        v4 = v13;
      }
      rimFinalizePointerFlags(a1, a2, v13);
    }
    RIMCmActiveContactsNext(a2, &v28);
    v2 = 0;
  }
  if ( v4 && (!v5 || v5 == 1 && IsContactDeliveringPointerData) )
  {
    if ( *(_QWORD *)(a2 + 1024) )
      result = MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1814LL);
    *((_DWORD *)v4 + 8) |= 8u;
    *((_DWORD *)v4 + 611) |= 0x4000000u;
    *(_QWORD *)(a2 + 1024) = v4;
  }
  if ( *(_QWORD *)(a2 + 1024) )
  {
    v16 = RIMGetPointerInputType(a2);
    IsPointerInputTypeRedirected = RIMApiSetIsPointerInputTypeRedirected(v16);
    v18 = *(_QWORD *)(a2 + 1024);
    v19 = IsPointerInputTypeRedirected;
    v20 = *(_DWORD *)(v18 + 2684);
    v21 = (_DWORD *)(v18 + 2444);
    if ( (v20 & 2) != 0 || (v22 = 1, (*v21 & 2) == 0) )
      v22 = 0;
    if ( (v20 & 4) != 0 || (v26 = (*v21 & 4) == 0, result = 1LL, v26) )
      result = 0LL;
    if ( v22 || (v23 = 0, (_DWORD)result) )
      v23 = 1;
    v24 = *(_QWORD *)(a1 + 480);
    if ( v24 )
    {
      v25 = RIMGetPointerInputType(v24);
      result = RIMGetPointerInputType(a2);
      if ( v25 == (_DWORD)result
        || (result = rimIsPointerDevicePrimaryContactDown(*(_QWORD *)(a1 + 480)), (_DWORD)result)
        || (result = rimIsPointerDevicePrimaryContactDown(a2), !(_DWORD)result) )
      {
        if ( !*(_DWORD *)(a1 + 488) || v19 )
          v8 = 0;
      }
    }
    if ( v23 && v8 )
    {
      *(_DWORD *)(*(_QWORD *)(a2 + 1024) + 2444LL) |= 0x2000u;
      return RIMUpdatePrimaryDevice(a1, a2);
    }
  }
  return result;
}
