/*
 * XREFs of PopPluginComponentActive @ 0x1403B8AA0
 * Callers:
 *     PopFxIdleWorkerTail @ 0x140397384 (PopFxIdleWorkerTail.c)
 *     PopFxActivateComponentDependents @ 0x1403BC2E0 (PopFxActivateComponentDependents.c)
 * Callees:
 *     PopPepProcessEvent @ 0x1403B9A00 (PopPepProcessEvent.c)
 *     PopFxBugCheck @ 0x1403BAB64 (PopFxBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PopPluginComponentActive(__int64 a1, unsigned int a2, __int64 a3, void *a4)
{
  __int64 v4; // rbp
  char v6; // si
  __int64 v8; // rbx
  __int64 v9; // rax
  ULONG_PTR v10; // r14
  __int64 v11; // r8
  __int64 result; // rax
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  __int128 v14; // [rsp+40h] [rbp-18h]

  v4 = a2;
  v6 = a3;
  if ( a4 )
    memset_0(a4, 0, 0x40uLL);
  v8 = *(_QWORD *)(a1 + 56);
  if ( *(_BYTE *)(v8 + 124) )
  {
    v9 = *(_QWORD *)(v8 + 32);
    v13 = 0LL;
    DWORD2(v13) = v4;
    v10 = *(_QWORD *)(v9 + 64);
    *(_QWORD *)&v13 = *(_QWORD *)(v9 + 72);
    BYTE12(v13) = v6;
    v14 = 0LL;
    BYTE8(v14) = 0;
    if ( (unsigned __int8)guard_dispatch_icall_no_overrides(7LL, &v13, a3) )
    {
      if ( BYTE8(v14) )
        PopFxBugCheck(0x612uLL, v10, 0LL, 0LL);
    }
  }
  v11 = 3LL;
  if ( v6 )
    v11 = 6LL;
  result = PopPepProcessEvent(v8, v8 + 208 * v4 + 192, v11);
  if ( (_BYTE)result )
  {
    if ( !a4 )
      PopFxBugCheck(0x612uLL, 0LL, 0LL, 0LL);
  }
  return result;
}
