/*
 * XREFs of ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1400B6D54
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1400239C0 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1400322FC (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x140034DD0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     bDeleteBrush @ 0x140054210 (bDeleteBrush.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1400B5C50 (-Free@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1400B6DEC (-Free@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     EngBugCheckEx @ 0x1401C0710 (EngBugCheckEx.c)
 */

void __fastcall FreeBrushMemory(unsigned int *P2)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 *v4; // rcx

  v2 = P2[36];
  if ( (_DWORD)v2 )
  {
    if ( (_DWORD)v2 != 1 )
      EngBugCheckEx(0x164u, 0x19uLL, (ULONG_PTR)P2, 0LL, 0LL);
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(v2) + 88) + 4384LL) + 24LL);
    if ( v3 )
      NSInstrumentation::CTypeIsolation<49152,192>::Free(v3, P2);
  }
  else
  {
    v4 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(v2) + 88) + 4384LL) + 16LL);
    if ( v4 )
      NSInstrumentation::CTypeIsolation<40960,160>::Free(v4, P2);
  }
}
