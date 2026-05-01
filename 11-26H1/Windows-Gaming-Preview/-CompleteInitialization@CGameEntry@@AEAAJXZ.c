/*
 * XREFs of ?CompleteInitialization@CGameEntry@@AEAAJXZ @ 0x18003D55C
 * Callers:
 *     ?GetNextEntry@CEnumerateEntries@@UEAAJPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003F4B0 (-GetNextEntry@CEnumerateEntries@@UEAAJPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?RuntimeClassInitialize@CGameEntry@@QEAAJPEAUIGameEntry@KnownGameList@@@Z @ 0x18004176C (-RuntimeClassInitialize@CGameEntry@@QEAAJPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021F0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002294 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MarkConsumed@CGameEntry@@AEAAJK_N@Z @ 0x180041354 (-MarkConsumed@CGameEntry@@AEAAJK_N@Z.c)
 *     ?ReadDWORD@CGameEntry@@AEAAJPEAK@Z @ 0x18004158C (-ReadDWORD@CGameEntry@@AEAAJPEAK@Z.c)
 *     ?ReadUShort@CGameEntry@@AEAAJPEAG_N@Z @ 0x18004160C (-ReadUShort@CGameEntry@@AEAAJPEAG_N@Z.c)
 *     ?VerifyAvailable@CGameEntry@@AEAAJK@Z @ 0x180042254 (-VerifyAvailable@CGameEntry@@AEAAJK@Z.c)
 */

__int64 __fastcall CGameEntry::CompleteInitialization(CGameEntry *this)
{
  int DWORD; // edi
  bool v3; // r8
  __int64 v4; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int16 *v7; // rsi
  unsigned int v8; // edx
  bool v9; // r8
  _WORD *v10; // rdi
  int UShort; // esi
  bool v12; // r8
  __int64 v13; // rdx
  _WORD *v14; // r14
  unsigned __int64 v15; // rax
  void *v16; // rax
  const struct std::nothrow_t *v17; // rdx
  void *v18; // rcx
  unsigned int v19; // ebx
  __int64 v20; // rdx
  unsigned int v21; // r15d
  __int64 v22; // rsi
  int v23; // ebp
  unsigned __int64 v24; // rax
  void *v25; // rax
  const struct std::nothrow_t *v26; // rdx
  void *v27; // rcx
  __int64 v28; // rdx
  unsigned int v29; // esi
  __int64 v30; // rdi
  __int64 v31; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  DWORD = CGameEntry::ReadDWORD(this, (unsigned int *)this + 9);
  if ( DWORD < 0 )
  {
    v4 = 1334LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)DWORD);
    return (unsigned int)DWORD;
  }
  v6 = *((unsigned int *)this + 9);
  if ( v6 > (unsigned __int64)*((unsigned int *)this + 8) + 4 )
  {
    v19 = -2147483637;
    v20 = 1338LL;
    goto LABEL_60;
  }
  if ( (unsigned int)v6 < 4 )
  {
    *((_DWORD *)this + 8) = -1;
    v20 = 1342LL;
    v19 = -2147024362;
    goto LABEL_60;
  }
  v7 = (unsigned __int16 *)((char *)this + 48);
  *((_DWORD *)this + 8) = v6 - 4;
  DWORD = CGameEntry::ReadUShort(this, (unsigned __int16 *)this + 24, v3);
  if ( DWORD < 0 )
  {
    v4 = 1346LL;
    goto LABEL_3;
  }
  DWORD = CGameEntry::VerifyAvailable(this, *v7);
  if ( DWORD < 0 )
  {
    v4 = 1348LL;
    goto LABEL_3;
  }
  v8 = *v7;
  *((_QWORD *)this + 5) = *((_QWORD *)this + 2);
  DWORD = CGameEntry::MarkConsumed(this, v8, 1);
  if ( DWORD < 0 )
  {
    v4 = 1352LL;
    goto LABEL_3;
  }
  v10 = (_WORD *)((char *)this + 50);
  UShort = CGameEntry::ReadUShort(this, (unsigned __int16 *)this + 25, v9);
  if ( UShort < 0 )
  {
    v13 = 1354LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)UShort);
    return (unsigned int)UShort;
  }
  if ( 12 * (unsigned int)(unsigned __int16)*v10 > *((_DWORD *)this + 8) )
  {
    v19 = -2147024809;
    v20 = 1356LL;
    goto LABEL_60;
  }
  v14 = (_WORD *)((char *)this + 52);
  UShort = CGameEntry::ReadUShort(this, (unsigned __int16 *)this + 26, v12);
  if ( UShort < 0 )
  {
    v13 = 1358LL;
    goto LABEL_14;
  }
  if ( 4 * (unsigned int)(unsigned __int16)*v14 > *((_DWORD *)this + 8) )
  {
    v19 = -2147024809;
    v20 = 1360LL;
    goto LABEL_60;
  }
  if ( !*v10 )
    goto LABEL_32;
  v15 = 16LL * (unsigned __int16)*v10;
  if ( !is_mul_ok((unsigned __int16)*v10, 0x10uLL) )
    v15 = -1LL;
  v16 = operator new[](v15, (const struct std::nothrow_t *)&std::nothrow);
  v18 = (void *)*((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = v16;
  if ( v18 )
    operator delete(v18, v17);
  if ( *((_QWORD *)this + 7) )
  {
    v21 = 0;
    if ( *v10 )
    {
      while ( 1 )
      {
        v22 = 16LL * v21;
        v23 = CGameEntry::ReadDWORD(this, (unsigned int *)(v22 + *((_QWORD *)this + 7)));
        if ( v23 < 0 )
          break;
        v23 = CGameEntry::ReadDWORD(this, (unsigned int *)(v22 + *((_QWORD *)this + 7) + 4LL));
        if ( v23 < 0 )
        {
          v28 = 1372LL;
          goto LABEL_43;
        }
        v23 = CGameEntry::VerifyAvailable(this, *(_DWORD *)(v22 + *((_QWORD *)this + 7) + 4));
        if ( v23 < 0 )
        {
          v28 = 1374LL;
          goto LABEL_43;
        }
        *(_QWORD *)(v22 + *((_QWORD *)this + 7) + 8) = *((_QWORD *)this + 2);
        UShort = CGameEntry::MarkConsumed(this, *(_DWORD *)(v22 + *((_QWORD *)this + 7) + 4), 1);
        if ( UShort < 0 )
        {
          v13 = 1378LL;
          goto LABEL_14;
        }
        if ( ++v21 >= (unsigned __int16)*v10 )
          goto LABEL_32;
      }
      v28 = 1370LL;
      goto LABEL_43;
    }
LABEL_32:
    if ( !*v14 )
      return 0LL;
    v24 = 16LL * (unsigned __int16)*v14;
    if ( !is_mul_ok((unsigned __int16)*v14, 0x10uLL) )
      v24 = -1LL;
    v25 = operator new[](v24, (const struct std::nothrow_t *)&std::nothrow);
    v27 = (void *)*((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = v25;
    if ( v27 )
      operator delete(v27, v26);
    if ( !*((_QWORD *)this + 8) )
    {
      v19 = -2147024882;
      v20 = 1386LL;
      goto LABEL_60;
    }
    v29 = 0;
    if ( !*v14 )
      return 0LL;
    while ( 1 )
    {
      v30 = 16LL * v29;
      *(_DWORD *)(v30 + *((_QWORD *)this + 8) + 4) = 0;
      *(_QWORD *)(v30 + *((_QWORD *)this + 8) + 8) = 0LL;
      v23 = CGameEntry::ReadDWORD(this, (unsigned int *)(v30 + *((_QWORD *)this + 8)));
      if ( v23 < 0 )
        break;
      v31 = *((_QWORD *)this + 8);
      if ( (*(_DWORD *)(v30 + v31) & 0x10000000) == 0 )
      {
        v23 = CGameEntry::ReadDWORD(this, (unsigned int *)(v30 + v31 + 4));
        if ( v23 < 0 )
        {
          v28 = 1399LL;
          goto LABEL_43;
        }
        v23 = CGameEntry::VerifyAvailable(this, *(_DWORD *)(v30 + *((_QWORD *)this + 8) + 4));
        if ( v23 < 0 )
        {
          v28 = 1401LL;
          goto LABEL_43;
        }
        *(_QWORD *)(v30 + *((_QWORD *)this + 8) + 8) = *((_QWORD *)this + 2);
        DWORD = CGameEntry::MarkConsumed(this, *(_DWORD *)(v30 + *((_QWORD *)this + 8) + 4), 1);
        if ( DWORD < 0 )
        {
          v4 = 1405LL;
          goto LABEL_3;
        }
      }
      if ( ++v29 >= (unsigned __int16)*v14 )
        return 0LL;
    }
    v28 = 1393LL;
LABEL_43:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v23);
    return (unsigned int)v23;
  }
  v19 = -2147024882;
  v20 = 1366LL;
LABEL_60:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)v19);
  return v19;
}
