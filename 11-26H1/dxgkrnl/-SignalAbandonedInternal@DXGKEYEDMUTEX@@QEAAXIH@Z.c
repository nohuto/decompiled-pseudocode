/*
 * XREFs of ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1403B7978
 * Callers:
 *     ?Abandon@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1401ECC28 (-Abandon@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1403B7534 (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1403B75BC (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z @ 0x14004CF3C (-IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z.c)
 *     ?IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z @ 0x1400613F8 (-IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z.c)
 */

void __fastcall DXGKEYEDMUTEX::SignalAbandonedInternal(DXGKEYEDMUTEX *this, int a2, int a3)
{
  char v6; // r14
  _QWORD **v7; // rdi
  _QWORD *v8; // rbx
  struct _KEVENT *v9; // rsi
  _QWORD *v10; // r15
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  _BYTE v14[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (DXGKEYEDMUTEX *)((char *)this + 112), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  v6 = 0;
  if ( a3
    || DXGKEYEDMUTEX::IsOwner(this, a2)
    || *((_DWORD *)this + 14) == 2 && DXGKEYEDMUTEX::IsSameWaiter(a2, *((struct DXGKEYEDMUTEXWAITER **)this + 11)) )
  {
    *((_DWORD *)this + 14) = 3;
    v6 = 1;
  }
  v7 = (_QWORD **)((char *)this + 96);
  v8 = *v7;
  while ( v8 != v7 )
  {
    v9 = (struct _KEVENT *)(v8 - 8);
    v10 = v8;
    if ( v6 || DXGKEYEDMUTEX::IsSameWaiter(a2, (struct DXGKEYEDMUTEXWAITER *)(v8 - 8)) )
    {
      v11 = v8;
      v8 = (_QWORD *)*v8;
      v9[2].Header.LockNV = 128;
      v12 = *v10;
      if ( *(_QWORD **)(*v10 + 8LL) != v11 || (v13 = (_QWORD *)v11[1], (_QWORD *)*v13 != v11) )
        __fastfail(3u);
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      v11[1] = v11;
      *v10 = v11;
      KeSetEvent(v9 + 1, 0, 0);
    }
    else
    {
      v8 = (_QWORD *)*v8;
    }
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
}
