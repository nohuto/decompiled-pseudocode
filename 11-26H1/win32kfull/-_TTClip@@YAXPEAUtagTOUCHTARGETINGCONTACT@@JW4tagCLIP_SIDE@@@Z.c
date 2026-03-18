/*
 * XREFs of ?_TTClip@@YAXPEAUtagTOUCHTARGETINGCONTACT@@JW4tagCLIP_SIDE@@@Z @ 0x140250470
 * Callers:
 *     TouchTargetingClipContact @ 0x1400888E4 (TouchTargetingClipContact.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _TTClip(_DWORD *a1, int a2, int a3)
{
  __int64 result; // rax
  int v4; // r8d
  int v5; // r8d

  if ( a3 )
  {
    v4 = a3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 == 1 )
          a1[3] = a2;
      }
      else
      {
        a1[1] = a2;
      }
    }
    else
    {
      a1[2] = a2;
    }
  }
  else
  {
    *a1 = a2;
  }
  result = (unsigned int)a1[2];
  if ( *a1 >= (int)result || (result = (unsigned int)a1[3], a1[1] >= (int)result) )
    a1[45] = 0;
  return result;
}
