/*
 * XREFs of ?Unlock@CBitmapLock@@IEAAXXZ @ 0x18019DDFC
 * Callers:
 *     ??1CBitmapLock@@MEAA@XZ @ 0x18019DDBC (--1CBitmapLock@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBitmapLock::Unlock(CBitmapLock *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 24LL))(v2, *((unsigned int *)this + 30));
    v3 = *((_QWORD *)this + 9);
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      *((_QWORD *)this + 9) = 0LL;
    }
    v4 = *((_QWORD *)this + 8);
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      *((_QWORD *)this + 8) = 0LL;
    }
    if ( *((_BYTE *)this + 125) )
    {
      operator delete(*((void **)this + 13));
      *((_QWORD *)this + 13) = 0LL;
      *((_DWORD *)this + 28) = 0;
    }
  }
  *((_BYTE *)this + 124) = 0;
}
