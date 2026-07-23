/*
 * XREFs of MiClearStackOwners @ 0x14040B0A0
 * Callers:
 *     MmDeleteKernelStack @ 0x14040A8BC (MmDeleteKernelStack.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiClearStackOwners(__int64 a1, char a2)
{
  unsigned int v2; // r13d
  int v4; // edi
  unsigned int v5; // ecx
  __int64 v6; // r15
  unsigned __int64 v7; // rcx
  unsigned __int64 *v8; // r15
  unsigned __int64 v9; // rbx
  ULONG_PTR v10; // r12
  __int64 v11; // r14
  unsigned int v12; // ebp
  int v13; // r8d
  char *v14; // r9
  int i; // r10d
  int v17; // edx
  unsigned __int64 v18; // [rsp+60h] [rbp+8h]

  v2 = 1;
  v4 = -1;
  if ( (a2 & 1) != 0 )
  {
    v5 = (unsigned int)KeKernelLargeStackSize >> 12;
  }
  else if ( (a2 & 8) != 0 )
  {
    v5 = (unsigned int)KeXStateStackSize >> 12;
  }
  else
  {
    v5 = (unsigned __int8)byte_140E34CE4;
  }
  v6 = a1 - 8LL * v5;
  v7 = v6 + 8LL * (v5 + 1);
  v8 = (unsigned __int64 *)(v6 + 8);
  v18 = v7;
  while ( (unsigned __int64)v8 < v7 )
  {
    v9 = *v8;
    if ( (*v8 & 1) != 0 )
    {
      v10 = (v9 >> 12) & 0xFFFFFFFFFFLL;
      v11 = 48 * v10;
      v12 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 - 0x220000000000LL + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v12 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v12);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v11 - 0x220000000000LL + 24) < 0 );
      }
      if ( v9 == *v8 )
      {
        v13 = dword_140E2D804;
        if ( dword_140E2D800 > (unsigned int)dword_140E2D804
          || (v14 = (char *)qword_140E2D860 + 16 * dword_140E2D800, v10 < *(_QWORD *)v14)
          || dword_140E2D800 != dword_140E2D804 && v10 >= *((_QWORD *)v14 + 2) )
        {
          for ( i = 0; ; i = v17 + 1 )
          {
            while ( 1 )
            {
              if ( v13 < i )
                KeBugCheckEx(0x1Au, 0x5180uLL, v10, 0LL, 0LL);
              v17 = (i + v13) >> 1;
              v14 = (char *)qword_140E2D860 + 16 * v17;
              if ( v10 >= *(_QWORD *)v14 )
                break;
              if ( !v17 )
                KeBugCheckEx(0x1Au, 0x5180uLL, v10, (ULONG_PTR)v14, 0LL);
              v13 = v17 - 1;
            }
            if ( v17 == dword_140E2D804 || v10 < *((_QWORD *)v14 + 2) )
              break;
          }
          dword_140E2D800 = (i + v13) >> 1;
        }
        if ( v4 == -1 )
        {
          v4 = *((_DWORD *)v14 + 2);
        }
        else if ( v4 != *((_DWORD *)v14 + 2) )
        {
          v2 = 0;
        }
        *(_QWORD *)(v11 - 0x220000000000LL) &= 0xFFFFF00000000001uLL;
        ++v8;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v11 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v7 = v18;
    }
    else
    {
      ++v8;
    }
  }
  return v2;
}
