/*
 * XREFs of ??_G?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@AEAAPEAXI@Z @ 0x14011ABC0
 * Callers:
 *     ?Destroy@?$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x14011AB94 (-Destroy@-$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<909312,3552>::`scalar deleting destructor'(__int64 a1)
{
  struct _RTL_BITMAP *v2; // rcx

  v2 = (struct _RTL_BITMAP *)(*(_QWORD *)(a1 + 24) ^ *(_QWORD *)(a1 + 16));
  if ( v2 )
    RtlFindSetBits(v2, 1u, 0);
  if ( *(_QWORD *)a1 )
    ExFreePoolWithTag(*(PVOID *)a1, 0);
  if ( *(_QWORD *)(a1 + 24) != *(_QWORD *)(a1 + 16) )
    ExFreePoolWithTag((PVOID)(*(_QWORD *)(a1 + 24) ^ *(_QWORD *)(a1 + 16)), 0);
  return a1;
}
