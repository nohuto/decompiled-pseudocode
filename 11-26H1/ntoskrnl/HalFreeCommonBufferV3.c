/*
 * XREFs of HalFreeCommonBufferV3 @ 0x14058C550
 * Callers:
 *     <none>
 * Callees:
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     HalpPopCommonBufferEntry @ 0x1403463F4 (HalpPopCommonBufferEntry.c)
 *     HalpDmaDereferenceDomainObject @ 0x140346528 (HalpDmaDereferenceDomainObject.c)
 *     MmFreeContiguousMemory @ 0x140346600 (MmFreeContiguousMemory.c)
 *     MiFreePagesFromMdl @ 0x140347540 (MiFreePagesFromMdl.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpDmaCvmMakeContiguousVirtualBufferPrivate @ 0x140785A30 (HalpDmaCvmMakeContiguousVirtualBufferPrivate.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall HalFreeCommonBufferV3(__int64 a1, unsigned int a2, __int64 a3, _RTL_BALANCED_NODE *a4)
{
  __int64 v4; // r14
  _RTL_BALANCED_NODE *v5; // r15
  SIZE_T v6; // r13
  bool v8; // di
  unsigned __int64 result; // rax
  _QWORD *v10; // rsi
  struct _MDL *v11; // rbp
  char v12; // r12
  int ContiguousVirtualBufferPrivate; // eax

  v4 = *(_QWORD *)(a1 + 512);
  v5 = a4;
  v6 = a2;
  v8 = 0;
  result = HalpPopCommonBufferEntry(a4, v4);
  v10 = (_QWORD *)result;
  if ( !result )
    return result;
  switch ( *(_DWORD *)(v4 + 48) )
  {
    case 1:
      goto LABEL_5;
    case 2:
      v8 = *(_QWORD *)(result + 48) != 0LL;
      break;
    case 3:
LABEL_5:
      v8 = 1;
      break;
  }
  v11 = *(struct _MDL **)(result + 48);
  v12 = *(_BYTE *)(result + 64);
  if ( v8 )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v4 + 40), a3);
  if ( v12 )
  {
    if ( v11 )
    {
      MmUnmapLockedPages(v5, v11);
      MiFreePagesFromMdl((ULONG_PTR)v11, 0, 0, 0);
      ExFreePoolWithTag(v11, 0);
    }
    else if ( !HalpDmaCvmConfiguration
           || (ContiguousVirtualBufferPrivate = HalpDmaCvmMakeContiguousVirtualBufferPrivate(v5, v6),
               v5 = (_RTL_BALANCED_NODE *)v10[4],
               ContiguousVirtualBufferPrivate >= 0) )
    {
      MmFreeContiguousMemory(v5);
    }
  }
  ExFreePoolWithTag(v10, 0);
  return HalpDmaDereferenceDomainObject((__int64 *)v4);
}
