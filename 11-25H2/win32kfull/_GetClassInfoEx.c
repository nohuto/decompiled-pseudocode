/*
 * XREFs of _GetClassInfoEx @ 0x140034694
 * Callers:
 *     NtUserGetClassInfoEx @ 0x1402970E0 (NtUserGetClassInfoEx.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x140034B94 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     GetClassPtr @ 0x140034BF0 (GetClassPtr.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1400B33C8 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     GetCPD @ 0x1400B34F8 (GetCPD.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z @ 0x1400B3A90 (--4-$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z.c)
 *     MapClientNeuterToClientPfn @ 0x1401BCEA4 (MapClientNeuterToClientPfn.c)
 *     MapServerToClientPfn @ 0x14026D5A8 (MapServerToClientPfn.c)
 */

__int64 __fastcall GetClassInfoEx(__int64 a1, unsigned __int64 a2, __int64 a3, _QWORD *a4, unsigned int a5)
{
  unsigned __int16 v9; // bx
  int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // r15
  __int64 v14; // rdx
  __int64 UserSessionState; // rax
  __int16 *v16; // r9
  __int64 v17; // r8
  __int64 v18; // rdx
  _WORD *v19; // rax
  int v20; // r10d
  __int64 v21; // rcx
  __int16 v22; // r11
  unsigned __int16 v23; // r9
  _QWORD *ClassPtr; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 CPD; // rax
  bool v33; // cf
  _QWORD v34[2]; // [rsp+28h] [rbp-D0h] BYREF
  int v35; // [rsp+38h] [rbp-C0h]
  int v36; // [rsp+3Ch] [rbp-BCh]
  unsigned int v37; // [rsp+44h] [rbp-B4h]
  struct tagTHREADINFO *v38; // [rsp+48h] [rbp-B0h]
  _WORD *v39; // [rsp+50h] [rbp-A8h]
  __int64 v40; // [rsp+58h] [rbp-A0h]
  __int16 *v41; // [rsp+60h] [rbp-98h]
  __int64 v42; // [rsp+68h] [rbp-90h]
  __int64 v43; // [rsp+70h] [rbp-88h]
  __int64 v44; // [rsp+78h] [rbp-80h]
  _QWORD *v45; // [rsp+80h] [rbp-78h]
  __int64 v46; // [rsp+88h] [rbp-70h]
  _QWORD *v47; // [rsp+90h] [rbp-68h]
  _BYTE v48[80]; // [rsp+A8h] [rbp-50h] BYREF

  v35 = a5;
  v37 = a5;
  v46 = a3;
  v47 = a4;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v34);
  v9 = 0;
  v10 = 0;
  v13 = (_QWORD *)(W32GetUserSessionState(v12, v11) + 20456);
  v45 = v13;
  v38 = PtiCurrent();
  *(_QWORD *)(a3 + 56) = 0LL;
  *(_QWORD *)(a3 + 64) = 0LL;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v48);
  if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    UserSessionState = W32GetUserSessionState(a2, v14);
    v16 = (__int16 *)a2;
    v44 = UserSessionState + 41716;
    v36 = 0;
    v17 = 2147483646LL;
    v43 = 2147483646LL;
    v41 = (__int16 *)a2;
    v18 = 256LL;
    v42 = 256LL;
    v19 = (_WORD *)(UserSessionState + 41716);
    v39 = v19;
    v20 = 0;
    v21 = 0LL;
    v40 = 0LL;
    while ( v18 )
    {
      if ( !v17 )
        goto LABEL_7;
      v22 = *v16;
      if ( !*v16 )
        goto LABEL_7;
      v41 = ++v16;
      *v19++ = v22;
      v39 = v19;
      v42 = --v18;
      v43 = --v17;
      v40 = ++v21;
    }
    v39 = --v19;
    v40 = v21 - 1;
    v20 = -2147483643;
LABEL_7:
    *v19 = 0;
    v36 = v20;
    if ( v20 >= 0 )
      UserFindAtom(v44);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v48);
  if ( !a1 )
    a1 = *v13;
  ClassPtr = (_QWORD *)GetClassPtr(v23, *((_QWORD *)v38 + 58), a1);
  if ( ClassPtr )
  {
    SmartObjStackRefBase<tagCLS>::operator=(v34, *ClassPtr);
    *(_DWORD *)(a3 + 4) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v34[0] + 8LL) + 8LL) & 0x37BFF;
    if ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)v34[0] + 8LL) + 4LL) && *((_WORD *)v38 + 336) >= 0x400u )
      *(_DWORD *)(a3 + 4) &= ~0x4000u;
    *(_DWORD *)(a3 + 16) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v34[0] + 8LL) + 12LL);
    *(_DWORD *)(a3 + 20) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v34[0] + 8LL) + 80LL)
                         + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v34[0] + 8LL) + 84LL);
    if ( *((_WORD *)v38 + 336) < 0x400u )
    {
      if ( *(void **)(*(_QWORD *)(*(_QWORD *)v34[0] + 8LL) + 64LL) == hModuleWin
        || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v34[0] + 8LL) + 64LL) == *v13 )
      {
        a1 = *v13;
      }
      else
      {
        a1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v34[0] + 8LL) + 64LL);
      }
    }
    else if ( a1 == *v13 )
    {
      a1 = 0LL;
    }
    *(_QWORD *)(a3 + 24) = a1;
    if ( *(_QWORD *)(*(_QWORD *)v34[0] + 80LL) )
      v26 = **(_QWORD **)(*(_QWORD *)v34[0] + 80LL);
    else
      v26 = 0LL;
    *(_QWORD *)(a3 + 32) = v26;
    if ( *(_QWORD *)(*(_QWORD *)v34[0] + 88LL) )
      v27 = **(_QWORD **)(*(_QWORD *)v34[0] + 88LL);
    else
      v27 = 0LL;
    *(_QWORD *)(a3 + 40) = v27;
    *(_QWORD *)(a3 + 48) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v34[0] + 8LL) + 72LL);
    if ( *(_QWORD *)(*(_QWORD *)v34[0] + 112LL)
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v34[0] + 112LL) + 80LL) & 0x80u) != 0
      || !*(_QWORD *)(*(_QWORD *)v34[0] + 112LL) )
    {
      v28 = 0LL;
    }
    else
    {
      v28 = **(_QWORD **)(*(_QWORD *)v34[0] + 112LL);
    }
    *(_QWORD *)(a3 + 72) = v28;
    v29 = *(_QWORD *)v34[0];
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v34[0] + 8LL) + 6LL) & 1) != 0 )
    {
      *(_QWORD *)(a3 + 8) = MapServerToClientPfn(*(_QWORD *)(*(_QWORD *)(v29 + 8) + 32LL), a5, 1024LL);
    }
    else
    {
      *(_QWORD *)(a3 + 8) = MapClientNeuterToClientPfn(v29, 0LL, a5);
      if ( *(_QWORD *)(a3 + 8) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v34[0] + 8LL) + 32LL)
        && a5 != ((*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v34[0] + 8LL) + 6LL) >> 1) & 1) )
      {
        v33 = v35 != 0;
        v35 = -v35;
        v10 = 2 - v33;
      }
    }
    if ( v10 )
    {
      CPD = GetCPD(*(_QWORD *)v34[0], v10 | 0x10u, *(_QWORD *)(a3 + 8));
      if ( CPD )
        *(_QWORD *)(a3 + 8) = CPD;
    }
    v30 = *(_QWORD *)(*(_QWORD *)v34[0] + 8LL);
    if ( a5 )
      v31 = *(_QWORD *)(v30 + 16);
    else
      v31 = *(_QWORD *)(v30 + 24);
    *a4 = v31;
    v9 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)v34[0] + 8LL) + 2LL);
  }
  else
  {
    UserSetLastError(1411);
  }
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v34);
  return v9;
}
