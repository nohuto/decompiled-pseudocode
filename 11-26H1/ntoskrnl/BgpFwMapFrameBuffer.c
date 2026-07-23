/*
 * XREFs of BgpFwMapFrameBuffer @ 0x14071AD4C
 * Callers:
 *     BgpFwSetBootGraphicsInformation @ 0x14071ADF0 (BgpFwSetBootGraphicsInformation.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 */

__int64 __fastcall BgpFwMapFrameBuffer(__int64 a1)
{
  unsigned int v2; // esi
  char v3; // al
  __int64 v4; // rcx
  unsigned int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rax

  v2 = 0;
  v3 = *(_BYTE *)(a1 + 2);
  v4 = (*(_DWORD *)(a1 + 16) != 4) + 3LL;
  if ( v3 == 1 || v3 == 3 )
    v5 = *(_DWORD *)(a1 + 8) * *(_DWORD *)(a1 + 12);
  else
    v5 = *(_DWORD *)(a1 + 4) * *(_DWORD *)(a1 + 12);
  v6 = *(_QWORD *)(a1 + 32);
  v7 = v4 * v5;
  v8 = MmMapIoSpaceEx(v6, v7, 0x404u);
  if ( v8 || (v8 = MmMapIoSpaceEx(v6, v7, 0x204u)) != 0 )
  {
    *(_QWORD *)(a1 + 32) = v8;
    *(_BYTE *)(a1 + 1) = 1;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
