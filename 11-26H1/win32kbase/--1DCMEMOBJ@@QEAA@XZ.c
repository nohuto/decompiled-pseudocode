/*
 * XREFs of ??1DCMEMOBJ@@QEAA@XZ @ 0x14003DC30
 * Callers:
 *     GreCreateDisplayDC @ 0x14003DEF0 (GreCreateDisplayDC.c)
 * Callees:
 *     ?RestoreAttributesHelper@DCOBJ@@AEAAXXZ @ 0x14003DE00 (-RestoreAttributesHelper@DCOBJ@@AEAAXXZ.c)
 *     ?GrepDeleteDCOBJ@@YA_NAEAVXDCOBJ@@KPEA_N@Z @ 0x14013B80C (-GrepDeleteDCOBJ@@YA_NAEAVXDCOBJ@@KPEA_N@Z.c)
 */

void __fastcall DCMEMOBJ::~DCMEMOBJ(DCMEMOBJ *this, __int64 a2)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int128 *v7; // rax
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  int v12; // [rsp+28h] [rbp-38h]
  __int64 v13; // [rsp+30h] [rbp-30h]
  __int64 v14; // [rsp+38h] [rbp-28h]
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  __int128 v16; // [rsp+50h] [rbp-10h]
  bool v17; // [rsp+70h] [rbp+10h] BYREF

  if ( *(_QWORD *)this )
  {
    v13 = *((_QWORD *)this + 2);
    v15 = 0LL;
    v14 = 0LL;
    v16 = 0LL;
    v11 = 0LL;
    v12 = 0;
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(this, a2);
    if ( CurrentThreadWin32Thread )
      v4 = *CurrentThreadWin32Thread;
    else
      v4 = 0LL;
    v5 = (v4 + 8) & -(__int64)(v4 != 0);
    *(_QWORD *)&v16 = &v11;
    *((_QWORD *)&v16 + 1) = UnexpectedThreadTerminationHandler<HmgLockResult<DRVOBJ>>::OnUnexpectedThreadTerminationStatic;
    if ( v5 )
    {
      v6 = *(_QWORD *)(((v4 + 8) & -(__int64)(v4 != 0)) + 0x58);
      if ( *(_QWORD *)(v6 + 8) != v5 + 88 )
        goto LABEL_6;
      *(_QWORD *)&v15 = *(_QWORD *)(v5 + 88);
      *((_QWORD *)&v15 + 1) = v5 + 88;
      *(_QWORD *)(v6 + 8) = &v15;
      *(_QWORD *)(v5 + 88) = &v15;
      v7 = (__int128 *)*((_QWORD *)&v15 + 1);
    }
    else
    {
      v7 = &v15;
      *((_QWORD *)&v15 + 1) = &v15;
      *(_QWORD *)&v15 = &v15;
    }
    v8 = *((_DWORD *)this + 8) == 0;
    v9 = *(_QWORD *)this;
    v11 = *(_QWORD *)this;
    *(_QWORD *)this = 0LL;
    if ( v8 )
    {
      v17 = 0;
      GrepDeleteDCOBJ((struct XDCOBJ *)&v11, 0x400000u, &v17);
      v7 = (__int128 *)*((_QWORD *)&v15 + 1);
      v9 = v11;
    }
    if ( v9 )
    {
      if ( v12 && (*(_DWORD *)(v9 + 44) & 2) != 0 )
      {
        DCOBJ::RestoreAttributesHelper((DCOBJ *)&v11);
        *(_DWORD *)(v11 + 44) &= ~2u;
        v9 = v11;
        v12 = 0;
      }
      _InterlockedDecrement16((volatile signed __int16 *)(v9 + 12));
      v7 = (__int128 *)*((_QWORD *)&v15 + 1);
      v11 = 0LL;
    }
    v10 = v15;
    if ( *(__int128 **)(v15 + 8) != &v15 || *(__int128 **)v7 != &v15 )
LABEL_6:
      __fastfail(3u);
    *(_QWORD *)v7 = v15;
    *(_QWORD *)(v10 + 8) = v7;
  }
}
