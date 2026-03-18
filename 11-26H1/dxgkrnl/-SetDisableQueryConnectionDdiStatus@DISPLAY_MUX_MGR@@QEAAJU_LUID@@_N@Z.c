/*
 * XREFs of ?SetDisableQueryConnectionDdiStatus@DISPLAY_MUX_MGR@@QEAAJU_LUID@@_N@Z @ 0x14008F4B0
 * Callers:
 *     _DXGKCALLONEXIT__lambda_b3b73720c9a5b94f1e3275d94b86d9de____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14008A2FC (_DXGKCALLONEXIT__lambda_b3b73720c9a5b94f1e3275d94b86d9de____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x14008D6DC (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 */

__int64 __fastcall DISPLAY_MUX_MGR::SetDisableQueryConnectionDdiStatus(DISPLAY_MUX_MGR *this, struct _LUID a2, char a3)
{
  DWORD LowPart; // ebx
  __int64 v6; // rdx
  unsigned int v7; // edi
  __int64 v8; // rax
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF
  LONG HighPart; // [rsp+4Ch] [rbp+14h]

  HighPart = a2.HighPart;
  LowPart = a2.LowPart;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DISPLAY_MUX_MGR *)((char *)this + 16), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  v6 = *((_QWORD *)this + 9);
  v7 = 0;
  if ( v6 )
  {
    v8 = *(_QWORD *)(v6 + 16);
    if ( v8 && *(_DWORD *)(v8 + 16) == LowPart && *(_DWORD *)(v8 + 20) == HighPart
      || (v8 = *(_QWORD *)(v6 + 24)) != 0 && *(_DWORD *)(v8 + 16) == LowPart && *(_DWORD *)(v8 + 20) == HighPart )
    {
      *(_BYTE *)(v8 + 360) = a3;
    }
    else
    {
      v7 = -1073741275;
    }
  }
  else
  {
    v7 = -1073741823;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v10);
  return v7;
}
