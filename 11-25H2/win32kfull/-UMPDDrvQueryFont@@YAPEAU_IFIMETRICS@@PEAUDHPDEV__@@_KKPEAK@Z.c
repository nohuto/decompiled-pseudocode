/*
 * XREFs of ?UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z @ 0x1401BEB50
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D2E48 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D2F30 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1400D3D28 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D3D78 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D425C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?UMPDMyDrvFree@@YAXPEAVUMPDOBJ@@PEAUDHPDEV__@@PEAXK@Z @ 0x1401BEACC (-UMPDMyDrvFree@@YAXPEAVUMPDOBJ@@PEAUDHPDEV__@@PEAXK@Z.c)
 *     ?ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z @ 0x1401BED10 (-ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z.c)
 *     ?bIsFreeHooked@@YAHPEAUDHPDEV__@@PEAVUMPDOBJ@@@Z @ 0x1401BEF94 (-bIsFreeHooked@@YAHPEAUDHPDEV__@@PEAVUMPDOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

struct _IFIMETRICS *__fastcall UMPDDrvQueryFont(struct DHPDEV__ *a1, __int64 a2, int a3, unsigned int *a4)
{
  struct _IFIMETRICS *IFIMETRICS; // rsi
  struct UMPDOBJ *v9; // rbx
  char *v10; // rax
  char *KernelPtr; // rax
  char *v12; // rdi
  char v13; // si
  char *v14; // rax
  unsigned __int64 v15; // r8
  __int64 v16; // r9
  size_t Size; // [rsp+20h] [rbp-79h]
  void *v19; // [rsp+30h] [rbp-69h] BYREF
  struct UMPDOBJ *v20; // [rsp+38h] [rbp-61h] BYREF
  _OWORD v21[2]; // [rsp+40h] [rbp-59h] BYREF
  _DWORD Src[4]; // [rsp+60h] [rbp-39h] BYREF
  __int64 v23; // [rsp+70h] [rbp-29h]
  struct DHPDEV__ *v24; // [rsp+78h] [rbp-21h]
  __int64 v25; // [rsp+80h] [rbp-19h]
  int v26; // [rsp+88h] [rbp-11h]
  void *v27; // [rsp+90h] [rbp-9h]
  unsigned __int64 v28; // [rsp+98h] [rbp-1h]
  void *v29; // [rsp+A0h] [rbp+7h]

  v19 = 0LL;
  IFIMETRICS = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v20);
  memset_0(Src, 0, 0x48uLL);
  v9 = v20;
  if ( !v20 )
    goto LABEL_11;
  Src[1] = 26;
  LOBYTE(Src[0]) = 0;
  v23 = *(_QWORD *)v20;
  v24 = a1;
  v25 = a2;
  v26 = a3;
  v10 = UMPDOBJ::_AllocUserMem(v20, 4u, 1);
  LODWORD(v28) = 0;
  v29 = 0LL;
  v27 = v10;
  if ( !v10 || (LODWORD(Size) = 8, (unsigned int)UMPDOBJ::Thunk(v9, Src, 0x48u, &v19, Size) == -1) )
  {
LABEL_11:
    v12 = 0LL;
    goto LABEL_10;
  }
  KernelPtr = UMPDOBJ::GetKernelPtr((char **)v9, (char *)v27);
  v12 = (char *)v19;
  *a4 = *(_DWORD *)KernelPtr;
  if ( !v12 )
    goto LABEL_9;
  if ( a3 )
  {
    v13 = *((_BYTE *)v9 + 456);
    v14 = v12;
    if ( v13 )
    {
      v14 = UMPDOBJ::GetKernelPtr((char **)v9, (char *)v29);
      v15 = (unsigned int)v28;
    }
    else
    {
      v15 = -1LL;
    }
    IFIMETRICS = ProbeAndReadIFIMETRICS((struct _IFIMETRICS *)v14, v13 == 0, v15);
    if ( (unsigned int)bIsFreeHooked(a1, v9) )
    {
      memset(v21, 0, sizeof(v21));
      if ( IFIMETRICS )
        PushThreadGuardedObject(v21, IFIMETRICS, Win32FreePool, v16);
      UMPDMyDrvFree(v9, a1, v12, *a4);
      if ( IFIMETRICS )
        PopThreadGuardedObject(v21);
    }
LABEL_9:
    *a4 = (unsigned int)IFIMETRICS;
    v12 = (char *)IFIMETRICS;
  }
LABEL_10:
  XUMPDOBJ::~XUMPDOBJ(&v20);
  return (struct _IFIMETRICS *)v12;
}
