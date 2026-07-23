/*
 * XREFs of MiCopyPageTablePageValidPtes @ 0x14033DE60
 * Callers:
 *     MiReplacePageTablePage @ 0x14033E3DC (MiReplacePageTablePage.c)
 * Callees:
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

unsigned __int64 __fastcall MiCopyPageTablePageValidPtes(int *a1, _QWORD *a2)
{
  unsigned __int64 result; // rax
  __int64 v4; // r9
  int v6; // r8d
  __int64 v7; // r12
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  __int64 v10; // r11
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  __int64 v14; // rbp
  unsigned int v15; // r14d
  signed __int64 v16; // rcx
  signed __int64 v17; // rax
  signed __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rbx
  unsigned __int64 v21; // rbx
  int v22; // edx
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  _KPROCESS *v26; // rax
  __int64 v27; // r8
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v29; // rax
  unsigned __int64 v30; // rbx
  __int64 v31; // [rsp+60h] [rbp+8h]
  unsigned __int64 v32; // [rsp+70h] [rbp+18h]

  result = a2[4];
  v4 = a2[3];
  v6 = *a1;
  v7 = *((_QWORD *)a1 + 3);
  v8 = a2[1];
  v9 = *((_QWORD *)a1 + 4);
  v32 = result;
  v31 = v4;
  if ( *a1 )
  {
    v10 = 0xFFFFFFFFFFLL;
    v11 = 0xFFFFF6FB7DBED000uLL;
    while ( 1 )
    {
      v12 = *(_QWORD *)v8;
      result = v11;
      if ( v8 < v11 )
        goto LABEL_4;
      result = 0xFFFFF6FB7DBED7F8uLL;
      if ( v8 > 0xFFFFF6FB7DBED7F8uLL )
        goto LABEL_4;
      if ( (v12 & 1) != 0 )
        break;
LABEL_26:
      v6 = *a1;
      v8 += 8LL;
      v9 += 8LL;
      if ( !*a1 )
        return result;
    }
    if ( (v12 & 0x20) == 0 || (v12 & 0x42) == 0 )
    {
      result = (unsigned __int64)MiPteHasShadow();
      if ( result )
      {
        v25 = *(_QWORD *)(result + 1288);
        if ( v25 )
        {
          result = *(_QWORD *)(v25 + 8 * ((v8 >> 3) & 0x1FF));
          if ( (result & 0x20) != 0 )
            v24 |= 0x20uLL;
          v12 = v24 | 0x42;
          if ( (result & 0x42) == 0 )
            v12 = v24;
        }
      }
    }
LABEL_4:
    if ( (v12 & 1) == 0 )
      goto LABEL_26;
    result = (unsigned int)(v6 - 1);
    v13 = v10 & (v12 >> 12);
    *a1 = result;
    if ( v13 <= qword_140E2D920 )
    {
      result = *(_QWORD *)(48 * v13 - 0x21FFFFFFFFD8LL);
      if ( (result & 0x40000000000000LL) != 0 && v13 != v7 )
      {
        v14 = 48 * v13 - 0x220000000000LL;
        v15 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v15 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v15);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v14 + 24) < 0 );
        }
        v10 = 0xFFFFFFFFFFLL;
        v4 = v31;
        if ( (*(_QWORD *)(v14 + 40) & 0xFFFFFFFFFFLL) == v7 && v7 == v31 )
        {
          v16 = *(_QWORD *)(v14 + 40);
          v17 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v14 + 40),
                  v32 ^ (v16 ^ v32) & 0xFFFFFF0000000000uLL,
                  v16);
          if ( v16 != v17 )
          {
            do
            {
              v18 = v17;
              v17 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(v14 + 40),
                      v32 ^ (v17 ^ v32) & 0xFFFFFF0000000000uLL,
                      v17);
            }
            while ( v18 != v17 );
          }
        }
        result = 0x7FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v11 = 0xFFFFF6FB7DBED000uLL;
      }
    }
    if ( v7 != v4 )
    {
      result = (__int64)(v8 - a2[1]) >> 3;
      v12 = *(_QWORD *)(a2[9] + 8 * result);
    }
    if ( (v12 & 1) == 0 )
      goto LABEL_26;
    v19 = *(_QWORD *)v9;
    v20 = v12 | 0x20;
    if ( v9 >= v11 && v9 <= 0xFFFFF6FB7DBED7F8uLL && (v19 & 1) != 0 && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
    {
      v26 = MiPteHasShadow();
      if ( v26 )
      {
        KernelWaitTime = v26[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v29 = *(_QWORD *)(KernelWaitTime + 8 * ((v9 >> 3) & 0x1FF));
          if ( (v29 & 0x20) != 0 )
            v27 |= 0x20uLL;
          v19 = v27 | 0x42;
          if ( (v29 & 0x42) == 0 )
            v19 = v27;
        }
      }
    }
    v21 = v19 ^ (v19 ^ v20) & 0x80FFFFFFFFFFFFFFuLL;
    v22 = 0;
    result = v11;
    if ( v9 >= v11 )
    {
      result = 0xFFFFF6FB7DBED7F8uLL;
      if ( v9 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        result = (unsigned __int64)MiPteHasShadow();
        if ( result )
        {
          v22 = 1;
          if ( !BYTE5(stru_140E2DAB0.Header.WaitListHead.Blink) )
          {
            result = v21;
            if ( (v21 & 1) != 0 )
              goto LABEL_57;
          }
        }
        else
        {
          result = HIDWORD(KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1]);
          if ( (result & 0x1000) != 0 )
          {
            result = v21;
            if ( (v21 & 1) != 0 )
            {
LABEL_57:
              v30 = result;
              result = 0x8000000000000000uLL;
              v21 = v30 | 0x8000000000000000uLL;
            }
          }
        }
      }
    }
    *(_QWORD *)v9 = v21;
    if ( v22 )
    {
      result = (unsigned __int64)MiPteHasShadow();
      if ( result )
      {
        v23 = *(_QWORD *)(result + 1288);
        if ( v23 )
        {
          result = *(_QWORD *)&CLFS_LSN_NULL_EXT;
          if ( (v21 & 1) != 0 )
            result = v21 & 0x7FFFFFFFFFFFFFFFLL;
          *(_QWORD *)(v23 + 8 * ((v9 >> 3) & 0x1FF)) = result;
        }
      }
    }
    goto LABEL_26;
  }
  return result;
}
