/*
 * XREFs of ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ @ 0x14033811C
 * Callers:
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x140337350 (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAU_LUID@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x140338058 (-QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAU_LUID@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14033D68C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_Query(BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO *this)
{
  struct DXGGLOBAL *Global; // rax
  int v3; // eax
  int v4; // ecx
  __int128 v6; // [rsp+20h] [rbp-40h]
  __int128 v7; // [rsp+30h] [rbp-30h]
  __int128 v8; // [rsp+40h] [rbp-20h]
  int v9; // [rsp+50h] [rbp-10h]

  *((_QWORD *)&v6 + 1) = -1LL;
  *(_QWORD *)&v6 = 0LL;
  *((_QWORD *)&v7 + 1) = 0xFFFFFFFF00000000uLL;
  *(_QWORD *)&v7 = 0xFFFFFFFEFFFFFFFEuLL;
  *(_OWORD *)this = v6;
  *(_QWORD *)&v8 = 0x100000000LL;
  *((_OWORD *)this + 1) = v7;
  WORD4(v8) = 0;
  BYTE10(v8) = 0;
  HIDWORD(v8) = 4;
  LOWORD(v9) = 256;
  *((_OWORD *)this + 2) = v8;
  *((_DWORD *)this + 12) = v9;
  Global = DXGGLOBAL::GetGlobal();
  v3 = DXGGLOBAL::IterateAdaptersWithCallback(
         Global,
         BtlPreAcquireSharedAccess__BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback_0_1_,
         this,
         4LL);
  v4 = 0;
  if ( v3 != -2147483622 )
    v4 = v3;
  if ( v4 >= 0 && *((_DWORD *)this + 3) == -1 )
    return (unsigned int)-1073741823;
  return (unsigned int)v4;
}
