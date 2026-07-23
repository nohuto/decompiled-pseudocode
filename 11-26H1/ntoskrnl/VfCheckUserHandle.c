/*
 * XREFs of VfCheckUserHandle @ 0x140C4DC48
 * Callers:
 *     ObCloseHandleWithResult @ 0x1407C62D0 (ObCloseHandleWithResult.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140260E90 (RtlCaptureStackBackTrace.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     ObQueryTypeName @ 0x140A61F3C (ObQueryTypeName.c)
 *     VfUtilIsLocalSystem @ 0x140C27934 (VfUtilIsLocalSystem.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 *     VfDriverIsKernelImageAddress @ 0x140C4CBB8 (VfDriverIsKernelImageAddress.c)
 *     VfTargetDriversIsEnabled @ 0x140C4CCAC (VfTargetDriversIsEnabled.c)
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
