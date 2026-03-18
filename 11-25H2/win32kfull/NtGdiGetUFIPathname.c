/*
 * XREFs of NtGdiGetUFIPathname @ 0x140339E90
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B975C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400B9F50 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?GreGetUFIPathname@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAKPEAGK1KPEAH1PEAX31@Z @ 0x1403275E4 (-GreGetUFIPathname@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAKPEAGK1KPEAH1PEAX31@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtGdiGetUFIPathname(
        ULONG64 a1,
        void *a2,
        char *a3,
        ULONG64 a4,
        char a5,
        void *a6,
        _DWORD *a7,
        void *a8,
        void *a9,
        _DWORD *a10)
{
  const void *v12; // rdx
  void *v13; // r13
  unsigned __int16 *v14; // rsi
  __int64 v15; // rdx
  int v16; // ecx
  __int64 SessionState; // rax
  unsigned int UFIPathname; // edi
  bool v19; // cf
  void **v20; // r14
  size_t v21; // r8
  void *v22; // rcx
  void *v23; // rcx
  _DWORD *v24; // rcx
  _DWORD *v25; // rcx
  unsigned int Src; // [rsp+60h] [rbp-2D8h] BYREF
  int v28; // [rsp+64h] [rbp-2D4h] BYREF
  unsigned int v29; // [rsp+68h] [rbp-2D0h] BYREF
  int v30; // [rsp+6Ch] [rbp-2CCh] BYREF
  int v31; // [rsp+70h] [rbp-2C8h] BYREF
  unsigned int v32; // [rsp+74h] [rbp-2C4h] BYREF
  unsigned __int16 *v33; // [rsp+78h] [rbp-2C0h]
  __int64 v34; // [rsp+80h] [rbp-2B8h]
  __int64 v35; // [rsp+88h] [rbp-2B0h] BYREF
  HSEMAPHORE v36; // [rsp+90h] [rbp-2A8h] BYREF
  void *Address; // [rsp+98h] [rbp-2A0h]
  ULONG64 v38; // [rsp+A0h] [rbp-298h]
  void *v39; // [rsp+A8h] [rbp-290h]
  void *v40; // [rsp+B0h] [rbp-288h]
  void *v41; // [rsp+B8h] [rbp-280h]
  char *v42; // [rsp+C0h] [rbp-278h]
  ULONG64 v43; // [rsp+C8h] [rbp-270h]
  _BYTE v44[528]; // [rsp+E0h] [rbp-258h] BYREF

  v38 = a4;
  v12 = (const void *)a1;
  v41 = a2;
  v42 = a3;
  v43 = a4;
  v39 = a6;
  Address = a8;
  v13 = a9;
  v34 = (__int64)a9;
  v40 = a9;
  v35 = 0LL;
  v14 = 0LL;
  v33 = 0LL;
  Src = 0;
  v29 = 0;
  v28 = 0;
  v32 = 0;
  v30 = 0;
  v31 = 0;
  if ( a1 >= MmUserProbeAddress )
    v12 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(&v35, v12, 8uLL);
  SessionState = W32GetSessionState(v16, v15);
  SEMOBJ<17>::SEMOBJ<17>(&v36, *(_QWORD *)(SessionState + 96) + 4872LL);
  UFIPathname = GreGetUFIPathname(
                  (struct _UNIVERSAL_FONT_ID *)&v35,
                  &Src,
                  0LL,
                  0,
                  &v29,
                  a5,
                  &v28,
                  &v32,
                  Address,
                  (int *)((unsigned __int64)&v30 & -(__int64)(a9 != 0LL)),
                  (unsigned int *)((unsigned __int64)&v31 & -(__int64)(a10 != 0LL)));
  if ( UFIPathname )
  {
    if ( Src > 0x104 )
    {
      if ( Src <= 0x1388000 )
      {
        v14 = (unsigned __int16 *)AllocFreeTmpBuffer(2 * Src);
        v33 = v14;
      }
      UFIPathname &= -(v14 != 0LL);
    }
    else
    {
      v14 = (unsigned __int16 *)v44;
      v33 = (unsigned __int16 *)v44;
    }
  }
  if ( UFIPathname && !v28 && v14 )
  {
    v19 = v34 != 0;
    v34 = -v34;
    UFIPathname = GreGetUFIPathname(
                    (struct _UNIVERSAL_FONT_ID *)&v35,
                    0LL,
                    v14,
                    Src,
                    &v29,
                    a5,
                    0LL,
                    0LL,
                    0LL,
                    (int *)((unsigned __int64)&v30 & -(__int64)v19),
                    (unsigned int *)((unsigned __int64)&v31 & -(__int64)(a10 != 0LL)));
  }
  SEMOBJ<17>::vUnlock(&v36);
  if ( UFIPathname )
  {
    if ( Src > 0x30C )
      UFIPathname = 0;
    if ( UFIPathname )
    {
      if ( a2 )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (void *)MmUserProbeAddress;
        RtlCopyVolatileMemory(a2, &Src, 4uLL);
      }
      v20 = (void **)MmUserProbeAddress;
      if ( a3 )
      {
        v21 = 2LL * Src;
        if ( (unsigned __int64)&a3[v21] > MmUserProbeAddress || &a3[v21] <= a3 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a3, v14, v21);
      }
      v22 = (void *)v38;
      if ( v38 )
      {
        if ( v38 >= MmUserProbeAddress )
          v22 = (void *)MmUserProbeAddress;
        RtlCopyVolatileMemory(v22, &v29, 4uLL);
        v20 = (void **)MmUserProbeAddress;
      }
      if ( v28 )
      {
        v23 = v39;
        if ( v39 )
        {
          if ( v39 >= *v20 )
            v23 = *v20;
          RtlCopyVolatileMemory(v23, &v28, 4uLL);
          v20 = (void **)MmUserProbeAddress;
        }
        v24 = a7;
        if ( a7 )
        {
          if ( a7 >= *v20 )
            v24 = *v20;
          *v24 = v32;
        }
      }
      if ( a9 )
      {
        if ( a9 >= *v20 )
          v13 = *v20;
        RtlCopyVolatileMemory(v13, &v30, 4uLL);
        v20 = (void **)MmUserProbeAddress;
      }
      v25 = a10;
      if ( a10 )
      {
        if ( a10 >= *v20 )
          v25 = *v20;
        *v25 = v31;
      }
    }
  }
  if ( v14 && v14 != (unsigned __int16 *)v44 )
    FreeTmpBuffer(v14);
  return UFIPathname;
}
