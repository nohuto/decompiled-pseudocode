/*
 * XREFs of _anonymous_namespace_::RemoveEventMessage @ 0x1401D3590
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x14023ABE8 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023C19C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     DelQEntry @ 0x140066E80 (DelQEntry.c)
 */

__int64 __fastcall anonymous_namespace_::RemoveEventMessage(__int64 a1, int a2, int a3)
{
  __int64 v5; // rdx
  unsigned int v7; // r9d
  int v8; // eax
  __int64 v9; // rdi

  v5 = *(_QWORD *)(a1 + 32);
  v7 = 0;
  while ( v5 )
  {
    v8 = *(_DWORD *)(v5 + 96);
    if ( v8 == a3 )
      break;
    v9 = *(_QWORD *)(v5 + 8);
    if ( v8 == a2 && v5 != *(_QWORD *)(a1 + 88) )
    {
      DelQEntry(a1 + 24, (__int64 *)v5, 1);
      v7 = 1;
    }
    v5 = v9;
  }
  return v7;
}
