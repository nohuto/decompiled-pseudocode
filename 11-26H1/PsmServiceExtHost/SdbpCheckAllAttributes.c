/*
 * XREFs of SdbpCheckAllAttributes @ 0x180092108
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x180094C30 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x180095C10 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbpCheckAttribute @ 0x1800923C8 (SdbpCheckAttribute.c)
 *     SdbFindFirstTag @ 0x1800930BC (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x1800933A4 (SdbGetStringTagPtr.c)
 *     SdbReadDWORDTag @ 0x180093760 (SdbReadDWORDTag.c)
 *     SdbReadQWORDTag @ 0x1800937FC (SdbReadQWORDTag.c)
 *     SdbReadWORDTag @ 0x18009389C (SdbReadWORDTag.c)
 *     AslFree @ 0x180098D34 (AslFree.c)
 *     AslFileAllocAndGetAttributes @ 0x18009ADE0 (AslFileAllocAndGetAttributes.c)
 *     AslFileFreeAttributes @ 0x18009B34C (AslFileFreeAttributes.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SdbpCheckAllAttributes(int *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned int v6; // ebx
  unsigned int v7; // r15d
  __int64 v8; // r14
  int v9; // edi
  _BYTE *Heap; // r12
  unsigned int v11; // r13d
  int *i; // rbx
  unsigned int FirstTag; // eax
  __int64 *p_WORDTag; // r14
  unsigned int v15; // r15d
  int v16; // ecx
  __int64 StringTagPtr; // rax
  __int64 v18; // rcx
  int Attributes; // eax
  void (__fastcall *v20)(_QWORD, __int64 *, _QWORD, _QWORD); // rax
  __int16 WORDTag; // [rsp+30h] [rbp-28h] BYREF
  int DWORDTag; // [rsp+34h] [rbp-24h] BYREF
  unsigned int v24; // [rsp+38h] [rbp-20h] BYREF
  __int64 QWORDTag; // [rsp+40h] [rbp-18h] BYREF
  int *v26; // [rsp+48h] [rbp-10h]
  unsigned __int16 v31; // [rsp+C0h] [rbp+68h]

  v6 = 0;
  DWORDTag = 0;
  v7 = a4;
  QWORDTag = 0LL;
  v8 = a3;
  *a1 = 0;
  WORDTag = 0;
  v9 = 1;
  v24 = 1;
  if ( a5 )
  {
    if ( *(_DWORD *)(a5 + 72) )
    {
      if ( !*(_QWORD *)(a5 + 32) )
        return v6;
    }
    else if ( !*(_QWORD *)(a5 + 8) )
    {
      return v6;
    }
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x480uLL);
    if ( Heap )
    {
      v11 = 0;
      for ( i = dword_1800E1764; ; i += 2 )
      {
        v26 = i;
        if ( v11 >= 0x29 )
          break;
        v31 = *((_WORD *)i - 2);
        FirstTag = SdbFindFirstTag(v8, v7, v31);
        if ( FirstTag )
        {
          p_WORDTag = 0LL;
          v15 = 0;
          v16 = v31 & 0xF000;
          switch ( v16 )
          {
            case 12288:
              WORDTag = SdbReadWORDTag(a3, FirstTag);
              p_WORDTag = (__int64 *)&WORDTag;
              v15 = 2;
              break;
            case 16384:
              DWORDTag = SdbReadDWORDTag(a3, FirstTag, 0LL);
              p_WORDTag = (__int64 *)&DWORDTag;
              v15 = 4;
              break;
            case 20480:
              QWORDTag = SdbReadQWORDTag(a3, FirstTag, 0LL);
              p_WORDTag = &QWORDTag;
              v15 = 8;
              break;
            case 24576:
              StringTagPtr = SdbGetStringTagPtr(a3, FirstTag);
              v18 = -1LL;
              p_WORDTag = (__int64 *)StringTagPtr;
              do
                ++v18;
              while ( *(_WORD *)(StringTagPtr + 2 * v18) );
              v15 = 2 * v18 + 2;
              break;
          }
          Attributes = AslFileAllocAndGetAttributes(Heap, a5, 1LL << *i);
          v6 = Attributes;
          if ( Attributes < 0 )
          {
            AslLogCallPrintf(
              1LL,
              "SdbpCheckAllAttributes",
              503LL,
              "Failed to get attribute %d [%x]",
              dword_1800E1764[2 * v11],
              Attributes);
            goto LABEL_33;
          }
          i = v26;
          if ( (Heap[32 * *v26 + 24] & 1) == 0 )
          {
            v6 = 0;
            goto LABEL_33;
          }
          if ( !(unsigned int)SdbpCheckAttribute(
                                (unsigned int)&v24,
                                v31,
                                (_DWORD)p_WORDTag,
                                v15,
                                (__int64)&Heap[32 * *v26]) )
          {
            v6 = -1073741595;
            AslLogCallPrintf(1LL, "SdbpCheckAllAttributes", 526LL, "SdbpCheckAttribute failed [%x]", -1073741595);
            goto LABEL_33;
          }
          v9 = v24;
          v20 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD))(a2 + 1752);
          if ( v20 )
            v20(v31, p_WORDTag, v15, v24);
          if ( !v9 )
            break;
          v8 = a3;
          v7 = a4;
        }
        ++v11;
      }
      v6 = 0;
      *a1 = v9;
LABEL_33:
      AslFileFreeAttributes(Heap);
      AslFree(NtCurrentPeb()->ProcessHeap, Heap);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v6;
}
