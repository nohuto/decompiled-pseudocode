/*
 * XREFs of KyRaiseException @ 0x1403D3E8C
 * Callers:
 *     KiRaiseException @ 0x1403D3C10 (KiRaiseException.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     RtlpValidateContextXStateDisabledFeatures @ 0x1403D3D48 (RtlpValidateContextXStateDisabledFeatures.c)
 *     RtlpSanitizeContextFlags @ 0x1403D3D90 (RtlpSanitizeContextFlags.c)
 *     RtlInitializeExtendedContext @ 0x1403D5E20 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1403D6A40 (RtlGetExtendedContextLength.c)
 *     KeVerifyContextXStateCetU @ 0x1403D6C44 (KeVerifyContextXStateCetU.c)
 *     KeVerifyContextRecord @ 0x1403D7370 (KeVerifyContextRecord.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeContextToKframes @ 0x140533AE0 (KeContextToKframes.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140731080 (_alloca_probe.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlpReadExtendedContext @ 0x1409EE360 (RtlpReadExtendedContext.c)
 */

__int64 __fastcall KyRaiseException(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  char PreviousMode; // r14
  __int64 result; // rax
  unsigned int v9; // edi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  void *v12; // rsp
  void *v13; // rsp
  int v14; // ecx
  __int64 v15; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  int v17; // r15d
  unsigned __int8 CurrentIrql; // di
  __int64 v19; // rcx
  int v20; // esi
  __int64 v21; // [rsp+20h] [rbp-10h]
  __int64 v22; // [rsp+20h] [rbp-10h]
  unsigned int ULongFromUser; // [rsp+30h] [rbp+0h] BYREF
  unsigned int v24; // [rsp+34h] [rbp+4h] BYREF
  __int64 v25; // [rsp+38h] [rbp+8h] BYREF
  __int64 v26; // [rsp+48h] [rbp+18h]
  __int128 v27; // [rsp+50h] [rbp+20h] BYREF
  __int64 v28; // [rsp+60h] [rbp+30h]

  v26 = a3;
  v5 = a2;
  v25 = 0LL;
  v24 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
    goto LABEL_9;
  ULongFromUser = RtlReadULongFromUser(a2 + 48);
  result = RtlpSanitizeContextFlags(&ULongFromUser, PreviousMode);
  if ( (int)result >= 0 )
  {
    v9 = ULongFromUser;
    result = RtlGetExtendedContextLength(ULongFromUser, &v24);
    if ( (int)result >= 0 )
    {
      v10 = v24 + 15LL;
      if ( v10 <= v24 )
        v10 = 0xFFFFFFFFFFFFFF0LL;
      v11 = v10 & 0xFFFFFFFFFFFFFFF0uLL;
      v12 = alloca(v11);
      v13 = alloca(v11);
      result = RtlInitializeExtendedContext(&ULongFromUser, v9, &v25);
      if ( (int)result >= 0 )
      {
        v22 = v5;
        v15 = v25;
        result = RtlpReadExtendedContext(v14, 2, v25, v9, v22, 0LL);
        if ( (int)result >= 0 )
        {
          v5 = v15 - 1232;
LABEL_9:
          CurrentThread = KeGetCurrentThread();
          v17 = 1;
          CurrentIrql = KeGetCurrentIrql();
          if ( !CurrentIrql )
          {
            v19 = KeGetCurrentIrql();
            if ( (_BYTE)v19 != 1 )
              __writecr8(1uLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(a2) = 1;
              KiRaiseIrqlProcessIrqlFlags(v19, a2);
            }
          }
          if ( PreviousMode )
          {
            if ( (CurrentThread->MiscFlags & 0x100000) != 0 )
            {
              v25 = 0LL;
              if ( (int)KeVerifyContextXStateCetU(CurrentThread, v5, &v25) < 0
                || (v27 = 0LL, v28 = 0LL, (int)KeVerifyContextRecord(CurrentThread, v5, &v27, &v25) < 0) )
              {
                *(_DWORD *)(a1 + 4) |= 1u;
                v17 = 0;
              }
            }
          }
          v20 = RtlpValidateContextXStateDisabledFeatures(v5, CurrentThread->ExtendedFeatureDisableMask);
          if ( v20 >= 0 )
          {
            *(_BYTE *)(a4 + 43) = 1;
            v20 = 0;
            if ( v17 )
            {
              LOBYTE(v21) = PreviousMode;
              KeContextToKframes(a4, v26, v5, *(_DWORD *)(v5 + 48), v21);
            }
          }
          if ( !CurrentIrql )
          {
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0);
            __writecr8(0LL);
          }
          return (unsigned int)v20;
        }
      }
    }
  }
  return result;
}
