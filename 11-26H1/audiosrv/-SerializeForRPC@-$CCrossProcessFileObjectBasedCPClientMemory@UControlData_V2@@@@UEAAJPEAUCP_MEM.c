/*
 * XREFs of ?SerializeForRPC@?$CCrossProcessFileObjectBasedCPClientMemory@UControlData_V2@@@@UEAAJPEAUCP_MEMORY_METADATA_BLOB@@@Z @ 0x18015F530
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     ?SerializeForRPC@CCrossProcessFileObjectBasedCrossProcessMemory@@UEAAJPEAUCROSSPROCESSFILEOBJECT_CROSSPROCESS_MEMORY@@@Z @ 0x18015F7F0 (-SerializeForRPC@CCrossProcessFileObjectBasedCrossProcessMemory@@UEAAJPEAUCROSSPROCESSFILEOBJECT.c)
 */

__int64 __fastcall CCrossProcessFileObjectBasedCPClientMemory<ControlData_V2>::SerializeForRPC(
        CCrossProcessFileObjectBasedCrossProcessMemory *this,
        __int64 a2)
{
  __int64 v4; // rdx
  _OWORD *v5; // rax
  _OWORD *v6; // r8
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // ebx
  _BYTE v20[304]; // [rsp+20h] [rbp-138h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+0h]

  memset_0(v20, 0, 0x128uLL);
  v4 = 2LL;
  v5 = v20;
  v6 = (_OWORD *)a2;
  do
  {
    v7 = v5[1];
    *v6 = *v5;
    v8 = v5[2];
    v6[1] = v7;
    v9 = v5[3];
    v6[2] = v8;
    v10 = v5[4];
    v6[3] = v9;
    v11 = v5[5];
    v6[4] = v10;
    v12 = v5[6];
    v6[5] = v11;
    v13 = v5[7];
    v5 += 8;
    v6[6] = v12;
    v6 += 8;
    *(v6 - 1) = v13;
    --v4;
  }
  while ( v4 );
  v14 = *v5;
  v15 = v5[1];
  v16 = *((_QWORD *)v5 + 4);
  *v6 = v14;
  v6[1] = v15;
  *((_QWORD *)v6 + 4) = v16;
  v17 = CCrossProcessFileObjectBasedCrossProcessMemory::SerializeForRPC(
          this,
          (struct CROSSPROCESSFILEOBJECT_CROSSPROCESS_MEMORY *)(a2 + 8));
  v18 = v17;
  if ( v17 >= 0 )
  {
    *(_DWORD *)a2 = 4;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x80,
      (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpclientmemory.cpp",
      (const char *)(unsigned int)v17);
    return v18;
  }
}
