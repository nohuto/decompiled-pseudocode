/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNTARGET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGET@@@@@@QEAA@AEBV0@@Z @ 0x14002B010
 * Callers:
 *     ??0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z @ 0x14002A2D0 (--0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x14002B2A4 (--0DMMVIDPNTARGET@@IEAA@AEBV0@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNTARGET,DoubleLinkedListElementDeleter<DMMVIDPNTARGET>>::DoublyLinkedList<DMMVIDPNTARGET,DoubleLinkedListElementDeleter<DMMVIDPNTARGET>>(
        __int64 a1,
        __int64 a2)
{
  int v4; // edx
  int v5; // r8d
  _QWORD *v6; // rdi
  __int64 v7; // rbp
  const struct DMMVIDPNTARGET *v8; // rbp
  DMMVIDPNTARGET *Pool2; // rax
  DMMVIDPNTARGET *v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  int v15; // edx
  int v16; // r8d
  __int64 v17; // rax

  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNTARGET,DoubleLinkedListElementDeleter<DMMVIDPNTARGET>>::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a2)(a2) || !*(_QWORD *)(a2 + 16) || !*(_QWORD *)(a2 + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 155;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          155,
          v4,
          v5,
          0LL,
          2,
          -1,
          (__int64)L"i_rList.IsValid()",
          155LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v6 = (_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 32) = 0LL;
  v7 = *(_QWORD *)(a2 + 16);
  if ( v7 == a2 + 16 )
    v8 = 0LL;
  else
    v8 = (const struct DMMVIDPNTARGET *)(v7 - 8);
  while ( v8 )
  {
    Pool2 = (DMMVIDPNTARGET *)ExAllocatePool2(256LL, 128LL, 1265072196LL);
    if ( !Pool2 || (v10 = DMMVIDPNTARGET::DMMVIDPNTARGET(Pool2, v8)) == 0LL )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 172;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          172,
          v15,
          v16,
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
    if ( (_QWORD *)*v6 == v6 || (v11 = *v6 - 8LL, *v6 == 8LL) )
    {
LABEL_16:
      v13 = *(_QWORD **)(a1 + 24);
      v14 = (_QWORD *)((char *)v10 + 8);
      if ( (_QWORD *)*v13 != v6 )
        __fastfail(3u);
      *v14 = v6;
      v14[1] = v13;
      *v13 = v14;
      *(_QWORD *)(a1 + 24) = v14;
      ++*(_QWORD *)(a1 + 32);
    }
    else
    {
      while ( (DMMVIDPNTARGET *)v11 != v10 )
      {
        v12 = *(_QWORD **)(v11 + 8);
        v11 = (__int64)(v12 - 1);
        if ( v12 == v6 )
          v11 = 0LL;
        if ( !v11 )
          goto LABEL_16;
      }
    }
    v17 = *((_QWORD *)v8 + 1);
    v8 = (const struct DMMVIDPNTARGET *)(v17 - 8);
    if ( v17 == a2 + 16 )
      v8 = 0LL;
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
