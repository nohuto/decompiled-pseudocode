/*
 * XREFs of ??0DISPLAY_MUX_SWITCH_OPERATION@@QEAA@PEBU_D3DKMT_DISPLAYMUX_SWITCH_PREPARE@@PEBU_DISPLAYCONFIG_DISPLAYMUX_TARGET@@@Z @ 0x140089EC8
 * Callers:
 *     ?CreateSwitchOperation@DISPLAY_MUX_MGR@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_PREPARE@@@Z @ 0x14008B580 (-CreateSwitchOperation@DISPLAY_MUX_MGR@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_PREPARE@@@Z.c)
 * Callees:
 *     <none>
 */

DISPLAY_MUX_SWITCH_OPERATION *__fastcall DISPLAY_MUX_SWITCH_OPERATION::DISPLAY_MUX_SWITCH_OPERATION(
        DISPLAY_MUX_SWITCH_OPERATION *this,
        const struct _D3DKMT_DISPLAYMUX_SWITCH_PREPARE *a2,
        const struct _DISPLAYCONFIG_DISPLAYMUX_TARGET *a3)
{
  _OWORD *v5; // rdx
  int v6; // eax
  __int64 v7; // xmm0_8
  _OWORD *v8; // rcx
  __int128 v9; // xmm0
  DISPLAY_MUX_SWITCH_OPERATION *result; // rax

  *(_DWORD *)this = 1;
  v5 = (_OWORD *)((char *)a2 + 24);
  *((_DWORD *)this + 1) = 1;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)((char *)this + 20) = 0LL;
  *((_DWORD *)this + 7) = 0;
  *((_BYTE *)this + 32) = 0;
  v6 = *((_DWORD *)a3 + 2);
  *(_OWORD *)((char *)this + 36) = *v5;
  v7 = *(_QWORD *)a3;
  *(_OWORD *)((char *)this + 52) = *(_OWORD *)((char *)a2 + 40);
  *(_QWORD *)((char *)this + 68) = v7;
  *((_DWORD *)this + 19) = v6;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  v8 = (_OWORD *)((char *)this + 92);
  *v8 = *v5;
  v8[1] = v5[1];
  v8[2] = v5[2];
  v8[3] = v5[3];
  v8[4] = v5[4];
  v8[5] = v5[5];
  v8[6] = v5[6];
  v8 += 8;
  v9 = v5[7];
  v5 += 8;
  *(v8 - 1) = v9;
  *v8 = *v5;
  v8[1] = v5[1];
  v8[2] = v5[2];
  v8[3] = v5[3];
  v8[4] = v5[4];
  *((_QWORD *)v8 + 10) = *((_QWORD *)v5 + 10);
  *((_QWORD *)this + 10) = *(_QWORD *)a2;
  *((_DWORD *)this + 22) = *((_DWORD *)a2 + 2);
  result = this;
  *((_DWORD *)this + 37) = 1;
  return result;
}
