/*
 * XREFs of ?UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z @ 0x1401BE860
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D2E48 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D2F30 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1400D3D28 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D3D78 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?bSandboxedClient@UMPDOBJ@@QEAAHXZ @ 0x1400D3EDC (-bSandboxedClient@UMPDOBJ@@QEAAHXZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D425C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?UMPDMyDrvFree@@YAXPEAVUMPDOBJ@@PEAUDHPDEV__@@PEAXK@Z @ 0x1401BEACC (-UMPDMyDrvFree@@YAXPEAVUMPDOBJ@@PEAUDHPDEV__@@PEAXK@Z.c)
 *     ?bIsFreeHooked@@YAHPEAUDHPDEV__@@PEAVUMPDOBJ@@@Z @ 0x1401BEF94 (-bIsFreeHooked@@YAHPEAUDHPDEV__@@PEAVUMPDOBJ@@@Z.c)
 *     ?ProbeAndReadFD_GLYPHSET@@YAPEAU_FD_GLYPHSET@@PEBU1@HK_K@Z @ 0x1401BF0DC (-ProbeAndReadFD_GLYPHSET@@YAPEAU_FD_GLYPHSET@@PEBU1@HK_K@Z.c)
 *     ?ProbeAndReadFD_KERNINGPAIR@@YAPEAU_FD_KERNINGPAIR@@PEBU1@H_K@Z @ 0x1403348A8 (-ProbeAndReadFD_KERNINGPAIR@@YAPEAU_FD_KERNINGPAIR@@PEBU1@H_K@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

struct _FD_GLYPHSET *__fastcall UMPDDrvQueryFontTree(struct DHPDEV__ *a1, __int64 a2, int a3, int a4, unsigned int *a5)
{
  struct _FD_GLYPHSET *v5; // rdi
  struct _FD_GLYPHSET *v6; // rsi
  UMPDOBJ *v10; // rbx
  __int64 v11; // rax
  int v12; // r14d
  unsigned __int64 v13; // r12
  char *v14; // r13
  char *KernelPtr; // rax
  char *v16; // rdx
  char *v17; // r15
  struct DHPDEV__ *v18; // r15
  __int64 v19; // r9
  unsigned int *v20; // r14
  unsigned __int64 v22; // r9
  struct _FD_GLYPHSET *FD_GLYPHSET; // rax
  __int64 v24; // r9
  size_t Size; // [rsp+20h] [rbp-B1h]
  void *v27; // [rsp+38h] [rbp-99h] BYREF
  struct DHPDEV__ *v28; // [rsp+40h] [rbp-91h]
  unsigned int *v29; // [rsp+48h] [rbp-89h]
  UMPDOBJ *v30; // [rsp+50h] [rbp-81h] BYREF
  _OWORD v31[2]; // [rsp+58h] [rbp-79h] BYREF
  _DWORD Src[4]; // [rsp+80h] [rbp-51h] BYREF
  __int64 v33; // [rsp+90h] [rbp-41h]
  struct DHPDEV__ *v34; // [rsp+98h] [rbp-39h]
  __int64 v35; // [rsp+A0h] [rbp-31h]
  int v36; // [rsp+A8h] [rbp-29h]
  int v37; // [rsp+ACh] [rbp-25h]
  void *v38; // [rsp+B0h] [rbp-21h]
  unsigned int v39; // [rsp+B8h] [rbp-19h]
  void *v40; // [rsp+C0h] [rbp-11h]

  v5 = 0LL;
  v28 = a1;
  v6 = 0LL;
  v29 = a5;
  v27 = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v30);
  memset_0(Src, 0, 0x48uLL);
  v10 = v30;
  if ( !v30 )
  {
LABEL_15:
    v5 = v6;
    goto LABEL_16;
  }
  Src[1] = 27;
  LOBYTE(Src[0]) = 0;
  v11 = *(_QWORD *)v30;
  v37 = a4;
  v12 = 1;
  v33 = v11;
  v34 = v28;
  v35 = a2;
  v36 = a3;
  v38 = UMPDOBJ::_AllocUserMem(v30, 4u, 1);
  v39 = 0;
  v40 = 0LL;
  if ( v38 )
  {
    LODWORD(Size) = 8;
    v13 = 0xFFFFFFFFLL;
    if ( (unsigned int)UMPDOBJ::Thunk(v10, Src, 0x48u, &v27, Size) != -1 )
    {
      v14 = (char *)v27;
      if ( v27 )
      {
        KernelPtr = UMPDOBJ::GetKernelPtr((char **)v10, (char *)v38);
        v16 = (char *)v40;
        *a5 = *(_DWORD *)KernelPtr;
        if ( !*((_BYTE *)v10 + 456) || !v16 || !v39 )
          v12 = 0;
        v17 = UMPDOBJ::GetKernelPtr((char **)v10, v16);
        if ( a4 == 3 )
        {
          if ( (unsigned int)UMPDOBJ::bSandboxedClient(v10) && (v24 = *((_QWORD *)v10 + 53)) != 0 )
            v22 = *(_QWORD *)(v24 + 64);
          else
            v22 = 0LL;
          if ( v12 )
            LODWORD(v13) = v39;
          else
            v17 = v14;
          FD_GLYPHSET = ProbeAndReadFD_GLYPHSET((const struct _FD_GLYPHSET *)v17, v12, v13, v22);
        }
        else
        {
          if ( a4 != 2 )
          {
LABEL_9:
            v18 = v28;
            if ( (unsigned int)bIsFreeHooked(v28, v10) )
            {
              memset(v31, 0, sizeof(v31));
              if ( v6 )
                PushThreadGuardedObject(v31, v6, Win32FreePool, v19);
              v20 = v29;
              UMPDMyDrvFree(v10, v18, v14, *v29);
              if ( v6 )
                PopThreadGuardedObject(v31);
            }
            else
            {
              v20 = v29;
            }
            *v20 = (unsigned int)v6;
            goto LABEL_15;
          }
          if ( v12 )
            v13 = v39;
          else
            v17 = v14;
          FD_GLYPHSET = (struct _FD_GLYPHSET *)ProbeAndReadFD_KERNINGPAIR((const struct _FD_KERNINGPAIR *)v17, v12, v13);
        }
        v6 = FD_GLYPHSET;
        goto LABEL_9;
      }
    }
  }
LABEL_16:
  XUMPDOBJ::~XUMPDOBJ(&v30);
  return v5;
}
