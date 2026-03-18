/*
 * XREFs of DpiControlEtwLogging @ 0x1402386B8
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x14005ABCC (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x14004CDE4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004CE28 (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall DpiControlEtwLogging(char a1, unsigned int a2, char a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  void (__fastcall *v9)(__int64, _QWORD, __int64); // rax
  unsigned int v10; // r9d

  AcquireMiniportListMutex();
  byte_140168DD5 = a1;
  v8 = qword_140168E08;
  if ( *(_QWORD *)v8 != v8 )
  {
    do
    {
      v9 = *(void (__fastcall **)(__int64, _QWORD, __int64))(v8 + 264);
      v10 = a2 & 0xFFFFCFFF;
      if ( *(_DWORD *)(v8 + 28) < 0x5008u )
        v10 = a2;
      a2 = v10;
      if ( v9 )
      {
        LOBYTE(v7) = a3;
        LOBYTE(v6) = a1;
        v9(v6, v10, v7);
      }
      v8 = *(_QWORD *)v8;
    }
    while ( *(_QWORD *)v8 != qword_140168E08 );
  }
  ReleaseMiniportListMutex();
}
