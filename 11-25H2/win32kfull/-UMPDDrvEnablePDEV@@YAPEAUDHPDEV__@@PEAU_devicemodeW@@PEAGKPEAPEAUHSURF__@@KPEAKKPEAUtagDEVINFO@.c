/*
 * XREFs of ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1401D0A90
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D2E48 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D2F30 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1400D35A0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1400D3D28 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D3D78 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D425C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x140101758 (-SETFLAG@@YAXHAECKK@Z.c)
 *     ?UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1402050C0 (-UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
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
  UMPDOBJ *v15; // rbx
  unsigned int v16; // edi
  char *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // r8
  unsigned __int64 v20; // r8
  unsigned __int64 v22; // rdi
  char *KernelPtr; // rax
  char *v25; // rax
  char *v26; // r13
  PVOID v27; // r12
  PVOID v28; // r15
  PVOID v29; // rdi
  size_t v30; // r8
  ULONG64 v31; // rcx
  size_t v32; // r8
  size_t v33; // r8
  void *v34; // rdi
  char *v35; // rax
  size_t v37; // [rsp+20h] [rbp-158h]
  char *Size; // [rsp+38h] [rbp-140h]
  char *Src; // [rsp+40h] [rbp-138h]
  UMPDOBJ *v40; // [rsp+48h] [rbp-130h] BYREF
  PVOID v41; // [rsp+50h] [rbp-128h]
  PVOID v42; // [rsp+58h] [rbp-120h]
  void *v43; // [rsp+60h] [rbp-118h]
  struct DHPDEV__ *v44; // [rsp+68h] [rbp-110h] BYREF
  PVOID pv; // [rsp+70h] [rbp-108h]
  unsigned int *v46; // [rsp+78h] [rbp-100h]
  _DWORD v47[4]; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v48; // [rsp+90h] [rbp-E8h]
  __int64 v49; // [rsp+98h] [rbp-E0h]
  void *v50; // [rsp+A0h] [rbp-D8h] BYREF
  void *v51; // [rsp+A8h] [rbp-D0h] BYREF
  int v52; // [rsp+B0h] [rbp-C8h]
  void *v53; // [rsp+B8h] [rbp-C0h]
  unsigned int v54; // [rsp+C0h] [rbp-B8h]
  void *v55; // [rsp+C8h] [rbp-B0h]
  unsigned int v56; // [rsp+D0h] [rbp-A8h]
  void *v57; // [rsp+D8h] [rbp-A0h]
  __int64 v58; // [rsp+E0h] [rbp-98h]
  void *v59[2]; // [rsp+E8h] [rbp-90h] BYREF
  int v60; // [rsp+F8h] [rbp-80h]
  unsigned int v61; // [rsp+FCh] [rbp-7Ch]
  void *v62; // [rsp+108h] [rbp-70h]
  void *v63; // [rsp+110h] [rbp-68h]
  void *v64; // [rsp+118h] [rbp-60h]
  BOOL v65; // [rsp+120h] [rbp-58h]
  BOOL v66; // [rsp+124h] [rbp-54h]
  BOOL v67; // [rsp+128h] [rbp-50h]

  v12 = a3;
  v46 = a6;
  v43 = a8;
  v42 = a10;
  v41 = a11;
  v44 = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v40);
  memset_0(v47, 0, 0xB0uLL);
  v15 = v40;
  if ( !v40 )
    goto LABEL_68;
  v48 = *(_QWORD *)v40;
  v49 = *((_QWORD *)a9 + 223);
  v50 = a1;
  v51 = a2;
  v52 = v12;
  v53 = a4;
  v54 = a5;
  v56 = a7;
  v58 = *((_QWORD *)a9 + 2);
  v59[0] = v42;
  v59[1] = v41;
  v60 = *((unsigned __int8 *)v40 + 456);
  v61 = (_BYTE)v60 ? (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC : 0;
  v16 = a1 ? a1->dmSize + a1->dmDriverExtra : 0;
  if ( a4 )
  {
    if ( (unsigned int)v12 <= 0x1FFFFFFF )
    {
      v53 = UMPDOBJ::_AllocUserMem(v15, 8 * (int)v12, 1);
      if ( !v53 )
        goto LABEL_68;
    }
  }
  if ( a6 )
  {
    v55 = UMPDOBJ::_AllocUserMem(v15, a5, 1);
    if ( !v55 )
      goto LABEL_68;
  }
  if ( v43 )
  {
    v57 = UMPDOBJ::_AllocUserMem(v15, a7, 1);
    if ( !v57 )
      goto LABEL_68;
  }
  v17 = UMPDOBJ::_AllocUserMem(v15, 0x30000u, 1);
  if ( !v17 )
    goto LABEL_68;
  v62 = v17;
  v63 = v17 + 0x10000;
  v64 = v17 + 0x20000;
  if ( !(unsigned int)UMPDOBJ::ThunkMemBlock(v15, (const void **)&v50, v16) )
    goto LABEL_68;
  v18 = -1LL;
  if ( v51 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *((_WORD *)v51 + v19) );
    v20 = v19 + 1;
    if ( !(v20 >= 0x7FFFFFFF ? 0 : UMPDOBJ::ThunkMemBlock(v15, (const void **)&v51, 2 * (int)v20)) )
      goto LABEL_68;
  }
  if ( v59[0] )
  {
    do
      ++v18;
    while ( *((_WORD *)v59[0] + v18) );
    v22 = v18 + 1;
    if ( !(v22 >= 0x7FFFFFFF ? 0 : UMPDOBJ::ThunkMemBlock(v15, (const void **)v59, 2 * (int)v22)) )
      goto LABEL_68;
  }
  LODWORD(v37) = 8;
  if ( (unsigned int)UMPDOBJ::Thunk(v15, v47, 0xB0u, &v44, v37) == -1 )
    goto LABEL_68;
  if ( a4 )
  {
    KernelPtr = UMPDOBJ::GetKernelPtr((char **)v15, (char *)v53);
    memmove(a4, KernelPtr, 8 * v12);
  }
  if ( a6 )
  {
    v25 = UMPDOBJ::GetKernelPtr((char **)v15, (char *)v55);
    memmove(a6, v25, a5);
    if ( a6[59] == 18 && a6[68] <= 0x100 && a6[69] <= 0x100 )
    {
      SETFLAG(1, (volatile unsigned int *)a9 + 10, 0x400000);
      v65 = *((_QWORD *)a6 + 35) != 0LL;
      v66 = *((_QWORD *)a6 + 36) != 0LL;
      v67 = *((_QWORD *)a6 + 37) != 0LL;
      *((_QWORD *)a6 + 35) = 0LL;
      *((_QWORD *)a6 + 36) = 0LL;
      *((_QWORD *)a6 + 37) = 0LL;
      v26 = UMPDOBJ::GetKernelPtr((char **)v15, (char *)v62);
      Src = UMPDOBJ::GetKernelPtr((char **)v15, (char *)v63);
      Size = UMPDOBJ::GetKernelPtr((char **)v15, (char *)v64);
      v27 = 0LL;
      pv = 0LL;
      v28 = 0LL;
      v41 = 0LL;
      v29 = 0LL;
      v42 = 0LL;
      if ( v65 )
      {
        v27 = EngAllocUserMem(a6[68] * a6[69], 0x706D7547u);
        pv = v27;
      }
      if ( v66 )
      {
        v28 = EngAllocUserMem(a6[68] * a6[69], 0x706D7547u);
        v41 = v28;
      }
      if ( v67 )
      {
        v29 = EngAllocUserMem(a6[68] * a6[69], 0x706D7547u);
        v42 = v29;
      }
      if ( v27 )
      {
        v30 = a6[68] * a6[69];
        if ( *((_BYTE *)v15 + 456) )
        {
          memmove(v27, v26, v30);
          if ( v28 )
            memmove(v28, Src, a6[68] * a6[69]);
          if ( v29 )
            memmove(v29, Size, a6[68] * a6[69]);
        }
        else
        {
          v31 = (ULONG64)&v26[a6[68] * a6[69]];
          if ( v31 < (unsigned __int64)v26 || v31 > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v27, v26, v30);
          if ( v28 )
          {
            v32 = a6[68] * a6[69];
            if ( &Src[v32] < Src || (unsigned __int64)&Src[v32] > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v28, Src, v32);
          }
          if ( v29 )
          {
            v33 = a6[68] * a6[69];
            if ( &Size[v33] < Size || (unsigned __int64)&Size[v33] > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v29, Size, v33);
          }
        }
        *((_QWORD *)a6 + 35) = v27;
        *((_QWORD *)a6 + 36) = v28;
        *((_QWORD *)a6 + 37) = v29;
      }
      else
      {
        a6[59] = 17;
      }
    }
  }
  v34 = v43;
  if ( v43 )
  {
    v35 = UMPDOBJ::GetKernelPtr((char **)v15, (char *)v57);
    if ( !*((_QWORD *)v35 + 37) )
    {
      if ( v44 )
        UMPDDrvDisablePDEV(v44);
LABEL_68:
      XUMPDOBJ::~XUMPDOBJ(&v40);
      return 0LL;
    }
    memmove(v34, v35, a7);
  }
  XUMPDOBJ::~XUMPDOBJ(&v40);
  return v44;
}
