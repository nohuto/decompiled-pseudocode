/*
 * XREFs of ?RmpActivityHostAddResourceSet@@YAXPEAVResourceSet@ExecutionModel@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x18005E050
 * Callers:
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_REASON_INTERNAL@@_KPEAPEAV12@@Z @ 0x180088E44 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall RmpActivityHostAddResourceSet(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  _DWORD *v5; // rbx
  __int64 v6; // rcx
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 1320);
  v4 = a2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  v5 = (_DWORD *)(v3 + 24 * v4 + 1120);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  v6 = *(_QWORD *)v5;
  result = (_QWORD *)(a1 + 1296);
  if ( *(_DWORD **)(*(_QWORD *)v5 + 8LL) != v5 )
    __fastfail(3u);
  *(_QWORD *)(a1 + 1304) = v5;
  *result = v6;
  *(_QWORD *)(v6 + 8) = result;
  *(_QWORD *)v5 = result;
  ++v5[4];
  *(_DWORD *)(a1 + 1328) = v4;
  return result;
}
