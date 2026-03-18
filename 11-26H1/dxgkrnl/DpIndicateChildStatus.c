/*
 * XREFs of DpIndicateChildStatus @ 0x140085220
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x140088FAC (DpiMiracastTearDownAssociation.c)
 * Callees:
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x140013EF0 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     DpiFdoInitializeConnectionChangePackage @ 0x140014A10 (DpiFdoInitializeConnectionChangePackage.c)
 *     DpiFdoQueueConnectionChangePackage @ 0x1400150E8 (DpiFdoQueueConnectionChangePackage.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x140054320 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 */

__int64 __fastcall DpIndicateChildStatus(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // r9
  char v6; // r15
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v7; // ebp
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v11; // rbp
  _QWORD *v12; // rax
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF

  v3 = 0;
  v5 = a1;
  v6 = 0;
  v14 = 0LL;
  v7 = D3DKMDT_VOT_UNINITIALIZED;
  if ( !a1 || !a2 )
  {
    v3 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1212;
    return v3;
  }
  v8 = *(_QWORD *)(a1 + 64);
  if ( !v8 || *(_QWORD *)(v8 + 16) != 0x274727044LL )
  {
    v3 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1226;
    return v3;
  }
  v9 = *(_QWORD *)(v8 + 5776) - v14;
  if ( !v9 )
    v9 = *(_QWORD *)(v8 + 5784) - *((_QWORD *)&v14 + 1);
  if ( v9 )
    v14 = *(_OWORD *)(v8 + 5776);
  v10 = *a2;
  if ( !(_DWORD)v10 )
  {
    if ( !*(_BYTE *)(v8 + 1153) )
      return v3;
    v6 = 1;
LABEL_34:
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
      McTemplateK0pqtqq_EtwWriteTransfer(
        v10,
        &EventDxgkCbIndicateChildStatus,
        a3,
        v5,
        a2[1],
        *a2,
        *((unsigned __int8 *)a2 + 8),
        v7);
    v12 = DpiFdoInitializeConnectionChangePackage(
            &v14,
            a2[1],
            *((_BYTE *)a2 + 8) != 0 ? 10 : 8,
            v7,
            0,
            *(_BYTE *)(v8 + 1159) == 0,
            v6,
            0);
    if ( v12 )
      return (unsigned int)DpiFdoQueueConnectionChangePackage(v8, v12, 1);
    else
      return (unsigned int)-1073741670;
  }
  v10 = (unsigned int)(v10 - 1);
  if ( !(_DWORD)v10 )
  {
    if ( *(_DWORD *)(v8 + 3360) == a2[1] )
    {
      v3 = -1073741811;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1334;
      return v3;
    }
    goto LABEL_34;
  }
  v10 = (unsigned int)(v10 - 1);
  if ( !(_DWORD)v10 )
  {
    WdLogSingleEntry3(4LL, a2[1], *(_QWORD *)(v8 + 24), *((unsigned __int8 *)a2 + 8));
    WdLogGlobalForLineNumber = 1348;
    return v3;
  }
  if ( (_DWORD)v10 == 1 )
  {
    if ( *(_BYTE *)(v8 + 1158) && *(_DWORD *)(v8 + 3360) == -1 )
    {
      v11 = (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(a2 + 3);
      if ( !*(_BYTE *)(v8 + 2716) && IsInternalVideoOutput(*v11) )
      {
        v3 = -1073741811;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1258;
        return v3;
      }
      v7 = *v11;
      if ( v7 == D3DKMDT_VOT_MIRACAST )
      {
        v3 = -1073741811;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1269;
        return v3;
      }
    }
    else
    {
      if ( !*(_QWORD *)(v8 + 3368) )
      {
        v3 = -1073741637;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1283;
        return v3;
      }
      if ( *(_DWORD *)(v8 + 3360) != a2[1] )
      {
        v3 = -1073741811;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1294;
        return v3;
      }
      v7 = a2[3];
      if ( IsInternalVideoOutput(v7) )
      {
        v3 = -1073741811;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1305;
        return v3;
      }
      if ( v7 == D3DKMDT_VOT_INDIRECT_WIRED || v7 == (D3DKMDT_VOT_SVIDEO_7PIN|D3DKMDT_VOT_INDIRECT_WIRED) )
      {
        v3 = -1073741811;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1316;
        return v3;
      }
    }
    goto LABEL_34;
  }
  return v3;
}
