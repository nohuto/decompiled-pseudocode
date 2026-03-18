/*
 * XREFs of ?ProcessMuxDeviceDeparture@DISPLAY_MUX_MGR@@AEAAJPEAU_UNICODE_STRING@@@Z @ 0x14008E940
 * Callers:
 *     ?HandleMuxPnPNotification@DISPLAY_MUX_MGR@@CAJPEAX0@Z @ 0x14008C620 (-HandleMuxPnPNotification@DISPLAY_MUX_MGR@@CAJPEAX0@Z.c)
 * Callees:
 *     DXGKCALLONEXIT__lambda_3fd80416dc5fb353b19afec3729b8d79___ @ 0x140052F78 (DXGKCALLONEXIT__lambda_3fd80416dc5fb353b19afec3729b8d79___.c)
 *     ?reset@?$unique_ptr@VDISPLAY_MUX_PAIRING@@U?$default_delete@VDISPLAY_MUX_PAIRING@@@wistd@@@wistd@@QEAAXPEAVDISPLAY_MUX_PAIRING@@@Z @ 0x140085B2C (-reset@-$unique_ptr@VDISPLAY_MUX_PAIRING@@U-$default_delete@VDISPLAY_MUX_PAIRING@@@wistd@@@wistd.c)
 *     _lambda_dbcf8364b3ea4150de008656de4589a7_::_lambda_dbcf8364b3ea4150de008656de4589a7_ @ 0x140089EB4 (_lambda_dbcf8364b3ea4150de008656de4589a7_--_lambda_dbcf8364b3ea4150de008656de4589a7_.c)
 *     _DXGKCALLONEXIT__lambda_dbcf8364b3ea4150de008656de4589a7____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14008A328 (_DXGKCALLONEXIT__lambda_dbcf8364b3ea4150de008656de4589a7____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 */

__int64 __fastcall DISPLAY_MUX_MGR::ProcessMuxDeviceDeparture(DISPLAY_MUX_MGR *this, struct _UNICODE_STRING *a2)
{
  __int64 v2; // r9
  DISPLAY_MUX_PAIRING **v3; // rbx
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int128 v7; // [rsp+20h] [rbp-40h] BYREF
  __int64 v8; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v9[32]; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v10; // [rsp+70h] [rbp+10h] BYREF
  PCUNICODE_STRING String1; // [rsp+78h] [rbp+18h] BYREF

  String1 = a2;
  v10 = 0;
  v7 = *(_OWORD *)lambda_dbcf8364b3ea4150de008656de4589a7_::_lambda_dbcf8364b3ea4150de008656de4589a7_(
                    &v8,
                    (__int64)&v10,
                    (__int64)&String1);
  DXGKCALLONEXIT__lambda_3fd80416dc5fb353b19afec3729b8d79_((__int64)v9, &v7);
  --*(_DWORD *)(v2 + 108);
  v3 = (DISPLAY_MUX_PAIRING **)(v2 + 72);
  v4 = *(_QWORD *)(v2 + 72);
  if ( v4 )
  {
    if ( RtlEqualUnicodeString(String1, *(PCUNICODE_STRING *)(v4 + 8), 1u) )
    {
      wistd::unique_ptr<DISPLAY_MUX_PAIRING,wistd::default_delete<DISPLAY_MUX_PAIRING>>::reset(v3);
      v5 = v10;
      goto LABEL_7;
    }
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2777;
    v5 = -1073741294;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2767;
    v5 = -1073741601;
  }
  v10 = v5;
LABEL_7:
  DXGKCALLONEXIT__lambda_dbcf8364b3ea4150de008656de4589a7____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v9);
  return v5;
}
