/*
 * XREFs of ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x14000CA60
 * Callers:
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1400717D8 (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     bDeleteBrush @ 0x140085F50 (bDeleteBrush.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x140087310 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1400875B0 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x14000B548 (-Free@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x14000CAFC (-Free@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

void __fastcall FreeBrushMemory(_DWORD *BugCheckParameter2)
{
  int v2; // ecx
  __int64 v3; // rcx
  __int64 *v4; // rcx

  v2 = BugCheckParameter2[36];
  if ( v2 )
  {
    if ( v2 != 1 )
      KeBugCheckEx(0x164u, 0x19uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState() + 88) + 4272LL) + 24LL);
    if ( v3 )
      NSInstrumentation::CTypeIsolation<49152,192>::Free(v3, BugCheckParameter2);
  }
  else
  {
    v4 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState() + 88) + 4272LL) + 16LL);
    if ( v4 )
      NSInstrumentation::CTypeIsolation<40960,160>::Free(v4, BugCheckParameter2);
  }
}
