/*
 * XREFs of NtCompositionSetDropTarget @ 0x1400A36F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1400A361C (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1400A4600 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 */

__int64 __fastcall NtCompositionSetDropTarget(void *a1, void *a2, void *a3)
{
  int v5; // ebx
  int v6; // r8d
  PVOID v7; // rdi
  PVOID Object; // [rsp+20h] [rbp-A8h] BYREF
  _QWORD Src[3]; // [rsp+28h] [rbp-A0h] BYREF
  __int128 v11; // [rsp+40h] [rbp-88h] BYREF
  __int128 v12; // [rsp+50h] [rbp-78h]
  __int128 v13; // [rsp+60h] [rbp-68h]
  __int64 v14; // [rsp+70h] [rbp-58h]
  __int128 v15; // [rsp+78h] [rbp-50h] BYREF
  __int128 v16; // [rsp+88h] [rbp-40h]
  __int128 v17; // [rsp+98h] [rbp-30h]
  __int64 v18; // [rsp+A8h] [rbp-20h]

  Src[1] = a1;
  Src[2] = a3;
  v5 = 0;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  Src[0] = 0LL;
  Object = 0LL;
  if ( a2 )
  {
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    RtlCopyFromUser(&v11, a2, 0x38uLL);
    v15 = v11;
    v16 = v12;
    v17 = v13;
    v18 = v14;
  }
  else
  {
    v5 = -1073741811;
  }
  if ( v5 >= 0 )
  {
    v5 = CompositionInputObject::ResolveHandle(a1, 2u, 1, (struct CompositionInputObject **)&Object);
    v7 = Object;
    if ( v5 >= 0 )
    {
      Src[0] = *((_QWORD *)Object + 2);
      v5 = CompositionInputObject::SetDropTarget((char *)Object, (const struct COMPOSITION_INPUT_QUEUE *)&v15, v6);
      ObfDereferenceObject(v7);
      if ( v5 >= 0 )
      {
        if ( a3 )
          RtlCopyToUser(a3, Src, 8uLL);
      }
    }
  }
  return (unsigned int)v5;
}
