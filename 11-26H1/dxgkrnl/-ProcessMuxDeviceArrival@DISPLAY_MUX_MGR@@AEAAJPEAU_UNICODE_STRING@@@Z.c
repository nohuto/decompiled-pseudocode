/*
 * XREFs of ?ProcessMuxDeviceArrival@DISPLAY_MUX_MGR@@AEAAJPEAU_UNICODE_STRING@@@Z @ 0x14008E808
 * Callers:
 *     ?HandleMuxPnPNotification@DISPLAY_MUX_MGR@@CAJPEAX0@Z @ 0x14008C620 (-HandleMuxPnPNotification@DISPLAY_MUX_MGR@@CAJPEAX0@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DXGKCALLONEXIT__lambda_3fd80416dc5fb353b19afec3729b8d79___ @ 0x140052F78 (DXGKCALLONEXIT__lambda_3fd80416dc5fb353b19afec3729b8d79___.c)
 *     ?reset@?$unique_ptr@VDISPLAY_MUX_PAIRING@@U?$default_delete@VDISPLAY_MUX_PAIRING@@@wistd@@@wistd@@QEAAXPEAVDISPLAY_MUX_PAIRING@@@Z @ 0x140085B2C (-reset@-$unique_ptr@VDISPLAY_MUX_PAIRING@@U-$default_delete@VDISPLAY_MUX_PAIRING@@@wistd@@@wistd.c)
 *     _lambda_dbcf8364b3ea4150de008656de4589a7_::_lambda_dbcf8364b3ea4150de008656de4589a7_ @ 0x140089EB4 (_lambda_dbcf8364b3ea4150de008656de4589a7_--_lambda_dbcf8364b3ea4150de008656de4589a7_.c)
 *     _DXGKCALLONEXIT__lambda_16d75bc2076ed5e741d08f2a5e717111____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14008A190 (_DXGKCALLONEXIT__lambda_16d75bc2076ed5e741d08f2a5e717111____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?Init@DISPLAY_MUX_PAIRING@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x14008CC84 (-Init@DISPLAY_MUX_PAIRING@@QEAAJPEBU_UNICODE_STRING@@@Z.c)
 *     ?SetMdmStatus@DISPLAY_MUX_MGR@@AEAAXW4DISPLAYCONFIG_DISPLAYMUX_RUNTIME_STATUS@@J@Z @ 0x14008F5F4 (-SetMdmStatus@DISPLAY_MUX_MGR@@AEAAXW4DISPLAYCONFIG_DISPLAYMUX_RUNTIME_STATUS@@J@Z.c)
 *     ?swap@?$unique_ptr@VDISPLAY_MUX_SWITCH_OPERATION@@U?$default_delete@VDISPLAY_MUX_SWITCH_OPERATION@@@wistd@@@wistd@@QEAAXAEAV12@@Z @ 0x14009029C (-swap@-$unique_ptr@VDISPLAY_MUX_SWITCH_OPERATION@@U-$default_delete@VDISPLAY_MUX_SWITCH_OPERATIO.c)
 */

__int64 __fastcall DISPLAY_MUX_MGR::ProcessMuxDeviceArrival(DISPLAY_MUX_MGR *this, struct _UNICODE_STRING *a2)
{
  unsigned int v3; // ebx
  DISPLAY_MUX_PAIRING *v4; // rax
  __int64 v5; // rdx
  __int128 v7; // [rsp+20h] [rbp-40h] BYREF
  __int64 v8; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v9[32]; // [rsp+40h] [rbp-20h] BYREF
  int v10; // [rsp+80h] [rbp+20h] BYREF
  struct _UNICODE_STRING *v11; // [rsp+88h] [rbp+28h] BYREF
  DISPLAY_MUX_PAIRING *v12; // [rsp+90h] [rbp+30h] BYREF

  v11 = a2;
  v10 = -1073741823;
  v7 = *(_OWORD *)lambda_dbcf8364b3ea4150de008656de4589a7_::_lambda_dbcf8364b3ea4150de008656de4589a7_(
                    &v8,
                    (__int64)&v10,
                    (__int64)&v11);
  DXGKCALLONEXIT__lambda_3fd80416dc5fb353b19afec3729b8d79_((__int64)v9, &v7);
  ++*((_DWORD *)this + 27);
  if ( *((_DWORD *)this + 20) == 1 )
  {
    v3 = 0;
    if ( *((_QWORD *)this + 9) )
    {
      v10 = -1073741768;
      DISPLAY_MUX_MGR::SetMdmStatus(this, 2LL);
      v3 = v10;
      goto LABEL_12;
    }
    v4 = (DISPLAY_MUX_PAIRING *)operator new(0x20uLL, 0x4B677844u, 256LL);
    if ( v4 )
    {
      *(_DWORD *)v4 = 0;
      *((_QWORD *)v4 + 1) = 0LL;
      *((_QWORD *)v4 + 2) = 0LL;
      *((_QWORD *)v4 + 3) = 0LL;
      v12 = v4;
      v10 = DISPLAY_MUX_PAIRING::Init(v4, v11);
      if ( v10 >= 0 )
      {
        wistd::unique_ptr<DISPLAY_MUX_SWITCH_OPERATION,wistd::default_delete<DISPLAY_MUX_SWITCH_OPERATION>>::swap(
          &v12,
          (char *)this + 72);
LABEL_11:
        wistd::unique_ptr<DISPLAY_MUX_PAIRING,wistd::default_delete<DISPLAY_MUX_PAIRING>>::reset(&v12);
        goto LABEL_12;
      }
      v5 = 5LL;
    }
    else
    {
      v12 = 0LL;
      v10 = -1073741801;
      v5 = 4LL;
    }
    DISPLAY_MUX_MGR::SetMdmStatus(this, v5);
    v3 = v10;
    goto LABEL_11;
  }
  WdLogSingleEntry0(2LL);
  v3 = -1073741762;
  WdLogGlobalForLineNumber = 2708;
  v10 = -1073741762;
LABEL_12:
  DXGKCALLONEXIT__lambda_16d75bc2076ed5e741d08f2a5e717111____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v9);
  return v3;
}
