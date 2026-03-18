/*
 * XREFs of ProcessEvalObj @ 0x140039FF0
 * Callers:
 *     <none>
 * Callees:
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     HeapFree @ 0x14000C1E0 (HeapFree.c)
 *     GetObjectPath @ 0x14002C8B4 (GetObjectPath.c)
 *     DumpObject @ 0x14006FE98 (DumpObject.c)
 */

__int64 __fastcall ProcessEvalObj(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v6; // rcx
  _BYTE *ObjectPath; // rax
  const char *v9; // rdx
  void *v10; // rsi
  __int64 v11; // rdx

  if ( (gDebugger & 0xD0) != 0 && !a3 )
  {
    ObjectPath = GetObjectPath(*(_QWORD *)(a2 + 32));
    v9 = byte_140075A82;
    v10 = ObjectPath;
    if ( ObjectPath )
      v9 = ObjectPath;
    PrintDebugMessage(0x2Du, v9, 0LL, 0LL, 0LL);
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
    DumpObject(*(_QWORD *)(a2 + 48), v11, 0LL);
    ConPrintf("\n");
  }
  v6 = *(_QWORD **)(a1 + 416);
  *(_QWORD *)(a1 + 416) = v6[1];
  HeapFree(v6);
  return a3;
}
