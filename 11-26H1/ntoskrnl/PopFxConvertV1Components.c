/*
 * XREFs of PopFxConvertV1Components @ 0x140B59668
 * Callers:
 *     PoFxRegisterCoreDevice @ 0x1407D0040 (PoFxRegisterCoreDevice.c)
 *     PoFxRegisterDevice @ 0x1407D0180 (PoFxRegisterDevice.c)
 *     PoFxRegisterPrimaryDevice @ 0x1407D0460 (PoFxRegisterPrimaryDevice.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char *__fastcall PopFxConvertV1Components(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v5; // r9d
  unsigned int i; // r8d
  int v7; // ecx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r14
  char *Pool2; // rax
  char *v12; // r10
  unsigned int v13; // r9d
  __int64 v14; // rcx
  unsigned int v15; // edi
  __int64 v16; // r11
  __int128 v17; // xmm0
  __int64 v18; // rcx

  v2 = 0LL;
  if ( a2 )
  {
    v5 = 0;
    for ( i = 0; i < a2; ++i )
    {
      v7 = *(_DWORD *)(32LL * i + a1 + 16);
      if ( !v7 || v7 + v5 < v5 )
        return (char *)v2;
      v5 += v7;
    }
    if ( is_mul_ok(a2, 0x38uLL) )
    {
      v8 = (56LL * a2 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      v9 = 24LL * v5;
      if ( v9 <= 0xFFFFFFFF )
      {
        v10 = (unsigned int)v9 + v8;
        if ( v10 >= (unsigned int)v9 )
        {
          Pool2 = (char *)ExAllocatePool2(0x40uLL);
          if ( Pool2 )
          {
            v12 = &Pool2[v8];
            v13 = 0;
LABEL_12:
            if ( v13 >= a2 )
            {
              return Pool2;
            }
            else
            {
              v14 = 56LL * v13;
              v15 = 0;
              v16 = 32LL * v13;
              v17 = *(_OWORD *)(v16 + a1);
              *(_QWORD *)&Pool2[v14 + 16] = 0LL;
              *(_OWORD *)&Pool2[v14] = v17;
              *(_DWORD *)&Pool2[v14 + 28] = *(_DWORD *)(v16 + a1 + 16);
              *(_QWORD *)&Pool2[v14 + 32] = v12;
              *(_DWORD *)&Pool2[v14 + 24] = *(_DWORD *)(v16 + a1 + 20);
              while ( 1 )
              {
                if ( v15 >= *(_DWORD *)(v16 + a1 + 16) )
                {
                  ++v13;
                  goto LABEL_12;
                }
                if ( v12 - Pool2 > v10 - 24 )
                  break;
                v18 = *(_QWORD *)(v16 + a1 + 24);
                *((_DWORD *)v12 + 4) = *(_DWORD *)(v18 + 24LL * v15 + 16);
                *(_QWORD *)v12 = *(_QWORD *)(v18 + 24LL * v15);
                *((_QWORD *)v12 + 1) = *(_QWORD *)(v18 + 24LL * v15 + 8);
                v12 += 24;
                ++v15;
              }
              ExFreePoolWithTag(Pool2, 0x4D584650u);
            }
          }
        }
      }
    }
  }
  return (char *)v2;
}
