/*
 * XREFs of ?RetireFrame@CConnection@DirectComposition@@AEAAJ_KAEBUtagCOMPOSITION_STATS_2@@@Z @ 0x1400B556C
 * Callers:
 *     ?UpdateStats@CConnection@DirectComposition@@AEAAXPEAUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z @ 0x1400B4E44 (-UpdateStats@CConnection@DirectComposition@@AEAAXPEAUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CConnection::RetireFrame(
        DirectComposition::CConnection *this,
        __int64 a2,
        const struct tagCOMPOSITION_STATS_2 *a3)
{
  __int64 v3; // r9
  __int64 v5; // rcx
  int v8; // ebx
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  __int64 v13; // [rsp+20h] [rbp-50h] BYREF
  int v14; // [rsp+28h] [rbp-48h] BYREF
  int v15; // [rsp+2Ch] [rbp-44h]
  int v16; // [rsp+30h] [rbp-40h]
  int v17; // [rsp+34h] [rbp-3Ch]
  __int128 v18; // [rsp+38h] [rbp-38h]
  _DWORD v19[4]; // [rsp+48h] [rbp-28h] BYREF
  __int128 v20; // [rsp+58h] [rbp-18h]

  v3 = 0LL;
  v5 = *((_QWORD *)this + 24);
  v13 = 0LL;
  v8 = -1073741275;
  if ( v5 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v5 + 32LL))(v5, a2, &v13);
    v3 = v13;
    v8 = v9;
  }
  if ( v8 >= 0 )
  {
    v10 = *(_DWORD *)a3;
    v11 = *((_DWORD *)a3 + 2);
    v19[3] = 0;
    v20 = *((unsigned __int64 *)a3 + 3);
    v15 = *((_DWORD *)a3 + 1);
    v16 = v15;
    v17 = 0;
    v18 = *((unsigned __int64 *)a3 + 2);
    v19[0] = v10;
    v19[1] = v11;
    v19[2] = v11;
    v14 = v10;
    (*(void (__fastcall **)(__int64, _DWORD *, int *))(*(_QWORD *)v3 + 24LL))(v3, v19, &v14);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 24) + 24LL))(*((_QWORD *)this + 24), a2);
  }
  return (unsigned int)v8;
}
