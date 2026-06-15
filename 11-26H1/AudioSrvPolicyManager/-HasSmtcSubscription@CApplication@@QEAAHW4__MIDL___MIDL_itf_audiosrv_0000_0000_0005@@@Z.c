/*
 * XREFs of ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@@Z @ 0x1800178D0
 * Callers:
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x180015CB0 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x180017840 (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::HasSmtcSubscription(__int64 a1, int a2)
{
  __int64 v2; // rbp
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  unsigned int v5; // esi
  _QWORD *v6; // rax
  __int64 v7; // r8

  v2 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v5 = 0;
  v6 = *(_QWORD **)(a1 + 72);
  while ( v6 )
  {
    v7 = v6[2];
    v6 = (_QWORD *)*v6;
    if ( !*(_DWORD *)(v7 + 416) && *(_DWORD *)(v7 + 4 * v2 + 496) )
    {
      v5 = 1;
      break;
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v5;
}
