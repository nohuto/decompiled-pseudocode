/*
 * XREFs of KiUnwindUserSspForApcContextCopyBypass @ 0x1403D2F80
 * Callers:
 *     KiInitializeUserApc @ 0x140446248 (KiInitializeUserApc.c)
 * Callees:
 *     RtlpSanitizeContextFlags @ 0x1403D3D90 (RtlpSanitizeContextFlags.c)
 *     RtlInitializeExtendedContext @ 0x1403D5E20 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1403D6A40 (RtlGetExtendedContextLength.c)
 *     RtlLocateExtendedFeature @ 0x1403D7020 (RtlLocateExtendedFeature.c)
 *     KiVerifyContextXStateCetUEnabled @ 0x1403D7184 (KiVerifyContextXStateCetUEnabled.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140731080 (_alloca_probe.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlpReadExtendedContext @ 0x1409EE360 (RtlpReadExtendedContext.c)
 */

__int64 __fastcall KiUnwindUserSspForApcContextCopyBypass(__int64 a1)
{
  int ULongFromUser; // eax
  __int64 v3; // rdx
  __int64 result; // rax
  unsigned int v5; // ebx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  void *v8; // rsp
  void *v9; // rsp
  int v10; // ecx
  __int64 v11; // rdi
  __int64 ExtendedFeature; // rax
  __int64 v13; // rbx
  unsigned __int64 v14; // rax
  __int64 v15; // [rsp+20h] [rbp-10h]
  __int64 v16; // [rsp+30h] [rbp+0h] BYREF

  ULongFromUser = RtlReadULongFromUser(a1 + 48);
  LOBYTE(v3) = 1;
  LODWORD(v16) = ULongFromUser;
  result = RtlpSanitizeContextFlags(&v16, v3);
  if ( (int)result < 0 )
    return result;
  v5 = v16;
  if ( (v16 & 0x100040) != 0x100040 )
    return 3221225473LL;
  LODWORD(v16) = 0;
  result = RtlGetExtendedContextLength(v5, &v16);
  if ( (int)result >= 0 )
  {
    v6 = (unsigned int)v16 + 15LL;
    if ( v6 <= (unsigned int)v16 )
      v6 = 0xFFFFFFFFFFFFFF0LL;
    v7 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
    v8 = alloca(v7);
    v9 = alloca(v7);
    v16 = 0LL;
    result = RtlInitializeExtendedContext(&v16, v5, &v16);
    if ( (int)result >= 0 )
    {
      v15 = a1;
      v11 = v16;
      result = RtlpReadExtendedContext(v10, 2, v16, v5, v15, 0LL);
      if ( (int)result >= 0 )
      {
        ExtendedFeature = RtlLocateExtendedFeature(v11, 11LL);
        v13 = ExtendedFeature;
        if ( ExtendedFeature && (*(_DWORD *)(*(int *)(v11 + 16) + v11) & 0x800LL) != 0 )
        {
          *(_QWORD *)(ExtendedFeature + 8) -= 8LL;
          v14 = __readmsr(0x6A7u);
          if ( KiUserCetPl3SspCanonicalizeMask )
            v14 &= KiUserCetPl3SspCanonicalizeMask;
          result = KiVerifyContextXStateCetUEnabled(v13, v14);
          if ( (int)result >= 0 )
          {
            __writemsr(0x6A7u, *(_QWORD *)(v13 + 8));
            return 0LL;
          }
          return result;
        }
        return 3221225473LL;
      }
    }
  }
  return result;
}
