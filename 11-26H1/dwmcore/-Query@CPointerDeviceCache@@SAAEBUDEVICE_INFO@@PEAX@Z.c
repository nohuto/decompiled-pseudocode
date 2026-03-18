/*
 * XREFs of ?Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z @ 0x180115D48
 * Callers:
 *     _anonymous_namespace_::DecomposeMatrix @ 0x180014474 (_anonymous_namespace_--DecomposeMatrix.c)
 *     ?TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@Z @ 0x1801068C8 (-TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@.c)
 *     ?Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z @ 0x1801156C0 (-Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z.c)
 *     ?_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUInteractionOutput@@@Z @ 0x180115940 (-_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUI.c)
 *     ?UpdateMouseWheelParameters@CInteractionContextWrapper@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D3330 (-UpdateMouseWheelParameters@CInteractionContextWrapper@@AEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_.c)
 * Callees:
 *     ??$_Try_emplace@AEBQEAX$$V@?$map@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@_N@1@AEBQEAX@Z @ 0x180115EA8 (--$_Try_emplace@AEBQEAX$$V@-$map@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocator@U-$pair@QEAXUD.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

const struct DEVICE_INFO *__fastcall CPointerDeviceCache::Query(char *a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  char v3; // r10
  __int64 *v4; // rax
  char **v6; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  char *v9; // [rsp+20h] [rbp-49h] BYREF
  __int64 v10; // [rsp+28h] [rbp-41h]
  __int128 v11; // [rsp+30h] [rbp-39h]
  __int128 v12; // [rsp+40h] [rbp-29h]
  __int128 v13; // [rsp+50h] [rbp-19h]
  _BYTE v14[12]; // [rsp+60h] [rbp-9h] BYREF
  int v15; // [rsp+6Ch] [rbp+3h]
  __int128 v16; // [rsp+78h] [rbp+Fh] BYREF
  __int128 v17; // [rsp+88h] [rbp+1Fh] BYREF
  __int128 v18; // [rsp+98h] [rbp+2Fh] BYREF
  __int64 v19; // [rsp+A8h] [rbp+3Fh]

  v9 = a1;
  v1 = CPointerDeviceCache::s_deviceCache;
  v15 = 0;
  v2 = *(_QWORD *)(CPointerDeviceCache::s_deviceCache + 8);
  if ( !*(_BYTE *)(v2 + 25) )
  {
    do
    {
      if ( *(_QWORD *)(v2 + 32) < (unsigned __int64)a1 )
      {
        v3 = 1;
      }
      else
      {
        v3 = 0;
        v1 = v2;
      }
      v4 = (__int64 *)(v2 + 16);
      if ( !v3 )
        v4 = (__int64 *)v2;
      v2 = *v4;
    }
    while ( !*(_BYTE *)(*v4 + 25) );
  }
  if ( *(_BYTE *)(v1 + 25) || (unsigned __int64)a1 < *(_QWORD *)(v1 + 32) )
    v1 = CPointerDeviceCache::s_deviceCache;
  if ( v1 == CPointerDeviceCache::s_deviceCache )
  {
    v19 = 1LL;
    *(_QWORD *)&v18 = 0LL;
    *((_QWORD *)&v18 + 1) = a1;
    v16 = 0LL;
    v17 = 0LL;
    if ( !a1
      || !(unsigned int)GetPointerDeviceRects(a1, &v17, &v16)
      || !(unsigned int)GetPointerDeviceOrientation(v9, &v18) )
    {
      LOBYTE(v19) = 0;
    }
    v11 = v16;
    v12 = v17;
    v13 = v18;
    v10 = v19;
    v6 = (char **)std::map<void *,DEVICE_INFO>::_Try_emplace<void * const &,>(a1, v14, &v9);
    v7 = v12;
    a1 = *v6;
    *(_OWORD *)(a1 + 40) = v11;
    v8 = v13;
    *(_OWORD *)(a1 + 56) = v7;
    *(_OWORD *)(a1 + 72) = v8;
    *((_QWORD *)a1 + 11) = v10;
  }
  return (const struct DEVICE_INFO *)(*(_QWORD *)std::map<void *,DEVICE_INFO>::_Try_emplace<void * const &,>(
                                                   a1,
                                                   v14,
                                                   &v9)
                                    + 40LL);
}
