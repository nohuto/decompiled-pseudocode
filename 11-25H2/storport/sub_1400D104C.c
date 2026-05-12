/*
 * XREFs of sub_1400D104C @ 0x1400D104C
 * Callers:
 *     sub_1400C9020 @ 0x1400C9020 (sub_1400C9020.c)
 * Callees:
 *     sub_1400D41C0 @ 0x1400D41C0 (sub_1400D41C0.c)
 */

void __fastcall sub_1400D104C(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  _QWORD *v4; // rdx
  __int64 v5; // rax

  v1 = *(_QWORD *)(a1 + 592);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v1 + 24), 1u);
  while ( 1 )
  {
    v3 = *(_QWORD *)(a1 + 592);
    v4 = *(_QWORD **)v3;
    if ( *(_QWORD *)v3 == v3 )
      break;
    if ( v4[1] != v3 || (v5 = *v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *(_QWORD *)v3 = v5;
    *(_QWORD *)(v5 + 8) = v3;
    --*(_DWORD *)(*(_QWORD *)(a1 + 592) + 16LL);
    if ( (v4[3] & 4) == 0 )
      sub_1400D41C0(a1);
  }
  ExReleaseResourceLite((PERESOURCE)(v3 + 24));
  KeLeaveCriticalRegion();
}
