/*
 * XREFs of IsImmersiveAppIORestricted @ 0x140060C58
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsImmersiveAppIORestricted(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 808);
  return (v1 & 0x30) == 0x10 && (v1 & 0x200) == 0;
}
