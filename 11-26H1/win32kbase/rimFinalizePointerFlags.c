/*
 * XREFs of rimFinalizePointerFlags @ 0x1401AF8AC
 * Callers:
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x140073F9C (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 * Callees:
 *     RIMIsPenPointerDevice @ 0x14007611C (RIMIsPenPointerDevice.c)
 *     RIMCmIsContactSuppressed @ 0x14007615C (RIMCmIsContactSuppressed.c)
 *     RIMCmIsButtonContactActiveAndNotSuppressed @ 0x140077BAC (RIMCmIsButtonContactActiveAndNotSuppressed.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x14007B5D0 (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmGetButtonContact @ 0x1400FA6B8 (RIMCmGetButtonContact.c)
 *     RIMIsPointerUpTransition @ 0x14012C89C (RIMIsPointerUpTransition.c)
 *     RIMIsPointerDownTransition @ 0x14013770C (RIMIsPointerDownTransition.c)
 *     RIMCmShouldDeliverSuppressedContactEndState @ 0x14015DDE4 (RIMCmShouldDeliverSuppressedContactEndState.c)
 *     RIMCmIsSuppressedContactMarkedForDelivery @ 0x140163620 (RIMCmIsSuppressedContactMarkedForDelivery.c)
 *     rimPenButtonsPolicyApply @ 0x140171B78 (rimPenButtonsPolicyApply.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimFinalizePointerFlags(__int64 a1, __int64 a2, _DWORD *a3)
{
  int *v3; // rdi
  BOOL v7; // r14d
  char v8; // dl
  char v9; // cl
  BOOL v10; // esi
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  int *v15; // rdx
  int *v16; // r8
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // rax
  __int64 result; // rax
  int v21; // esi
  __int64 v22; // rcx

  v3 = a3 + 611;
  v7 = RIMIsPointerDownTransition(a3[671], a3[611]);
  v10 = RIMIsPointerUpTransition(v9, v8);
  if ( !(unsigned int)RIMCmIsContactDeliveringPointerData(v11)
    && (unsigned int)RIMCmIsContactSuppressed((__int64)a3)
    && (unsigned int)RIMCmIsSuppressedContactMarkedForDelivery((__int64)a3) )
  {
    if ( (unsigned int)RIMCmShouldDeliverSuppressedContactEndState(a2, (__int64)a3, v12, v13)
      || (v14 = 0x2000000, (*v3 & 0x1000000) == 0) )
    {
      v14 = 0;
    }
    *v3 = v14;
  }
  else
  {
    if ( (a3[591] & 4) != 0 )
    {
      *v3 &= ~0x2000000u;
      v15 = a3 + 611;
    }
    else
    {
      v15 = v3;
    }
    if ( (a3[2] & 0x10) != 0 )
    {
      v16 = v15;
    }
    else
    {
      v16 = a3 + 611;
      *v15 = *v3 | 0x4000;
      a3[8] |= 1u;
    }
    v17 = *v15;
    if ( v7 )
    {
      v18 = v17 | 0x10000;
    }
    else if ( v10 )
    {
      v18 = v17 | 0x40000;
    }
    else
    {
      v18 = v17 | 0x20000;
    }
    *v15 = v18;
    if ( (a3[8] & 8) != 0 )
    {
      *v16 = v18 | 0x4000000;
      v19 = *(_QWORD *)(a1 + 480);
      if ( v19 == a2 )
      {
        if ( *(_DWORD **)(v19 + 1024) != a3 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1675LL);
          v16 = a3 + 611;
        }
        *v16 |= 0x2000u;
      }
    }
  }
  result = (unsigned int)a3[8];
  if ( (result & 4) == 0 )
  {
    if ( (unsigned int)RIMCmIsButtonContactActiveAndNotSuppressed(a2) )
    {
      v21 = *(_DWORD *)(RIMCmGetButtonContact(a2) + 2444);
      if ( (v21 & 0x10) != 0 )
      {
        if ( (v21 & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1692LL);
        a3[611] |= 0x10u;
      }
      if ( (v21 & 0x20) != 0 )
      {
        if ( (v21 & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1697LL);
        a3[611] |= 0x20u;
      }
      if ( (v21 & 0x40) != 0 )
      {
        if ( (v21 & 4) == 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1702LL);
        a3[611] |= 0x40u;
      }
    }
    result = RIMIsPenPointerDevice(a2);
    if ( (_DWORD)result )
      result = rimPenButtonsPolicyApply(v22, (__int64)a3);
  }
  a3[611] &= ~0x1000000u;
  return result;
}
