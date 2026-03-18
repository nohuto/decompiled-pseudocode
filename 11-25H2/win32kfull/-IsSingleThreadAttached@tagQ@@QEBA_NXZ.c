/*
 * XREFs of ?IsSingleThreadAttached@tagQ@@QEBA_NXZ @ 0x1401E8B98
 * Callers:
 *     ?xxxSendPosMessage@@YAXPEAUtagWND@@IPEAUtagWINDOWPOS@@@Z @ 0x1402340C4 (-xxxSendPosMessage@@YAXPEAUtagWND@@IPEAUtagWINDOWPOS@@@Z.c)
 *     zzzReattachThreads @ 0x14023FD24 (zzzReattachThreads.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagQ::IsSingleThreadAttached(tagQ *this)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = *((_QWORD *)this + 63);
  if ( v1 && !*(_QWORD *)(v1 + 1688) )
  {
    return !*((_QWORD *)this + 64);
  }
  else
  {
    v2 = *((_QWORD *)this + 64);
    if ( !v2 )
      return 0;
    return *(_QWORD *)(v2 + 1696) == 0LL;
  }
}
