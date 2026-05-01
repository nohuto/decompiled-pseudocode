/*
 * XREFs of AslRegistryGetStringExpand @ 0x18015C344
 * Callers:
 *     AslEnvBuildBasic @ 0x18015A770 (AslEnvBuildBasic.c)
 * Callees:
 *     AslRegistryGetString @ 0x18015C054 (AslRegistryGetString.c)
 *     AslFree @ 0x18015C31C (AslFree.c)
 *     AslEnvExpandStrings2 @ 0x18015CA50 (AslEnvExpandStrings2.c)
 *     AslEnvGetProcessWowInfo @ 0x18015CC60 (AslEnvGetProcessWowInfo.c)
 *     AslLogCallPrintf @ 0x1802C3E28 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslRegistryGetStringExpand(wchar_t **a1, void *a2, const WCHAR *a3, int a4)
{
  PVOID Heap; // rdi
  int String; // eax
  wchar_t *v8; // rsi
  int v9; // ebx
  int ProcessWowInfo; // eax
  __int64 v11; // r8
  __int16 v12; // r15
  __int16 v13; // r12
  int v14; // ebx
  __int64 v16; // [rsp+28h] [rbp-28h]
  __int16 v17[2]; // [rsp+40h] [rbp-10h] BYREF
  __int16 v18; // [rsp+44h] [rbp-Ch] BYREF
  wchar_t *Str; // [rsp+48h] [rbp-8h] BYREF

  Heap = 0LL;
  v17[0] = -1;
  Str = 0LL;
  v18 = -1;
  String = AslRegistryGetString(&Str, a2, a3);
  v8 = Str;
  v9 = String;
  if ( String < 0 )
    goto LABEL_16;
  if ( !wcschr(Str, 0x25u) )
  {
    *a1 = v8;
    return 0;
  }
  ProcessWowInfo = AslEnvGetProcessWowInfo(&v18, v17);
  v9 = ProcessWowInfo;
  if ( ProcessWowInfo >= 0 )
  {
    Str = (wchar_t *)260;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
    if ( !Heap )
    {
      v11 = 1476LL;
LABEL_8:
      AslLogCallPrintf(1LL, "AslRegistryGetStringExpand", v11, "Out of memory");
      v9 = -1073741801;
      goto LABEL_16;
    }
    v12 = v17[0];
    v13 = v18;
    v9 = AslEnvExpandStrings2(a4, (_DWORD)v8, (_DWORD)Heap, 260, (__int64)&Str, v18, v17[0]);
    if ( v9 == -1073741789 )
    {
      AslFree(NtCurrentPeb()->ProcessHeap, Heap);
      v14 = (int)Str;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2LL * (_QWORD)Str);
      if ( !Heap )
      {
        v11 = 1494LL;
        goto LABEL_8;
      }
      v9 = AslEnvExpandStrings2(a4, (_DWORD)v8, (_DWORD)Heap, v14, (__int64)&Str, v13, v12);
    }
    if ( v9 >= 0 )
    {
      *a1 = (wchar_t *)Heap;
      Heap = 0LL;
      v9 = 0;
    }
    else
    {
      LODWORD(v16) = v9;
      AslLogCallPrintf(
        1LL,
        "AslRegistryGetStringExpand",
        1509LL,
        "AslEnvExpandStrings2 failed to expand strings for %ws [%x]",
        v8,
        v16);
    }
    goto LABEL_16;
  }
  AslLogCallPrintf(1LL, "AslRegistryGetStringExpand", 1464LL, "AslEnvGetProcessWowInfo failed [%x]", ProcessWowInfo);
LABEL_16:
  if ( v8 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
  if ( Heap )
    AslFree(NtCurrentPeb()->ProcessHeap, Heap);
  return (unsigned int)v9;
}
