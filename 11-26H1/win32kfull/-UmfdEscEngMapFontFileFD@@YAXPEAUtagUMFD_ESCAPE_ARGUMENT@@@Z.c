/*
 * XREFs of ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400D06A4
 * Callers:
 *     ?UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400D02BC (-UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1400D07B0 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     ??0AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1400D07E4 (--0AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     ?LookUp@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAUFONTFILEVIEW@@@Z @ 0x1400D0824 (-LookUp@-$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAUFONTFILEVIEW@@@Z.c)
 *     EngMapFontFileFDInternal @ 0x1400D09E8 (EngMapFontFileFDInternal.c)
 *     ??$GreProbeAndWriteToUntrustedVa@PEAU_XFORMOBJ@@@@YAXPEAPEAU_XFORMOBJ@@PEBQEAU0@_K@Z @ 0x140349BA8 (--$GreProbeAndWriteToUntrustedVa@PEAU_XFORMOBJ@@@@YAXPEAPEAU_XFORMOBJ@@PEBQEAU0@_K@Z.c)
 */

void __fastcall UmfdEscEngMapFontFileFD(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  int *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rcx
  _BYTE v7[8]; // [rsp+30h] [rbp-38h] BYREF
  char *v8; // [rsp+38h] [rbp-30h]
  int v9; // [rsp+70h] [rbp+8h] BYREF
  int v10; // [rsp+78h] [rbp+10h] BYREF
  struct FILEVIEW *v11; // [rsp+80h] [rbp+18h] BYREF
  __int64 v12; // [rsp+88h] [rbp+20h] BYREF

  v12 = 0LL;
  v9 = 0;
  v2 = (int *)((char *)a1 + 8);
  v8 = (char *)a1 + 8;
  AutoSharedUmfdLookupLock::AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v7);
  v11 = 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v4, v3, v5) + 96) + 24152LL);
  if ( v6
    && (v10 = *v2, (unsigned __int8)NSInstrumentation::CSortedVector<unsigned int,FONTFILEVIEW *>::LookUp(
                                      v6,
                                      &v10,
                                      &v11))
    && (unsigned int)EngMapFontFileFDInternal(v11) )
  {
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v7);
    GreProbeAndWriteToUntrustedVa<_XFORMOBJ *>(*((_QWORD *)a1 + 2), &v12);
    GreProbeAndWriteToUntrustedVa(*((void **)a1 + 3), 4uLL, &v9, 4uLL, 4uLL);
    *v2 = 1;
  }
  else
  {
    *v2 = 0;
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)v7);
  }
}
