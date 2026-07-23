/*
 * XREFs of HalpApicInitializeIoUnit @ 0x1405A3EA0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptFindLines @ 0x1404336FC (HalpInterruptFindLines.c)
 *     HalMapIoSpace @ 0x14059C940 (HalMapIoSpace.c)
 *     HalpApicConvertFromRte @ 0x1405A37D8 (HalpApicConvertFromRte.c)
 *     HalpApicDescribeLines @ 0x1405A3A38 (HalpApicDescribeLines.c)
 */

__int64 __fastcall HalpApicInitializeIoUnit(__int64 a1)
{
  int *v1; // rbx
  int *v3; // rax
  __int64 result; // rax
  int v5; // ecx
  int v6; // eax
  unsigned int v7; // r14d
  int v8; // esi
  int v9; // ecx
  unsigned int v10; // edx
  _QWORD *Lines; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int64 v14; // rax
  __int128 v15; // xmm0
  signed __int32 v16[8]; // [rsp+0h] [rbp-60h] BYREF
  __int128 v17; // [rsp+20h] [rbp-40h] BYREF
  __int128 v18; // [rsp+30h] [rbp-30h]
  __int128 v19; // [rsp+40h] [rbp-20h]
  __int64 v20; // [rsp+50h] [rbp-10h]
  __int64 v21; // [rsp+98h] [rbp+38h] BYREF

  v1 = *(int **)(a1 + 16);
  v21 = 0LL;
  v20 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  if ( !v1 )
  {
    v3 = (int *)HalMapIoSpace(*(LARGE_INTEGER *)a1, 0x1000uLL, MmNonCached);
    *(_QWORD *)(a1 + 16) = v3;
    v1 = v3;
    if ( !v3 )
      return 3221225626LL;
  }
  *v1 = 1;
  _InterlockedOr(v16, 0);
  v1[4] = 0;
  _InterlockedOr(v16, 0);
  *v1 = 1;
  _InterlockedOr(v16, 0);
  v5 = v1[4];
  *v1 = 1;
  _InterlockedOr(v16, 0);
  v1[4] = 0;
  _InterlockedOr(v16, 0);
  *v1 = 1;
  _InterlockedOr(v16, 0);
  v6 = v1[4];
  if ( (unsigned int)(v5 - 1) > 0xFFFFFFFD || (_BYTE)v5 != (_BYTE)v6 || BYTE2(v5) != BYTE2(v6) )
  {
    *(_BYTE *)(a1 + 40) = 1;
    return 0LL;
  }
  *(_BYTE *)(a1 + 24) = v5;
  *(_BYTE *)(a1 + 25) = BYTE2(v5) + 1;
  *v1 = 0;
  _InterlockedOr(v16, 0);
  v1[4] |= *(_DWORD *)(a1 + 8) << 24;
  _InterlockedOr(v16, 0);
  if ( *(_BYTE *)(a1 + 26) || (result = HalpApicDescribeLines(a1), (int)result >= 0) )
  {
    v7 = 0;
    v8 = 17;
    while ( v7 < *(unsigned __int8 *)(a1 + 25) )
    {
      *v1 = v8 - 1;
      v9 = v1[4];
      if ( *(_BYTE *)(a1 + 26)
        || (v1[4] & 0x700) != 0x200
        || (v9 & 0x10000) != 0
        || (*v1 = v8,
            v10 = v1[4],
            LODWORD(v21) = *(_DWORD *)(a1 + 8),
            HIDWORD(v21) = v7,
            HalpApicConvertFromRte(v9, v10, (__int64)&v17),
            DWORD2(v18) == 7) )
      {
        v1[4] = 65791;
        *v1 = v8;
        v1[4] = 0;
      }
      else
      {
        Lines = HalpInterruptFindLines((unsigned int *)&v21);
        if ( !Lines )
          return 3221226021LL;
        v12 = v17;
        v13 = v18;
        *(_BYTE *)Lines[6] = 1;
        v14 = Lines[5];
        *(_OWORD *)v14 = v12;
        v15 = v19;
        *(_OWORD *)(v14 + 16) = v13;
        *(_QWORD *)&v13 = v20;
        *(_OWORD *)(v14 + 32) = v15;
        *(_QWORD *)(v14 + 48) = v13;
        ++HalpInterruptFixedLines;
      }
      ++v7;
      v8 += 2;
    }
    *(_BYTE *)(a1 + 26) = 1;
    return 0LL;
  }
  return result;
}
