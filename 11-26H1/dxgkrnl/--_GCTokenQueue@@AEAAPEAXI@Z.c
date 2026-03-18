/*
 * XREFs of ??_GCTokenQueue@@AEAAPEAXI@Z @ 0x140023F0C
 * Callers:
 *     ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x1400224D0 (-ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z.c)
 *     ?RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z @ 0x140023EC4 (-RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

CTokenQueue *__fastcall CTokenQueue::`scalar deleting destructor'(CTokenQueue *this)
{
  CTokenQueue *v1; // rax
  bool i; // zf
  CTokenQueue **v4; // rcx
  void (__fastcall ***v6)(_QWORD, __int64); // rbx

  v1 = (CTokenQueue *)*((_QWORD *)this + 1);
  for ( i = *(_QWORD *)v1 == (_QWORD)this; ; i = *(_QWORD *)v1 == (_QWORD)this )
  {
    if ( !i || (v4 = (CTokenQueue **)*((_QWORD *)v1 + 1), *v4 != v1) )
      __fastfail(3u);
    *((_QWORD *)this + 1) = v4;
    *v4 = this;
    if ( v1 == this )
      break;
    v6 = (void (__fastcall ***)(_QWORD, __int64))((char *)v1 - 8);
    (*(void (__fastcall **)(_QWORD *))(*((_QWORD *)v1 - 1) + 56LL))((_QWORD *)v1 - 1);
    (**v6)(v6, 1LL);
    v1 = (CTokenQueue *)*((_QWORD *)this + 1);
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
