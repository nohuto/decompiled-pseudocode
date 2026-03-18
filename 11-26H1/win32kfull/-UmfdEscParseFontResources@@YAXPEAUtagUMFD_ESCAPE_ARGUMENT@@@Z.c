/*
 * XREFs of ?UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1402828A0
 * Callers:
 *     ?UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400D02BC (-UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1400D07B0 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     ??0AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1400D07E4 (--0AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     ?LookUp@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAUFONTFILEVIEW@@@Z @ 0x1400D0824 (-LookUp@-$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAUFONTFILEVIEW@@@Z.c)
 *     cParseFontResources @ 0x1402448F4 (cParseFontResources.c)
 */

void __fastcall UmfdEscParseFontResources(void **a1, __int64 a2, __int64 a3)
{
  char *v4; // rdi
  __int64 v5; // rdx
  int v6; // ecx
  __int64 v7; // rcx
  int v8; // r14d
  volatile void *v9; // rcx
  __int64 v10; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v11[2]; // [rsp+38h] [rbp-50h] BYREF
  struct W32_PUSH_LOCK *v12[8]; // [rsp+48h] [rbp-40h] BYREF
  unsigned int v13; // [rsp+98h] [rbp+10h] BYREF
  PVOID pv; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+20h] BYREF

  v4 = (char *)(a1 + 1);
  v11[1] = a1 + 1;
  v10 = 0LL;
  v11[0] = 0LL;
  pv = 0LL;
  AutoSharedUmfdLookupLock::AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v12, a2, a3);
  v15 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v6, v5) + 96) + 24152LL);
  if ( v7
    && (v13 = *(_DWORD *)v4, NSInstrumentation::CSortedVector<unsigned int,FONTFILEVIEW *>::LookUp(v7, &v13, &v15))
    && *(_QWORD *)(v15 + 16) )
  {
    v8 = cParseFontResources(v15, &v10, v11, (PVOID *)((unsigned __int64)&pv & -(__int64)(*((_QWORD *)v4 + 1) != 0LL)));
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock(v12);
    if ( v8 )
    {
      v9 = (volatile void *)*((_QWORD *)v4 + 1);
      if ( v9 )
      {
        if ( (unsigned int)(8 * v8) <= *((_DWORD *)v4 + 4) )
        {
          ProbeForWrite(v9, *((unsigned int *)v4 + 4), 8u);
          GreProbeAndWriteToUntrustedVa(a1[2], (unsigned int)(8 * v8), pv, (unsigned int)(8 * v8), 8uLL);
        }
        else
        {
          v8 = 0;
        }
        EngFreeMem(pv);
      }
    }
    if ( v8 )
    {
      GreProbeAndWriteToUntrustedVa(a1[4], 8uLL, &v10, 8uLL, 8uLL);
      GreProbeAndWriteToUntrustedVa(a1[5], 8uLL, v11, 8uLL, 8uLL);
    }
    *(_DWORD *)v4 = v8;
  }
  else
  {
    *(_DWORD *)v4 = 0;
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock(v12);
  }
}
