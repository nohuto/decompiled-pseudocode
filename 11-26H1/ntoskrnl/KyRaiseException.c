/*
 * XREFs of KyRaiseException @ 0x1403D6E5C
 * Callers:
 *     KiRaiseException @ 0x1403D6BE0 (KiRaiseException.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     RtlpValidateContextXStateDisabledFeatures @ 0x1403D6D18 (RtlpValidateContextXStateDisabledFeatures.c)
 *     RtlpSanitizeContextFlags @ 0x1403D6D60 (RtlpSanitizeContextFlags.c)
 *     RtlInitializeExtendedContext @ 0x1403D8DF0 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1403D9A10 (RtlGetExtendedContextLength.c)
 *     KeVerifyContextXStateCetU @ 0x1403D9C14 (KeVerifyContextXStateCetU.c)
 *     KeVerifyContextRecord @ 0x1403DA340 (KeVerifyContextRecord.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeContextToKframes @ 0x140535F60 (KeContextToKframes.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140735C50 (_alloca_probe.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlpReadExtendedContext @ 0x1409EAB30 (RtlpReadExtendedContext.c)
 */

int __fastcall KyRaiseException(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 p_XState; // rbx
  char PreviousMode; // r14
  int result; // eax
  ULONG v9; // edi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  void *v12; // rsp
  void *v13; // rsp
  int v14; // ecx
  PCONTEXT_EX v15; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  int v17; // r15d
  unsigned __int8 CurrentIrql; // di
  __int64 v19; // rcx
  int v20; // esi
  __int64 v21; // [rsp+20h] [rbp-10h]
  __int64 v22; // [rsp+20h] [rbp-10h]
  ULONG ContextFlags; // [rsp+30h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+34h] [rbp+4h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+38h] [rbp+8h] BYREF
  __int64 v26; // [rsp+48h] [rbp+18h]
  __int128 v27; // [rsp+50h] [rbp+20h] BYREF
  __int64 v28; // [rsp+60h] [rbp+30h]

  v26 = a3;
  p_XState = a2;
  ContextEx = 0LL;
  ContextLength = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
    goto LABEL_9;
  ContextFlags = RtlReadULongFromUser(a2 + 48);
  result = RtlpSanitizeContextFlags(&ContextFlags, PreviousMode);
  if ( result >= 0 )
  {
    v9 = ContextFlags;
    result = RtlGetExtendedContextLength(ContextFlags, &ContextLength);
    if ( result >= 0 )
    {
      v10 = ContextLength + 15LL;
      if ( v10 <= ContextLength )
        v10 = 0xFFFFFFFFFFFFFF0LL;
      v11 = v10 & 0xFFFFFFFFFFFFFFF0uLL;
      v12 = alloca(v11);
      v13 = alloca(v11);
      result = RtlInitializeExtendedContext((PCONTEXT)&ContextFlags, v9, &ContextEx);
      if ( result >= 0 )
      {
        v22 = p_XState;
        v15 = ContextEx;
        result = RtlpReadExtendedContext(v14, 2, (_DWORD)ContextEx, v9, v22, 0LL);
        if ( result >= 0 )
        {
          p_XState = (__int64)&v15[-39].XState;
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
              ContextEx = 0LL;
              if ( (int)KeVerifyContextXStateCetU(CurrentThread, p_XState, &ContextEx) < 0
                || (v27 = 0LL, v28 = 0LL, (int)KeVerifyContextRecord(CurrentThread, p_XState, &v27, &ContextEx) < 0) )
              {
                *(_DWORD *)(a1 + 4) |= 1u;
                v17 = 0;
              }
            }
          }
          v20 = RtlpValidateContextXStateDisabledFeatures(p_XState, CurrentThread->ExtendedFeatureDisableMask);
          if ( v20 >= 0 )
          {
            *(_BYTE *)(a4 + 43) = 1;
            v20 = 0;
            if ( v17 )
            {
              LOBYTE(v21) = PreviousMode;
              KeContextToKframes(a4, v26, p_XState, *(_DWORD *)(p_XState + 48), v21);
            }
          }
          if ( !CurrentIrql )
          {
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0);
            __writecr8(0LL);
          }
          return v20;
        }
      }
    }
  }
  return result;
}
