/*
 * XREFs of MiInitializePrivateFixupBitmap @ 0x14099F814
 * Callers:
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1406EB858 (MiAddPrivateFixupEntryForSystemImage.c)
 *     MiCreateFixupVad @ 0x14099F45C (MiCreateFixupVad.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 *     RtlDoesRequireFunctionOverrideFixups @ 0x1409A0274 (RtlDoesRequireFunctionOverrideFixups.c)
 */

__int64 __fastcall MiInitializePrivateFixupBitmap(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 *v6; // r15
  __int64 v7; // rsi
  int v8; // r12d
  unsigned __int64 v9; // rsi
  __int64 v10; // r13
  unsigned int i; // r14d
  __int64 v13; // rcx
  __int64 v14; // rcx
  char v16; // [rsp+70h] [rbp+18h]

  v16 = a3;
  v3 = a2 + 128;
  v4 = 0LL;
  v5 = 0LL;
  v6 = *(__int64 **)((*(_QWORD *)(a2 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 32);
  do
  {
    v7 = *(unsigned int *)(v3 + 44);
    if ( *(_QWORD *)(v3 + 8) < (unsigned __int64)(*(_QWORD *)(v3 + 8) + 8 * v7) )
    {
      v8 = a3 & 1;
      v9 = ((unsigned __int64)(8 * v7 - 1) >> 3) + 1;
      do
      {
        v10 = *v6;
        if ( v8 && (unsigned int)v4 < *((_DWORD *)v6 + 14) )
        {
          for ( i = v4; i == (_DWORD)v4; ++i )
          {
            if ( *(_QWORD *)(v10 + 8LL * i) )
              goto LABEL_19;
            v13 = v6[11];
            if ( v13 )
            {
              if ( *(_QWORD *)(v13 + 8LL * i + 64) )
                goto LABEL_19;
            }
            v14 = v6[12];
            if ( v14 )
            {
              if ( (unsigned __int8)RtlDoesRequireFunctionOverrideFixups(v14, i) )
                goto LABEL_19;
              a3 = v16;
            }
            if ( (a3 & 2) != 0 && (unsigned int)HalSystemVectorDispatchEntry() )
            {
LABEL_19:
              *(_BYTE *)((v4 >> 3) + *(_QWORD *)(a1 + 8)) |= 1 << (v4 & 7);
              a3 = v16;
              goto LABEL_6;
            }
          }
        }
        if ( (*(_BYTE *)(v3 + 32) & 0xA) == 0xA )
LABEL_6:
          ++v5;
        ++v4;
        --v9;
      }
      while ( v9 );
    }
    v3 = *(_QWORD *)(v3 + 16);
  }
  while ( v3 );
  return v5;
}
