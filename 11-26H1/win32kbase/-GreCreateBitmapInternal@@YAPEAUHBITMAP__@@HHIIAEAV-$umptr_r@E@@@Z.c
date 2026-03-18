/*
 * XREFs of ?GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV?$umptr_r@E@@@Z @ 0x140025D60
 * Callers:
 *     GreCreateBitmap @ 0x140025CE0 (GreCreateBitmap.c)
 *     bInitBRUSHOBJ @ 0x1402F4354 (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x140026090 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z @ 0x140026360 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z.c)
 *     ?vLock@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x140026D44 (-vLock@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 *     HmgSetOwner @ 0x140026FC0 (HmgSetOwner.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreCreateBitmapInternal(__int64 a1, int a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  unsigned int v5; // eax
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  HSURF v10; // rbx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v15; // rcx
  unsigned int *v16; // rax
  __int64 SessionState; // rax
  __int64 v18; // rbx
  __int64 v19; // r8
  int (*v20)(void); // rax
  __int64 v21; // rcx
  __int64 v22; // rsi
  unsigned int v23; // edi
  __int64 v24; // r14
  void (__fastcall *v25)(__int64, _QWORD, __int64, int *); // rax
  __int64 v26; // [rsp+58h] [rbp-21h] BYREF
  char v27; // [rsp+60h] [rbp-19h]
  int v28; // [rsp+64h] [rbp-15h]
  _DWORD v29[4]; // [rsp+68h] [rbp-11h] BYREF
  __int64 v30; // [rsp+78h] [rbp-1h]
  __int64 v31; // [rsp+80h] [rbp+7h]
  __int64 v32; // [rsp+88h] [rbp+Fh] BYREF
  __int64 *v33; // [rsp+90h] [rbp+17h]
  __int64 *v34; // [rsp+98h] [rbp+1Fh]
  __int64 (__fastcall *v35)(); // [rsp+A0h] [rbp+27h]
  unsigned int *v36; // [rsp+A8h] [rbp+2Fh]
  int v37; // [rsp+D8h] [rbp+5Fh] BYREF

  v5 = a4 * a3;
  if ( (int)a1 <= 0 || (unsigned int)a1 > 0x7FFFFFF || a2 <= 0 || a3 > 0x20 || a4 > 0x20 || v5 > 0x20 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v29[3] = 0;
  v31 = 1LL;
  v29[1] = a1;
  v29[2] = a2;
  v30 = 0LL;
  if ( v5 > 1 )
  {
    v6 = 4;
    if ( v5 <= 4 )
    {
      v6 = 2;
    }
    else if ( v5 <= 8 )
    {
      v6 = 3;
    }
    else if ( v5 > 0x10 )
    {
      v6 = (v5 > 0x18) + 5;
    }
  }
  else
  {
    v6 = 1;
    v30 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 3896LL);
  }
  v29[0] = v6;
  v26 = 0LL;
  v27 = 0;
  v28 = 0;
  SURFMEM::bCreateDIB((SURFMEM *)&v26, (struct _DEVBITMAPINFO *)v29, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0);
  if ( !v26 )
  {
    SURFMEM::~SURFMEM((SURFMEM *)&v26);
    return 0LL;
  }
  v9 = a5;
  *(_DWORD *)(v26 + 112) |= 0x4000000u;
  if ( *(_QWORD *)v9 )
  {
    v37 = 0;
    v8 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v8) + 24);
    v20 = *(int (**)(void))(v8 + 2112);
    if ( v20 )
    {
      if ( v20() >= 0 )
      {
        v21 = *(_QWORD *)(v9 + 16);
        v22 = v21 + *(_QWORD *)v9;
        v23 = *(_DWORD *)(v9 + 8) - v21;
        v24 = *(_QWORD *)(v26 + 32);
        v25 = *(void (__fastcall **)(__int64, _QWORD, __int64, int *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v21) + 24)
                                                                     + 2120LL);
        if ( v25 )
          v25(v24, v23, v22, &v37);
      }
    }
  }
  if ( v6 != 1 )
  {
    *(_DWORD *)(v26 + 112) |= 0x800000u;
    *(_DWORD *)(v26 + 112) |= 0x200u;
  }
  v27 |= 1u;
  v32 = 0LL;
  v33 = 0LL;
  v10 = *(HSURF *)(v26 + 32);
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v8, v7);
  if ( CurrentThreadWin32Thread )
    v12 = *CurrentThreadWin32Thread;
  else
    v12 = 0LL;
  v34 = &v32;
  v35 = UnexpectedThreadTerminationHandler<COLORSPACEREF>::OnUnexpectedThreadTerminationStatic;
  if ( ((v12 + 8) & -(__int64)(v12 != 0)) != 0 )
  {
    v13 = *(_QWORD *)(((v12 + 8) & -(__int64)(v12 != 0)) + 0x58);
    if ( *(_QWORD *)(v13 + 8) != ((v12 + 8) & -(__int64)(v12 != 0)) + 88 )
      __fastfail(3u);
    v32 = *(_QWORD *)(((v12 + 8) & -(__int64)(v12 != 0)) + 0x58);
    v33 = (__int64 *)(((v12 + 8) & -(__int64)(v12 != 0)) + 88);
    *(_QWORD *)(v13 + 8) = &v32;
    *(_QWORD *)(((v12 + 8) & -(__int64)(v12 != 0)) + 0x58) = &v32;
  }
  else
  {
    v33 = &v32;
    v32 = (__int64)&v32;
  }
  v36 = 0LL;
  SURFREF::vLock((SURFREF *)&v32, v10);
  v16 = v36;
  if ( v36 )
  {
    if ( ((unsigned int)v10 & 0x800000) == 0 )
    {
      LOBYTE(v19) = 5;
      HmgSetOwner(v10, 2147483650LL, v19);
      v16 = v36;
    }
    if ( v16 )
    {
      SessionState = W32GetSessionState(v15);
      HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), v36);
    }
  }
  PopThreadGuardedObject(&v32);
  v18 = *(_QWORD *)(v26 + 32);
  SURFMEM::~SURFMEM((SURFMEM *)&v26);
  return v18;
}
