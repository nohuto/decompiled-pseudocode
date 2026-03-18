/*
 * XREFs of RtlWow64GetCpuAreaInfo @ 0x140A64E50
 * Callers:
 *     RtlpWalkFrameChain @ 0x140262EB0 (RtlpWalkFrameChain.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140B792F0 (PspWow64ReadOrWriteThreadCpuArea.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x1403D6D60 (RtlGetExtendedContextLength2.c)
 *     RtlpRemoveArchDisallowedXStateFeatures @ 0x14046CFC0 (RtlpRemoveArchDisallowedXStateFeatures.c)
 *     RtlpGetContextFlagsLocation @ 0x14047DA34 (RtlpGetContextFlagsLocation.c)
 *     RtlpGetLegacyContextLength @ 0x14048CA10 (RtlpGetLegacyContextLength.c)
 */

__int64 __fastcall RtlWow64GetCpuAreaInfo(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 result; // rax
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+48h] [rbp+10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  *(_QWORD *)(a3 + 24) = a1;
  v11 = 0;
  v10 = 0;
  v5 = 0x10000;
  RtlpGetLegacyContextLength(0x10000, 0LL, &v11);
  v12 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
  RtlpRemoveArchDisallowedXStateFeatures(0x10000, &v12);
  if ( (v12 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    v5 = 65600;
  RtlGetExtendedContextLength2(v5, &v10, v12 & 0xFFFFFFFFFFFFFFFCuLL);
  v6 = ~(v11 - 1LL) & (a1 + v11 + 3LL);
  v7 = v6 + v10 + 7LL;
  *(_QWORD *)a3 = v6;
  *(_QWORD *)(a3 + 8) = v7 & 0xFFFFFFFFFFFFFFF8uLL;
  *(_QWORD *)(a3 + 16) = RtlpGetContextFlagsLocation(v6, v5);
  *(_DWORD *)(a3 + 32) = v5;
  *(_QWORD *)(a3 + 40) = (v8 + 11) & 0xFFFFFFFFFFFFFFFCuLL;
  result = 0LL;
  *(_WORD *)(a3 + 36) = 332;
  return result;
}
