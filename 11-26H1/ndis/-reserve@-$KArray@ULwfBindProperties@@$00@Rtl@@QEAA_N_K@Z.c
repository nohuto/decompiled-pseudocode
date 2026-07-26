/*
 * XREFs of ?reserve@?$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N_K@Z @ 0x140003EAC
 * Callers:
 *     ?grow@?$KArray@ULwfBindProperties@@$00@Rtl@@AEAA_N_K@Z @ 0x14014DA00 (-grow@-$KArray@ULwfBindProperties@@$00@Rtl@@AEAA_N_K@Z.c)
 * Callees:
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x140063780 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ??1LwfBindProperties@@QEAA@XZ @ 0x1400E60E4 (--1LwfBindProperties@@QEAA@XZ.c)
 */

char __fastcall Rtl::KArray<LwfBindProperties,1>::reserve(unsigned int *a1, unsigned __int64 a2)
{
  unsigned int v2; // ebp
  unsigned int v5; // ebx
  _BYTE *PoolWithTag; // r14
  unsigned int v7; // eax
  PVOID *v8; // rdi
  unsigned int i; // r8d
  _BYTE *v10; // rcx
  __int64 v11; // rdx
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  if ( *a1 >= a2 )
    return 1;
  if ( a2 < 0xFFFFFFFF )
  {
    v5 = 0;
    NumberOfBytes = 0LL;
    if ( (int)RtlULongLongMult(0x40uLL, a2, &NumberOfBytes) >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x7272414Bu);
      if ( PoolWithTag )
      {
        v7 = a1[1];
        v8 = (PVOID *)(a1 + 2);
        for ( i = 0; i < v7; v7 = a1[1] )
        {
          v10 = *v8;
          v11 = i++;
          v11 <<= 6;
          *(_OWORD *)&PoolWithTag[v11] = *(_OWORD *)((char *)*v8 + v11);
          *(_DWORD *)&PoolWithTag[v11 + 16] = *(_DWORD *)&v10[v11 + 16];
          *(_DWORD *)&PoolWithTag[v11 + 20] = *(_DWORD *)&v10[v11 + 20];
          *(_QWORD *)&PoolWithTag[v11 + 24] = *(_QWORD *)&v10[v11 + 24];
          *(_QWORD *)&v10[v11 + 24] = 0LL;
          *(_QWORD *)&v10[v11 + 16] = 0LL;
          *(_DWORD *)&PoolWithTag[v11 + 32] = *(_DWORD *)&v10[v11 + 32];
          *(_DWORD *)&PoolWithTag[v11 + 36] = *(_DWORD *)&v10[v11 + 36];
          *(_QWORD *)&PoolWithTag[v11 + 40] = *(_QWORD *)&v10[v11 + 40];
          *(_QWORD *)&v10[v11 + 40] = 0LL;
          *(_QWORD *)&v10[v11 + 32] = 0LL;
          *(_DWORD *)&PoolWithTag[v11 + 48] = *(_DWORD *)&v10[v11 + 48];
          PoolWithTag[v11 + 52] = v10[v11 + 52];
          *(_DWORD *)&PoolWithTag[v11 + 56] = *(_DWORD *)&v10[v11 + 56];
        }
        if ( *v8 )
        {
          if ( v7 )
          {
            do
              LwfBindProperties::~LwfBindProperties((LwfBindProperties *)((char *)*v8 + 64 * (unsigned __int64)v5++));
            while ( v5 < a1[1] );
            v8 = (PVOID *)(a1 + 2);
          }
          ExFreePoolWithTag(*v8, 0x7272414Bu);
        }
        *a1 = v2;
        *v8 = PoolWithTag;
        return 1;
      }
    }
  }
  return 0;
}
