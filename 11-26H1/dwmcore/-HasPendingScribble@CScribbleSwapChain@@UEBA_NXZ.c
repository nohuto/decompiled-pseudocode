/*
 * XREFs of ?HasPendingScribble@CScribbleSwapChain@@UEBA_NXZ @ 0x180186D30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CScribbleSwapChain::HasPendingScribble(CScribbleSwapChain *this)
{
  unsigned int v1; // ebx
  char *v2; // rdi
  __int64 v3; // rax

  v1 = 0;
  v2 = (char *)this - 232;
  while ( 1 )
  {
    if ( v1 >= (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)v2 + 96LL))(v2) )
      return 0;
    v3 = (*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)v2 + 224LL))(v2, v1);
    if ( v3 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 160LL))(v3) )
        break;
    }
    ++v1;
  }
  return 1;
}
