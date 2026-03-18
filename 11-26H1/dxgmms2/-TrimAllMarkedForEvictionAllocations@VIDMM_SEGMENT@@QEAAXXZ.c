/*
 * XREFs of ?TrimAllMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXXZ @ 0x140125754
 * Callers:
 *     ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x140099F08 (-Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@11W4VIDMM_DEFRAGMENT_DIRECTION@@@Z @ 0x1400A1660 (-MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_SEGMENT::TrimAllMarkedForEvictionAllocations(VIDMM_SEGMENT *this, __int64 a2, __int64 a3)
{
  _QWORD *i; // rbx
  int v5; // [rsp+20h] [rbp-28h]

  for ( i = (_QWORD *)((char *)this + 264);
        (_QWORD *)*i != i;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, int, _QWORD))(**((_QWORD **)this + 2) + 240LL))(
          *((_QWORD *)this + 2),
          *(_QWORD *)(*i - 240LL),
          a3,
          0LL,
          v5,
          0LL) )
  {
    LOBYTE(a3) = 1;
    LOBYTE(v5) = 0;
  }
}
