/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCE@@@@@@QEAA@AEBV0@@Z @ 0x14002A89C
 * Callers:
 *     ??0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z @ 0x14002A364 (--0DMMVIDPNSOURCESET@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ??0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z @ 0x14002AB0C (--0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // r14
  _QWORD *v5; // rdi
  const struct DMMVIDPNSOURCE *v6; // rbp
  DMMVIDPNSOURCE *Pool2; // rax
  DMMVIDPNSOURCE *v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rax
  int v13; // edx
  int v14; // r8d
  _QWORD *v16; // rax

  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNSOURCE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCE>>::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a2)(a2)
    || (v4 = (_QWORD *)(a2 + 16), !*(_QWORD *)(a2 + 16))
    || !*(_QWORD *)(a2 + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 155;
    DxgkLogInternalTriageEvent(0, 262146, -1, (unsigned int)L"i_rList.IsValid()", 155LL, 0LL, 0LL, 0LL, 0LL);
    v4 = (_QWORD *)(a2 + 16);
  }
  v5 = (_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( (_QWORD *)*v4 == v4 )
    v6 = 0LL;
  else
    v6 = (const struct DMMVIDPNSOURCE *)(*v4 - 8LL);
  while ( v6 )
  {
    Pool2 = (DMMVIDPNSOURCE *)ExAllocatePool2(256LL, 184LL, 1265072196LL);
    if ( !Pool2 || (v8 = DMMVIDPNSOURCE::DMMVIDPNSOURCE(Pool2, v6)) == 0LL )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 172;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          172,
          v13,
          v14,
          0LL,
          1,
          -1,
          (__int64)L"Failed to allocate memory for doubly linked list element",
          172LL,
          0LL,
          0LL,
          0LL,
          0LL);
      *(_DWORD *)(a1 + 8) = -1073741801;
      return a1;
    }
    if ( (_QWORD *)*v5 == v5 || (v11 = *v5 - 8LL, *v5 == 8LL) )
    {
LABEL_11:
      v9 = *(_QWORD **)(a1 + 24);
      v10 = (_QWORD *)((char *)v8 + 8);
      if ( (_QWORD *)*v9 != v5 )
        __fastfail(3u);
      *v10 = v5;
      v10[1] = v9;
      *v9 = v10;
      *(_QWORD *)(a1 + 24) = v10;
      ++*(_QWORD *)(a1 + 32);
    }
    else
    {
      while ( (DMMVIDPNSOURCE *)v11 != v8 )
      {
        v12 = *(_QWORD **)(v11 + 8);
        v11 = (__int64)(v12 - 1);
        if ( v12 == v5 )
          v11 = 0LL;
        if ( !v11 )
          goto LABEL_11;
      }
    }
    v16 = (_QWORD *)*((_QWORD *)v6 + 1);
    v6 = (const struct DMMVIDPNSOURCE *)(v16 - 1);
    if ( v16 == v4 )
      v6 = 0LL;
  }
  if ( *(_QWORD *)(a1 + 32) != *(_QWORD *)(a2 + 32) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 186;
    DxgkLogInternalTriageEvent(
      0,
      262146,
      -1,
      (unsigned int)L"this->GetNumElements() == i_rList.GetNumElements()",
      186LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *(_DWORD *)(a1 + 40) = 2;
  return a1;
}
