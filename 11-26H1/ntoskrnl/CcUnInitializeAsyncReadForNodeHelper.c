/*
 * XREFs of CcUnInitializeAsyncReadForNodeHelper @ 0x1404CD650
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall CcUnInitializeAsyncReadForNodeHelper(__int64 a1, __int64 a2, __int64 a3)
{
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  unsigned int v11; // edi
  _QWORD **v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rdx

  if ( *(_QWORD *)(a3 + 232) )
  {
    v11 = 0;
    do
    {
      while ( 1 )
      {
        v12 = (_QWORD **)(*(_QWORD *)(a3 + 232) + 16LL * v11);
        v13 = *v12;
        if ( *v12 == v12 )
          break;
        if ( (_QWORD **)v13[1] != v12 || (v14 = (_QWORD *)*v13, *(_QWORD **)(*v13 + 8LL) != v13) )
          __fastfail(3u);
        *v12 = v14;
        v14[1] = v12;
        ExFreePoolWithTag(v13, 0x71576343u);
      }
      ++v11;
    }
    while ( v11 <= HIDWORD(EmpParseLock.OtherOperationCount) );
    ExFreePoolWithTag(*(PVOID *)(a3 + 232), 0x71576343u);
    *(_QWORD *)(a3 + 232) = 0LL;
  }
  v4 = *(void **)(a3 + 256);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x71576343u);
    *(_QWORD *)(a3 + 256) = 0LL;
  }
  v5 = *(void **)(a3 + 264);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0x71576343u);
    *(_QWORD *)(a3 + 264) = 0LL;
  }
  v6 = *(void **)(a3 + 280);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x71576343u);
    *(_QWORD *)(a3 + 280) = 0LL;
  }
  v7 = *(void **)(a3 + 272);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x71576343u);
    *(_QWORD *)(a3 + 272) = 0LL;
  }
  v8 = *(void **)(a3 + 240);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x71576343u);
    *(_QWORD *)(a3 + 240) = 0LL;
  }
  v9 = *(void **)(a3 + 248);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0x71576343u);
    *(_QWORD *)(a3 + 248) = 0LL;
  }
  return 1;
}
