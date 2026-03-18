/*
 * XREFs of ?ulIndexedGetMatchFromPalentry@@YAKPEAVPALETTE@@K@Z @ 0x1400FC970
 * Callers:
 *     ?ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x14003366C (-ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1400FC590 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ulIndexedGetMatchFromPalentry(struct PALETTE *a1, int a2)
{
  _DWORD *v2; // r9
  __int64 v3; // rax
  int v4; // edx
  _DWORD *i; // rcx
  __int64 result; // rax
  unsigned int v7; // ecx

  if ( HIBYTE(a2) == 2 )
  {
    v7 = *((_DWORD *)a1 + 7);
    result = (unsigned __int8)a2;
    if ( (unsigned __int8)a2 >= v7 )
      return (unsigned __int8)a2 % v7;
  }
  else
  {
    v2 = (_DWORD *)*((_QWORD *)a1 + 14);
    v3 = *((unsigned int *)a1 + 7);
    v4 = a2 & 0xFFFFFF;
    for ( i = v2; i != &v2[v3]; ++i )
    {
      if ( (*i & 0xFFFFFF) == v4 )
        return (unsigned int)(i - v2);
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}
