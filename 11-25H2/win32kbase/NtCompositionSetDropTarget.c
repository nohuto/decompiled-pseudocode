/*
 * XREFs of NtCompositionSetDropTarget @ 0x14012EAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x140068B20 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x14013676C (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     RtlCopyToUser @ 0x1402C9008 (RtlCopyToUser.c)
 */

__int64 __fastcall NtCompositionSetDropTarget(void *a1, void *a2, void *a3)
{
  int v5; // ebx
  PVOID v6; // rdi
  PVOID Object; // [rsp+20h] [rbp-A8h] BYREF
  _QWORD Src[3]; // [rsp+28h] [rbp-A0h] BYREF
  __int128 v10; // [rsp+40h] [rbp-88h] BYREF
  __int128 v11; // [rsp+50h] [rbp-78h]
  __int128 v12; // [rsp+60h] [rbp-68h]
  __int64 v13; // [rsp+70h] [rbp-58h]
  __int128 v14; // [rsp+78h] [rbp-50h] BYREF
  __int128 v15; // [rsp+88h] [rbp-40h]
  __int128 v16; // [rsp+98h] [rbp-30h]
  __int64 v17; // [rsp+A8h] [rbp-20h]

  Src[1] = a1;
  Src[2] = a3;
  v5 = 0;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  Src[0] = 0LL;
  Object = 0LL;
  if ( a2 )
  {
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    RtlCopyFromUser(&v10, a2, 0x38uLL);
    v14 = v10;
    v15 = v11;
    v16 = v12;
    v17 = v13;
  }
  else
  {
    v5 = -1073741811;
  }
  if ( v5 >= 0 )
  {
    v5 = CompositionInputObject::ResolveHandle(a1, 2u, 1, (struct CompositionInputObject **)&Object);
    v6 = Object;
    if ( v5 >= 0 )
    {
      Src[0] = *((_QWORD *)Object + 2);
      v5 = CompositionInputObject::SetDropTarget(Object, (const struct COMPOSITION_INPUT_QUEUE *)&v14);
      ObfDereferenceObject(v6);
      if ( v5 >= 0 )
      {
        if ( a3 )
          RtlCopyToUser(a3, Src, 8uLL);
      }
    }
  }
  return (unsigned int)v5;
}
