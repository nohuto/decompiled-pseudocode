/*
 * XREFs of ?Clear@?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAAXXZ @ 0x140039C50
 * Callers:
 *     ??1DMMVIDPNSOURCEMODESET@@UEAA@XZ @ 0x140039BB4 (--1DMMVIDPNSOURCEMODESET@@UEAA@XZ.c)
 *     ??_E?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@UEAAPEAXI@Z @ 0x1400974C0 (--_E-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMOD.c)
 *     ??_G?$IndexedSet@VDMMVIDPNSOURCEMODE@@@@UEAAPEAXI@Z @ 0x140097500 (--_G-$IndexedSet@VDMMVIDPNSOURCEMODE@@@@UEAAPEAXI@Z.c)
 *     ?Clear@?$Set@VDMMVIDPNTARGETMODE@@@@UEAAXXZ @ 0x140097550 (-Clear@-$Set@VDMMVIDPNTARGETMODE@@@@UEAAXXZ.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::Clear(
        __int64 a1)
{
  __int64 *v2; // rbx
  __int64 result; // rax
  __int64 v4; // rcx
  int v5; // edx
  int v6; // r8d

  v2 = (__int64 *)(a1 + 16);
  while ( 1 )
  {
    result = *v2;
    if ( (__int64 *)*v2 == v2 )
      break;
    if ( *(__int64 **)(result + 8) != v2 || (v4 = *(_QWORD *)result, *(_QWORD *)(*(_QWORD *)result + 8LL) != result) )
      __fastfail(3u);
    *v2 = v4;
    *(_QWORD *)(v4 + 8) = v2;
    --*(_QWORD *)(a1 + 32);
    *(_QWORD *)result = 0LL;
    *(_QWORD *)(result + 8) = 0LL;
    if ( result != -56 )
      (**(void (__fastcall ***)(__int64, __int64))(result + 56))(result + 56, 1LL);
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    result = WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 394;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        return McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                 394,
                 v5,
                 v6,
                 0LL,
                 2,
                 -1,
                 (__int64)L"this->GetNumElements() == 0",
                 394LL,
                 0LL,
                 0LL,
                 0LL,
                 0LL);
    }
  }
  return result;
}
