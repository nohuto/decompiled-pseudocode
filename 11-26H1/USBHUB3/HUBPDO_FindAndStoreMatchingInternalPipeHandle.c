/*
 * XREFs of HUBPDO_FindAndStoreMatchingInternalPipeHandle @ 0x140018B48
 * Callers:
 *     HUBDSM_GettingMatchingPipeHandleOnClientResetPipe @ 0x140022EE0 (HUBDSM_GettingMatchingPipeHandleOnClientResetPipe.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14001E1C4 (WPP_RECORDER_SF_qq.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPDO_FindAndStoreMatchingInternalPipeHandle(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // r10
  _QWORD **v4; // rdi
  _QWORD *i; // rax
  unsigned int v6; // r9d
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v12; // rax
  _OWORD v13[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v14; // [rsp+60h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 464);
  v14 = 0LL;
  memset(v13, 0, sizeof(v13));
  LOWORD(v13[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v1,
    v13);
  v3 = *((_QWORD *)&v13[0] + 1);
  v4 = (_QWORD **)(*(_QWORD *)(a1 + 48) + 16LL);
  for ( i = *v4; ; i = (_QWORD *)*i )
  {
    v8 = i - 1;
    if ( v4 == i )
      break;
    v6 = *((_DWORD *)v8 + 6);
    v7 = 0LL;
    if ( v6 )
    {
      while ( v8[10 * v7 + 7] != *(_QWORD *)(*((_QWORD *)&v13[0] + 1) + 24LL) )
      {
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= v6 )
          goto LABEL_5;
      }
      v12 = (__int64)&v8[10 * v7 + 5];
      if ( v12 )
      {
        *(_QWORD *)(a1 + 1664) = v12;
        return 4077;
      }
      break;
    }
LABEL_5:
    ;
  }
  v9 = 4065;
  *(_DWORD *)(a1 + 1572) = -2147482112;
  *(_DWORD *)(a1 + 1568) = -1073741811;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = *(_QWORD *)(v3 + 24);
    LOBYTE(v10) = 3;
    WPP_RECORDER_SF_qq(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      v10,
      5,
      44,
      (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
      *(_QWORD *)(v3 + 24),
      v3);
  }
  return v9;
}
