/*
 * XREFs of BRUSHOBJ_pvAllocRbrush @ 0x140214490
 * Callers:
 *     ?MulRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x140214440 (-MulRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     VerifierBRUSHOBJ_pvAllocRbrush @ 0x140331DF0 (VerifierBRUSHOBJ_pvAllocRbrush.c)
 * Callees:
 *     PALLOCMEM @ 0x140108044 (PALLOCMEM.c)
 */

PVOID __stdcall BRUSHOBJ_pvAllocRbrush(BRUSHOBJ *pbo, ULONG cj)
{
  __int64 v2; // rbx
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  unsigned int v5; // ebx
  PVOID result; // rax
  unsigned int *v7; // r8

  v2 = cj;
  v4 = Gre::Base::Globals((Gre::Base *)pbo);
  if ( *((_QWORD *)v4 + 3) )
  {
    v7 = (unsigned int *)_InterlockedExchange64((volatile __int64 *)v4 + 3, 0LL);
    if ( v7 )
    {
      if ( (int)v2 + 16 >= (unsigned int)v2 && v7[1] >= (unsigned __int64)(v2 + 16) )
      {
        result = v7 + 4;
        goto LABEL_4;
      }
      Win32FreePool(v7);
    }
  }
  v5 = v2 + 16;
  result = (PVOID)PALLOCMEM(v5, 1919050823LL);
  if ( result )
  {
    *((_DWORD *)result + 1) = v5;
    result = (char *)result + 16;
LABEL_4:
    pbo->pvRbrush = result;
  }
  return result;
}
