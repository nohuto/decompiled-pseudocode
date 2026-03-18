/*
 * XREFs of UserSetDCVisRgn @ 0x140082180
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x140017FB0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSetRectRgn @ 0x14001D700 (GreSetRectRgn.c)
 *     GreOffsetRgn @ 0x1400208C0 (GreOffsetRgn.c)
 *     GreCombineRgn @ 0x140020BA0 (GreCombineRgn.c)
 *     CreateEmptyRgnPublic @ 0x140081A30 (CreateEmptyRgnPublic.c)
 *     GreDeleteObject @ 0x140082330 (GreDeleteObject.c)
 *     IsGetStyleWindowSupported @ 0x1400824D4 (IsGetStyleWindowSupported.c)
 *     GetStyleWindow @ 0x14008250C (GetStyleWindow.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall UserSetDCVisRgn(HRGN *a1)
{
  int (*v2)(void); // rax
  __int64 v3; // rcx
  HRGN v4; // r14
  _DWORD *v5; // rbx
  unsigned int v6; // ebp
  _QWORD *v7; // rsi
  HRGN v8; // r15
  unsigned int (__fastcall *v9)(HRGN *, HRGN, HRGN, _QWORD); // rax
  struct HOBJ__ *EmptyRgnPublic; // rsi
  int v11; // ebp
  HRGN v12; // rcx
  int v13; // r9d
  __int64 StyleWindow; // rbp
  HRGN v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = 0LL;
  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 2232LL);
  if ( v2 && v2() >= 0 )
  {
    v4 = a1[11];
    v5 = a1 + 6;
    v6 = *((_DWORD *)a1 + 12);
    v7 = a1 + 10;
    v8 = a1[10];
    v9 = *(unsigned int (__fastcall **)(HRGN *, HRGN, HRGN, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 48)
                                                                   + 2240LL);
    if ( v9 && v9(&v15, v8, v4, v6) )
    {
      *v5 &= ~0x10000000u;
      v5 = a1 + 6;
      goto LABEL_6;
    }
  }
  else
  {
    v5 = a1 + 6;
    v7 = a1 + 10;
  }
  *v5 |= 0x10000000u;
LABEL_6:
  if ( (unsigned __int64)a1[4] > 2 && (int)IsGetStyleWindowSupported() >= 0 && (StyleWindow = GetStyleWindow(*v7)) != 0 )
  {
    EmptyRgnPublic = CreateEmptyRgnPublic();
    GreCombineRgn((HRGN)EmptyRgnPublic, a1[4], 0LL, 5);
    GreOffsetRgn(
      (HRGN)EmptyRgnPublic,
      *(_DWORD *)(*(_QWORD *)(StyleWindow + 40) + 88LL),
      *(_DWORD *)(*(_QWORD *)(StyleWindow + 40) + 92LL));
    v11 = 1;
  }
  else
  {
    EmptyRgnPublic = (struct HOBJ__ *)a1[4];
    v11 = 0;
  }
  if ( (*v5 & 0x80u) != 0 )
  {
    v12 = v15;
    if ( EmptyRgnPublic )
    {
      v13 = 1;
LABEL_17:
      GreCombineRgn(v12, v12, (HRGN)EmptyRgnPublic, v13);
      goto LABEL_10;
    }
  }
  else
  {
    if ( (*v5 & 0x40) == 0 )
      goto LABEL_10;
    v12 = v15;
    if ( EmptyRgnPublic != (struct HOBJ__ *)1 )
    {
      v13 = 4;
      goto LABEL_17;
    }
  }
  GreSetRectRgn(v12, 0, 0, 0, 0);
LABEL_10:
  ResetOrg(v15, (struct tagDCE *)a1, 1);
  if ( v11 )
    GreDeleteObject((HRGN)EmptyRgnPublic);
}
