/*
 * XREFs of MiWorkingSetInfoCheckPageTable @ 0x1403166E0
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1402B4660 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 */

__int64 __fastcall MiWorkingSetInfoCheckPageTable(__int64 a1, unsigned __int64 a2, __int64 a3, char a4, KIRQL a5)
{
  __int64 v5; // rax
  __int64 v6; // r10
  unsigned int v9; // ebx
  unsigned __int64 v11; // rcx

  v5 = *(_QWORD *)a2;
  v6 = a3;
  v9 = 0;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
    LOWORD(v5) = MiReadPteShadow(a2, *(_QWORD *)a2);
  if ( (v5 & 0x800) != 0 || (v5 & 8) != 0 )
  {
    if ( (a4 & 1) != 0 )
    {
      if ( (v5 & 0x800) != 0 )
        v11 = *(_QWORD *)(v6 + 8) & 0xFFFFFFFFFF1FFFFFuLL | 0x600000;
      else
        v11 = *(_QWORD *)(v6 + 8) & 0xFFFFFFFFFF1FFFFFuLL | 0xA00000;
      *(_QWORD *)(v6 + 8) = v11;
    }
    else if ( (a4 & 2) != 0 )
    {
      MiUnlockPageTableInternal(a1, ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      MiMakeSystemAddressValid((__int64)(a2 << 25) >> 16, 0, a5, 0);
      MiUnlockPageTableInternal(a1, a2);
      return 1;
    }
  }
  return v9;
}
