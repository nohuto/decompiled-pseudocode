/*
 * XREFs of MiProtectAweRegion @ 0x140706C04
 * Callers:
 *     MmProtectVirtualMemory @ 0x140A03E98 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockLowestValidPageTableEx @ 0x1402E2690 (MiLockLowestValidPageTableEx.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiProtectAweTransitionPte @ 0x140706E24 (MiProtectAweTransitionPte.c)
 *     MiProtectAweUnlock @ 0x140706EF4 (MiProtectAweUnlock.c)
 *     MiProtectAweValidPte @ 0x140706F68 (MiProtectAweValidPte.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiProtectAwePrepare @ 0x14087F400 (MiProtectAwePrepare.c)
 */

__int64 __fastcall MiProtectAweRegion(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // ecx
  unsigned __int64 v12; // rbx
  unsigned __int64 i; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r8
  _KPROCESS *v17; // rax
  __int64 v18; // rdx
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v20; // rax
  _QWORD v21[4]; // [rsp+20h] [rbp-69h] BYREF
  int v22; // [rsp+40h] [rbp-49h]
  int v23; // [rsp+48h] [rbp-41h]
  int v24; // [rsp+58h] [rbp-31h]
  int v25; // [rsp+5Ch] [rbp-2Dh]
  __int64 v26; // [rsp+68h] [rbp-21h]
  unsigned __int64 v27; // [rsp+70h] [rbp-19h]
  __int64 v28; // [rsp+88h] [rbp-1h]
  char j; // [rsp+90h] [rbp+7h]
  unsigned __int64 valid; // [rsp+A0h] [rbp+17h]
  unsigned __int64 v31; // [rsp+B8h] [rbp+2Fh]
  unsigned __int64 v32; // [rsp+F0h] [rbp+67h] BYREF

  memset_0(v21, 0, 0xA0uLL);
  v21[0] = a1;
  v21[1] = a2;
  v22 = a3;
  result = MiProtectAwePrepare(v21);
  if ( (int)result >= 0 )
  {
    v11 = v25;
    v12 = v21[2];
    for ( i = v21[3]; v11; --v11 )
    {
      v12 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      i = ((i >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    v31 = v12;
    for ( j = MiLockWorkingSetShared(v28, v9, v10); v12 <= i; v12 += 8LL )
    {
      if ( valid && (v12 & 0xFFF) != 0
        || (MiProtectAweUnlock(v21),
            MiLockWorkingSetShared(v28, v14, v15),
            valid = MiLockLowestValidPageTableEx(v28, v12, &v32, 0),
            valid == ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
      {
        if ( (v24 & 1) != 0 && (v26 == 1 || !(((v12 >> 3) & 0x1FF) % v27)) )
          v24 &= ~2u;
        v16 = *(_QWORD *)v12;
        if ( v12 >= 0xFFFFF6FB7DBED000uLL
          && v12 <= 0xFFFFF6FB7DBED7F8uLL
          && (v16 & 1) != 0
          && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
        {
          v17 = MiPteHasShadow();
          if ( v17 )
          {
            KernelWaitTime = v17[2].KernelWaitTime;
            if ( KernelWaitTime )
            {
              v20 = *(_QWORD *)(KernelWaitTime + 8 * ((v12 >> 3) & 0x1FF));
              if ( (v20 & 0x20) != 0 )
                v18 |= 0x20uLL;
              v16 = v18 | 0x42;
              if ( (v20 & 0x42) == 0 )
                v16 = v18;
            }
          }
        }
        if ( v16 )
        {
          if ( (v16 & 1) != 0 )
          {
            MiProtectAweValidPte(v21, v12);
          }
          else if ( (v16 & 0xC00) == 0x800 )
          {
            MiProtectAweTransitionPte(v21, v12);
          }
        }
      }
      else
      {
        v12 = v12 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
      }
    }
    MiProtectAweUnlock(v21);
    *a4 = v23;
    return 0LL;
  }
  return result;
}
