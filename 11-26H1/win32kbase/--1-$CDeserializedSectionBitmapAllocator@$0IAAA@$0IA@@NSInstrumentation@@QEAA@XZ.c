/*
 * XREFs of ??1?$CDeserializedSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@QEAA@XZ @ 0x1401EE360
 * Callers:
 *     ?Destroy@?$CDeserializedSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401EF65C (-Destroy@-$CDeserializedSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CDeserializedSectionBitmapAllocator<32768,128>::~CDeserializedSectionBitmapAllocator<32768,128>(
        __int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  struct _RTL_BITMAP *v4; // rbx

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 != v1 )
  {
    ExFreePoolWithTag((PVOID)(v3 ^ v1), 0);
    v3 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 24) = v3;
    v1 = v3;
  }
  v4 = (struct _RTL_BITMAP *)(v1 ^ v3);
  if ( v4 )
  {
    RtlFindSetBits(v4, 1u, 0);
    ExFreePoolWithTag(v4, 0);
  }
  if ( *(_QWORD *)a1 )
    ExFreePoolWithTag(*(PVOID *)a1, 0);
}
