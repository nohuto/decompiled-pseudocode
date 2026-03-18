/*
 * XREFs of ?GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x140065BD0
 * Callers:
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1400659C0 (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x140152B10 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall GetRealOwner(struct tagWND *a1)
{
  struct tagWND *result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx

  result = (struct tagWND *)*((_QWORD *)a1 + 15);
  v2 = *((_QWORD *)a1 + 13);
  if ( a1 == result )
    return a1;
  if ( result )
  {
    do
    {
      v3 = *((_QWORD *)result + 13);
      if ( v3 == v2 )
        break;
      result = (struct tagWND *)*((_QWORD *)result + 13);
    }
    while ( v3 );
  }
  return result;
}
