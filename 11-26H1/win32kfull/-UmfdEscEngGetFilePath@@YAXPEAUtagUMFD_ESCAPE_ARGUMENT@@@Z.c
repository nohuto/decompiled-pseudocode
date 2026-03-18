/*
 * XREFs of ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x140349ED4
 * Callers:
 *     ?UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400D02BC (-UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1400D07B0 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     ??0AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1400D07E4 (--0AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     ?LookUp@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAUFONTFILEVIEW@@@Z @ 0x1400D0824 (-LookUp@-$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAUFONTFILEVIEW@@@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14013EFD0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     EngGetFilePath @ 0x140312850 (EngGetFilePath.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall UmfdEscEngGetFilePath(struct tagUMFD_ESCAPE_ARGUMENT *a1, __int64 a2, __int64 a3)
{
  unsigned int *v4; // rbx
  __int64 v5; // rdx
  int v6; // ecx
  __int64 v7; // rcx
  unsigned int v8; // [rsp+20h] [rbp-258h] BYREF
  HANDLE h; // [rsp+28h] [rbp-250h] BYREF
  struct W32_PUSH_LOCK *v10[4]; // [rsp+30h] [rbp-248h] BYREF
  WCHAR pDest[261]; // [rsp+50h] [rbp-228h] BYREF

  v4 = (unsigned int *)((char *)a1 + 8);
  v10[1] = (struct tagUMFD_ESCAPE_ARGUMENT *)((char *)a1 + 8);
  AutoSharedUmfdLookupLock::AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v10, a2, a3);
  h = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v6, v5) + 96) + 24152LL);
  if ( v7
    && (v8 = *v4, NSInstrumentation::CSortedVector<unsigned int,FONTFILEVIEW *>::LookUp(v7, &v8, &h))
    && EngGetFilePath(h, (WCHAR (*)[261])pDest) )
  {
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock(v10);
    ProbeForWrite(*((volatile void **)a1 + 2), 0x20AuLL, 2u);
    if ( (int)RtlStringCchCopyW(*((char **)a1 + 2), 522LL, (char *)pDest) < 0 )
      *v4 = 0;
    *v4 = 1;
  }
  else
  {
    *v4 = 0;
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock(v10);
  }
}
