/*
 * XREFs of ?CalcAllPathDisplayConfigBufferSizeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x140404620
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 */

__int64 __fastcall CalcAllPathDisplayConfigBufferSizeCallback(struct DXGADAPTER *a1, _DWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // edi
  __int64 v7; // rcx
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  struct DXGADAPTER *v10; // [rsp+28h] [rbp-20h]
  char v11; // [rsp+30h] [rbp-18h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v10 = a1;
  v11 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
  if ( *((_QWORD *)a1 + 395) && *((_DWORD *)a1 + 50) == 1 )
  {
    v4 = *((_QWORD *)a1 + 395);
    v5 = *(_QWORD *)(v4 + 104);
    v6 = *(_DWORD *)(v4 + 96);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v12, v5);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v5 + 120) + 72LL));
    v7 = *(_QWORD *)(v5 + 120);
    a2[1] += *(_DWORD *)(v7 + 40) * v6;
    ReferenceCounted::Release((ReferenceCounted *)(v7 + 64));
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v12 + 40));
  }
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
  return 0LL;
}
