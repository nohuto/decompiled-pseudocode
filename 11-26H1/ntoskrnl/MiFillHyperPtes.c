/*
 * XREFs of MiFillHyperPtes @ 0x140317670
 * Callers:
 *     MiMakeHyperRangeAccessible @ 0x1403188A0 (MiMakeHyperRangeAccessible.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiMakeHyperPteDemandZero @ 0x1403177EC (MiMakeHyperPteDemandZero.c)
 */

void __fastcall MiFillHyperPtes(unsigned __int64 a1, unsigned __int64 a2, KIRQL a3, __int64 a4)
{
  __int64 v4; // r12
  unsigned __int64 *v5; // r10
  __int64 v8; // r9
  unsigned int v9; // esi
  ULONG_PTR v10; // rbx
  ULONG_PTR v11; // rdi
  _KPROCESS *Process; // r14
  unsigned __int64 v13; // r15
  __int64 v14; // rdx
  __int64 PteShadow; // rax
  __int64 v16; // [rsp+20h] [rbp-88h]
  _QWORD v18[14]; // [rsp+38h] [rbp-70h] BYREF

  v4 = 4LL;
  v5 = v18;
  v16 = 4LL;
  v8 = 4LL;
  do
  {
    *(v5 - 1) = a1;
    *v5 = a2;
    a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v5 += 2;
    --v8;
  }
  while ( v8 );
  v9 = 3;
  do
  {
    v10 = v18[2 * (int)v9 - 1];
    v11 = v18[2 * (int)v9];
    if ( *(_DWORD *)a4 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( v10 <= v11 )
      {
        do
        {
          v13 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          MiMakeSystemAddressValid(v10, 0, a3, 0);
          do
          {
            PteShadow = *(_QWORD *)v10;
            if ( v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL )
              PteShadow = MiReadPteShadow(v10, *(_QWORD *)v10);
            if ( !PteShadow )
              MiMakeHyperPteDemandZero(v10, v14, v9, a4);
            v10 += 8LL;
          }
          while ( v10 <= v11 && (v10 & 0xFFF) != 0 );
          MiUnlockPageTableInternal((__int64)&Process[2].ReadyListHead.Blink, v13);
        }
        while ( v10 <= v11 );
        v4 = v16;
      }
    }
    else
    {
      *(_QWORD *)(a4 + 8) += ((__int64)(v11 - v10) >> 3) + 1;
    }
    --v9;
    v16 = --v4;
  }
  while ( v4 );
}
