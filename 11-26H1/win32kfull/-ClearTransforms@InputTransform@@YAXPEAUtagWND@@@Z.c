/*
 * XREFs of ?ClearTransforms@InputTransform@@YAXPEAUtagWND@@@Z @ 0x14009A900
 * Callers:
 *     ?xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x14004544C (-xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ?FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z @ 0x14009A620 (-FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z.c)
 */

void __fastcall InputTransform::ClearTransforms(InputTransform *this, struct tagWND *a2)
{
  __int64 v2; // rdi
  struct tagHID_PAGEONLY_REQUEST ****i; // rdi
  CompositionObject *v5; // rcx

  v2 = *((_QWORD *)this + 34);
  if ( v2 )
  {
    for ( i = (struct tagHID_PAGEONLY_REQUEST ****)(v2 + 8);
          *i != (struct tagHID_PAGEONLY_REQUEST ***)i;
          FreeHidPageOnlyRequest(*i) )
    {
      ;
    }
    v5 = *(CompositionObject **)(*((_QWORD *)this + 34) + 96LL);
    if ( v5 )
    {
      CompositionObject::Release(v5);
      *(_QWORD *)(*((_QWORD *)this + 34) + 96LL) = 0LL;
    }
    Win32FreePool(*((void **)this + 34));
    *((_QWORD *)this + 34) = 0LL;
  }
}
