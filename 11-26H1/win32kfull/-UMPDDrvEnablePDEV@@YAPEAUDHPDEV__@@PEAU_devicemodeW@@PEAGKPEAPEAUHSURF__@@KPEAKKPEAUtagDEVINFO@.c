/*
 * XREFs of ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x140282E80
 * Callers:
 *     <none>
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D600C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1400D70E4 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1400D780C (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D785C (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D7A00 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D7B24 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1401DC3C8 (-SETFLAG@@YAXHAECKK@Z.c)
 *     ?ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z @ 0x1402081EC (-ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z.c)
 *     ?UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x140235610 (-UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     ?CopyFromUser@UMPDOBJ@@QEAAXPEAXQEAX_K@Z @ 0x14034A2C0 (-CopyFromUser@UMPDOBJ@@QEAAXPEAXQEAX_K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

struct DHPDEV__ *__fastcall UMPDDrvEnablePDEV(
        struct _devicemodeW *a1,
        unsigned __int16 *a2,
        unsigned int a3,
        HSURF *a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int a7,
        struct tagDEVINFO *a8,
        HDEV a9,
        unsigned __int16 *a10,
        void *a11)
{
  __int64 v12; // r13
  UMPDOBJ *v14; // rbx
  unsigned int v15; // r15d
  char *v16; // rax
  char *KernelPtr; // r13
  PVOID v18; // r12
  PVOID v19; // r15
  PVOID v20; // r14
  size_t v21; // r8
  void *v22; // rsi
  size_t v24; // [rsp+20h] [rbp-178h]
  UMPDOBJ *v25; // [rsp+38h] [rbp-160h] BYREF
  PVOID v26; // [rsp+40h] [rbp-158h] BYREF
  size_t Size; // [rsp+48h] [rbp-150h]
  void *Src; // [rsp+50h] [rbp-148h]
  struct DHPDEV__ *v29; // [rsp+58h] [rbp-140h] BYREF
  PVOID pv; // [rsp+60h] [rbp-138h]
  PVOID v31; // [rsp+68h] [rbp-130h]
  void *v32; // [rsp+70h] [rbp-128h]
  unsigned int *v33; // [rsp+78h] [rbp-120h]
  unsigned int *v34; // [rsp+80h] [rbp-118h]
  unsigned int *v35; // [rsp+88h] [rbp-110h]
  unsigned int *v36; // [rsp+90h] [rbp-108h]
  _DWORD v37[4]; // [rsp+A0h] [rbp-F8h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-E8h]
  __int64 v39; // [rsp+B8h] [rbp-E0h]
  void *v40; // [rsp+C0h] [rbp-D8h] BYREF
  unsigned __int16 *v41; // [rsp+C8h] [rbp-D0h] BYREF
  int v42; // [rsp+D0h] [rbp-C8h]
  void *v43; // [rsp+D8h] [rbp-C0h]
  unsigned int v44; // [rsp+E0h] [rbp-B8h]
  void *v45; // [rsp+E8h] [rbp-B0h]
  unsigned int v46; // [rsp+F0h] [rbp-A8h]
  void *v47; // [rsp+F8h] [rbp-A0h]
  __int64 v48; // [rsp+100h] [rbp-98h]
  unsigned __int16 *v49[2]; // [rsp+108h] [rbp-90h] BYREF
  int v50; // [rsp+118h] [rbp-80h]
  unsigned int v51; // [rsp+11Ch] [rbp-7Ch]
  void *v52; // [rsp+128h] [rbp-70h]
  void *v53; // [rsp+130h] [rbp-68h]
  void *v54; // [rsp+138h] [rbp-60h]
  BOOL v55; // [rsp+140h] [rbp-58h]
  BOOL v56; // [rsp+144h] [rbp-54h]
  BOOL v57; // [rsp+148h] [rbp-50h]

  v12 = a3;
  v26 = a2;
  LODWORD(Size) = a5;
  v33 = a6;
  v32 = a8;
  Src = a9;
  v31 = a10;
  pv = a11;
  v29 = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v25);
  memset_0(v37, 0, 0xB0uLL);
  v14 = v25;
  if ( !v25 )
    goto LABEL_49;
  v38 = *(_QWORD *)v25;
  v39 = *((_QWORD *)Src + 223);
  v40 = a1;
  v41 = (unsigned __int16 *)v26;
  v42 = v12;
  v43 = a4;
  v44 = a5;
  v46 = a7;
  v48 = *((_QWORD *)Src + 2);
  v49[0] = (unsigned __int16 *)v31;
  v49[1] = (unsigned __int16 *)pv;
  v50 = *((unsigned __int8 *)v25 + 440);
  v51 = v50 ? (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC : 0;
  v15 = a1 ? a1->dmSize + a1->dmDriverExtra : 0;
  if ( a4 )
  {
    if ( (unsigned int)v12 <= 0x1FFFFFFF )
    {
      v43 = UMPDOBJ::_AllocUserMem(v14, 8 * (int)v12, 1);
      if ( !v43 )
        goto LABEL_49;
    }
  }
  if ( a6 )
  {
    v45 = UMPDOBJ::_AllocUserMem(v14, Size, 1);
    if ( !v45 )
      goto LABEL_49;
  }
  if ( v32 )
  {
    v47 = UMPDOBJ::_AllocUserMem(v14, a7, 1);
    if ( !v47 )
      goto LABEL_49;
  }
  v16 = (char *)UMPDOBJ::_AllocUserMem(v14, 0x30000u, 1);
  if ( !v16 )
    goto LABEL_49;
  v52 = v16;
  v53 = v16 + 0x10000;
  v54 = v16 + 0x20000;
  if ( !(unsigned int)UMPDOBJ::ThunkMemBlock(v14, &v40, v15) )
    goto LABEL_49;
  if ( !(unsigned int)UMPDOBJ::ThunkStringW(v14, &v41) )
    goto LABEL_49;
  if ( !(unsigned int)UMPDOBJ::ThunkStringW(v14, v49) )
    goto LABEL_49;
  LODWORD(v24) = 8;
  if ( (unsigned int)UMPDOBJ::Thunk(v14, v37, 0xB0u, &v29, v24) == -1 )
    goto LABEL_49;
  if ( a4 )
    UMPDOBJ::CopyFromUser(v14, a4, v43, 8 * v12);
  if ( a6 )
  {
    UMPDOBJ::CopyFromUser(v14, a6, v45, (unsigned int)Size);
    if ( a6[59] == 18 && a6[68] <= 0x100 && a6[69] <= 0x100 )
    {
      SETFLAG(1, (volatile unsigned int *)Src + 10, 0x400000);
      v34 = a6 + 70;
      v55 = *((_QWORD *)a6 + 35) != 0LL;
      v35 = a6 + 72;
      v56 = *((_QWORD *)a6 + 36) != 0LL;
      v36 = a6 + 74;
      v57 = *((_QWORD *)a6 + 37) != 0LL;
      *((_QWORD *)a6 + 35) = 0LL;
      *((_QWORD *)a6 + 36) = 0LL;
      *((_QWORD *)a6 + 37) = 0LL;
      KernelPtr = UMPDOBJ::GetKernelPtr((char **)v14, (char *)v52);
      Src = UMPDOBJ::GetKernelPtr((char **)v14, (char *)v53);
      Size = (size_t)UMPDOBJ::GetKernelPtr((char **)v14, (char *)v54);
      v18 = 0LL;
      pv = 0LL;
      v19 = 0LL;
      v31 = 0LL;
      v20 = 0LL;
      v26 = 0LL;
      if ( v55 )
      {
        v18 = EngAllocUserMem(a6[68] * a6[69], 0x706D7547u);
        pv = v18;
      }
      if ( v56 )
      {
        v19 = EngAllocUserMem(a6[68] * a6[69], 0x706D7547u);
        v31 = v19;
      }
      if ( v57 )
      {
        v20 = EngAllocUserMem(a6[68] * a6[69], 0x706D7547u);
        v26 = v20;
      }
      if ( v18 )
      {
        v21 = a6[68] * a6[69];
        if ( *((_BYTE *)v14 + 440) )
        {
          memmove(v18, KernelPtr, v21);
          if ( v19 )
            memmove(v19, Src, a6[68] * a6[69]);
          if ( v20 )
            memmove(v20, (const void *)Size, a6[68] * a6[69]);
        }
        else
        {
          RtlCopyFromUser(v18, KernelPtr, v21);
          if ( v19 )
            RtlCopyFromUser(v19, Src, a6[68] * a6[69]);
          if ( v20 )
            RtlCopyFromUser(v20, (void *)Size, a6[68] * a6[69]);
        }
        *(_QWORD *)v34 = v18;
        *(_QWORD *)v35 = v19;
        *(_QWORD *)v36 = v20;
      }
      else
      {
        a6[59] = 17;
      }
    }
  }
  v22 = v32;
  if ( v32 )
  {
    v26 = 0LL;
    UMPDOBJ::CopyFromUser(v14, &v26, (char *)v47 + 296, 8uLL);
    if ( !v26 )
    {
      if ( v29 )
        UMPDDrvDisablePDEV(v29);
LABEL_49:
      XUMPDOBJ::~XUMPDOBJ(&v25);
      return 0LL;
    }
    UMPDOBJ::CopyFromUser(v14, v22, v47, a7);
  }
  XUMPDOBJ::~XUMPDOBJ(&v25);
  return v29;
}
