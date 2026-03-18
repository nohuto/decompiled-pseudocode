/*
 * XREFs of Controller_PopulateVIAFirmwareVersion @ 0x140076FC4
 * Callers:
 *     Controller_PopulatePciDeviceInformation @ 0x140076D3C (Controller_PopulatePciDeviceInformation.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_D @ 0x140008EA0 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ddL @ 0x1400274BC (WPP_RECORDER_SF_ddL.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

void __fastcall Controller_PopulateVIAFirmwareVersion(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  __int64 (__fastcall *v7)(__int64, _QWORD, _DWORD *, __int64, int); // rax
  __int64 v8; // rcx
  int v9; // eax
  int v10; // edx
  int v11; // r9d
  __int64 (__fastcall *v12)(__int64, _QWORD, _BYTE *, __int64, int); // rax
  __int64 v13; // rcx
  int v14; // ebx
  int v15; // ebx
  char v16; // [rsp+28h] [rbp-28h]
  unsigned __int8 v17; // [rsp+40h] [rbp-10h] BYREF
  _BYTE v18[3]; // [rsp+41h] [rbp-Fh] BYREF
  _DWORD v19[3]; // [rsp+44h] [rbp-Ch] BYREF
  unsigned __int8 v20; // [rsp+80h] [rbp+30h] BYREF

  if ( *(_WORD *)(a3 + 2) == 13362 )
  {
    v12 = *(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *, __int64, int))(a2 + 56);
    v13 = *(_QWORD *)(a2 + 8);
    v18[0] = 0;
    v17 = 0;
    v20 = 0;
    v14 = v12(v13, 0LL, v18, 609LL, 1);
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int8 *, __int64, int))(a2 + 56))(
            *(_QWORD *)(a2 + 8),
            0LL,
            &v17,
            610LL,
            1)
        + v14;
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int8 *, __int64, int))(a2 + 56))(
            *(_QWORD *)(a2 + 8),
            0LL,
            &v20,
            611LL,
            1)
        + v15;
    if ( v10 != 3 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v11 = 257;
      v16 = v10;
      goto LABEL_13;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL(
        a1,
        4u,
        4u,
        0x102u,
        (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
        v20,
        v17,
        v18[0]);
    *a4 = v18[0] | ((v17 | ((unsigned __int64)v20 << 8)) << 8);
  }
  else if ( *(_WORD *)(a3 + 2) == 13443 || *(unsigned __int16 *)(a3 + 2) == 37377 )
  {
    v7 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64, int))(a2 + 56);
    v8 = *(_QWORD *)(a2 + 8);
    v19[0] = 0;
    v9 = v7(v8, 0LL, v19, 80LL, 4);
    if ( v9 != 4 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v11 = 259;
      v16 = v9;
LABEL_13:
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_d(a1, v10, 4, v11, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, v16);
      return;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_D(a1, v10, 4, 260, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, v19[0]);
    }
    *a4 = v19[0];
  }
}
