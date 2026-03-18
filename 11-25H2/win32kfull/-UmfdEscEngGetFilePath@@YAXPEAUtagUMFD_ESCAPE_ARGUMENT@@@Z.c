/*
 * XREFs of ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x140332708
 * Callers:
 *     ?UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400B13EC (-UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?LookUp@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAUFONTFILEVIEW@@@Z @ 0x1400B1E6C (-LookUp@-$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAUFONTFILEVIEW@@@Z.c)
 *     ??0AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1400B2030 (--0AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1400B25F8 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140131080 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     EngGetFilePath @ 0x1403013C0 (EngGetFilePath.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall UmfdEscEngGetFilePath(struct tagUMFD_ESCAPE_ARGUMENT *a1, __int64 a2, __int64 a3)
{
  volatile void **v3; // rbx
  __int64 v4; // rdx
  int v5; // ecx
  __int64 v6; // rcx
  unsigned int v7; // [rsp+20h] [rbp-258h] BYREF
  HANDLE h; // [rsp+28h] [rbp-250h] BYREF
  struct W32_PUSH_LOCK *v9[4]; // [rsp+30h] [rbp-248h] BYREF
  WCHAR pDest[261]; // [rsp+50h] [rbp-228h] BYREF

  v3 = (volatile void **)((char *)a1 + 8);
  v9[1] = (struct tagUMFD_ESCAPE_ARGUMENT *)((char *)a1 + 8);
  AutoSharedUmfdLookupLock::AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v9, a2, a3);
  h = 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v5, v4) + 96) + 24168LL);
  if ( v6
    && (v7 = *(_DWORD *)v3, NSInstrumentation::CSortedVector<unsigned int,FONTFILEVIEW *>::LookUp(v6, &v7, &h))
    && EngGetFilePath(h, (WCHAR (*)[261])pDest) )
  {
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock(v9);
    ProbeForWrite(v3[1], 0x20AuLL, 2u);
    if ( (int)RtlStringCchCopyW((char *)v3[1], 522LL, (char *)pDest) < 0 )
      *(_DWORD *)v3 = 0;
    *(_DWORD *)v3 = 1;
  }
  else
  {
    *(_DWORD *)v3 = 0;
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock(v9);
  }
}
