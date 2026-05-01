/*
 * XREFs of AslStringDuplicate @ 0x18013CDFC
 * Callers:
 *     AslRegistryGetString @ 0x18013CB10 (AslRegistryGetString.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1802CED80 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslStringDuplicate(_QWORD *a1, _WORD *a2)
{
  _WORD *v4; // rax
  __int64 v5; // rdx
  signed int v6; // edi
  unsigned int v7; // ebx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rsi
  _WORD *Heap; // r15
  unsigned __int64 v11; // rdx
  _WORD *v12; // rcx
  signed __int64 v13; // r14
  __int16 v14; // ax
  _WORD *v15; // rax
  int v17; // r8d
  const char *v18; // r9

  *a1 = 0LL;
  if ( !a2 )
    return 0;
  v4 = a2;
  v5 = 0x7FFFFFFFLL;
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --v5;
  }
  while ( v5 );
  v6 = -1073741811;
  v7 = v5 == 0 ? 0xC000000D : 0;
  v8 = (0x7FFFFFFF - v5) & -(__int64)(v5 != 0);
  if ( !v5 )
  {
    v18 = "RtlStringCchLengthW failed [%x]";
    v17 = 574;
    goto LABEL_23;
  }
  v9 = v8 + 1;
  if ( v8 + 1 < v8 )
  {
    v17 = 585;
    goto LABEL_22;
  }
  if ( !is_mul_ok(v9, 2uLL) )
  {
    v17 = 591;
LABEL_22:
    v18 = "SIZE_T arithmetic failed [%x]";
    v7 = -1073741675;
LABEL_23:
    AslLogCallPrintf(1, (unsigned int)"AslStringDuplicate", v17, (_DWORD)v18);
    return v7;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2 * v9);
  if ( !Heap )
  {
    v7 = -1073741801;
    AslLogCallPrintf(1, (unsigned int)"AslStringDuplicate", 598, (unsigned int)"Out of memory");
    return v7;
  }
  if ( v9 - 1 > 0x7FFFFFFE )
  {
    v7 = -1073741811;
    if ( v9 )
    {
      *Heap = 0;
      goto LABEL_29;
    }
  }
  else
  {
    v11 = 2147483646 - v9;
    v12 = Heap;
    v13 = (char *)a2 - (char *)Heap;
    do
    {
      if ( !(v11 + v9) )
        break;
      v14 = *(_WORD *)((char *)v12 + v13);
      if ( !v14 )
        break;
      *v12++ = v14;
      --v9;
    }
    while ( v9 );
    v15 = v12 - 1;
    if ( v9 )
      v15 = v12;
    v6 = v9 == 0 ? 0x80000005 : 0;
    *v15 = 0;
  }
  v7 = v6;
  if ( v6 < 0 )
  {
LABEL_29:
    AslLogCallPrintf(1, (unsigned int)"AslStringDuplicate", 608, (unsigned int)"RtlStringCchCopyW failed [%x]");
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    return v7;
  }
  *a1 = Heap;
  return 0;
}
