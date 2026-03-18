/*
 * XREFs of GreCancelDC @ 0x140332B90
 * Callers:
 *     NtGdiCancelDC @ 0x140338EF0 (NtGdiCancelDC.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x14009A8C8 (--1DCOBJA@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x1400D79B4 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ??0XDCOBJ@@QEAA@XZ @ 0x14014AD50 (--0XDCOBJ@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x14030E9D4 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreCancelDC(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  HSEMAPHORE v9; // rbx
  struct _GRETHREAD *v10; // rax
  _QWORD v13[5]; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v14[3]; // [rsp+48h] [rbp-30h] BYREF
  HSEMAPHORE v15; // [rsp+88h] [rbp+10h] BYREF

  SEMOBJ<20>::SEMOBJ<20>((Gre::Base *)&v15);
  XDCOBJ::XDCOBJ((XDCOBJ *)v13);
  UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v14, v2, v3, v4);
  v13[0] = 0LL;
  v5 = 1;
  LOBYTE(v6) = 1;
  v7 = HmgShareLockCheck(a1, v6);
  v13[0] = v7;
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 496);
    if ( v8 )
      *(_DWORD *)(v8 + 112) |= 0x40000000u;
  }
  else
  {
    v5 = 0;
  }
  DCOBJA::~DCOBJA((DCOBJA *)v13);
  v9 = v15;
  if ( v15 )
  {
    EtwTraceGreLockReleaseSemaphore(L"Hmgr", v15);
    v10 = GreGetCurrentThreadCrossSessionCheck();
    if ( v10 )
    {
      if ( (*((_BYTE *)v10 + 28))-- == 1 )
        *(_QWORD *)v10 &= ~0x100000uLL;
      if ( !*(_QWORD *)v10 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v9);
  }
  return v5;
}
