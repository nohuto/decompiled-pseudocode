/*
 * XREFs of ?UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400CEDC4
 * Callers:
 *     ?UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400D02BC (-UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     EngGetFileChangeTime @ 0x1400CEC60 (EngGetFileChangeTime.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1400D07B0 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     ??0AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1400D07E4 (--0AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     ?LookUp@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAUFONTFILEVIEW@@@Z @ 0x1400D0824 (-LookUp@-$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAUFONTFILEVIEW@@@Z.c)
 */

void __fastcall UmfdEscEngGetFileChangeTime(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  void **v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rcx
  int v6; // [rsp+50h] [rbp+8h] BYREF
  HANDLE h; // [rsp+58h] [rbp+10h] BYREF
  LARGE_INTEGER pChangeTime; // [rsp+60h] [rbp+18h] BYREF
  char v9; // [rsp+68h] [rbp+20h] BYREF

  v1 = (void **)((char *)a1 + 8);
  pChangeTime.QuadPart = 0LL;
  AutoSharedUmfdLookupLock::AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v9);
  h = 0LL;
  v5 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v3, v2, v4) + 96) + 24152LL);
  if ( v5
    && (v6 = *(_DWORD *)v1,
        (unsigned __int8)NSInstrumentation::CSortedVector<unsigned int,FONTFILEVIEW *>::LookUp(v5, &v6, &h))
    && EngGetFileChangeTime(h, &pChangeTime) )
  {
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v9);
    GreProbeAndWriteToUntrustedVa(v1[1], 8uLL, &pChangeTime, 8uLL, 4uLL);
    *(_DWORD *)v1 = 1;
  }
  else
  {
    *(_DWORD *)v1 = 0;
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v9);
  }
}
