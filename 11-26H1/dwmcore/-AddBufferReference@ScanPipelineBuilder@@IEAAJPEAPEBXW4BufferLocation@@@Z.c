/*
 * XREFs of ?AddBufferReference@ScanPipelineBuilder@@IEAAJPEAPEBXW4BufferLocation@@@Z @ 0x1802B4D1C
 * Callers:
 *     ?AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecificData@@W4Subpipe@1@@Z @ 0x1802B4E50 (-AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecif.c)
 *     ?ConvertDestBufferReferences@ScanPipelineBuilder@@IEAAJXZ @ 0x1802B54D8 (-ConvertDestBufferReferences@ScanPipelineBuilder@@IEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall ScanPipelineBuilder::AddBufferReference(_QWORD *a1, _QWORD *a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r10
  char *v5; // rdx
  unsigned int v6; // eax
  unsigned int v7; // r8d
  unsigned int v8; // edi
  __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // r8d
  int v12; // eax
  char *v14; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  if ( (unsigned int)(a3 - 3) > 2 )
  {
    *a2 = 0LL;
    v4 = *a1;
    v5 = (char *)a2 - *(_QWORD *)(*a1 + 8LL);
    v14 = v5;
    if ( a3 == 1 )
    {
      v6 = *(_DWORD *)(v4 + 560);
      v7 = v6 + 1;
      if ( v6 + 1 >= v6 )
      {
        v8 = 0;
        if ( v7 <= *(_DWORD *)(v4 + 556) )
        {
          *(_QWORD *)(*(_QWORD *)(v4 + 536) + 8LL * v6) = v5;
          *(_DWORD *)(v4 + 560) = v7;
          return v8;
        }
        v9 = v4 + 536;
        goto LABEL_13;
      }
    }
    else
    {
      if ( a3 != 2 )
        return (unsigned int)-2003304320;
      v10 = *(_DWORD *)(v4 + 616);
      v11 = v10 + 1;
      if ( v10 + 1 >= v10 )
      {
        v8 = 0;
        if ( v11 <= *(_DWORD *)(v4 + 612) )
        {
          *(_QWORD *)(*(_QWORD *)(v4 + 592) + 8LL * v10) = v5;
          *(_DWORD *)(v4 + 616) = v11;
          return v8;
        }
        v9 = v4 + 592;
LABEL_13:
        v12 = DynArrayImpl<0>::AddMultipleAndSet(v9, 8, 1, &v14);
        v8 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0xC2u, 0LL);
        return v8;
      }
    }
    v8 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB7u, 0LL);
    return v8;
  }
  *a2 = *(_QWORD *)(a1[1] + 8LL * (unsigned int)(a3 - 3));
  return v3;
}
