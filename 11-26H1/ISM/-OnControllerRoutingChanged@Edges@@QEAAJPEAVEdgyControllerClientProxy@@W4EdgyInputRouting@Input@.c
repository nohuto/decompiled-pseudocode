/*
 * XREFs of ?OnControllerRoutingChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyInputRouting@Input@Internal@UI@Windows@@@Z @ 0x1801AEB5C
 * Callers:
 *     ?OnRoutingChanged@EdgyControllerClientProxy@@MEAAJXZ @ 0x18015A1A0 (-OnRoutingChanged@EdgyControllerClientProxy@@MEAAJXZ.c)
 *     ?RegisterControllerClient@EdgyConnection@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801ACBEC (-RegisterControllerClient@EdgyConnection@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 * Callees:
 *     ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x1801AE248 (-FindEdge@Edges@@AEBAHPEBG@Z.c)
 */

__int64 __fastcall Edges::OnControllerRoutingChanged(Edges *a1, __int64 a2, int a3)
{
  const unsigned __int16 *v3; // rdx
  unsigned int v6; // edi
  int Edge; // eax

  v3 = (const unsigned __int16 *)(a2 + 88);
  v6 = -2147024809;
  if ( *((_QWORD *)v3 + 3) > 7uLL )
    v3 = *(const unsigned __int16 **)v3;
  Edge = Edges::FindEdge(a1, v3);
  if ( Edge >= 0 )
  {
    if ( !a3 )
    {
      *(_DWORD *)(((__int64)Edge << 7) + *(_QWORD *)a1 + 68) = 0;
      return 0;
    }
    if ( a3 == 1 )
    {
      *(_DWORD *)(((__int64)Edge << 7) + *(_QWORD *)a1 + 68) = 1;
      return 0;
    }
  }
  return v6;
}
