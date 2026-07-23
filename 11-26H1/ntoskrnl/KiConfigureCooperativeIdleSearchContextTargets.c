/*
 * XREFs of KiConfigureCooperativeIdleSearchContextTargets @ 0x1405ED3C8
 * Callers:
 *     KiConfigureCooperativeIdleSearchTargets @ 0x1405ED4A8 (KiConfigureCooperativeIdleSearchTargets.c)
 * Callees:
 *     KeInitializeSystemSubNodeEnumerationContext @ 0x1404529A8 (KeInitializeSystemSubNodeEnumerationContext.c)
 *     KeEnumerateNextSchedulerSubNodeInSystem @ 0x1404529F0 (KeEnumerateNextSchedulerSubNodeInSystem.c)
 *     KiAddSubNodeToIdleSearchContextTargets @ 0x1405EC3C4 (KiAddSubNodeToIdleSearchContextTargets.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiConfigureCooperativeIdleSearchContextTargets(__int64 a1, int a2, __int64 a3)
{
  size_t v5; // r8
  size_t v7; // rbx
  __int64 v8; // rdx
  __int64 result; // rax
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  v5 = 16LL * *(unsigned __int16 *)(a3 + 1056);
  v10 = 0LL;
  v12 = 0LL;
  v7 = v5 + a3;
  v11 = 0LL;
  *(_WORD *)(a3 + 1058) = 0;
  memset_0((void *)(v5 + a3 + 1064), 0, v5);
  memset_0((void *)(v7 + 1064), 255, 2LL * *(unsigned __int16 *)(a3 + 1056));
  v8 = *(_QWORD *)(a1 + 192);
  if ( !a2 )
    return KiAddSubNodeToIdleSearchContextTargets(a3, v8);
  KeInitializeSystemSubNodeEnumerationContext(&v10, *(_WORD *)(v8 + 138));
  while ( 1 )
  {
    result = KeEnumerateNextSchedulerSubNodeInSystem((__int64)&v10, &v12);
    if ( (_DWORD)result )
      break;
    if ( v12 != *(_QWORD *)(a1 + 192) )
      KiAddSubNodeToIdleSearchContextTargets(a3, v12);
  }
  return result;
}
