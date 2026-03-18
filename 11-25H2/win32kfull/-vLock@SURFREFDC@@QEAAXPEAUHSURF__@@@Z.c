/*
 * XREFs of ?vLock@SURFREFDC@@QEAAXPEAUHSURF__@@@Z @ 0x1400D7804
 * Callers:
 *     ??$GreDrawStream@VAPIDCOBJ_NoOp_vUnlock@@$00@@YAHPEAUHDC__@@KPEAX@Z @ 0x140330900 (--$GreDrawStream@VAPIDCOBJ_NoOp_vUnlock@@$00@@YAHPEAUHDC__@@KPEAX@Z.c)
 *     ??$GreDrawStream@VXDCOBJ_NoCtor@@$0A@@@YAHPEAUHDC__@@KPEAX@Z @ 0x1403310AC (--$GreDrawStream@VXDCOBJ_NoCtor@@$0A@@@YAHPEAUHDC__@@KPEAX@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x1400D79B4 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 */

void __fastcall SURFREFDC::vLock(SURFREFDC *this, HSURF a2)
{
  HSURF v3; // rcx
  Gre::Base *v4; // rcx
  struct Gre::Base::SESSION_GLOBALS *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  HSEMAPHORE v8; // rbx
  struct _GRETHREAD *v9; // rax
  HSEMAPHORE v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  LOBYTE(a2) = 5;
  *((_QWORD *)this + 4) = HmgShareLockCheck(v3, a2);
  v5 = Gre::Base::Globals(v4);
  v6 = *((_QWORD *)this + 4);
  if ( v6 )
  {
    if ( v6 != *((_QWORD *)v5 + 533) )
    {
      SEMOBJ<20>::SEMOBJ<20>(&v11);
      v7 = *((_QWORD *)this + 4);
      INC_SHARE_REF_CNT(v7);
      ++*(_DWORD *)(v7 + 168);
      DEC_SHARE_REF_CNT(*((_QWORD *)this + 4));
      v8 = v11;
      if ( v11 )
      {
        EtwTraceGreLockReleaseSemaphore(L"Hmgr", v11);
        v9 = GreGetCurrentThreadCrossSessionCheck();
        if ( v9 )
        {
          if ( (*((_BYTE *)v9 + 28))-- == 1 )
            *(_QWORD *)v9 &= ~0x100000uLL;
          if ( !*(_QWORD *)v9 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal(v8);
      }
    }
  }
}
