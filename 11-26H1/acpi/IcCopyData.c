/*
 * XREFs of IcCopyData @ 0x1400C3674
 * Callers:
 *     AcpiIrqLibSetupSciInterrupt @ 0x1400BBB64 (AcpiIrqLibSetupSciInterrupt.c)
 *     IrqArbBootAllocation @ 0x1400C35D0 (IrqArbBootAllocation.c)
 *     IrqArbpPrepareForTestOrConflict @ 0x1400C379C (IrqArbpPrepareForTestOrConflict.c)
 *     IrqArbCommitAllocation @ 0x1400C38C0 (IrqArbCommitAllocation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IcCopyData(int a1)
{
  __int64 i; // r8
  unsigned int v2; // r10d
  unsigned int v3; // r9d
  __int64 v4; // rdx
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  int v7; // eax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  int v13; // eax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0

  for ( i = IcListHead; &IcListHead != (__int64 *)i; i = *(_QWORD *)i )
  {
    if ( *(int *)(i + 28) >= 0 )
    {
      v2 = 0;
      v3 = *(_DWORD *)(i + 20) - *(_DWORD *)(i + 16) + 1;
      if ( *(_DWORD *)(i + 20) - *(_DWORD *)(i + 16) != -1 )
      {
        v4 = i + 44;
        do
        {
          if ( a1 == 1 )
          {
            v11 = *(_OWORD *)(v4 + 4);
            v12 = *(_OWORD *)(v4 + 20);
            *(_DWORD *)(v4 - 8) = *(_DWORD *)(v4 - 12);
            v13 = *(_DWORD *)(v4 - 4);
            *(_OWORD *)(v4 + 92) = v11;
            *(_DWORD *)v4 = v13;
            v14 = *(_OWORD *)(v4 + 36);
            LOBYTE(v13) = *(_BYTE *)(v4 + 180);
            *(_OWORD *)(v4 + 108) = v12;
            *(_BYTE *)(v4 + 181) = v13;
            v15 = *(_OWORD *)(v4 + 52);
            *(_OWORD *)(v4 + 124) = v14;
            v16 = *(_OWORD *)(v4 + 68);
            *(_OWORD *)(v4 + 140) = v15;
            *(_QWORD *)&v15 = *(_QWORD *)(v4 + 84);
            *(_OWORD *)(v4 + 156) = v16;
            *(_QWORD *)(v4 + 172) = v15;
            *(_DWORD *)(v4 + 92) = 0;
            *(_DWORD *)(v4 + 148) = v2 + *(_DWORD *)(i + 16);
          }
          else
          {
            v5 = *(_OWORD *)(v4 + 92);
            v6 = *(_OWORD *)(v4 + 108);
            *(_DWORD *)(v4 - 12) = *(_DWORD *)(v4 - 8);
            v7 = *(_DWORD *)v4;
            *(_OWORD *)(v4 + 4) = v5;
            *(_DWORD *)(v4 - 4) = v7;
            v8 = *(_OWORD *)(v4 + 124);
            LOBYTE(v7) = *(_BYTE *)(v4 + 181);
            *(_OWORD *)(v4 + 20) = v6;
            *(_BYTE *)(v4 + 180) = v7;
            v9 = *(_OWORD *)(v4 + 140);
            *(_OWORD *)(v4 + 36) = v8;
            v10 = *(_OWORD *)(v4 + 156);
            *(_OWORD *)(v4 + 52) = v9;
            *(_QWORD *)&v9 = *(_QWORD *)(v4 + 172);
            *(_OWORD *)(v4 + 68) = v10;
            *(_QWORD *)(v4 + 84) = v9;
          }
          ++v2;
          v4 += 200LL;
        }
        while ( v2 < v3 );
      }
    }
  }
  return 0LL;
}
