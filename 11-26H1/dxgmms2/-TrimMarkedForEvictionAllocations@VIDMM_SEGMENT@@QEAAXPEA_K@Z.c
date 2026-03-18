/*
 * XREFs of ?TrimMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXPEA_K@Z @ 0x14009B2F8
 * Callers:
 *     TrimMarkedForEvictionAllocations @ 0x14009B0D4 (TrimMarkedForEvictionAllocations.c)
 *     ?MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@11W4VIDMM_DEFRAGMENT_DIRECTION@@@Z @ 0x1400A1660 (-MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_SEGMENT::TrimMarkedForEvictionAllocations(VIDMM_SEGMENT *this, unsigned __int64 *a2, __int64 a3)
{
  _QWORD *v4; // rdi
  _QWORD *v6; // rsi
  unsigned __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-28h]

  v4 = (_QWORD *)((char *)this + 264);
  while ( 1 )
  {
    v6 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 == v4 )
      break;
    LOBYTE(a3) = 1;
    LOBYTE(v8) = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, int, _QWORD))(**((_QWORD **)this + 2) + 240LL))(
      *((_QWORD *)this + 2),
      *(v6 - 30),
      a3,
      0LL,
      v8,
      0LL);
    v7 = *(_QWORD *)(*(v6 - 30) + 16LL);
    if ( v7 >= *a2 )
    {
      *a2 = 0LL;
      return;
    }
    *a2 -= v7;
  }
}
