/*
 * XREFs of VfCheckUserHandle @ 0x140C47C38
 * Callers:
 *     ObCloseHandleWithResult @ 0x1407C3270 (ObCloseHandleWithResult.c)
 *     NtClose @ 0x1408F9F30 (NtClose.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140261920 (RtlCaptureStackBackTrace.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     RtlEqualUnicodeString @ 0x14091F0E0 (RtlEqualUnicodeString.c)
 *     ObQueryTypeName @ 0x1409F8E50 (ObQueryTypeName.c)
 *     VfUtilIsLocalSystem @ 0x140C21924 (VfUtilIsLocalSystem.c)
 *     CarReportRuleViolationFromNt @ 0x140C2BF1C (CarReportRuleViolationFromNt.c)
 *     VfDriverIsKernelImageAddress @ 0x140C46BA8 (VfDriverIsKernelImageAddress.c)
 *     VfTargetDriversIsEnabled @ 0x140C46C9C (VfTargetDriversIsEnabled.c)
 */

char __fastcall VfCheckUserHandle(ULONG_PTR BugCheckParameter2)
{
  struct _KPROCESS *Process; // rsi
  unsigned __int64 v3; // rax
  unsigned int v4; // r14d
  __int64 i; // rbx
  PVOID v6; // rdi
  __int64 v7; // rcx
  char v8; // di
  PVOID Object; // [rsp+40h] [rbp-B8h] BYREF
  int v11; // [rsp+48h] [rbp-B0h] BYREF
  PVOID BackTrace[8]; // [rsp+50h] [rbp-A8h] BYREF
  UNICODE_STRING String1; // [rsp+90h] [rbp-68h] BYREF

  memset_0(BackTrace, 0, sizeof(BackTrace));
  Process = KeGetCurrentThread()->ApcState.Process;
  LOBYTE(v3) = (_BYTE)PsInitialSystemProcess;
  if ( PsInitialSystemProcess && Process != PsInitialSystemProcess && Process != PsIdleProcess && BugCheckParameter2 )
  {
    LOWORD(v3) = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
    v4 = (unsigned __int16)v3;
    for ( i = 0LL; (unsigned int)i < v4; i = (unsigned int)(i + 1) )
    {
      v6 = BackTrace[i];
      LOBYTE(v3) = VfDriverIsKernelImageAddress((unsigned __int64)v6);
      if ( (_DWORD)v3 )
      {
        if ( KernelVerifier )
          goto LABEL_9;
      }
      else
      {
        LODWORD(v3) = VfTargetDriversIsEnabled(v7);
        if ( (_DWORD)v3 )
        {
LABEL_9:
          LODWORD(v3) = VfUtilIsLocalSystem(Process);
          if ( !(_DWORD)v3 )
          {
            Object = 0LL;
            if ( ObReferenceObjectByHandle((HANDLE)BugCheckParameter2, 0, 0LL, 1, &Object, 0LL) < 0 )
              goto LABEL_16;
            v8 = 0;
            if ( (int)ObQueryTypeName((__int64)Object, (__int64)&String1, 0x40u, &v11) >= 0
              && (RtlEqualUnicodeString(&String1, &ViDesktopTypeName, 0)
               || RtlEqualUnicodeString(&String1, &ViWindowStationTypeName, 0)) )
            {
              v8 = 1;
            }
            LOBYTE(v3) = ObfDereferenceObject(Object);
            if ( !v8 )
            {
LABEL_16:
              LOBYTE(v3) = ViHandleBreaksEnabled;
              if ( ViHandleBreaksEnabled )
                LOBYTE(v3) = CarReportRuleViolationFromNt(
                               196,
                               246LL,
                               BugCheckParameter2,
                               (ULONG_PTR)Process,
                               (__int64)BackTrace[i],
                               8u,
                               0LL);
            }
          }
          return v3;
        }
        if ( !ViDriverXDVBase )
          return v3;
        LOBYTE(v3) = ViDriverXDVImageSize;
        if ( !ViDriverXDVImageSize )
          return v3;
        if ( (unsigned __int64)v6 < ViDriverXDVBase )
          return v3;
        v3 = ViDriverXDVBase + (unsigned int)ViDriverXDVImageSize;
        if ( (unsigned __int64)v6 >= v3 )
          return v3;
      }
    }
  }
  return v3;
}
