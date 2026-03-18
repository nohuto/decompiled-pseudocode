/*
 * XREFs of ACPIPccInitialize @ 0x1400B2344
 * Callers:
 *     ACPILoadProcessRSDT @ 0x1400DDE64 (ACPILoadProcessRSDT.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001B3DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     AcpiPccInitType0Subspace @ 0x1400B32C0 (AcpiPccInitType0Subspace.c)
 *     AcpiPccInitType1Subspace @ 0x1400B3400 (AcpiPccInitType1Subspace.c)
 *     AcpiPccInitType2Subspace @ 0x1400B3550 (AcpiPccInitType2Subspace.c)
 *     AcpiPccInitType34Subspace @ 0x1400B36F0 (AcpiPccInitType34Subspace.c)
 */

__int64 __fastcall ACPIPccInitialize(__int64 a1)
{
  unsigned __int8 *v1; // rsi
  unsigned __int64 v2; // rdx
  unsigned int v3; // ebx
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 Pool2; // rax
  int v9; // edx
  __int64 v10; // r8
  __int64 v11; // r14
  unsigned int v12; // ebp
  unsigned int *v13; // rdi
  __int64 v14; // rax
  signed __int32 v16[8]; // [rsp+0h] [rbp-48h] BYREF

  v1 = (unsigned __int8 *)(a1 + 48);
  v2 = a1 + *(unsigned int *)(a1 + 4);
  v3 = 0;
  v5 = a1 + 48;
  if ( a1 + 50 <= v2 )
  {
    do
    {
      v6 = *(unsigned __int8 *)(v5 + 1);
      if ( (unsigned __int8)v6 < 2u )
        break;
      v7 = v5 + v6;
      v5 = v7;
      if ( v7 > v2 )
        break;
      ++v3;
    }
    while ( v7 + 2 <= v2 );
    if ( v3 )
    {
      Pool2 = ExAllocatePool2(64LL, 824LL * v3, 1299211073LL);
      v11 = Pool2;
      if ( Pool2 )
      {
        v12 = 0;
        v13 = (unsigned int *)(Pool2 + 8);
        do
        {
          *(v13 - 1) = v12;
          v14 = *v1;
          if ( (unsigned __int8)v14 < 5u )
          {
            LOBYTE(v10) = *(_BYTE *)(a1 + 36) & 1;
            if ( ((unsigned __int8 (__fastcall *)(unsigned int *, unsigned __int8 *, __int64))AcpiPccSubspaceInit[v14])(
                   v13 - 2,
                   v1,
                   v10) )
            {
              *v13 = *v13 & 0xFFFFFFE1 | 2;
            }
          }
          ++v12;
          v1 += v1[1];
          v13 += 206;
        }
        while ( v12 < v3 );
        _InterlockedOr(v16, 0);
        AcpiPccSubspaces = v11;
        AcpiPccSubspaceCount = v3;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v9,
          21,
          11,
          (__int64)&WPP_cc72d47764df3397336cff0a641bfca0_Traceguids);
      }
    }
  }
  return 0LL;
}
