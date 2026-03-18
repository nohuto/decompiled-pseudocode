/*
 * XREFs of NtGdiStartDoc @ 0x140329180
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400822A0 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400824A4 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x14019EDF0 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ?GrepStartDoc@@YAHAEAVXDCOBJ@@PEAU_DOCINFOW@@PEAHHW4EntryPoint@RFONTOBJ@@@Z @ 0x140327ABC (-GrepStartDoc@@YAHAEAVXDCOBJ@@PEAU_DOCINFOW@@PEAHHW4EntryPoint@RFONTOBJ@@@Z.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall NtGdiStartDoc(HDC a1, __int64 a2, _DWORD *a3, unsigned int a4)
{
  _DWORD *v4; // rsi
  _WORD *v5; // rsi
  _WORD *v6; // r14
  _WORD *v7; // r12
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rax
  void *v10; // rax
  size_t v11; // rdi
  const void *v12; // rdx
  _WORD *v13; // rsi
  unsigned __int64 v14; // rax
  void *v15; // rax
  size_t v16; // rdi
  _WORD *v17; // rsi
  void *v18; // rax
  size_t v19; // rdi
  _WORD *v20; // rsi
  unsigned int started; // edi
  __int64 v22; // rdx
  int v23; // ecx
  __int64 v24; // r8
  __int64 SessionState; // rax
  int v27; // [rsp+20h] [rbp-128h]
  size_t Size; // [rsp+30h] [rbp-118h] BYREF
  int v29; // [rsp+38h] [rbp-110h]
  int v30; // [rsp+3Ch] [rbp-10Ch] BYREF
  __int64 v31; // [rsp+40h] [rbp-108h] BYREF
  void *v32[2]; // [rsp+48h] [rbp-100h]
  void *v33; // [rsp+58h] [rbp-F0h]
  __int64 v34; // [rsp+60h] [rbp-E8h]
  unsigned __int64 v35; // [rsp+68h] [rbp-E0h]
  _BYTE v36[48]; // [rsp+70h] [rbp-D8h] BYREF
  DC *v37[21]; // [rsp+A0h] [rbp-A8h] BYREF

  v4 = a3;
  v30 = 0;
  v31 = 0LL;
  v34 = 0LL;
  Size = 0LL;
  v29 = 1;
  *(_OWORD *)v32 = 0LL;
  v33 = 0LL;
  if ( a2 )
  {
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    LODWORD(v31) = *(_DWORD *)a2;
    v5 = *(_WORD **)(a2 + 8);
    v6 = *(_WORD **)(a2 + 16);
    v7 = *(_WORD **)(a2 + 24);
    if ( v5 )
    {
      if ( ((unsigned __int8)v5 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = -1LL;
      v9 = -1LL;
      do
        ++v9;
      while ( v5[v9] );
      if ( v9 + 1 >= v9 )
      {
        v35 = v9 + 1;
        if ( (int)ULongLongMult(v9 + 1, 2uLL, &Size) >= 0 && Size <= 0xFFFFFFFF )
        {
          if ( (_DWORD)Size )
            v10 = (void *)AllocThreadBufferWithTag((unsigned int)Size, 1886221383LL, 0LL);
          else
            v10 = 0LL;
          v32[0] = v10;
        }
      }
      if ( v32[0] )
      {
        v11 = Size;
        v12 = v5;
        v13 = v32[0];
        memmove(v32[0], v12, Size);
        if ( v11 >= 2 )
          v13[(v11 >> 1) - 1] = 0;
      }
      else
      {
        v29 = 0;
      }
    }
    else
    {
      v8 = -1LL;
    }
    if ( v6 )
    {
      if ( ((unsigned __int8)v6 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = -1LL;
      do
        ++v14;
      while ( v6[v14] );
      if ( v14 + 1 >= v14 )
      {
        v35 = v14 + 1;
        if ( (int)ULongLongMult(v14 + 1, 2uLL, &Size) >= 0 && Size <= 0xFFFFFFFF )
        {
          if ( (_DWORD)Size )
            v15 = (void *)AllocThreadBufferWithTag((unsigned int)Size, 1886221383LL, 0LL);
          else
            v15 = 0LL;
          v32[1] = v15;
        }
      }
      if ( v32[1] )
      {
        v16 = Size;
        v17 = v32[1];
        memmove(v32[1], v6, Size);
        if ( v16 >= 2 )
          v17[(v16 >> 1) - 1] = 0;
      }
      else
      {
        v29 = 0;
      }
    }
    if ( (unsigned __int64)(int)v31 >= 0x28 && v7 )
    {
      if ( ((unsigned __int8)v7 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      do
        ++v8;
      while ( v7[v8] );
      if ( v8 + 1 >= v8 )
      {
        v35 = v8 + 1;
        if ( (int)ULongLongMult(v8 + 1, 2uLL, &Size) >= 0 && Size <= 0xFFFFFFFF )
        {
          if ( (_DWORD)Size )
            v18 = (void *)AllocThreadBufferWithTag((unsigned int)Size, 1886221383LL, 0LL);
          else
            v18 = 0LL;
          v33 = v18;
        }
      }
      if ( v33 )
      {
        v19 = Size;
        v20 = v33;
        memmove(v33, v7, Size);
        if ( v19 >= 2 )
          v20[(v19 >> 1) - 1] = 0;
      }
      else
      {
        v29 = 0;
      }
      started = 0;
      v4 = a3;
    }
    else
    {
      v4 = a3;
      started = 0;
    }
  }
  else
  {
    started = 0;
  }
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v37, a1);
  if ( v29 && v37[0] )
  {
    SessionState = W32GetSessionState(v23, v22);
    EUDCCountRegion::EUDCCountRegion(
      (EUDCCountRegion *)v36,
      (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
    started = GrepStartDoc(v37, (__int64)&v31, &v30, a4, v27);
    if ( started )
    {
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v4 = (_DWORD *)MmUserProbeAddress;
      *v4 = v30;
    }
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v36);
  }
  if ( v32[0] )
    FreeThreadBufferWithTag(v32[0], v22, v24);
  if ( v32[1] )
    FreeThreadBufferWithTag(v32[1], v22, v24);
  if ( v33 )
    FreeThreadBufferWithTag(v33, v22, v24);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v37);
  return started;
}
