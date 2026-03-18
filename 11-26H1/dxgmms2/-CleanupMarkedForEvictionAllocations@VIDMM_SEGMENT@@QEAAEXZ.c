/*
 * XREFs of ?CleanupMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAEXZ @ 0x14010E890
 * Callers:
 *     CleanupMarkedForEvictionAllocations @ 0x14010E4A0 (CleanupMarkedForEvictionAllocations.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x14010E940 (-UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ.c)
 */

char __fastcall VIDMM_SEGMENT::CleanupMarkedForEvictionAllocations(VIDMM_GLOBAL **this)
{
  _QWORD *v2; // rsi
  char v3; // bl
  _QWORD *v4; // rbp
  __int64 v5; // r8
  VIDMM_GLOBAL *v6; // rdx
  int v8; // [rsp+20h] [rbp-28h]

  v2 = this + 33;
  v3 = 1;
  while ( 1 )
  {
    v4 = (_QWORD *)*v2;
    if ( (_QWORD *)*v2 == v2 )
      break;
    if ( !VIDMM_GLOBAL::UnderCleanupLimit(this[1]) )
      return v3;
    LOBYTE(v5) = 1;
    LOBYTE(v8) = 0;
    (*(void (__fastcall **)(VIDMM_GLOBAL *, _QWORD, __int64, _QWORD, int, _QWORD))(*(_QWORD *)this[2] + 240LL))(
      this[2],
      *(v4 - 30),
      v5,
      0LL,
      v8,
      0LL);
    v6 = this[1];
    *((_QWORD *)v6 + 889) += *(_QWORD *)(*(v4 - 30) + 16LL);
    ++*((_DWORD *)v6 + 1780);
  }
  return 0;
}
