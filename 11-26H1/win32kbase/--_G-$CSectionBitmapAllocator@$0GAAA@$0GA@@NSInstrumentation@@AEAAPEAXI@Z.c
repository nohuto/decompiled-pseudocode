/*
 * XREFs of ??_G?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@AEAAPEAXI@Z @ 0x14015AFB4
 * Callers:
 *     ?Destroy@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14015AF88 (-Destroy@-$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<24576,96>::`scalar deleting destructor'(__int64 a1)
{
  void *v2; // rdi

  v2 = (void *)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24));
  if ( v2 )
  {
    RtlFindSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24)), 1u, 0);
    ExFreePoolWithTag(v2, 0);
  }
  if ( *(_QWORD *)a1 )
    ExFreePoolWithTag(*(PVOID *)a1, 0);
  return a1;
}
