/*
 * XREFs of ?UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x140203EF8
 * Callers:
 *     ?UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400B13EC (-UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?LookUp@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAUFONTFILEVIEW@@@Z @ 0x1400B1E6C (-LookUp@-$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAUFONTFILEVIEW@@@Z.c)
 *     ??0AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1400B2030 (--0AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1400B25F8 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     cParseFontResources @ 0x1402040AC (cParseFontResources.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

void __fastcall UmfdEscParseFontResources(struct tagUMFD_ESCAPE_ARGUMENT *a1, __int64 a2, __int64 a3)
{
  char *v3; // rdi
  _DWORD *v4; // r14
  __int64 v5; // rdx
  int v6; // ecx
  __int64 v7; // rcx
  int v8; // esi
  volatile void *v9; // rcx
  _QWORD v10[2]; // [rsp+20h] [rbp-58h] BYREF
  struct W32_PUSH_LOCK *v11[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v12; // [rsp+80h] [rbp+8h] BYREF
  void *Src; // [rsp+88h] [rbp+10h] BYREF
  __int64 v14; // [rsp+90h] [rbp+18h] BYREF
  __int64 v15; // [rsp+98h] [rbp+20h] BYREF

  v3 = (char *)a1 + 8;
  v11[1] = (struct tagUMFD_ESCAPE_ARGUMENT *)((char *)a1 + 8);
  v4 = (_DWORD *)((char *)a1 + 8);
  v10[1] = (char *)a1 + 8;
  v15 = 0LL;
  v10[0] = 0LL;
  Src = 0LL;
  AutoSharedUmfdLookupLock::AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v11, a2, a3);
  v14 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v6, v5) + 96) + 24168LL);
  if ( v7
    && (v12 = *(_DWORD *)v3, NSInstrumentation::CSortedVector<unsigned int,FONTFILEVIEW *>::LookUp(v7, &v12, &v14))
    && *(_QWORD *)(v14 + 16) )
  {
    v8 = cParseFontResources(v14, &v15, v10, (unsigned __int64)&Src & -(__int64)(*((_QWORD *)v3 + 1) != 0LL));
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock(v11);
    if ( v8 )
    {
      v9 = (volatile void *)*((_QWORD *)v3 + 1);
      if ( v9 )
      {
        if ( (unsigned int)(8 * v8) <= *((_DWORD *)v3 + 4) )
        {
          ProbeForWrite(v9, *((unsigned int *)v3 + 4), 8u);
          memmove(*((void **)v3 + 1), Src, (unsigned int)(8 * v8));
        }
        else
        {
          v8 = 0;
        }
        EngFreeMem(Src);
      }
      if ( v8 )
      {
        ProbeForWrite(*((volatile void **)v3 + 3), 8uLL, 8u);
        ProbeForWrite(*((volatile void **)v3 + 4), 8uLL, 8u);
        **((_QWORD **)v3 + 3) = v15;
        **((_QWORD **)v3 + 4) = v10[0];
      }
    }
    *v4 = v8;
  }
  else
  {
    *(_DWORD *)v3 = 0;
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock(v11);
  }
}
