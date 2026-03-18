/*
 * XREFs of ?AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z @ 0x140087878
 * Callers:
 *     DpiProcessMiracastNotifyDpc @ 0x140037610 (DpiProcessMiracastNotifyDpc.c)
 *     DxgkMiracastStartMiracastSession @ 0x1400685F0 (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall MIRACAST_CHUNK_LIST::AllocateNewChunks(MIRACAST_CHUNK_LIST *this, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v5; // esi
  unsigned int i; // edi
  MIRACAST_CHUNK_LIST *Pool2; // rax
  MIRACAST_CHUNK_LIST **v8; // rcx

  v2 = *((_DWORD *)this + 5);
  v5 = v2 + 44;
  if ( v2 + 44 < v2 )
    return 0;
  for ( i = 0; i < a2; ++i )
  {
    Pool2 = (MIRACAST_CHUNK_LIST *)ExAllocatePool2(64LL, v5, 1265072196LL);
    if ( !Pool2 )
      return 0;
    v8 = (MIRACAST_CHUNK_LIST **)*((_QWORD *)this + 1);
    if ( *v8 != this )
      __fastfail(3u);
    *(_QWORD *)Pool2 = this;
    *((_QWORD *)Pool2 + 1) = v8;
    *v8 = Pool2;
    *((_QWORD *)this + 1) = Pool2;
    ++*((_DWORD *)this + 4);
  }
  return 1;
}
