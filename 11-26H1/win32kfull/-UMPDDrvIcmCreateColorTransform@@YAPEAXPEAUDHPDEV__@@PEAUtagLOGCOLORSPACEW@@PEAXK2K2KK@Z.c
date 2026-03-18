/*
 * XREFs of ?UMPDDrvIcmCreateColorTransform@@YAPEAXPEAUDHPDEV__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2KK@Z @ 0x14034BA60
 * Callers:
 *     <none>
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D600C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1400D70E4 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D7A00 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D7B24 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall UMPDDrvIcmCreateColorTransform(
        struct DHPDEV__ *a1,
        struct tagLOGCOLORSPACEW *a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        void *a7,
        unsigned int a8,
        unsigned int a9)
{
  __int64 v10; // rdi
  UMPDOBJ *v14; // rbx
  int v15; // eax
  __int64 v16; // rcx
  size_t Size; // [rsp+20h] [rbp-A1h]
  __int64 v19; // [rsp+30h] [rbp-91h] BYREF
  UMPDOBJ *v20; // [rsp+38h] [rbp-89h] BYREF
  void *v21; // [rsp+40h] [rbp-81h]
  _DWORD v22[4]; // [rsp+50h] [rbp-71h] BYREF
  __int64 v23; // [rsp+60h] [rbp-61h]
  struct DHPDEV__ *v24; // [rsp+68h] [rbp-59h]
  void *v25; // [rsp+70h] [rbp-51h] BYREF
  void *v26; // [rsp+78h] [rbp-49h] BYREF
  unsigned int v27; // [rsp+80h] [rbp-41h]
  void *v28; // [rsp+88h] [rbp-39h] BYREF
  unsigned int v29; // [rsp+90h] [rbp-31h]
  void *v30; // [rsp+98h] [rbp-29h] BYREF
  unsigned int v31; // [rsp+A0h] [rbp-21h]
  unsigned int v32; // [rsp+A4h] [rbp-1Dh]

  v10 = 0LL;
  v21 = a7;
  v19 = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v20);
  memset_0(v22, 0, 0x58uLL);
  v14 = v20;
  if ( v20 )
  {
    v22[1] = 64;
    LOBYTE(v22[0]) = 0;
    v23 = *(_QWORD *)v20;
    v30 = v21;
    v24 = a1;
    v25 = a2;
    v32 = a9;
    v26 = a3;
    v27 = a4;
    v28 = a5;
    v29 = a6;
    v31 = a8;
    if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v20, &v25, 0x148u) )
    {
      if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v14, &v26, a4)
        && (unsigned int)UMPDOBJ::ThunkMemBlock(v14, &v28, a6)
        && (unsigned int)UMPDOBJ::ThunkMemBlock(v14, &v30, a8) )
      {
        LODWORD(Size) = 8;
        v15 = UMPDOBJ::Thunk(v14, v22, 0x58u, &v19, Size);
        v16 = v19;
        if ( v15 == -1 )
          v16 = 0LL;
        v10 = v16;
      }
    }
  }
  XUMPDOBJ::~XUMPDOBJ(&v20);
  return v10;
}
