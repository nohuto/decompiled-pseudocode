/*
 * XREFs of ?Clear@CScopedClipStack@@QEAAXXZ @ 0x1800F3470
 * Callers:
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x1800F2A20 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ??1CScopedClipStack@@QEAA@XZ @ 0x180183278 (--1CScopedClipStack@@QEAA@XZ.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800E1EE0 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScopedClipStack::Clear(CScopedClipStack *this)
{
  __int64 v1; // rbx
  __int64 v3; // r8
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rbx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rdi
  unsigned int v17; // eax
  int v18; // eax
  int v19; // eax
  _QWORD v20[7]; // [rsp+30h] [rbp-38h] BYREF
  void *v21; // [rsp+70h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  v3 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 6);
  if ( v3 )
  {
    v4 = (__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 6 << 6;
    v5 = v4 + v1;
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v20, v1, v3);
    if ( v1 != v4 + v1 )
    {
      do
      {
        v6 = *(_QWORD *)(v1 + 176);
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
        v1 += 192LL;
      }
      while ( v1 != v5 );
    }
    *((_QWORD *)this + 1) -= v4;
  }
  v7 = *((_QWORD *)this + 243);
  v8 = 0xCCCCCCCCCCCCCCCDuLL * ((*((_QWORD *)this + 244) - v7) >> 3);
  if ( v8 )
  {
    v9 = 8 * ((*((_QWORD *)this + 244) - v7) >> 3);
    v10 = v9 + v7;
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(v20, *((_QWORD *)this + 243), v8);
    if ( v7 != v9 + v7 )
    {
      do
      {
        if ( *(_BYTE *)(v7 + 8) && *(_QWORD *)v7 )
          (***(void (__fastcall ****)(_QWORD, __int64))v7)(*(_QWORD *)v7, 1LL);
        *(_QWORD *)v7 = 0LL;
        *(_BYTE *)(v7 + 8) = 0;
        v7 += 40LL;
      }
      while ( v7 != v10 );
    }
    *((_QWORD *)this + 244) -= v9;
  }
  *((_DWORD *)this + 600) = 0;
  v11 = 8LL;
  v12 = *((_DWORD *)this + 602);
  if ( v12 == 8 )
  {
    v15 = *((_DWORD *)this + 603);
    v16 = 8LL;
    if ( v15 > 8 )
      v16 = v15;
    if ( (unsigned __int64)(3 * v16) <= 0xFFFFFFFF )
    {
      if ( (unsigned int)(3 * v16) <= *((_DWORD *)this + 601) )
      {
        v21 = 0LL;
        v18 = HrMalloc(0x10uLL, (unsigned int)v16, &v21);
        if ( v18 >= 0 )
        {
          operator delete(*((void **)this + 299));
          *((_QWORD *)this + 299) = v21;
          *((_DWORD *)this + 601) = v16;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x11Eu, 0LL);
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x10Eu, 0LL);
    }
    *((_DWORD *)this + 603) = 0;
    v13 = 0;
  }
  else
  {
    v13 = v12 + 1;
  }
  *((_DWORD *)this + 602) = v13;
  *((_DWORD *)this + 594) = 0;
  v14 = *((_DWORD *)this + 596);
  if ( v14 == 8 )
  {
    v17 = *((_DWORD *)this + 597);
    if ( v17 > 8 )
      v11 = v17;
    if ( (unsigned __int64)(3 * v11) <= 0xFFFFFFFF )
    {
      if ( (unsigned int)(3 * v11) <= *((_DWORD *)this + 595) )
      {
        v21 = 0LL;
        v19 = HrMalloc(0x10uLL, (unsigned int)v11, &v21);
        if ( v19 >= 0 )
        {
          operator delete(*((void **)this + 296));
          *((_QWORD *)this + 296) = v21;
          *((_DWORD *)this + 595) = v11;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x11Eu, 0LL);
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x10Eu, 0LL);
    }
    *((_QWORD *)this + 298) = 0LL;
  }
  else
  {
    *((_DWORD *)this + 596) = v14 + 1;
  }
}
