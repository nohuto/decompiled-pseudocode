/*
 * XREFs of RtlRaiseException @ 0x140619230
 * Callers:
 *     HvlpSetRegister64 @ 0x140493EC0 (HvlpSetRegister64.c)
 *     HvlpGetRegister64 @ 0x1404D0D20 (HvlpGetRegister64.c)
 *     KdCopyToUser @ 0x140533EA0 (KdCopyToUser.c)
 *     RaiseException @ 0x14053AAD0 (RaiseException.c)
 *     _raise_exc_ex @ 0x14053ABE0 (_raise_exc_ex.c)
 *     HvlpGetRegister128 @ 0x1405C1760 (HvlpGetRegister128.c)
 *     KiStallBugcheckThread @ 0x1405FA6C8 (KiStallBugcheckThread.c)
 *     RtlpAllocateHeapRaiseException @ 0x14061AF94 (RtlpAllocateHeapRaiseException.c)
 *     KscpUmaSmapResumeAfterException @ 0x140C5E0C0 (KscpUmaSmapResumeAfterException.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     RtlLookupFunctionEntry @ 0x1402E92C0 (RtlLookupFunctionEntry.c)
 *     RtlDispatchException @ 0x1403D5F30 (RtlDispatchException.c)
 *     RtlInitializeExtendedContext2 @ 0x1403D66C0 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1403D6D60 (RtlGetExtendedContextLength2.c)
 *     RtlVirtualUnwind @ 0x14052B970 (RtlVirtualUnwind.c)
 *     RtlpCaptureContext2 @ 0x140534B00 (RtlpCaptureContext2.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x140726290 (ZwRaiseException.c)
 *     _alloca_probe @ 0x140731080 (_alloca_probe.c)
 */

char __fastcall RtlRaiseException(
        ULONG_PTR a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        unsigned __int64 a24)
{
  int v25; // ebx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  void *v28; // rsp
  void *v29; // rsp
  int v30; // ebx
  unsigned int *v31; // rax
  char result; // al
  __int64 v33; // [rsp+40h] [rbp+0h] BYREF
  unsigned __int64 v34; // [rsp+48h] [rbp+8h] BYREF
  __int64 v35; // [rsp+50h] [rbp+10h] BYREF
  __int64 v36; // [rsp+58h] [rbp+18h] BYREF

  LODWORD(v33) = 0;
  v35 = 0LL;
  v36 = 0LL;
  v34 = 0LL;
  *(_DWORD *)(a1 + 4) |= 0x80u;
  v25 = (_BYTE)KiKernelCetEnabled != 0 ? 0x80 : 0;
  RtlGetExtendedContextLength2(v25 + 1048587, &v33, 0LL);
  v26 = (unsigned int)v33 + 15LL;
  if ( v26 <= (unsigned int)v33 )
    v26 = 0xFFFFFFFFFFFFFF0LL;
  v27 = v26 & 0xFFFFFFFFFFFFFFF0uLL;
  v28 = alloca(v27);
  v29 = alloca(v27);
  v30 = RtlInitializeExtendedContext2((__int64)&v33, v25 + 1048587, &v33, 0LL);
  RtlpCaptureContext2();
  v31 = RtlLookupFunctionEntry(a24, &v34, 0LL);
  if ( !v31 )
LABEL_6:
    RtlRaiseStatus(v30);
  RtlVirtualUnwind(0, v34, a24, (int)v31, (__int64)&v33, (__int64)&v36, (__int64)&v35, 0LL);
  *(_QWORD *)(a1 + 16) = a24;
  result = RtlDispatchException(a1, (__int64)&v33);
  if ( !result )
  {
    v30 = ZwRaiseException(a1);
    goto LABEL_6;
  }
  return result;
}
