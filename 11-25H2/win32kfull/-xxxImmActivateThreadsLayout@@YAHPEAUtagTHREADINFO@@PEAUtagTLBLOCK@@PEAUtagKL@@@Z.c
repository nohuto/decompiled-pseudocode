/*
 * XREFs of ?xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z @ 0x140282A18
 * Callers:
 *     ?xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z @ 0x140282A18 (-xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z.c)
 *     EditionImmActivateThreadsLayout @ 0x1402A6730 (EditionImmActivateThreadsLayout.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z @ 0x1401460C0 (-UnlockWorker@-$Win32RawLockedItemBase@U_W32THREAD@@$0A@$00$00$00@@AEAAX_N0@Z.c)
 *     ??0tagTLBLOCK@@QEAA@XZ @ 0x14019EB20 (--0tagTLBLOCK@@QEAA@XZ.c)
 *     ?ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z @ 0x1401DD25C (-ManualLock@Win32RawLockedW32Thread@@QEAAXPEAU_W32THREAD@@@Z.c)
 *     ?xxxImmActivateLayout@@YAXPEAUtagTHREADINFO@@PEAUtagKL@@@Z @ 0x1402120C8 (-xxxImmActivateLayout@@YAXPEAUtagTHREADINFO@@PEAUtagKL@@@Z.c)
 *     ??1tagTLBLOCK@@QEAA@XZ @ 0x14026EF9C (--1tagTLBLOCK@@QEAA@XZ.c)
 *     ?xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z @ 0x140282A18 (-xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxImmActivateThreadsLayout(struct tagTHREADINFO *a1, struct tagTLBLOCK *a2, struct tagKL *a3)
{
  unsigned int v6; // edi
  unsigned int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v11; // rbx
  int i; // esi
  _QWORD *v13; // r13
  __int64 v14; // r15
  _QWORD v16[6]; // [rsp+50h] [rbp-278h] BYREF
  _QWORD v17[66]; // [rsp+80h] [rbp-248h] BYREF

  tagTLBLOCK::tagTLBLOCK((tagTLBLOCK *)v17);
  v6 = 0;
  v7 = 0;
  PtiCurrent(v9, v8);
  while ( a1 )
  {
    if ( *((struct tagKL **)a1 + 60) != a3
      && (_InterlockedCompareExchange((volatile signed __int32 *)a1 + 132, 0, 0) & 1) == 0 )
    {
      if ( *((_QWORD *)a1 + 103) )
      {
        Win32RawLockedW32Thread::ManualLock(&v17[4 * v7++ + 1], (__int64)a1);
        if ( v7 == 16 )
          break;
      }
      else
      {
        *((_QWORD *)a1 + 105) = *(_QWORD *)(*((_QWORD *)a1 + 60) + 40LL);
        v16[0] = (char *)a1 + 480;
        v16[1] = a3;
        HMAssignmentLock(v16, 0LL);
        if ( *((_QWORD *)a1 + 104) )
          **((_QWORD **)a1 + 65) |= 0x40uLL;
        *(_QWORD *)(*((_QWORD *)a1 + 65) + 144LL) = *((_QWORD *)a3 + 5);
        *(_WORD *)(*((_QWORD *)a1 + 65) + 152LL) = *((_WORD *)a3 + 36);
      }
    }
    a1 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 88);
  }
  if ( a2 )
    goto LABEL_14;
  if ( !a1 )
  {
    if ( !v7 )
    {
LABEL_17:
      tagTLBLOCK::~tagTLBLOCK((tagTLBLOCK *)v17);
      return v6;
    }
LABEL_14:
    if ( !a1 )
      goto LABEL_18;
  }
  if ( *((_QWORD *)a1 + 88) )
  {
    v17[0] = a2;
    v6 = xxxImmActivateThreadsLayout(*((struct tagTHREADINFO **)a1 + 88), (struct tagTLBLOCK *)v17, a3);
    goto LABEL_17;
  }
LABEL_18:
  v17[0] = a2;
  v11 = v17;
  while ( v11 )
  {
    for ( i = v7 - 1; i >= 0; --i )
    {
      v13 = &v11[4 * i];
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v13[2] + 528LL), 0, 0) & 1) == 0 )
      {
        v14 = v13[2];
        xxxImmActivateLayout((struct tagTHREADINFO *)v14, a3);
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v14 + 528), 0, 0) & 1) == 0 )
        {
          *(_QWORD *)(*(_QWORD *)(v14 + 520) + 144LL) = *((_QWORD *)a3 + 5);
          *(_WORD *)(*(_QWORD *)(v14 + 520) + 152LL) = *((_WORD *)a3 + 36);
        }
      }
      Win32RawLockedItemBase<_W32THREAD,0,1,1,1>::UnlockWorker((ULONG_PTR)(v13 + 1), 0LL);
    }
    v11 = (_QWORD *)*v11;
    v7 = 16;
  }
  tagTLBLOCK::~tagTLBLOCK((tagTLBLOCK *)v17);
  return 1LL;
}
