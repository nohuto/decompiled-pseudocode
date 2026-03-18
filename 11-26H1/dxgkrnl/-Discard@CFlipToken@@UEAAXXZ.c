/*
 * XREFs of ?Discard@CFlipToken@@UEAAXXZ @ 0x140022350
 * Callers:
 *     ??_ECFlipToken@@MEAAPEAXI@Z @ 0x140022C40 (--_ECFlipToken@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x140021DC0 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipToken::Discard(CFlipToken *this)
{
  char v2; // al
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdi
  bool v5; // zf
  __int64 v6; // rdi
  __int64 v7; // rsi
  _QWORD *j; // rax
  __int64 v9; // rsi
  __int64 v10; // r15
  char v11; // r14
  __int64 v12; // r8
  _QWORD *i; // rax

  *((_DWORD *)this + 6) = 6;
  CFlipToken::TraceStateChanged(this);
  v2 = (*(__int64 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 144LL))(this);
  if ( !*((_BYTE *)this + 64) )
  {
    v3 = *((_QWORD *)this + 13);
    if ( v3 > 1 )
    {
      v4 = v3 - 1;
      v9 = *((_QWORD *)this + 6);
      v10 = *((_QWORD *)this + 7);
      v11 = v2;
      if ( *((_BYTE *)this + 65) )
        v11 = 1;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v9 + 48, 0LL);
      if ( *(_DWORD *)(v9 + 160) )
      {
        for ( i = *(_QWORD **)(v9 + 144); i != (_QWORD *)(v9 + 144); i = (_QWORD *)*i )
        {
          if ( *(i - 1) == v10 )
          {
            LOBYTE(v12) = v11;
            (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64))(*(i - 3) + 112LL))(i - 3, v4, v12);
            break;
          }
        }
      }
      CPushLock::ReleaseLock((CPushLock *)(v9 + 48));
    }
  }
  v5 = *((_BYTE *)this + 578) == 0;
  *((_QWORD *)this + 13) = 0LL;
  if ( v5 )
  {
    v6 = *((_QWORD *)this + 6);
    v7 = *((_QWORD *)this + 7);
    *((_BYTE *)this + 578) = 1;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v6 + 48, 0LL);
    if ( *(_DWORD *)(v6 + 160) )
    {
      for ( j = *(_QWORD **)(v6 + 144); j != (_QWORD *)(v6 + 144); j = (_QWORD *)*j )
      {
        if ( *(j - 1) == v7 )
        {
          (*(void (__fastcall **)(_QWORD *))(*(j - 3) + 120LL))(j - 3);
          break;
        }
      }
    }
    CPushLock::ReleaseLock((CPushLock *)(v6 + 48));
  }
}
