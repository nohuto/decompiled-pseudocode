/*
 * XREFs of ??0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z @ 0x180052188
 * Callers:
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@@Z @ 0x180051A34 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@W4__MIDL___MIDL_itf_mmdevi.c)
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z @ 0x180051C68 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z.c)
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z @ 0x180051EE0 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180018490 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180028504 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800B314E (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     memmove_0 @ 0x1801626F8 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall COnDeviceWorkItem::COnDeviceWorkItem(_QWORD *a1, char *a2, int a3)
{
  _QWORD *v5; // r15
  char **v6; // rsi
  __int64 v7; // rbx
  char *v9; // rcx
  __int64 v10; // rdi
  char *v11; // rdx
  unsigned __int64 v12; // r14
  __int64 *v13; // rdx
  __int64 v14; // [rsp+0h] [rbp-68h] BYREF
  ATL::CAtlException *v15; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v16; // [rsp+70h] [rbp+8h]
  int v17; // [rsp+80h] [rbp+18h]
  unsigned int v18; // [rsp+88h] [rbp+20h]

  v5 = a1;
  *a1 = &COnDeviceWorkItem::`vftable';
  v6 = (char **)(a1 + 1);
  a1[1] = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  if ( !a2 )
    goto LABEL_5;
  v7 = -1LL;
  do
    ++v7;
  while ( *(_WORD *)&a2[2 * v7] );
  if ( !(_DWORD)v7 )
  {
LABEL_5:
    ATL::CSimpleStringT<unsigned short,0>::Empty(v5 + 1);
    goto LABEL_10;
  }
  v18 = *((_DWORD *)*v6 - 4);
  v12 = (a2 - *v6) >> 1;
  if ( (int)((*((_DWORD *)*v6 - 3) - v7) | (1 - *((_DWORD *)*v6 - 2))) < 0 )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(v5 + 1, v7);
  v9 = *v6;
  v10 = 2LL * (int)v7;
  if ( v12 <= v18 )
  {
    v11 = &v9[2 * v12];
    if ( !v10 )
      goto LABEL_7;
    if ( v9 && v11 )
    {
      memmove_0(v9, v11, 2LL * (int)v7);
      goto LABEL_7;
    }
  }
  else
  {
    if ( !v10 )
      goto LABEL_7;
    if ( v9 )
    {
      memcpy_0(v9, a2, 2LL * (int)v7);
      goto LABEL_7;
    }
  }
  *(_DWORD *)_o__errno(v9) = 22;
  invalid_parameter_noinfo();
LABEL_7:
  if ( (int)v7 < 0 )
    goto LABEL_28;
  while ( (int)v7 > *((_DWORD *)*v6 - 3) )
  {
LABEL_28:
    try
    {
      ATL::AtlThrowImpl(-2147024809);
    }
    catch ( ATL::CAtlException *v15 )
    {
      v13 = &v14;
      if ( *(_DWORD *)v13[4] == -1073741571 )
        _o__resetstkoflw();
      v5 = v16;
      a3 = v17;
      goto LABEL_10;
    }
  }
  *((_DWORD *)*v6 - 4) = v7;
  *(_WORD *)&(*v6)[v10] = 0;
LABEL_10:
  *((_DWORD *)v5 + 4) = a3;
  return v5;
}
