/*
 * XREFs of ?RetireFrame@CConnection@DirectComposition@@AEAAJ_KAEBUtagCOMPOSITION_STATS_2@@@Z @ 0x1401190F4
 * Callers:
 *     NtDCompositionConfirmFrame @ 0x140042310 (NtDCompositionConfirmFrame.c)
 * Callees:
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CConnection::RetireFrame(
        DirectComposition::CConnection *this,
        __int64 a2,
        const struct tagCOMPOSITION_STATS_2 *a3)
{
  __int64 v4; // rcx
  int v7; // ebx
  int v8; // ecx
  int v9; // edx
  unsigned __int64 v10; // rax
  __int64 v12; // [rsp+20h] [rbp-50h] BYREF
  int v13; // [rsp+28h] [rbp-48h] BYREF
  int v14; // [rsp+2Ch] [rbp-44h]
  int v15; // [rsp+30h] [rbp-40h]
  int v16; // [rsp+34h] [rbp-3Ch]
  __int128 v17; // [rsp+38h] [rbp-38h]
  _DWORD v18[4]; // [rsp+48h] [rbp-28h] BYREF
  __int128 v19; // [rsp+58h] [rbp-18h]

  v12 = 0LL;
  v4 = *((_QWORD *)this + 24);
  v7 = -1073741275;
  if ( v4 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v4 + 32LL))(v4, a2, &v12);
    if ( v7 >= 0 )
    {
      v8 = *((_DWORD *)a3 + 2);
      v9 = *(_DWORD *)a3;
      v18[3] = 0;
      v19 = *((unsigned __int64 *)a3 + 3);
      v14 = *((_DWORD *)a3 + 1);
      v15 = v14;
      v16 = 0;
      v10 = *((_QWORD *)a3 + 2);
      v18[1] = v8;
      v18[2] = v8;
      v17 = v10;
      v18[0] = v9;
      v13 = v9;
      (*(void (__fastcall **)(__int64, _DWORD *, int *))(*(_QWORD *)v12 + 24LL))(v12, v18, &v13);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 24) + 24LL))(*((_QWORD *)this + 24), a2);
    }
  }
  return (unsigned int)v7;
}
