/*
 * XREFs of RtlValidateHotPatchBase @ 0x1408B17C8
 * Callers:
 *     MiApplyDriverHotPatch @ 0x140873E94 (MiApplyDriverHotPatch.c)
 *     MiCaptureHotPatchInfo @ 0x1408758FC (MiCaptureHotPatchInfo.c)
 * Callees:
 *     RtlGetHotPatchSize @ 0x1407257D0 (RtlGetHotPatchSize.c)
 *     RtlDetermineHotPatchExtent @ 0x1408B12E0 (RtlDetermineHotPatchExtent.c)
 */

char __fastcall RtlValidateHotPatchBase(
        _DWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int16 a6)
{
  unsigned int v6; // r15d
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int *v9; // r12
  unsigned int *v10; // rdi
  unsigned int HotPatchSize; // edx
  unsigned int v12; // r8d
  unsigned int v13; // r9d
  int v14; // ebx
  int v15; // esi
  unsigned int v16; // r13d
  unsigned int v17; // eax
  int v18; // r14d
  unsigned int v19; // ecx
  unsigned int v21; // [rsp+30h] [rbp-38h]
  unsigned int v22; // [rsp+34h] [rbp-34h]
  unsigned int v23[12]; // [rsp+38h] [rbp-30h] BYREF

  a5 = 0;
  if ( a6 == 0x8664 || a6 == 0xAA64 )
  {
    v6 = 8;
  }
  else
  {
    if ( a6 != 332 )
      return 0;
    v6 = 4;
  }
  v7 = (unsigned int)a1[1];
  v8 = *(unsigned int *)(a2 + 24);
  if ( (unsigned int)v8 >= (unsigned int)v7 )
    return 0;
  v9 = (_DWORD *)((char *)a1 + v7);
  v10 = (_DWORD *)((char *)a1 + v8);
  HotPatchSize = RtlGetHotPatchSize(a1);
  v22 = HotPatchSize;
  while ( 1 )
  {
    v14 = *v10;
    if ( !*v10 )
      break;
    if ( v10 >= v9 )
      return 0;
    if ( (v14 & 0x3FF03000) != 0 )
      return 0;
    if ( (v14 & 0x40000000) != 0 )
      return 0;
    v15 = v14 & 0xFC000;
    if ( v14 >= 0 && v15 != 114688 )
      return 0;
    v16 = v12;
    v17 = v13;
    if ( v14 >= 0 )
    {
      v17 = v12;
      v16 = v13;
    }
    v18 = *v10 & 0xFFF;
    v21 = v17;
    ++v10;
    while ( v18 )
    {
      if ( (v14 & 0x4000) != 0 )
      {
        v19 = v6 + v10[1];
        if ( v19 < v6 || v19 > v16 )
          return 0;
      }
      if ( v15 == 376832 && v14 >= 0 )
        return 0;
      if ( (v14 & 0x8000) != 0 )
      {
        if ( !RtlDetermineHotPatchExtent((unsigned int)v14, *v10, a6, v23, &a5) || a5 > v21 >> 12 )
          return 0;
        HotPatchSize = v22;
      }
      if ( v15 == 491520 && v10[1] == -1 )
        return 0;
      --v18;
      v10 += HotPatchSize;
    }
    v13 = a4;
    v12 = a3;
  }
  return 1;
}
