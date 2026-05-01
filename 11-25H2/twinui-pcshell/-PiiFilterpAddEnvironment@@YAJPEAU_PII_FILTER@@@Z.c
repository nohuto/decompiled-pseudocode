/*
 * XREFs of ?PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z @ 0x18013C2DC
 * Callers:
 *     PiiFilterCreate @ 0x18013A97C (PiiFilterCreate.c)
 * Callees:
 *     AslEnvBuildBasic @ 0x18013AABC (AslEnvBuildBasic.c)
 *     ?PiiFilterpAddItemSorted@@YAJPEAU_PII_FILTER@@PEAG1@Z @ 0x18013C7C0 (-PiiFilterpAddItemSorted@@YAJPEAU_PII_FILTER@@PEAG1@Z.c)
 *     AslFree @ 0x18013CDD4 (AslFree.c)
 *     _wcslwr @ 0x1802D2F30 (_wcslwr.c)
 *     _wcsnicmp @ 0x1802D2F3C (_wcsnicmp.c)
 *     wcscat_s @ 0x1802D2FB4 (wcscat_s.c)
 *     wcscpy_s @ 0x1802D2FC0 (wcscpy_s.c)
 */

__int64 __fastcall PiiFilterpAddEnvironment(struct _PII_FILTER *a1)
{
  wchar_t *Heap; // rsi
  size_t v3; // rbp
  int v4; // edi
  wchar_t *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  wchar_t *v8; // rdi
  wchar_t *String1; // [rsp+58h] [rbp+10h] BYREF
  size_t v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0LL;
  String1 = 0LL;
  Heap = 0LL;
  v3 = 0LL;
  v4 = AslEnvBuildBasic(&String1, &v11);
  if ( v4 >= 0 )
  {
    Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
    if ( Heap )
    {
      v5 = String1;
      while ( v3 < v11 )
      {
        v6 = -1LL;
        do
          ++v6;
        while ( v5[v6] );
        v3 += v6 + 1;
        if ( *v5
          && wcsnicmp(v5, L"SystemDrive=", 0xCuLL)
          && wcsnicmp(v5, L"DataDrive=", 0xAuLL)
          && wcsnicmp(v5, L"OSDataDrive=", 0xCuLL) )
        {
          v8 = wcschr(v5, 0x3Du);
          if ( !v8 )
            break;
          wcslwr(v5);
          *v8 = 0;
          wcscpy_s(Heap, 0x104uLL, L"%");
          wcscat_s(Heap, 0x104uLL, v5);
          wcscat_s(Heap, 0x104uLL, L"%");
          *v8 = 61;
          v4 = PiiFilterpAddItemSorted(a1, v8 + 1, Heap);
          if ( v4 < 0 )
            goto LABEL_18;
        }
        v7 = -1LL;
        do
          ++v7;
        while ( v5[v7] );
        v5 += v7 + 1;
      }
      v4 = 0;
    }
    else
    {
      v4 = -1073741801;
    }
  }
LABEL_18:
  AslFree(NtCurrentPeb()->ProcessHeap, String1);
  AslFree(NtCurrentPeb()->ProcessHeap, Heap);
  return (unsigned int)v4;
}
