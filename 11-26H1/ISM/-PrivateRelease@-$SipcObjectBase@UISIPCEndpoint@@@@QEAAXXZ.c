/*
 * XREFs of ?PrivateRelease@?$SipcObjectBase@UISIPCEndpoint@@@@QEAAXXZ @ 0x18011279C
 * Callers:
 *     ??1EndpointListEntry@SipcServer@@QEAA@XZ @ 0x18010F868 (--1EndpointListEntry@SipcServer@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SipcObjectBase<ISIPCEndpoint>::PrivateRelease(volatile signed __int64 *a1)
{
  unsigned __int64 v1; // r8
  __int64 result; // rax

  v1 = _InterlockedExchangeAdd64(a1 + 1, 0xFFFFFFFF00000000uLL);
  result = HIDWORD(v1);
  if ( v1 == 0x100000000LL )
  {
    if ( a1 )
      return (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 88))(a1);
  }
  return result;
}
