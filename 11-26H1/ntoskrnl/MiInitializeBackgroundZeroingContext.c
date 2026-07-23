/*
 * XREFs of MiInitializeBackgroundZeroingContext @ 0x140456E64
 * Callers:
 *     MiBackgroundZeroPage @ 0x140456DB4 (MiBackgroundZeroPage.c)
 * Callees:
 *     MiGetZeroingContext @ 0x140457050 (MiGetZeroingContext.c)
 *     MiZeroPageMakeHot @ 0x140713BF0 (MiZeroPageMakeHot.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiInitializeBackgroundZeroingContext(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v6; // rbp
  __int64 v7; // rax
  int v8; // r9d
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 result; // rax

  memset_0(a3, 0, 0x40uLL);
  v6 = *(_QWORD *)(a1 + 80);
  *a3 = 17;
  *((_QWORD *)a3 + 3) = a2;
  *((_QWORD *)a3 + 4) = a1;
  v7 = *(_QWORD *)(v6 + 136);
  *((_QWORD *)a3 + 7) = a1;
  v8 = *(_DWORD *)(v7 + 56);
  *((_QWORD *)a3 + 2) = KeGetCurrentThread();
  v9 = *(_DWORD *)(a1 + 64);
  *((_DWORD *)a3 + 2) = v8;
  *((_DWORD *)a3 + 1) = v9;
  if ( v9 < 3 )
  {
    if ( v9 )
    {
      if ( (stru_140E366D8.WaitRegister.Flags & 1) != 0 )
        MiZeroPageMakeHot(a1);
    }
    else
    {
      *((_QWORD *)a3 + 7) = MiGetZeroingContext(a1);
      *((_QWORD *)a3 + 6) = *(_QWORD *)(a1 + 328);
      a3[2] = 1;
    }
  }
  v10 = *((unsigned int *)a3 + 1);
  result = (unsigned int)(*(_DWORD *)(v6 + 4 * v10 + 428) + 1);
  *(_DWORD *)(v6 + 4 * v10 + 428) = result;
  return result;
}
