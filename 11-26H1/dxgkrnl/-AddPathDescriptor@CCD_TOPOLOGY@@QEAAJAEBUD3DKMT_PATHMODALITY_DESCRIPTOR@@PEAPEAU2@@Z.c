/*
 * XREFs of ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z @ 0x14041E798
 * Callers:
 *     ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x140317748 (-AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1403AE120 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N11W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1402AC33C (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N11W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AddPathDescriptor(
        CCD_TOPOLOGY *this,
        const struct D3DKMT_PATHMODALITY_DESCRIPTOR *a2,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR **a3)
{
  __int64 result; // rax
  char v6; // r8
  char v7; // r9
  char v8; // cl
  int v9; // r8d
  int v10; // r9d
  struct D3DKMT_PATHMODALITY_DESCRIPTOR **v11; // rcx
  char v12; // [rsp+20h] [rbp-48h]
  char v13; // [rsp+30h] [rbp-38h]
  int v14; // [rsp+38h] [rbp-30h]
  int v15; // [rsp+40h] [rbp-28h]
  int v16; // [rsp+48h] [rbp-20h]
  struct D3DKMT_PATHMODALITY_DESCRIPTOR **v17; // [rsp+80h] [rbp+18h] BYREF

  v17 = a3;
  if ( _bittest64((const signed __int64 *)a2, 0x24u) && (*((_DWORD *)this + 21) & 1) == 0 )
    return 0LL;
  v6 = *((_BYTE *)a2 + 129);
  v16 = *((_DWORD *)a2 + 53);
  v7 = v6 & 1;
  v15 = *((_DWORD *)a2 + 23);
  v14 = *((_DWORD *)a2 + 22);
  v8 = (v6 & 2) != 0;
  v13 = (v6 & 4) != 0;
  v9 = *((_DWORD *)a2 + 6);
  v12 = v7;
  v10 = *((_DWORD *)a2 + 7);
  v17 = 0LL;
  result = CCD_TOPOLOGY::AddPathDescriptor((__int64)this, (__int64 *)a2 + 2, v9, v10, v12, v8, v13, v14, v15, v16, &v17);
  if ( (int)result >= 0 )
  {
    v11 = v17;
    *v17 = *(struct D3DKMT_PATHMODALITY_DESCRIPTOR **)a2;
    *((_OWORD *)v11 + 2) = *((_OWORD *)a2 + 2);
    *((_OWORD *)v11 + 3) = *((_OWORD *)a2 + 3);
    *((_OWORD *)v11 + 4) = *((_OWORD *)a2 + 4);
    v11[10] = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)*((_QWORD *)a2 + 10);
    *((_DWORD *)v11 + 22) = *((_DWORD *)a2 + 22);
    *((_DWORD *)v11 + 23) = *((_DWORD *)a2 + 23);
    *((_OWORD *)v11 + 6) = *((_OWORD *)a2 + 6);
    *((_OWORD *)v11 + 7) = *((_OWORD *)a2 + 7);
    *((_DWORD *)v11 + 33) = *((_DWORD *)a2 + 33);
    *((_DWORD *)v11 + 34) = *((_DWORD *)a2 + 34);
    *((_DWORD *)v11 + 35) = *((_DWORD *)a2 + 35);
    v11[18] = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)*((_QWORD *)a2 + 18);
    v11[19] = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)*((_QWORD *)a2 + 19);
    *(_OWORD *)(v11 + 21) = *(_OWORD *)((char *)a2 + 168);
    *((_DWORD *)v11 + 46) = *((_DWORD *)a2 + 46);
    *((_DWORD *)v11 + 47) = *((_DWORD *)a2 + 47);
    *((_DWORD *)v11 + 48) = *((_DWORD *)a2 + 48);
    *((_DWORD *)v11 + 51) = *((_DWORD *)a2 + 51);
    *((_DWORD *)v11 + 52) = *((_DWORD *)a2 + 52);
    v11[28] = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)*((_QWORD *)a2 + 28);
    *((_DWORD *)v11 + 60) = *((_DWORD *)a2 + 60);
    return (unsigned int)result;
  }
  return result;
}
