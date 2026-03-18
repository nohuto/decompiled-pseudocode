/*
 * XREFs of RIMUpdatePrimaryAndFinalizePointerFlags @ 0x140183FB4
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1400315B8 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     RIMCmActiveContactsBeginNoButton @ 0x1400327B0 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x140032834 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1400328EC (RIMCmActiveContactsNext.c)
 *     ??9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z @ 0x1400CDA28 (--9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z.c)
 *     RIMUpdatePrimaryDevice @ 0x1400D94CC (RIMUpdatePrimaryDevice.c)
 *     RIMCmIsContactSuppressed @ 0x1400D976C (RIMCmIsContactSuppressed.c)
 *     RIMGetPointerInputType @ 0x1400D98BC (RIMGetPointerInputType.c)
 *     RIMApiSetIsPointerInputTypeRedirected @ 0x1400D9BF0 (RIMApiSetIsPointerInputTypeRedirected.c)
 *     rimFinalizePointerFlags @ 0x140184A6C (rimFinalizePointerFlags.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x140185984 (RIMCmIsContactDeliveringPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimIsPointerDevicePrimaryContactDown @ 0x1401F1E74 (rimIsPointerDevicePrimaryContactDown.c)
 */

char __fastcall RIMUpdatePrimaryAndFinalizePointerFlags(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  int v4; // r12d
  __int64 active; // rax
  __int64 v7; // xmm1_8
  int IsPointerDevicePrimaryContactDown; // eax
  int v9; // esi
  __int64 v10; // rbx
  int v11; // edx
  _DWORD *v12; // rcx
  int v13; // r15d
  unsigned int v14; // eax
  __int64 v15; // rdx
  int IsPointerInputTypeRedirected; // eax
  __int64 v17; // rcx
  int v18; // r15d
  int v19; // edx
  _DWORD *v20; // rax
  int v21; // ecx
  bool v22; // zf
  int v23; // r14d
  __int64 v24; // rcx
  int v25; // ebx
  int IsContactDeliveringPointerData; // [rsp+20h] [rbp-50h]
  __int128 v28; // [rsp+28h] [rbp-48h] BYREF
  __int64 v29; // [rsp+38h] [rbp-38h]
  __int128 v30; // [rsp+40h] [rbp-30h] BYREF
  __int64 v31; // [rsp+50h] [rbp-20h]
  __int128 v32; // [rsp+58h] [rbp-18h] BYREF
  __int64 v33; // [rsp+68h] [rbp-8h]
  BOOL v34; // [rsp+C8h] [rbp+58h]

  IsContactDeliveringPointerData = 0;
  v3 = 0LL;
  v4 = 0;
  active = RIMCmActiveContactsBeginNoButton((__int64)&v30, a2);
  v7 = *(_QWORD *)(active + 16);
  v32 = *(_OWORD *)active;
  v33 = v7;
  RIMCmActiveContactsEnd((__int64)&v28, a2);
  v30 = v28;
  v31 = v29;
  LOBYTE(IsPointerDevicePrimaryContactDown) = tagLIST_TABLE_ITERATOR::operator!=((__int64)&v32, (__int64)&v30);
  v9 = 1;
  if ( (_BYTE)IsPointerDevicePrimaryContactDown )
  {
    do
    {
      v10 = v33 - 16;
      v11 = *(_DWORD *)(v33 - 16 + 2684);
      v12 = (_DWORD *)(v33 - 16 + 2444);
      v34 = (v11 & 2) == 0 && (*v12 & 2) != 0;
      if ( (v11 & 4) != 0 || (v13 = 1, (*v12 & 4) == 0) )
        v13 = 0;
      if ( (*(_DWORD *)(v10 + 32) & 2) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1785LL);
      if ( (*(_DWORD *)(v10 + 32) & 4) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1786LL);
      if ( (unsigned int)RIMCmIsContactDeliveringPointerData(v10) )
        ++v4;
      if ( (*(_DWORD *)(v10 + 2364) & 1) != 0 )
      {
        if ( !*(_QWORD *)(a2 + 1024) && (v34 || v13) && !v3 && !(unsigned int)RIMCmIsContactSuppressed(v10) )
        {
          IsContactDeliveringPointerData = RIMCmIsContactDeliveringPointerData(v10);
          v3 = v10;
        }
        rimFinalizePointerFlags(a1, a2, v10);
      }
      RIMCmActiveContactsNext(a2, &v32);
      RIMCmActiveContactsEnd((__int64)&v28, a2);
      v30 = v28;
      v31 = v29;
      LOBYTE(IsPointerDevicePrimaryContactDown) = tagLIST_TABLE_ITERATOR::operator!=((__int64)&v32, (__int64)&v30);
    }
    while ( (_BYTE)IsPointerDevicePrimaryContactDown );
    if ( v3 && (!v4 || v4 == 1 && IsContactDeliveringPointerData) )
    {
      if ( *(_QWORD *)(a2 + 1024) )
        LOBYTE(IsPointerDevicePrimaryContactDown) = MicrosoftTelemetryAssertTriggeredArgsKM(
                                                      "IXPTelAssert",
                                                      0x20000LL,
                                                      1822LL);
      *(_DWORD *)(v3 + 32) |= 8u;
      *(_DWORD *)(v3 + 2444) |= 0x4000000u;
      *(_QWORD *)(a2 + 1024) = v3;
    }
  }
  if ( *(_QWORD *)(a2 + 1024) )
  {
    v14 = RIMGetPointerInputType(a2);
    IsPointerInputTypeRedirected = RIMApiSetIsPointerInputTypeRedirected(v14, v15);
    v17 = *(_QWORD *)(a2 + 1024);
    v18 = IsPointerInputTypeRedirected;
    v19 = *(_DWORD *)(v17 + 2684);
    v20 = (_DWORD *)(v17 + 2444);
    if ( (v19 & 2) != 0 || (v21 = 1, (*v20 & 2) == 0) )
      v21 = 0;
    if ( (v19 & 4) != 0 || (v22 = (*v20 & 4) == 0, IsPointerDevicePrimaryContactDown = 1, v22) )
      IsPointerDevicePrimaryContactDown = 0;
    if ( v21 || (v23 = 0, IsPointerDevicePrimaryContactDown) )
      v23 = 1;
    v24 = *(_QWORD *)(a1 + 480);
    if ( v24 )
    {
      v25 = RIMGetPointerInputType(v24);
      IsPointerDevicePrimaryContactDown = RIMGetPointerInputType(a2);
      if ( (v25 == IsPointerDevicePrimaryContactDown
         || (IsPointerDevicePrimaryContactDown = rimIsPointerDevicePrimaryContactDown(*(_QWORD *)(a1 + 480))) != 0
         || (IsPointerDevicePrimaryContactDown = rimIsPointerDevicePrimaryContactDown(a2)) == 0)
        && (!*(_DWORD *)(a1 + 488) || v18) )
      {
        v9 = 0;
      }
    }
    if ( v23 && v9 )
    {
      *(_DWORD *)(*(_QWORD *)(a2 + 1024) + 2444LL) |= 0x2000u;
      LOBYTE(IsPointerDevicePrimaryContactDown) = RIMUpdatePrimaryDevice(a1, a2);
    }
  }
  return IsPointerDevicePrimaryContactDown;
}
