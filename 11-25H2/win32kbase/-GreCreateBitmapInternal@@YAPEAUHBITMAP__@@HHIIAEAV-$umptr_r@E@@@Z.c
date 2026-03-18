/*
 * XREFs of ?GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV?$umptr_r@E@@@Z @ 0x14008BE60
 * Callers:
 *     GreCreateBitmap @ 0x14008BDE0 (GreCreateBitmap.c)
 * Callees:
 *     EngSetLastError @ 0x140015E30 (EngSetLastError.c)
 *     HmgSetOwner @ 0x140015EC0 (HmgSetOwner.c)
 *     HmgShareLockCheck @ 0x140017AD0 (HmgShareLockCheck.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x14008C0E0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x14008CAD0 (--1SURFMEM@@QEAA@XZ.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x14008D2D8 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x14008D308 (--0SURFREF@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreCreateBitmapInternal(__int64 a1, int a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  unsigned int v5; // eax
  int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rbx
  int (*v11)(void); // rax
  __int64 v12; // rsi
  unsigned int v13; // edi
  __int64 v14; // r14
  void (__fastcall *v15)(__int64, _QWORD, __int64, int *); // rax
  __int64 v16; // [rsp+68h] [rbp-21h] BYREF
  char v17; // [rsp+70h] [rbp-19h]
  int v18; // [rsp+74h] [rbp-15h]
  _DWORD v19[4]; // [rsp+78h] [rbp-11h] BYREF
  __int64 v20; // [rsp+88h] [rbp-1h]
  __int64 v21; // [rsp+90h] [rbp+7h]
  _BYTE v22[32]; // [rsp+98h] [rbp+Fh] BYREF
  int v24; // [rsp+E8h] [rbp+5Fh] BYREF

  v5 = a4 * a3;
  if ( (int)a1 <= 0 || (unsigned int)a1 > 0x7FFFFFF || a2 <= 0 || a3 > 0x20 || a4 > 0x20 || v5 > 0x20 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v19[3] = 0;
  v21 = 1LL;
  v19[1] = a1;
  v19[2] = a2;
  v20 = 0LL;
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
    v20 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 3792LL);
  }
  v19[0] = v6;
  v16 = 0LL;
  v17 = 0;
  v18 = 0;
  SURFMEM::bCreateDIB((SURFMEM *)&v16, (struct _DEVBITMAPINFO *)v19, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( !v16 )
  {
    SURFMEM::~SURFMEM((SURFMEM *)&v16);
    return 0LL;
  }
  v7 = a5;
  *(_DWORD *)(v16 + 112) |= 0x4000000u;
  if ( *(_QWORD *)v7 )
  {
    v24 = 0;
    v11 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2136LL);
    if ( v11 )
    {
      if ( v11() >= 0 )
      {
        v12 = *(_QWORD *)v7 + *(_QWORD *)(v7 + 16);
        v13 = *(_DWORD *)(v7 + 8) - *(_DWORD *)(v7 + 16);
        v14 = *(_QWORD *)(v16 + 32);
        v15 = *(void (__fastcall **)(__int64, _QWORD, __int64, int *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24)
                                                                     + 2144LL);
        if ( v15 )
          v15(v14, v13, v12, &v24);
      }
    }
  }
  if ( v6 != 1 )
  {
    *(_DWORD *)(v16 + 112) |= 0x800000u;
    *(_DWORD *)(v16 + 112) |= 0x200u;
  }
  v17 |= 1u;
  v8 = *(_QWORD *)(v16 + 32);
  SURFREF::SURFREF((SURFREF *)v22);
  if ( HmgShareLockCheck(v8, 5) )
  {
    if ( (v8 & 0x800000) == 0 )
      HmgSetOwner(v8, -2147483646, 5);
  }
  SURFREF::~SURFREF((SURFREF *)v22);
  v9 = *(_QWORD *)(v16 + 32);
  SURFMEM::~SURFMEM((SURFMEM *)&v16);
  return v9;
}
