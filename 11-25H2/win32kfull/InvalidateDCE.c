/*
 * XREFs of InvalidateDCE @ 0x14005A254
 * Callers:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x14001C3E0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     RevalidateDCE @ 0x14005A190 (RevalidateDCE.c)
 *     ?ClearDce@@YAXPEAUtagDCE@@@Z @ 0x140287CB4 (-ClearDce@@YAXPEAUtagDCE@@@Z.c)
 * Callees:
 *     GreSelectRedirectionBitmap @ 0x14009A2A0 (GreSelectRedirectionBitmap.c)
 */

__int64 __fastcall InvalidateDCE(__int64 a1)
{
  int v2; // eax
  _QWORD *v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  _QWORD *v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  _QWORD *v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  _QWORD *v14; // r8

  v2 = *(_DWORD *)(a1 + 48) & 0x4002 | 0x800;
  *(_DWORD *)(a1 + 48) = v2;
  if ( (v2 & 0x4000) != 0 )
  {
    GreSelectRedirectionBitmap(*(HDC *)(a1 + 16), 0LL);
    *(_DWORD *)(a1 + 48) &= ~0x4000u;
    v3 = (_QWORD *)(a1 + 136);
    *(_QWORD *)(a1 + 96) = 0LL;
    v4 = *(_QWORD *)(a1 + 136);
    if ( v4 == a1 + 136 )
    {
      v5 = (_QWORD *)(a1 + 144);
    }
    else
    {
      if ( *(_QWORD **)(v4 + 8) != v3 )
        goto LABEL_16;
      v5 = (_QWORD *)(a1 + 144);
      v6 = *(_QWORD **)(a1 + 144);
      if ( (_QWORD *)*v6 != v3 )
        goto LABEL_16;
      *v6 = v4;
      *(_QWORD *)(v4 + 8) = v6;
    }
    *v5 = v3;
    *v3 = v3;
  }
  *(_QWORD *)(a1 + 80) = 0LL;
  v7 = (_QWORD *)(a1 + 104);
  v8 = *(_QWORD *)(a1 + 104);
  if ( v8 == a1 + 104 )
  {
    v9 = (_QWORD *)(a1 + 112);
  }
  else
  {
    if ( *(_QWORD **)(v8 + 8) != v7 )
      goto LABEL_16;
    v9 = (_QWORD *)(a1 + 112);
    v10 = *(_QWORD **)(a1 + 112);
    if ( (_QWORD *)*v10 != v7 )
      goto LABEL_16;
    *v10 = v8;
    *(_QWORD *)(v8 + 8) = v10;
  }
  *v9 = v7;
  *v7 = v7;
  v11 = (_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 88) = 0LL;
  v12 = *(_QWORD *)(a1 + 120);
  if ( v12 == a1 + 120 )
  {
    v13 = (_QWORD *)(a1 + 128);
    goto LABEL_15;
  }
  if ( *(_QWORD **)(v12 + 8) != v11 || (v13 = (_QWORD *)(a1 + 128), v14 = *(_QWORD **)(a1 + 128), (_QWORD *)*v14 != v11) )
LABEL_16:
    __fastfail(3u);
  *v14 = v12;
  *(_QWORD *)(v12 + 8) = v14;
LABEL_15:
  *v13 = v11;
  *v11 = v11;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  return GreSelectVisRgn(*(_QWORD *)(a1 + 16), 0LL, 1LL);
}
