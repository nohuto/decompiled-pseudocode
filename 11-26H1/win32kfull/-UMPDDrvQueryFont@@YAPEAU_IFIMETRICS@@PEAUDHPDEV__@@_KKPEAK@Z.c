/*
 * XREFs of ?UMPDDrvQueryFont@@YAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEAK@Z @ 0x140283760
 * Callers:
 *     <none>
 * Callees:
 *     ?UMPDMyDrvFree@@YAXPEAVUMPDOBJ@@PEAUDHPDEV__@@PEAXK@Z @ 0x1400D4200 (-UMPDMyDrvFree@@YAXPEAVUMPDOBJ@@PEAUDHPDEV__@@PEAXK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D600C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1400D780C (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D785C (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D7A00 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D7B24 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z @ 0x140282D40 (-ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z.c)
 *     ?bIsFreeHooked@@YAHPEAUDHPDEV__@@PEAVUMPDOBJ@@@Z @ 0x1402842D8 (-bIsFreeHooked@@YAHPEAUDHPDEV__@@PEAVUMPDOBJ@@@Z.c)
 *     ?CopyFromUser@UMPDOBJ@@QEAAXPEAXQEAX_K@Z @ 0x14034A2C0 (-CopyFromUser@UMPDOBJ@@QEAAXPEAXQEAX_K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

struct _IFIMETRICS *__fastcall UMPDDrvQueryFont(struct DHPDEV__ *a1, __int64 a2, int a3, unsigned int *a4)
{
  struct _IFIMETRICS *IFIMETRICS; // rsi
  UMPDOBJ *v9; // rbx
  void *v10; // rdi
  char v11; // si
  struct _IFIMETRICS *KernelPtr; // rax
  unsigned __int64 v13; // r8
  size_t Size; // [rsp+20h] [rbp-D8h]
  UMPDOBJ *v16; // [rsp+30h] [rbp-C8h] BYREF
  void *v17; // [rsp+38h] [rbp-C0h] BYREF
  _OWORD v18[2]; // [rsp+40h] [rbp-B8h] BYREF
  _DWORD v19[4]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v20; // [rsp+70h] [rbp-88h]
  struct DHPDEV__ *v21; // [rsp+78h] [rbp-80h]
  __int64 v22; // [rsp+80h] [rbp-78h]
  int v23; // [rsp+88h] [rbp-70h]
  void *v24; // [rsp+90h] [rbp-68h]
  unsigned int v25; // [rsp+98h] [rbp-60h]
  void *v26; // [rsp+A0h] [rbp-58h]

  v17 = 0LL;
  IFIMETRICS = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v16);
  memset_0(v19, 0, 0x48uLL);
  v9 = v16;
  if ( v16 )
  {
    v19[1] = 26;
    LOBYTE(v19[0]) = 0;
    v20 = *(_QWORD *)v16;
    v21 = a1;
    v22 = a2;
    v23 = a3;
    v24 = UMPDOBJ::_AllocUserMem(v16, 4u, 1);
    v25 = 0;
    v26 = 0LL;
    if ( v24 )
    {
      LODWORD(Size) = 8;
      if ( (unsigned int)UMPDOBJ::Thunk(v9, v19, 0x48u, &v17, Size) != -1 )
      {
        UMPDOBJ::CopyFromUser(v9, a4, v24, 4uLL);
        v10 = v17;
        if ( v17 )
        {
          if ( !a3 )
          {
LABEL_15:
            XUMPDOBJ::~XUMPDOBJ(&v16);
            return (struct _IFIMETRICS *)v10;
          }
          v11 = *((_BYTE *)v9 + 440);
          KernelPtr = (struct _IFIMETRICS *)v17;
          if ( v11 )
          {
            KernelPtr = (struct _IFIMETRICS *)UMPDOBJ::GetKernelPtr((char **)v9, (char *)v26);
            v13 = v25;
          }
          else
          {
            v13 = -1LL;
          }
          IFIMETRICS = ProbeAndReadIFIMETRICS(KernelPtr, v11 == 0, v13);
          if ( (unsigned int)bIsFreeHooked(a1, v9) )
          {
            memset(v18, 0, sizeof(v18));
            if ( IFIMETRICS )
              PushThreadGuardedObject(v18, IFIMETRICS, Win32FreePool);
            UMPDMyDrvFree(v9, a1, v10, *a4);
            if ( IFIMETRICS )
              PopThreadGuardedObject(v18);
          }
        }
        *a4 = (unsigned int)IFIMETRICS;
        v10 = IFIMETRICS;
        goto LABEL_15;
      }
    }
  }
  XUMPDOBJ::~XUMPDOBJ(&v16);
  return 0LL;
}
