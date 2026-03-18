/*
 * XREFs of ?DiscardFrame@CConnection@DirectComposition@@AEAAJ_K@Z @ 0x14004395C
 * Callers:
 *     NtDCompositionConfirmFrame @ 0x140042310 (NtDCompositionConfirmFrame.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CConnection::DiscardFrame(DirectComposition::CConnection *this, __int64 a2)
{
  __int64 v3; // rcx
  int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v3 = *((_QWORD *)this + 24);
  v5 = -1073741275;
  if ( v3 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v3 + 32LL))(v3, a2, &v7);
    if ( v5 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 24) + 24LL))(*((_QWORD *)this + 24), a2);
    }
  }
  return (unsigned int)v5;
}
