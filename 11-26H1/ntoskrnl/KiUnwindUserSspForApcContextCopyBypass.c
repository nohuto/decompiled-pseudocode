/*
 * XREFs of KiUnwindUserSspForApcContextCopyBypass @ 0x1403D5F50
 * Callers:
 *     KiInitializeUserApc @ 0x14043ED48 (KiInitializeUserApc.c)
 * Callees:
 *     RtlpSanitizeContextFlags @ 0x1403D6D60 (RtlpSanitizeContextFlags.c)
 *     RtlInitializeExtendedContext @ 0x1403D8DF0 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1403D9A10 (RtlGetExtendedContextLength.c)
 *     RtlLocateExtendedFeature @ 0x1403D9FF0 (RtlLocateExtendedFeature.c)
 *     KiVerifyContextXStateCetUEnabled @ 0x1403DA154 (KiVerifyContextXStateCetUEnabled.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140735C50 (_alloca_probe.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlpReadExtendedContext @ 0x1409EAB30 (RtlpReadExtendedContext.c)
 */

NTSTATUS __fastcall KiUnwindUserSspForApcContextCopyBypass(__int64 a1)
{
  ULONG ULongFromUser; // eax
  __int64 v3; // rdx
  NTSTATUS result; // eax
  ULONG v5; // ebx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  void *v8; // rsp
  void *v9; // rsp
  int v10; // ecx
  _CONTEXT_EX *v11; // rdi
  _QWORD *ExtendedFeature; // rax
  _QWORD *v13; // rbx
  unsigned __int64 v14; // rax
  __int64 v15; // [rsp+20h] [rbp-10h]
  ULONG ContextFlags[2]; // [rsp+30h] [rbp+0h] BYREF

  ULongFromUser = RtlReadULongFromUser(a1 + 48);
  LOBYTE(v3) = 1;
  ContextFlags[0] = ULongFromUser;
  result = RtlpSanitizeContextFlags(ContextFlags, v3);
  if ( result < 0 )
    return result;
  v5 = ContextFlags[0];
  if ( (ContextFlags[0] & 0x100040) != 0x100040 )
    return -1073741823;
  ContextFlags[0] = 0;
  result = RtlGetExtendedContextLength(v5, ContextFlags);
  if ( result >= 0 )
  {
    v6 = ContextFlags[0] + 15LL;
    if ( v6 <= ContextFlags[0] )
      v6 = 0xFFFFFFFFFFFFFF0LL;
    v7 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
    v8 = alloca(v7);
    v9 = alloca(v7);
    *(_QWORD *)ContextFlags = 0LL;
    result = RtlInitializeExtendedContext((PCONTEXT)ContextFlags, v5, (PCONTEXT_EX *)ContextFlags);
    if ( result >= 0 )
    {
      v15 = a1;
      v11 = *(_CONTEXT_EX **)ContextFlags;
      result = RtlpReadExtendedContext(v10, 2, ContextFlags[0], v5, v15, 0LL);
      if ( result >= 0 )
      {
        ExtendedFeature = RtlLocateExtendedFeature(v11, 0xBu, 0LL);
        v13 = ExtendedFeature;
        if ( ExtendedFeature && (*(LONG *)((_BYTE *)&v11->All.Offset + v11->XState.Offset) & 0x800LL) != 0 )
        {
          ExtendedFeature[1] -= 8LL;
          v14 = __readmsr(0x6A7u);
          if ( KiUserCetPl3SspCanonicalizeMask )
            v14 &= KiUserCetPl3SspCanonicalizeMask;
          result = KiVerifyContextXStateCetUEnabled(v13, v14);
          if ( result >= 0 )
          {
            __writemsr(0x6A7u, v13[1]);
            return 0;
          }
          return result;
        }
        return -1073741823;
      }
    }
  }
  return result;
}
