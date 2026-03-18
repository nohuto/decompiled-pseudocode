/*
 * XREFs of ?Clear@?$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTSOURCE@@@@@@QEAAXXZ @ 0x14004B6A4
 * Callers:
 *     ??1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ @ 0x14009590C (--1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ.c)
 *     ??_G?$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U?$DoubleLinkedListElementDeleter@VDMMVIDEOPRESENTSOURCE@@@@@@UEAAPEAXI@Z @ 0x140096050 (--_G-$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@U-$DoubleLinkedListElementDeleter@VDMMVIDEOPRESEN.c)
 *     ??_E?$Set@VDMMVIDEOPRESENTSOURCE@@@@UEAAPEAXI@Z @ 0x140096110 (--_E-$Set@VDMMVIDEOPRESENTSOURCE@@@@UEAAPEAXI@Z.c)
 *     ?Clear@?$Set@VDMMVIDEOPRESENTSOURCE@@@@UEAAXXZ @ 0x140096510 (-Clear@-$Set@VDMMVIDEOPRESENTSOURCE@@@@UEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDEOPRESENTSOURCE,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTSOURCE>>::Clear(
        __int64 a1)
{
  __int64 *v2; // rbx
  __int64 result; // rax
  __int64 v4; // rcx

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
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 394;
    return DxgkLogInternalTriageEvent(
             0LL,
             262146,
             -1,
             (__int64)L"this->GetNumElements() == 0",
             394LL,
             0LL,
             0LL,
             0LL,
             0LL);
  }
  return result;
}
