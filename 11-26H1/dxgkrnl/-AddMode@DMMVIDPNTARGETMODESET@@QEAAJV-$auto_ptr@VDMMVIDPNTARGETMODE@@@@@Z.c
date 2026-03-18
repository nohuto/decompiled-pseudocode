/*
 * XREFs of ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x14037AB00
 * Callers:
 *     ?AddModeImpl@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@W4_DXGK_VIDPN_INTERFACE_VERSION@@@Z @ 0x14037A1DC (-AddModeImpl@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QE.c)
 * Callees:
 *     ?Add@?$Set@VDMMVIDPNTARGETMODE@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z @ 0x14002A530 (-Add@-$Set@VDMMVIDPNTARGETMODE@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNTARGETMODE@@@@QEAA@XZ @ 0x1400541B8 (--1-$auto_ptr@VDMMVIDPNTARGETMODE@@@@QEAA@XZ.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::AddMode(__int64 a1, __int64 (__fastcall ****a2)(_QWORD, __int64))
{
  __int64 (__fastcall ***v4)(_QWORD, __int64); // r8
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 (__fastcall ***v8)(_QWORD, __int64); // rdi
  __int64 v10; // rax
  int v11; // ecx
  unsigned int v12; // ecx
  int v13; // r9d
  __int64 v14; // rax

  if ( !*a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 268;
  }
  v4 = *a2;
  v5 = *(_QWORD *)(a1 + 48);
  v6 = 0LL;
  if ( v5 != a1 + 48 )
    v6 = v5 - 8;
  if ( v6 )
  {
    while ( *(_DWORD *)(v6 + 24) != *((_DWORD *)v4 + 6) )
    {
      v10 = *(_QWORD *)(v6 + 8);
      v6 = v10 - 8;
      if ( v10 == a1 + 48 )
        v6 = 0LL;
      if ( !v6 )
        goto LABEL_6;
    }
    if ( *(_DWORD *)(v6 + 76) != *((_DWORD *)v4 + 19)
      || *(_DWORD *)(v6 + 80) != *((_DWORD *)v4 + 20)
      || *(_DWORD *)(v6 + 84) != *((_DWORD *)v4 + 21)
      || *(_DWORD *)(v6 + 88) != *((_DWORD *)v4 + 22)
      || *(_DWORD *)(v6 + 92) != *((_DWORD *)v4 + 23)
      || *(_DWORD *)(v6 + 96) != *((_DWORD *)v4 + 24)
      || *(_DWORD *)(v6 + 100) != *((_DWORD *)v4 + 25)
      || *(_DWORD *)(v6 + 104) != *((_DWORD *)v4 + 26)
      || *(__int64 (__fastcall ***)(_QWORD, __int64))(v6 + 112) != v4[14]
      || (v11 = *(_DWORD *)(v6 + 120), (((unsigned __int8)v11 ^ *((_BYTE *)v4 + 120)) & 7) != 0)
      || (((unsigned __int16)*((_DWORD *)v4 + 30) ^ (unsigned __int16)v11) & 0x1F8) != 0
      || (v12 = *(_DWORD *)(v6 + 128),
          v13 = *((_DWORD *)v4 + 32),
          (((unsigned __int8)v13 ^ *(_BYTE *)(v6 + 128)) & 3) != 0)
      || (((unsigned __int8)v13 ^ (unsigned __int8)v12) & 0xFC) != 0
      || (((unsigned __int16)v13 ^ (unsigned __int16)v12) & 0x3F00) != 0
      || ((v13 ^ v12) & 0xFC000) != 0
      || ((v13 ^ v12) & 0x3F00000) != 0
      || (v7 = v13 ^ v12, (v7 & 0xFC000000) != 0) )
    {
      WdLogSingleEntry3(2LL, *((unsigned int *)v4 + 6), v4, a1);
      WdLogGlobalForLineNumber = 305;
      auto_ptr<DMMVIDPNTARGETMODE>::~auto_ptr<DMMVIDPNTARGETMODE>(a2);
      return 3223192356LL;
    }
    goto LABEL_35;
  }
LABEL_6:
  if ( !Set<DMMVIDPNTARGETMODE>::Add((_QWORD *)(a1 + 24), (__int64)*a2) )
  {
LABEL_35:
    v14 = WdLogNewEntry5_WdTrace(v7, v6);
    *(_QWORD *)(v14 + 24) = *a2;
    *(_QWORD *)(v14 + 32) = a1;
    WdLogGlobalForLineNumber = 296;
    auto_ptr<DMMVIDPNTARGETMODE>::~auto_ptr<DMMVIDPNTARGETMODE>(a2);
    return 3223192340LL;
  }
  v8 = *a2;
  if ( a1 )
  {
    if ( (*a2)[5] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 86;
    }
    v8[5] = (__int64 (__fastcall **)(_QWORD, __int64))a1;
  }
  else
  {
    WdLogSingleEntry2(2LL, v8 + 4, (*a2)[5]);
    WdLogGlobalForLineNumber = 79;
  }
  *a2 = 0LL;
  auto_ptr<DMMVIDPNTARGETMODE>::~auto_ptr<DMMVIDPNTARGETMODE>(a2);
  return 0LL;
}
