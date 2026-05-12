/*
 * XREFs of StorRemoveDictionary @ 0x140037BE0
 * Callers:
 *     RaidAdapterRemoveNormalChildren @ 0x140037AC0 (RaidAdapterRemoveNormalChildren.c)
 *     NvmeControllerRemoveNvmeNamespaceFromList @ 0x1400F9DFC (NvmeControllerRemoveNvmeNamespaceFromList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall StorRemoveDictionary(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(_QWORD *); // r15
  __int64 (__fastcall *v4)(__int64, __int64); // r12
  unsigned int v6; // ebx
  unsigned int v7; // edi
  _QWORD **v8; // r14
  _QWORD *i; // rbx
  __int64 v11; // rax
  int v12; // eax
  _QWORD *v13; // rcx
  _QWORD *v14; // rax

  v2 = *(__int64 (__fastcall **)(_QWORD *))(a1 + 24);
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 32);
  v6 = *(_DWORD *)(a1 + 4);
  v7 = -1073741275;
  v8 = (_QWORD **)(16LL * ((*(unsigned int (__fastcall **)(__int64))(a1 + 40))(a2) % v6) + *(_QWORD *)(a1 + 16));
  for ( i = *v8; i != v8; i = (_QWORD *)*i )
  {
    v11 = v2(i);
    v12 = v4(v11, a2);
    if ( !v12 )
    {
      v13 = (_QWORD *)*i;
      v7 = 0;
      if ( *(_QWORD **)(*i + 8LL) != i || (v14 = (_QWORD *)i[1], (_QWORD *)*v14 != i) )
        __fastfail(3u);
      *v14 = v13;
      v13[1] = v14;
      --*(_DWORD *)a1;
      return v7;
    }
    if ( v12 < 0 )
      return v7;
  }
  return v7;
}
