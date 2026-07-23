/*
 * XREFs of MiCountWslesInPageTableRange @ 0x14029D9E0
 * Callers:
 *     MiRebuildPageTableAges @ 0x14029D740 (MiRebuildPageTableAges.c)
 * Callees:
 *     MiGetVaAge @ 0x14029BC40 (MiGetVaAge.c)
 *     MiWriteWsle @ 0x14029ED40 (MiWriteWsle.c)
 *     MiLockWorkingSetCoreShared @ 0x1402CFF20 (MiLockWorkingSetCoreShared.c)
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiUnlockWorkingSetCoreShared @ 0x14036E020 (MiUnlockWorkingSetCoreShared.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall MiCountWslesInPageTableRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int v5; // r11d
  unsigned __int64 v6; // rdi
  unsigned __int64 CurrentThread; // rcx
  __int64 v10; // rax
  BOOL v11; // r15d
  unsigned __int64 v12; // r9
  ULONG_PTR v13; // r10
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int8 v16; // bl
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rdx
  unsigned __int8 v20; // bp
  __int64 v21; // r8
  __int64 v22; // r8
  unsigned int *v23; // rdx
  __int64 v24; // r9
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // r14
  unsigned __int64 PteShadow; // rax
  char PagePrivilege; // al
  unsigned int v31; // [rsp+30h] [rbp-78h]
  _OWORD v33[2]; // [rsp+40h] [rbp-68h] BYREF

  v5 = 0;
  v6 = a2;
  memset(v33, 0, sizeof(v33));
  v31 = 0;
  CurrentThread = (__int64)(a2 << 25) >> 16;
  LOBYTE(v10) = 0;
  v11 = 0;
  if ( CurrentThread >= 0xFFFFF68000000000uLL )
  {
    LOBYTE(v10) = -1;
    if ( CurrentThread <= 0xFFFFF6FFFFFFFFFFuLL )
      v11 = 1;
  }
  while ( 1 )
  {
    v12 = 0xFFFFF6FB7DBED7F8uLL;
    if ( !a3 )
      break;
    v13 = *(_QWORD *)v6;
    LOBYTE(v10) = 0;
    if ( v6 >= 0xFFFFF6FB7DBED000uLL )
    {
      LOBYTE(v10) = -8;
      if ( v6 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        v10 = *(_QWORD *)v6;
        if ( (v13 & 1) != 0 && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
        {
          CurrentThread = (unsigned __int64)KeGetCurrentThread();
          v14 = *(_QWORD *)(CurrentThread + 184);
          if ( *(_BYTE *)(v14 + 352) != 1 )
          {
            v15 = *(_QWORD *)(v14 + 1288);
            if ( v15 )
            {
              CurrentThread = *(_QWORD *)(v15 + 8 * ((v6 >> 3) & 0x1FF));
              if ( (CurrentThread & 0x20) != 0 )
                v10 = v13 | 0x20;
              v13 = v10 | 0x42;
              if ( (CurrentThread & 0x42) == 0 )
                v13 = v10;
            }
          }
        }
      }
    }
    if ( (v13 & 1) != 0 )
    {
      v16 = 0;
      v17 = (__int64)(v6 << 25) >> 16;
      if ( v11 )
      {
        if ( (v13 & 0x80u) != 0LL )
          goto LABEL_7;
        LOBYTE(v10) = MiGetVaAge(CurrentThread, (__int64)(v6 << 25) >> 16);
        v20 = v10;
LABEL_47:
        if ( v20 == 0xFF )
          goto LABEL_7;
        if ( v20 >= 8u )
          KeBugCheckEx(0x1Au, 0x41280uLL, (__int64)(v6 << 25) >> 16, v13, v16);
        if ( !v20
          || (LOBYTE(CurrentThread) = (v13 & 0x20) != 0, ((unsigned __int8)CurrentThread & ((a5 & 1) != 0)) == 0) )
        {
LABEL_52:
          LOBYTE(v10) = v20;
          ++*(_DWORD *)(a4 + 4LL * v20);
          goto LABEL_7;
        }
        CurrentThread = *(unsigned int *)(a1 + 184);
        if ( (CurrentThread & 0xF) != 0 )
        {
          if ( _bittest64(&MiFlags, 0x26u) && (CurrentThread & 0x40) != 0 )
            goto LABEL_56;
        }
        else if ( *(_QWORD *)(a1 + 624) || (*(_QWORD *)(a1 - 656) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
        {
LABEL_56:
          if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
          {
            PagePrivilege = MiGetPagePrivilege(48 * ((v13 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
            v5 = v31;
            if ( (PagePrivilege & 0x41) != 0 )
              goto LABEL_52;
          }
          else if ( v17 < 0x7FFFFFFF0000LL )
          {
            if ( *(_QWORD *)(a1 + 624) )
              goto LABEL_52;
            v26 = MiGetPagePrivilege(48 * ((v13 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
            v5 = v31;
            if ( v26 )
            {
              CurrentThread = a1;
              if ( (*(_BYTE *)(a1 - 656) & 1) != 0 || (v26 & 8) == 0 )
                goto LABEL_52;
            }
          }
        }
        if ( v11 )
        {
          v27 = (v17 >> 18) & 0x3FFFFFF8;
          PteShadow = *(_QWORD *)(v27 - 0x904C0000000LL);
          if ( (unsigned __int64)(v27 - 0x904C0000000LL) >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)(v27 - 0x904C0000000LL) <= 0xFFFFF6FB7DBED7F8uLL )
          {
            PteShadow = MiReadPteShadow(v27 - 0x904C0000000LL, *(_QWORD *)(v27 - 0x904C0000000LL));
          }
          CurrentThread = 0xFFFE3FFFFFFFFFFFuLL;
          *(_QWORD *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) &= 0xFFFE3FFFFFFFFFFFuLL;
        }
        else
        {
          MiWriteWsle(CurrentThread, (__int64)(v6 << 25) >> 16, v16 & 0xF0, v12);
        }
        v31 = ++v5;
        ++*((_DWORD *)v33 + v20);
        v20 = 0;
        goto LABEL_52;
      }
      CurrentThread = (v17 >> 9) & 0x7FFFFFFFF8LL;
      v18 = *(_QWORD *)(CurrentThread - 0x98000000000LL);
      v19 = CurrentThread - 0x98000000000LL;
      LOBYTE(v10) = 0;
      if ( CurrentThread - 0x98000000000LL >= 0xFFFFF6FB7DBED000uLL )
      {
        LOBYTE(v10) = -8;
        if ( v19 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          v10 = *(_QWORD *)(CurrentThread - 0x98000000000LL);
          if ( (v18 & 1) != 0 && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
          {
            CurrentThread = (unsigned __int64)KeGetCurrentThread();
            v21 = *(_QWORD *)(CurrentThread + 184);
            if ( *(_BYTE *)(v21 + 352) != 1 )
            {
              CurrentThread = *(_QWORD *)(v21 + 1288);
              if ( CurrentThread )
              {
                CurrentThread = *(_QWORD *)(CurrentThread + 8 * ((v19 >> 3) & 0x1FF));
                if ( (CurrentThread & 0x20) != 0 )
                  v10 = v18 | 0x20;
                v18 = v10 | 0x42;
                if ( (CurrentThread & 0x42) == 0 )
                  v18 = v10;
              }
            }
          }
        }
      }
      v20 = HIBYTE(v18) & 0xF;
      v16 = HIBYTE(v18) & 0xF | (16 * ((v18 >> 60) & 7));
      if ( (HIBYTE(v18) & 0xF) != 0xA )
      {
        LOBYTE(v10) = v20 - 8;
        if ( (unsigned __int8)(v20 - 8) > 1u )
          goto LABEL_47;
      }
    }
LABEL_7:
    v6 += 8LL;
    --a3;
  }
  if ( v5 )
  {
    MiLockWorkingSetCoreShared(a1, 0xFFFFF68000000000uLL, 0xFFFFF6FB7DBED000uLL, 0xFFFFF6FB7DBED7F8uLL);
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 56), v31);
    v22 = 64LL;
    v23 = (unsigned int *)v33 + 1;
    v24 = 7LL;
    do
    {
      v25 = *v23;
      if ( (_DWORD)v25 )
        _InterlockedAdd64((volatile signed __int64 *)(a1 + v22), -v25);
      v22 += 8LL;
      ++v23;
      --v24;
    }
    while ( v24 );
    LOBYTE(v10) = MiUnlockWorkingSetCoreShared(a1, v23, v22);
  }
  return v10;
}
