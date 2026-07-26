/*
 * XREFs of ?reserve@?$KArray@UProtocolBindProperties@@$00@Rtl@@QEAA_N_K@Z @ 0x14000401C
 * Callers:
 *     ?grow@?$KArray@UProtocolBindProperties@@$00@Rtl@@AEAA_N_K@Z @ 0x14014DA44 (-grow@-$KArray@UProtocolBindProperties@@$00@Rtl@@AEAA_N_K@Z.c)
 * Callees:
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x140063780 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ??0ProtocolBindProperties@@QEAA@$$QEAU0@@Z @ 0x1400E6064 (--0ProtocolBindProperties@@QEAA@$$QEAU0@@Z.c)
 *     ??1ProtocolBindProperties@@QEAA@XZ @ 0x1400E61E4 (--1ProtocolBindProperties@@QEAA@XZ.c)
 */

char __fastcall Rtl::KArray<ProtocolBindProperties,1>::reserve(unsigned int *a1, unsigned __int64 a2)
{
  unsigned int v2; // ebp
  unsigned int v5; // ebx
  char *PoolWithTag; // r14
  unsigned int v7; // ecx
  PVOID *v8; // rdi
  unsigned int i; // r10d
  int v10; // r10d
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
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x7272414Bu);
      if ( PoolWithTag )
      {
        v7 = a1[1];
        v8 = (PVOID *)(a1 + 2);
        for ( i = 0; i < v7; i = v10 + 1 )
        {
          ProtocolBindProperties::ProtocolBindProperties(
            &PoolWithTag[64 * (unsigned __int64)i],
            (char *)*v8 + 64 * (unsigned __int64)i);
          v7 = a1[1];
        }
        if ( *v8 )
        {
          if ( v7 )
          {
            do
              ProtocolBindProperties::~ProtocolBindProperties((ProtocolBindProperties *)((char *)*v8
                                                                                       + 64 * (unsigned __int64)v5++));
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
