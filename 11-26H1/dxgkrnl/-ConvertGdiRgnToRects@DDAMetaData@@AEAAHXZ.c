/*
 * XREFs of ?ConvertGdiRgnToRects@DDAMetaData@@AEAAHXZ @ 0x1403FBF7C
 * Callers:
 *     ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1402B32A4 (-CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x14029C71C (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x1402B5448 (-GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall DDAMetaData::ConvertGdiRgnToRects(DDAMetaData *this)
{
  unsigned int v2; // eax
  unsigned int v3; // edi
  unsigned __int64 v4; // rbx
  void *Buffer; // rax
  __int64 v7; // rax
  const wchar_t *v8; // r9
  unsigned int v9; // r14d
  unsigned int *i; // rbx
  __int64 v11; // rax
  unsigned int v12; // r15d
  unsigned int (__fastcall *v13)(_QWORD, struct tagRECT *); // rbx
  struct tagRECT *DirtyRectData; // rax

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)this + 7) + 112LL))(
         *((_QWORD *)this + 8),
         0LL,
         0LL);
  v3 = v2;
  v4 = ((unsigned __int64)v2 - 32) >> 4;
  if ( (unsigned int)v4 > *((_DWORD *)this + 5) )
  {
    v9 = 0;
    for ( i = (unsigned int *)(**((_QWORD **)this + 6) + 16LL); ; i += 6 )
    {
      v11 = *((_QWORD *)this + 7);
      if ( v9 >= *((_DWORD *)this + 11) )
        break;
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned int))(v11 + 96))(
              *((_QWORD *)this + 9),
              *(i - 2),
              *(i - 1),
              *i,
              i[1]);
      if ( !v12 )
      {
        WdLogSingleEntry0(2LL);
        v7 = 1129LL;
        v8 = L"Failed to set tmp region to current dirty rect";
        goto LABEL_5;
      }
      if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*((_QWORD *)this + 7) + 104LL))(
              *((_QWORD *)this + 8),
              *((_QWORD *)this + 8),
              *((_QWORD *)this + 9),
              2LL) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 1135;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to combine move rect with dirty region",
          1135LL,
          0LL,
          0LL,
          0LL,
          0LL);
        return v12;
      }
      ++v9;
    }
    v13 = *(unsigned int (__fastcall **)(_QWORD, struct tagRECT *))(v11 + 120);
    DirtyRectData = DDAMetaData::GetDirtyRectData(this, 1);
    if ( v13(*((_QWORD *)this + 8), DirtyRectData) )
    {
      *((_DWORD *)this + 11) = 0;
      LODWORD(v4) = 1;
      *((_DWORD *)this + 4) = 1;
      goto LABEL_3;
    }
    WdLogSingleEntry0(2LL);
    v7 = 1143LL;
    v8 = L"Failed to get bounding box";
  }
  else
  {
    Buffer = AUTOEXPANDALLOCATION::GetBuffer(*((AUTOEXPANDALLOCATION **)this + 4), v2, 0);
    if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, void *))(*((_QWORD *)this + 7) + 112LL))(
           *((_QWORD *)this + 8),
           v3,
           Buffer) )
    {
LABEL_3:
      *((_DWORD *)this + 6) = v4;
      return 1LL;
    }
    WdLogSingleEntry0(2LL);
    v7 = 1161LL;
    v8 = L"Failed to get dirty rects from region";
  }
LABEL_5:
  WdLogGlobalForLineNumber = v7;
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v8, v7, 0LL, 0LL, 0LL, 0LL);
  return 0LL;
}
