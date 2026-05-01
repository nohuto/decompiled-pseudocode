/*
 * XREFs of ??1CThreadRefTaker@@UEAA@XZ @ 0x1801EA8AC
 * Callers:
 *     ??1CLaunchActivatedEventArgs@@EEAA@XZ @ 0x1800F1018 (--1CLaunchActivatedEventArgs@@EEAA@XZ.c)
 *     ??1CProtocolActivatedEventArgs@@EEAA@XZ @ 0x180329020 (--1CProtocolActivatedEventArgs@@EEAA@XZ.c)
 *     ??_GCThreadRefTaker@@UEAAPEAXI@Z @ 0x1803297B0 (--_GCThreadRefTaker@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CThreadRefTaker::~CThreadRefTaker(CThreadRefTaker *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CThreadRefTaker::`vftable';
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 1) = 0LL;
  }
}
