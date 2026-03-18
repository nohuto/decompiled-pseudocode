/*
 * XREFs of ?UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z @ 0x140283BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?UMPDMyDrvFree@@YAXPEAVUMPDOBJ@@PEAUDHPDEV__@@PEAXK@Z @ 0x1400D4200 (-UMPDMyDrvFree@@YAXPEAVUMPDOBJ@@PEAUDHPDEV__@@PEAXK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D600C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1400D780C (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D785C (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?bSandboxedClient@UMPDOBJ@@QEAAHXZ @ 0x1400D79B4 (-bSandboxedClient@UMPDOBJ@@QEAAHXZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D7A00 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D7B24 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ProbeAndReadFD_GLYPHSET@@YAPEAU_FD_GLYPHSET@@PEBU1@HK_K@Z @ 0x140282A84 (-ProbeAndReadFD_GLYPHSET@@YAPEAU_FD_GLYPHSET@@PEBU1@HK_K@Z.c)
 *     ?bIsFreeHooked@@YAHPEAUDHPDEV__@@PEAVUMPDOBJ@@@Z @ 0x1402842D8 (-bIsFreeHooked@@YAHPEAUDHPDEV__@@PEAVUMPDOBJ@@@Z.c)
 *     ?CopyFromUser@UMPDOBJ@@QEAAXPEAXQEAX_K@Z @ 0x14034A2C0 (-CopyFromUser@UMPDOBJ@@QEAAXPEAXQEAX_K@Z.c)
 *     ?ProbeAndReadFD_KERNINGPAIR@@YAPEAU_FD_KERNINGPAIR@@PEBU1@H_K@Z @ 0x14034A4C0 (-ProbeAndReadFD_KERNINGPAIR@@YAPEAU_FD_KERNINGPAIR@@PEBU1@H_K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

struct _FD_GLYPHSET *__fastcall UMPDDrvQueryFontTree(struct DHPDEV__ *a1, __int64 a2, int a3, int a4, unsigned int *a5)
{
  struct _FD_GLYPHSET *v9; // rdi
  UMPDOBJ *v10; // rbx
  int v11; // esi
  unsigned int v12; // r15d
  struct _FD_GLYPHSET *v13; // r14
  char *KernelPtr; // rax
  __int64 v15; // r9
  __int64 v16; // r9
  struct _FD_GLYPHSET *v17; // rcx
  struct _FD_GLYPHSET *FD_GLYPHSET; // rax
  const struct _FD_KERNINGPAIR *v19; // rcx
  struct DHPDEV__ *v20; // rsi
  size_t Size; // [rsp+20h] [rbp-E8h]
  UMPDOBJ *v23; // [rsp+30h] [rbp-D8h] BYREF
  struct _FD_GLYPHSET *Src; // [rsp+38h] [rbp-D0h] BYREF
  struct DHPDEV__ *v25; // [rsp+40h] [rbp-C8h]
  _OWORD v26[2]; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v27[4]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v28; // [rsp+80h] [rbp-88h]
  struct DHPDEV__ *v29; // [rsp+88h] [rbp-80h]
  __int64 v30; // [rsp+90h] [rbp-78h]
  int v31; // [rsp+98h] [rbp-70h]
  int v32; // [rsp+9Ch] [rbp-6Ch]
  void *v33; // [rsp+A0h] [rbp-68h]
  unsigned int v34[2]; // [rsp+A8h] [rbp-60h]
  void *v35; // [rsp+B0h] [rbp-58h]

  v25 = a1;
  Src = 0LL;
  v9 = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v23);
  memset_0(v27, 0, 0x48uLL);
  v10 = v23;
  if ( !v23 )
  {
LABEL_32:
    XUMPDOBJ::~XUMPDOBJ(&v23);
    return v9;
  }
  v27[1] = 27;
  LOBYTE(v27[0]) = 0;
  v28 = *(_QWORD *)v23;
  v29 = a1;
  v30 = a2;
  v31 = a3;
  v32 = a4;
  v11 = 1;
  v33 = UMPDOBJ::_AllocUserMem(v23, 4u, 1);
  v34[0] = 0;
  v35 = 0LL;
  if ( v33 )
  {
    LODWORD(Size) = 8;
    v12 = -1;
    if ( (unsigned int)UMPDOBJ::Thunk(v10, v27, 0x48u, &Src, Size) != -1 )
    {
      v13 = Src;
      if ( Src )
      {
        UMPDOBJ::CopyFromUser(v10, a5, v33, 4uLL);
        if ( !*((_BYTE *)v10 + 440) || !v35 || !v34[0] )
          v11 = 0;
        KernelPtr = UMPDOBJ::GetKernelPtr((char **)v10, (char *)v35);
        Src = (struct _FD_GLYPHSET *)KernelPtr;
        if ( a4 == 3 )
        {
          if ( (unsigned int)UMPDOBJ::bSandboxedClient(v10) && (v15 = *((_QWORD *)v10 + 51)) != 0 )
            v16 = *(_QWORD *)(v15 + 64);
          else
            v16 = 0LL;
          if ( v11 )
            v12 = v34[0];
          v17 = v13;
          if ( v11 )
            v17 = Src;
          FD_GLYPHSET = ProbeAndReadFD_GLYPHSET(v17, v11, v12, v16);
        }
        else
        {
          if ( a4 != 2 )
          {
LABEL_26:
            v20 = v25;
            if ( (unsigned int)bIsFreeHooked(v25, v10) )
            {
              memset(v26, 0, sizeof(v26));
              if ( v9 )
                PushThreadGuardedObject(v26, v9, Win32FreePool);
              UMPDMyDrvFree(v10, v20, v13, *a5);
              if ( v9 )
                PopThreadGuardedObject(v26);
            }
            *a5 = (unsigned int)v9;
            goto LABEL_32;
          }
          if ( v11 )
            v12 = v34[0];
          v19 = (const struct _FD_KERNINGPAIR *)v13;
          if ( v11 )
            v19 = (const struct _FD_KERNINGPAIR *)KernelPtr;
          FD_GLYPHSET = (struct _FD_GLYPHSET *)ProbeAndReadFD_KERNINGPAIR(v19, v11, v12);
        }
        v9 = FD_GLYPHSET;
        goto LABEL_26;
      }
    }
  }
  XUMPDOBJ::~XUMPDOBJ(&v23);
  return 0LL;
}
