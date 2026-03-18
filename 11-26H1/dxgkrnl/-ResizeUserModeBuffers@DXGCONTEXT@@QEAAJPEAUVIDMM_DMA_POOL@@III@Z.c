/*
 * XREFs of ?ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAUVIDMM_DMA_POOL@@III@Z @ 0x14040F67C
 * Callers:
 *     DxgkRender @ 0x14029AD60 (DxgkRender.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x140038650 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x14003DA90 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGCONTEXT::ResizeUserModeBuffers(
        DXGCONTEXT *this,
        struct VIDMM_DMA_POOL *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v5; // eax
  unsigned int v6; // r12d
  HANDLE v8; // r13
  signed int v9; // esi
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  SIZE_T v14; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v15; // rax
  int v16; // eax
  unsigned __int64 v17; // rcx
  SIZE_T v18; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v19; // rax
  int v20; // eax
  struct DXGGLOBAL *v21; // rax
  int v22; // eax
  _QWORD *v23; // r15
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v24; // rax
  void *v25; // rcx
  void *v26; // rcx
  SIZE_T *v27; // r15
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v28; // rax
  HANDLE v29; // r12
  void *v30; // rcx
  SIZE_T *v31; // r15
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v32; // rax
  void *v33; // rcx
  PVOID v34; // r14
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v35; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v36; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v37; // rax
  DXGCONTEXT *v39; // [rsp+40h] [rbp-98h] BYREF
  __int64 v40; // [rsp+48h] [rbp-90h]
  SIZE_T v41; // [rsp+50h] [rbp-88h] BYREF
  SIZE_T Size; // [rsp+58h] [rbp-80h] BYREF
  HANDLE SecureHandle; // [rsp+60h] [rbp-78h]
  PVOID v44; // [rsp+68h] [rbp-70h] BYREF
  PVOID Address; // [rsp+70h] [rbp-68h] BYREF
  PVOID P; // [rsp+78h] [rbp-60h]
  __int64 v47; // [rsp+80h] [rbp-58h] BYREF
  HANDLE v48; // [rsp+88h] [rbp-50h]
  PVOID Pool2; // [rsp+90h] [rbp-48h]
  _QWORD v50[8]; // [rsp+98h] [rbp-40h] BYREF

  v5 = a4;
  v6 = a3;
  v39 = this;
  v47 = 0LL;
  Pool2 = 0LL;
  Size = 0LL;
  Address = 0LL;
  SecureHandle = 0LL;
  v41 = 0LL;
  v44 = 0LL;
  P = 0LL;
  v8 = 0LL;
  v48 = 0LL;
  v9 = 0;
  v50[0] = a3;
  if ( a3 )
  {
    if ( a3 < 0x7FFFFFFF )
    {
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      v9 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD *, int, int))VirtualMemoryInterface)(
             -1LL,
             &v47,
             0LL,
             v50,
             12288,
             4);
      v6 = v50[0];
    }
    else
    {
      v9 = -1073741801;
      WdLogSingleEntry3(3LL, this, a3, -1073741801LL);
      WdLogGlobalForLineNumber = 2013;
    }
    if ( v9 < 0 )
    {
      WdLogSingleEntry3(3LL, this, v6, v9);
      WdLogGlobalForLineNumber = 2055;
    }
    else
    {
      Global = DXGGLOBAL::GetGlobal();
      if ( (unsigned __int8)DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                              (struct DXGGLOBAL *)((char *)Global + 1668),
                              *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
      {
        v40 = v6;
        Pool2 = (PVOID)ExAllocatePool2(256LL, v6, 1265072196LL);
        if ( !Pool2 )
        {
          v9 = -1073741801;
          WdLogSingleEntry3(3LL, this, v40, -1073741801LL);
          WdLogGlobalForLineNumber = 2046;
        }
      }
    }
    v5 = a4;
  }
  if ( v9 >= 0 && v5 )
  {
    v12 = v5;
    v13 = 8LL * v5;
    v14 = 0xFFFFFFFFLL;
    if ( v13 <= 0xFFFFFFFF )
      v14 = (unsigned int)v13;
    v9 = v13 > 0xFFFFFFFF ? 0xC0000095 : 0;
    LODWORD(v40) = v9;
    Size = v14;
    if ( v13 > 0xFFFFFFFF )
    {
      WdLogSingleEntry2(3LL, this, v12);
      WdLogGlobalForLineNumber = 2099;
    }
    else
    {
      v15 = DxgkGetVirtualMemoryInterface();
      v16 = (*(__int64 (__fastcall **)(__int64, PVOID *, _QWORD, SIZE_T *, int, int))v15)(
              -1LL,
              &Address,
              0LL,
              &Size,
              12288,
              4);
      v9 = v16;
      LODWORD(v40) = v16;
      if ( v16 < 0 )
      {
        WdLogSingleEntry3(3LL, this, Size, v16);
        WdLogGlobalForLineNumber = 2092;
      }
    }
    if ( v9 >= 0 )
    {
      SecureHandle = MmSecureVirtualMemory(Address, Size, 4u);
      if ( !SecureHandle )
      {
        v9 = -1073741801;
        WdLogSingleEntry2(3LL, this, -1073741801LL);
        WdLogGlobalForLineNumber = 2125;
      }
    }
  }
  if ( v9 < 0 )
    goto LABEL_64;
  if ( a5 )
  {
    v17 = 24LL * a5;
    v18 = 0xFFFFFFFFLL;
    if ( v17 <= 0xFFFFFFFF )
      v18 = (unsigned int)v17;
    v9 = v17 > 0xFFFFFFFF ? 0xC0000095 : 0;
    LODWORD(v40) = v9;
    v41 = v18;
    if ( v17 > 0xFFFFFFFF )
    {
      WdLogSingleEntry2(3LL, this, a5);
      WdLogGlobalForLineNumber = 2185;
    }
    else
    {
      v19 = DxgkGetVirtualMemoryInterface();
      v20 = (*(__int64 (__fastcall **)(__int64, PVOID *, _QWORD, SIZE_T *, int, int))v19)(
              -1LL,
              &v44,
              0LL,
              &v41,
              12288,
              4);
      v9 = v20;
      LODWORD(v40) = v20;
      if ( v20 < 0 )
      {
        WdLogSingleEntry3(3LL, this, v41, v20);
        WdLogGlobalForLineNumber = 2178;
      }
      else
      {
        v21 = DXGGLOBAL::GetGlobal();
        if ( (unsigned __int8)DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                                (struct DXGGLOBAL *)((char *)v21 + 1668),
                                *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
        {
          P = (PVOID)ExAllocatePool2(256LL, v41, 1265072196LL);
          if ( !P )
          {
            v9 = -1073741801;
            LODWORD(v40) = -1073741801;
            WdLogSingleEntry3(3LL, this, v6, -1073741801LL);
            WdLogGlobalForLineNumber = 2169;
          }
        }
      }
    }
    if ( v9 < 0 )
      goto LABEL_64;
    v8 = MmSecureVirtualMemory(v44, v41, 4u);
    v48 = v8;
    if ( !v8 )
    {
      v9 = -1073741801;
      WdLogSingleEntry2(3LL, this, -1073741801LL);
      WdLogGlobalForLineNumber = 2211;
    }
  }
  if ( v9 < 0 )
    goto LABEL_64;
  v22 = (*(__int64 (__fastcall **)(struct VIDMM_DMA_POOL *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL)
                                                                                               + 8LL)
                                                                                   + 456LL))(
          a2,
          v6,
          a4,
          a5);
  v9 = v22;
  if ( v22 < 0 )
  {
    WdLogSingleEntry2(3LL, this, v22);
    WdLogGlobalForLineNumber = 2231;
  }
  if ( v9 < 0 )
  {
LABEL_64:
    v29 = SecureHandle;
LABEL_65:
    v34 = P;
    goto LABEL_66;
  }
  if ( v6 )
  {
    if ( *((_QWORD *)this + 7) )
    {
      v23 = (_QWORD *)((char *)this + 48);
      v24 = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, char *, char *, __int64))v24 + 2))(
        -1LL,
        (char *)this + 56,
        (char *)this + 48,
        0x8000LL);
    }
    else
    {
      v23 = (_QWORD *)((char *)v39 + 48);
    }
    v25 = (void *)*((_QWORD *)this + 8);
    if ( v25 )
      ExFreePoolWithTag(v25, 0);
    *((_QWORD *)this + 7) = v47;
    *((_QWORD *)this + 8) = Pool2;
    *v23 = v6;
  }
  if ( a4 )
  {
    v26 = (void *)*((_QWORD *)this + 12);
    if ( v26 )
      MmUnsecureVirtualMemory(v26);
    if ( *((_QWORD *)this + 11) )
    {
      v27 = (SIZE_T *)((char *)this + 80);
      v28 = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, char *, char *, __int64))v28 + 2))(
        -1LL,
        (char *)this + 88,
        (char *)this + 80,
        0x8000LL);
    }
    else
    {
      v27 = (SIZE_T *)((char *)v39 + 80);
    }
    v29 = SecureHandle;
    *((_QWORD *)this + 12) = SecureHandle;
    *((_QWORD *)this + 11) = Address;
    *((_DWORD *)this + 18) = a4;
    *v27 = Size;
  }
  else
  {
    v29 = SecureHandle;
  }
  if ( !a5 )
    goto LABEL_65;
  v30 = (void *)*((_QWORD *)this + 17);
  if ( v30 )
    MmUnsecureVirtualMemory(v30);
  if ( *((_QWORD *)this + 15) )
  {
    v31 = (SIZE_T *)((char *)this + 112);
    v32 = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, char *, char *, __int64))v32 + 2))(
      -1LL,
      (char *)this + 120,
      (char *)this + 112,
      0x8000LL);
  }
  else
  {
    v31 = (SIZE_T *)((char *)v39 + 112);
  }
  v33 = (void *)*((_QWORD *)this + 16);
  if ( v33 )
    ExFreePoolWithTag(v33, 0);
  *((_QWORD *)this + 17) = v8;
  *((_QWORD *)this + 15) = v44;
  v34 = P;
  *((_QWORD *)this + 16) = P;
  *((_DWORD *)this + 26) = a5;
  *v31 = v41;
LABEL_66:
  if ( v9 < 0 )
  {
    if ( v8 )
      MmUnsecureVirtualMemory(v8);
    if ( v44 )
    {
      v39 = 0LL;
      v35 = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, PVOID *, DXGCONTEXT **, __int64))v35 + 2))(-1LL, &v44, &v39, 0x8000LL);
    }
    if ( v34 )
      ExFreePoolWithTag(v34, 0);
    if ( v29 )
      MmUnsecureVirtualMemory(v29);
    if ( Address )
    {
      v39 = 0LL;
      v36 = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, PVOID *, DXGCONTEXT **, __int64))v36 + 2))(-1LL, &Address, &v39, 0x8000LL);
    }
    if ( v47 )
    {
      v39 = 0LL;
      v37 = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, __int64 *, DXGCONTEXT **, __int64))v37 + 2))(-1LL, &v47, &v39, 0x8000LL);
    }
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)v9;
}
