/*
 * XREFs of ?ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x14015EB30
 * Callers:
 *     NdisOpenConfiguration @ 0x14007B230 (NdisOpenConfiguration.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14015F7C0 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF__guid_ @ 0x14006A860 (WPP_RECORDER_SF__guid_.c)
 *     WPP_RECORDER_SF__guid_d @ 0x14006AAA0 (WPP_RECORDER_SF__guid_d.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ndisLWMBuildConfigurationKeyPath @ 0x14015ECA0 (ndisLWMBuildConfigurationKeyPath.c)
 *     ?Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z @ 0x14015F0B0 (-Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z.c)
 */

__int64 __fastcall ndisLWMOpenConfigurationKey(const struct _GUID *a1, KRegKey *this)
{
  __int64 result; // rax
  int v5; // ebx
  __int64 *v6; // rax
  __int64 v7; // rcx
  unsigned __int16 v8; // r9
  __int16 v9; // cx
  char v10[8]; // [rsp+28h] [rbp-250h]
  struct _UNICODE_STRING v11; // [rsp+40h] [rbp-238h] BYREF
  __int64 v12[64]; // [rsp+50h] [rbp-228h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x90u,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (__int64)a1);
  result = ndisLWMBuildConfigurationKeyPath((__int64)a1, (__int64)v12);
  v5 = result;
  if ( (int)result >= 0 )
  {
    v6 = v12;
    v11 = 0LL;
    v7 = 0x7FFFLL;
    do
    {
      if ( !*(_WORD *)v6 )
        break;
      v6 = (__int64 *)((char *)v6 + 2);
      --v7;
    }
    while ( v7 );
    v5 = -1073741811;
    if ( v7 )
    {
      v5 = 0;
      v9 = 2 * v7;
      v11.Length = -2 - v9;
      v11.MaximumLength = -v9;
      v11.Buffer = (wchar_t *)v12;
    }
    if ( v5 >= 0 )
    {
      LODWORD(result) = KRegKey::Open(this, 0xF003Fu, &v11, 0LL);
      v5 = result;
      if ( (int)result >= 0 )
        goto LABEL_13;
    }
    else
    {
      LODWORD(result) = v5;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v5;
    v8 = 146;
LABEL_21:
    *(_DWORD *)v10 = result;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      1u,
      v8,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      *(_QWORD *)v10);
LABEL_13:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF__guid_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x93u,
        (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
        (__int64)a1,
        v5);
    return (unsigned int)v5;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = 145;
    goto LABEL_21;
  }
  return result;
}
