/*
 * XREFs of ulGetMatchingIndexFromColorref @ 0x140032970
 * Callers:
 *     <none>
 * Callees:
 *     ?ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x14003366C (-ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 *     ?bIsPalDefault@XEPALOBJ@@QEBAHXZ @ 0x1400C38C0 (-bIsPalDefault@XEPALOBJ@@QEBAHXZ.c)
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1400FC590 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 */

tagPALETTEENTRY __fastcall ulGetMatchingIndexFromColorref(__int64 a1, __int64 a2, tagPALETTEENTRY a3)
{
  __int64 SessionState; // rax
  __int64 v7; // rbp
  tagPALETTEENTRY v8; // edx
  tagPALETTEENTRY result; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF
  tagPALETTEENTRY v17; // [rsp+50h] [rbp+18h]

  v16 = a2;
  v15 = a1;
  SessionState = W32GetSessionState(a1);
  v17 = a3;
  v7 = *(_QWORD *)(SessionState + 88);
  if ( !a1 || (*(_DWORD *)(a1 + 24) & 0x800) != 0 )
  {
    if ( (*(_DWORD *)&a3 & 0x3000000) == 0 )
      goto LABEL_9;
    if ( (*(_DWORD *)&a3 & 0x1000000) != 0 )
    {
      v10 = (unsigned int)*(unsigned __int16 *)&a3.peRed < *(_DWORD *)(a2 + 28) ? *(unsigned __int16 *)&a3.peRed : 0;
    }
    else
    {
      v11 = *(unsigned int *)(a2 + 96);
      v17.peFlags = 0;
      v10 = XEPALOBJ::ulDispatchGFPEFunction(&v16, v11, *(unsigned int *)&v17);
    }
    if ( (unsigned int)XEPALOBJ::bIsPalDefault((XEPALOBJ *)&v16) )
    {
      result = (tagPALETTEENTRY)(v10 + 236);
      if ( v10 < 0xA )
        return (tagPALETTEENTRY)v10;
      return result;
    }
    if ( a1 )
      v12 = *(_QWORD *)(a2 + 80);
    else
      v12 = *(_QWORD *)(a2 + 72);
    v13 = v10;
    if ( v12 )
      return (tagPALETTEENTRY)*(unsigned __int8 *)(v10 + v12 + 4);
    a3 = *(tagPALETTEENTRY *)(*(_QWORD *)(a2 + 112) + 4LL * v10);
    v14 = HIBYTE(*(_DWORD *)(*(_QWORD *)(a2 + 112) + 4 * v13));
    v17 = a3;
    if ( (_BYTE)v14 != 2 )
    {
LABEL_9:
      if ( (*(_DWORD *)&a3 & 0x10FF0000) != 0x10FF0000 )
      {
        v17.peFlags = 0;
        result = v17;
        if ( v17 == 0xFFFFFF )
        {
          result = (tagPALETTEENTRY)19;
        }
        else
        {
          if ( v17 )
          {
            v15 = *(_QWORD *)(v7 + 3872);
            result = (tagPALETTEENTRY)XEPALOBJ::ulGetMatchFromPalentry((XEPALOBJ *)&v15, v17);
          }
          if ( (unsigned int)(*(_DWORD *)&result - 10) > 0xFFFFFFF4 )
            return result;
        }
        *(_DWORD *)&result += 236;
        return result;
      }
    }
    return (tagPALETTEENTRY)a3.peRed;
  }
  if ( (*(_DWORD *)&a3 & 0x1000000) != 0 )
  {
    v8 = *(tagPALETTEENTRY *)(*(_QWORD *)(a2 + 112)
                            + 4LL
                            * (*(unsigned __int16 *)&a3.peRed & (unsigned int)-((unsigned int)*(unsigned __int16 *)&a3.peRed < *(_DWORD *)(a2 + 28))));
  }
  else
  {
    if ( (*(_DWORD *)&a3 & 0x10FF0000) == 0x10FF0000 )
      return (unsigned int)a3.peRed < *(_DWORD *)(a1 + 28) ? (tagPALETTEENTRY)a3.peRed : 0;
    v17.peFlags = 0;
    v8 = v17;
  }
  return (tagPALETTEENTRY)XEPALOBJ::ulGetMatchFromPalentry((XEPALOBJ *)&v15, v8);
}
