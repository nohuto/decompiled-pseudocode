/*
 * XREFs of UserSetDCVisRgn @ 0x14008A8F0
 * Callers:
 *     <none>
 * Callees:
 *     GreCombineRgn @ 0x14000DFC0 (GreCombineRgn.c)
 *     GreOffsetRgn @ 0x140014370 (GreOffsetRgn.c)
 *     GreSetRectRgn @ 0x140014720 (GreSetRectRgn.c)
 *     CreateEmptyRgnPublic @ 0x1400899B0 (CreateEmptyRgnPublic.c)
 *     IsGetStyleWindowSupported @ 0x14008A080 (IsGetStyleWindowSupported.c)
 *     GetStyleWindow @ 0x14008A0B8 (GetStyleWindow.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x14008AA94 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreDeleteObject @ 0x14008B860 (GreDeleteObject.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall UserSetDCVisRgn(struct tagDCE *a1)
{
  int (*v2)(void); // rax
  __int64 v3; // r14
  _DWORD *v4; // rbx
  unsigned int v5; // ebp
  __int64 *v6; // rsi
  __int64 v7; // r15
  unsigned int (__fastcall *v8)(HRGN *, __int64, __int64, _QWORD); // rax
  HRGN EmptyRgnPublic; // rsi
  int v10; // ebp
  HRGN v11; // rcx
  int v12; // r9d
  __int64 (__fastcall *StyleWindow)(__int64, __int64); // rbp
  struct REGION_CORE *v14; // [rsp+20h] [rbp-28h]
  HRGN v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = 0LL;
  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 2592LL);
  if ( v2 && v2() >= 0 )
  {
    v3 = *((_QWORD *)a1 + 11);
    v4 = (_DWORD *)((char *)a1 + 48);
    v5 = *((_DWORD *)a1 + 12);
    v6 = (__int64 *)((char *)a1 + 80);
    v7 = *((_QWORD *)a1 + 10);
    v8 = *(unsigned int (__fastcall **)(HRGN *, __int64, __int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48)
                                                                         + 2600LL);
    if ( v8 && v8(&v15, v7, v3, v5) )
    {
      *v4 &= ~0x10000000u;
      v4 = (_DWORD *)((char *)a1 + 48);
      goto LABEL_6;
    }
  }
  else
  {
    v4 = (_DWORD *)((char *)a1 + 48);
    v6 = (__int64 *)((char *)a1 + 80);
  }
  *v4 |= 0x10000000u;
LABEL_6:
  if ( *((_QWORD *)a1 + 4) > 2uLL && (int)IsGetStyleWindowSupported() >= 0 && (StyleWindow = GetStyleWindow(*v6)) != 0LL )
  {
    EmptyRgnPublic = (HRGN)CreateEmptyRgnPublic();
    GreCombineRgn(EmptyRgnPublic, *((HRGN *)a1 + 4), 0LL, 5);
    GreOffsetRgn(
      EmptyRgnPublic,
      *(_DWORD *)(*((_QWORD *)StyleWindow + 5) + 88LL),
      *(_DWORD *)(*((_QWORD *)StyleWindow + 5) + 92LL));
    v10 = 1;
  }
  else
  {
    EmptyRgnPublic = (HRGN)*((_QWORD *)a1 + 4);
    v10 = 0;
  }
  if ( (*v4 & 0x80u) != 0 )
  {
    v11 = v15;
    if ( EmptyRgnPublic )
    {
      v12 = 1;
LABEL_16:
      GreCombineRgn(v11, v11, EmptyRgnPublic, v12);
      goto LABEL_10;
    }
  }
  else
  {
    if ( (*v4 & 0x40) == 0 )
      goto LABEL_10;
    v11 = v15;
    if ( EmptyRgnPublic != (HRGN)1 )
    {
      v12 = 4;
      goto LABEL_16;
    }
  }
  LODWORD(v14) = 0;
  GreSetRectRgn(v11, 0, 0, 0, v14);
LABEL_10:
  ResetOrg(v15, a1, 1);
  if ( v10 )
    GreDeleteObject((HBRUSH)EmptyRgnPublic);
}
