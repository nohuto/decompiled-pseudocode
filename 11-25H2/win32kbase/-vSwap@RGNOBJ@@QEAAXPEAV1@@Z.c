/*
 * XREFs of ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x140097360
 * Callers:
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x14000DDA0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x140094980 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x140097160 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1401787B0 (EngUpdateDeviceSurface.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@AEAV1@@Z @ 0x1401C4560 (-bCopy@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@AEAV1@@Z.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x1401A595C (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall RGNOBJ::vSwap(RGNOBJ *this, struct RGNOBJ *a2)
{
  __int64 v2; // rdi
  int v5; // r10d
  __int64 *v6; // rbx
  _QWORD *v7; // r15
  __int64 v8; // rbp
  _QWORD *v9; // r12
  __int64 **v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v16; // rbp
  _QWORD *v17; // rbx
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rsi
  _QWORD *v24; // rbx
  __int64 *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rcx

  v2 = 0LL;
  v5 = *(_DWORD *)(*(_QWORD *)this + 76LL);
  *(_DWORD *)(*(_QWORD *)this + 76LL) = *(_DWORD *)(*(_QWORD *)a2 + 76LL);
  *(_DWORD *)(*(_QWORD *)a2 + 76LL) = v5;
  v6 = (__int64 *)(*(_QWORD *)this + 80LL);
  v7 = (_QWORD *)(*(_QWORD *)a2 + 80LL);
  v8 = *v6;
  v9 = (_QWORD *)*v7;
  if ( *(_QWORD *)this != -80LL )
  {
    if ( *(__int64 **)(v8 + 8) != v6 )
      goto LABEL_26;
    v10 = *(__int64 ***)(*(_QWORD *)this + 88LL);
    if ( *v10 != v6 )
      goto LABEL_26;
    *v10 = (__int64 *)v8;
    *(_QWORD *)(v8 + 8) = v10;
    v6[1] = (__int64)v6;
    *v6 = (__int64)v6;
  }
  v11 = (_QWORD *)(*(_QWORD *)a2 + 80LL);
  if ( *(_QWORD *)a2 != -80LL )
  {
    v12 = *v11;
    if ( *(_QWORD **)(*v11 + 8LL) != v11 )
      goto LABEL_26;
    v13 = *(_QWORD **)(*(_QWORD *)a2 + 88LL);
    if ( (_QWORD *)*v13 != v11 )
      goto LABEL_26;
    *v13 = v12;
    *(_QWORD *)(v12 + 8) = v13;
    v11[1] = v11;
    *v11 = v11;
  }
  v14 = *(_QWORD *)this;
  *(_QWORD *)this = *(_QWORD *)a2;
  *(_QWORD *)a2 = v14;
  CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged();
  if ( CurrentThreadNonPaged && (-(__int64)(*CurrentThreadNonPaged != 0LL) & (*CurrentThreadNonPaged + 8LL)) != 0 )
  {
    if ( (__int64 *)v8 != v6 )
    {
      v16 = *(_QWORD *)this;
      v17 = (_QWORD *)(*(_QWORD *)this + 80LL);
      if ( *(_QWORD *)this != -80LL )
      {
        v18 = (__int64 *)W32GetCurrentThreadNonPaged();
        if ( v18 )
          v19 = *v18;
        else
          v19 = 0LL;
        v17[2] = v16;
        v17[3] = CleanUpRegion;
        v20 = (v19 + 8) & -(__int64)(v19 != 0);
        if ( v20 )
        {
          v21 = (_QWORD *)(v20 + 88);
          v22 = *(_QWORD *)(((v19 + 8) & -(__int64)(v19 != 0)) + 0x58);
          if ( *(_QWORD *)(v22 + 8) != v20 + 88 )
            goto LABEL_26;
          *v17 = v22;
          v17[1] = v21;
          *(_QWORD *)(v22 + 8) = v17;
          *v21 = v17;
        }
        else
        {
          v17[1] = v17;
          *v17 = v17;
        }
      }
    }
    if ( v9 != v7 )
    {
      v23 = *(_QWORD **)a2;
      v24 = v23 + 10;
      if ( v23 != (_QWORD *)-80LL )
      {
        v25 = (__int64 *)W32GetCurrentThreadNonPaged();
        if ( v25 )
          v2 = *v25;
        v23[12] = v23;
        v23[13] = CleanUpRegion;
        v26 = (v2 + 8) & -(__int64)(v2 != 0);
        if ( !v26 )
        {
          v23[11] = v23 + 10;
          *v24 = v24;
          return;
        }
        v27 = (_QWORD *)(v26 + 88);
        v28 = *(_QWORD *)(((v2 + 8) & -(__int64)(v2 != 0)) + 0x58);
        if ( *(_QWORD **)(v28 + 8) == v27 )
        {
          *v24 = v28;
          v23[11] = v27;
          *(_QWORD *)(v28 + 8) = v24;
          *v27 = v24;
          return;
        }
LABEL_26:
        __fastfail(3u);
      }
    }
  }
}
