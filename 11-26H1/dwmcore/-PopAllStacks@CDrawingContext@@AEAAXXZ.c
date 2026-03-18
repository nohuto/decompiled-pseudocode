/*
 * XREFs of ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x1800F2A20
 * Callers:
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18002D120 (--1CDrawingContext@@MEAA@XZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800F26A0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?EndFrame@CSubDrawingContext@@AEAAX_N@Z @ 0x18019EF30 (-EndFrame@CSubDrawingContext@@AEAAX_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800E1EE0 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800F33F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x1800F3470 (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDrawingContext::PopAllStacks(CDrawingContext *this)
{
  __int64 v2; // rbp
  int v3; // eax
  int v4; // r14d
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int i; // eax
  void **v13; // rdi
  unsigned int j; // esi
  void *v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 *v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rax
  int v31; // eax
  unsigned int v32; // eax
  __int64 v33; // rdi
  unsigned int v34; // eax
  __int64 v35; // rdi
  unsigned int v36; // eax
  __int64 v37; // rdi
  unsigned int v38; // eax
  __int64 v39; // rdi
  unsigned int v40; // eax
  unsigned int v41; // eax
  __int64 v42; // rdi
  unsigned int v43; // eax
  __int64 v44; // rdi
  unsigned int v45; // eax
  __int64 v46; // rdi
  void *v47; // rsi
  int v48; // r9d
  void *v49; // rdi
  void *v50; // rsi
  int v51; // r9d
  void *v52; // rsi
  int v53; // r9d
  void *v54; // rsi
  int v55; // r9d
  void *v56; // rsi
  int v57; // r9d
  void *v58; // rsi
  int v59; // r9d
  int v60; // eax
  void *v61; // [rsp+60h] [rbp+8h] BYREF

  *((_DWORD *)this + 66) = 0;
  v2 = 64LL;
  v3 = *((_DWORD *)this + 68);
  v4 = -2147024882;
  if ( v3 != 10 )
  {
    v5 = v3 + 1;
    goto LABEL_3;
  }
  v36 = *((_DWORD *)this + 69);
  v37 = 64LL;
  if ( v36 > 0x40 )
    v37 = v36;
  if ( (unsigned __int64)(3 * v37) <= 0xFFFFFFFF )
  {
    if ( (unsigned int)(3 * v37) <= *((_DWORD *)this + 67) )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v37 <= 0x10 )
      {
        v57 = -2147024809;
      }
      else
      {
        v56 = MIDL_user_allocate(16LL * (unsigned int)v37);
        if ( v56 )
        {
          operator delete(*((void **)this + 32));
          *((_QWORD *)this + 32) = v56;
          *((_DWORD *)this + 67) = v37;
          goto LABEL_80;
        }
        v57 = -2147024882;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v57, 0x11Eu, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x10Eu, 0LL);
  }
LABEL_80:
  *((_DWORD *)this + 69) = 0;
  v5 = 0;
LABEL_3:
  *((_DWORD *)this + 68) = v5;
  *((_DWORD *)this + 72) = 0;
  v6 = *((_DWORD *)this + 74);
  if ( v6 != 8 )
  {
    v7 = v6 + 1;
    goto LABEL_5;
  }
  v41 = *((_DWORD *)this + 75);
  v42 = 8LL;
  if ( v41 > 8 )
    v42 = v41;
  if ( (unsigned __int64)(3 * v42) <= 0xFFFFFFFF )
  {
    if ( (unsigned int)(3 * v42) <= *((_DWORD *)this + 73) )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v42 <= 0x44 )
      {
        v53 = -2147024809;
      }
      else
      {
        v52 = MIDL_user_allocate(68LL * (unsigned int)v42);
        if ( v52 )
        {
          operator delete(*((void **)this + 35));
          *((_QWORD *)this + 35) = v52;
          *((_DWORD *)this + 73) = v42;
          goto LABEL_86;
        }
        v53 = -2147024882;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v53, 0x11Eu, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x10Eu, 0LL);
  }
LABEL_86:
  *((_DWORD *)this + 75) = 0;
  v7 = 0;
LABEL_5:
  *((_DWORD *)this + 74) = v7;
  *((_DWORD *)this + 78) = 0;
  v8 = *((_DWORD *)this + 80);
  if ( v8 != 10 )
  {
    v9 = v8 + 1;
    goto LABEL_7;
  }
  v38 = *((_DWORD *)this + 81);
  v39 = 64LL;
  if ( v38 > 0x40 )
    v39 = v38;
  if ( (unsigned __int64)(3 * v39) <= 0xFFFFFFFF )
  {
    if ( (unsigned int)(3 * v39) <= *((_DWORD *)this + 79) )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v39 <= 1 )
      {
        v48 = -2147024809;
      }
      else
      {
        v47 = MIDL_user_allocate((unsigned int)v39);
        if ( v47 )
        {
          operator delete(*((void **)this + 38));
          *((_QWORD *)this + 38) = v47;
          *((_DWORD *)this + 79) = v39;
          goto LABEL_88;
        }
        v48 = -2147024882;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v48, 0x11Eu, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x10Eu, 0LL);
  }
LABEL_88:
  *((_DWORD *)this + 81) = 0;
  v9 = 0;
LABEL_7:
  *((_DWORD *)this + 80) = v9;
  *((_DWORD *)this + 84) = 0;
  v10 = *((_DWORD *)this + 86);
  if ( v10 != 10 )
  {
    v11 = v10 + 1;
    goto LABEL_9;
  }
  v43 = *((_DWORD *)this + 87);
  v44 = 64LL;
  if ( v43 > 0x40 )
    v44 = v43;
  if ( (unsigned __int64)(3 * v44) <= 0xFFFFFFFF )
  {
    if ( (unsigned int)(3 * v44) <= *((_DWORD *)this + 85) )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v44 <= 4 )
      {
        v55 = -2147024809;
      }
      else
      {
        v54 = MIDL_user_allocate(4 * v44);
        if ( v54 )
        {
          operator delete(*((void **)this + 41));
          *((_QWORD *)this + 41) = v54;
          *((_DWORD *)this + 85) = v44;
          goto LABEL_90;
        }
        v55 = -2147024882;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v55, 0x11Eu, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x10Eu, 0LL);
  }
LABEL_90:
  *((_DWORD *)this + 87) = 0;
  v11 = 0;
LABEL_9:
  *((_DWORD *)this + 86) = v11;
  for ( i = *((_DWORD *)this + 94); i; i = *((_DWORD *)this + 94) )
  {
    v25 = (unsigned int)(i - 1);
    v26 = *(_QWORD *)(*((_QWORD *)this + 44) + 8 * v25);
    *((_DWORD *)this + 94) = v25;
    v27 = *((_QWORD *)this + 93);
    if ( v27 == *((_QWORD *)this + 92) || !*(_QWORD *)(v27 - 176) )
    {
      v29 = 0LL;
      v28 = (__int64 *)((char *)this + 2688);
    }
    else
    {
      v28 = (__int64 *)((char *)this + 2688);
      v29 = *(_QWORD *)(*((_QWORD *)this + 336) - 16LL);
    }
    if ( v26 == v29 )
    {
      v30 = *v28;
      if ( *(_QWORD *)(*v28 - 16) )
        --*(_QWORD *)(v27 - 160);
      *(_QWORD *)(v30 - 16) = 0LL;
    }
    else
    {
      v31 = (*(__int64 (__fastcall **)(__int64, CDrawingContext *))(*(_QWORD *)v26 + 32LL))(v26, this);
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v31, 0x1069u, 0LL);
      }
      else if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26) == 1 )
      {
        *((_BYTE *)this + 8065) = 1;
      }
    }
    if ( v26 )
      (**(void (__fastcall ***)(__int64, __int64))v26)(v26, 1LL);
  }
  v13 = (void **)((char *)this + 424);
  for ( j = 0; j < *((_DWORD *)this + 112); ++j )
  {
    v24 = *((_QWORD *)*v13 + 2 * j);
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  v15 = *v13;
  *((_DWORD *)this + 112) = 0;
  if ( v15 != *((void **)this + 54) )
  {
    operator delete(v15);
    *((_QWORD *)this + 53) = *((_QWORD *)this + 54);
    *((_DWORD *)this + 111) = *((_DWORD *)this + 110);
  }
  v16 = *((_QWORD *)this + 52);
  if ( v16 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    *((_QWORD *)this + 52) = 0LL;
  }
  *((_DWORD *)this + 136) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 520, 8LL);
  *((_DWORD *)this + 168) = 0;
  *((_DWORD *)this + 180) = 0;
  v17 = *((_DWORD *)this + 182);
  if ( v17 != 10 )
  {
    v18 = v17 + 1;
    goto LABEL_17;
  }
  v32 = *((_DWORD *)this + 183);
  v33 = 64LL;
  if ( v32 > 0x40 )
    v33 = v32;
  if ( (unsigned __int64)(3 * v33) <= 0xFFFFFFFF )
  {
    if ( (unsigned int)(3 * v33) <= *((_DWORD *)this + 181) )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v33 <= 0x18 )
      {
        v51 = -2147024809;
      }
      else
      {
        v50 = MIDL_user_allocate(24 * v33);
        if ( v50 )
        {
          operator delete(*((void **)this + 89));
          *((_QWORD *)this + 89) = v50;
          *((_DWORD *)this + 181) = v33;
          goto LABEL_82;
        }
        v51 = -2147024882;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v51, 0x11Eu, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x10Eu, 0LL);
  }
LABEL_82:
  *((_DWORD *)this + 183) = 0;
  v18 = 0;
LABEL_17:
  *((_DWORD *)this + 182) = v18;
  CScopedClipStack::Clear((CDrawingContext *)((char *)this + 736));
  *((_DWORD *)this + 790) = 0;
  v19 = *((_DWORD *)this + 792);
  if ( v19 == 10 )
  {
    v45 = *((_DWORD *)this + 793);
    v46 = 64LL;
    if ( v45 > 0x40 )
      v46 = v45;
    if ( (unsigned __int64)(3 * v46) <= 0xFFFFFFFF )
    {
      if ( (unsigned int)(3 * v46) <= *((_DWORD *)this + 791) )
      {
        v61 = 0LL;
        v60 = HrMalloc(4uLL, (unsigned int)v46, &v61);
        if ( v60 >= 0 )
        {
          operator delete(*((void **)this + 394));
          *((_QWORD *)this + 394) = v61;
          *((_DWORD *)this + 791) = v46;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v60, 0x11Eu, 0LL);
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x10Eu, 0LL);
    }
    *((_DWORD *)this + 793) = 0;
    v20 = 0;
  }
  else
  {
    v20 = v19 + 1;
  }
  *((_DWORD *)this + 792) = v20;
  *((_DWORD *)this + 820) = 0;
  v21 = *((_DWORD *)this + 822);
  if ( v21 != 10 )
  {
    v22 = v21 + 1;
    goto LABEL_21;
  }
  v34 = *((_DWORD *)this + 823);
  v35 = 64LL;
  if ( v34 > 0x40 )
    v35 = v34;
  if ( (unsigned __int64)(3 * v35) <= 0xFFFFFFFF )
  {
    if ( (unsigned int)(3 * v35) <= *((_DWORD *)this + 821) )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v35 <= 0x10 )
      {
        v59 = -2147024809;
      }
      else
      {
        v58 = MIDL_user_allocate(16LL * (unsigned int)v35);
        if ( v58 )
        {
          operator delete(*((void **)this + 409));
          *((_QWORD *)this + 409) = v58;
          *((_DWORD *)this + 821) = v35;
          goto LABEL_84;
        }
        v59 = -2147024882;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v59, 0x11Eu, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x10Eu, 0LL);
  }
LABEL_84:
  *((_DWORD *)this + 823) = 0;
  v22 = 0;
LABEL_21:
  *((_DWORD *)this + 822) = v22;
  *((_DWORD *)this + 796) = 0;
  v23 = *((_DWORD *)this + 798);
  if ( v23 != 10 )
  {
    *((_DWORD *)this + 798) = v23 + 1;
    return;
  }
  v40 = *((_DWORD *)this + 799);
  if ( v40 > 0x40 )
    v2 = v40;
  if ( (unsigned __int64)(3 * v2) <= 0xFFFFFFFF )
  {
    if ( (unsigned int)(3 * v2) <= *((_DWORD *)this + 797) )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v2 <= 1 )
      {
        v4 = -2147024809;
      }
      else
      {
        v49 = MIDL_user_allocate((unsigned int)v2);
        if ( v49 )
        {
          operator delete(*((void **)this + 397));
          *((_QWORD *)this + 397) = v49;
          *((_DWORD *)this + 797) = v2;
          goto LABEL_63;
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x11Eu, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x10Eu, 0LL);
  }
LABEL_63:
  *((_QWORD *)this + 399) = 0LL;
}
