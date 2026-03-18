/*
 * XREFs of ?GetTransform@InputObjectMap@@SAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x140248740
 * Callers:
 *     ?MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z @ 0x1401D02FC (-MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z.c)
 * Callees:
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x14006EF5C (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@AEBU_LUID@@@Z @ 0x1402485B8 (-FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@AEBU_LUID@@@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall InputObjectMap::GetTransform(const struct _LUID *a1, struct tagINPUT_TRANSFORM *a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  struct W32_PUSH_LOCK *v7; // rbx
  struct InputObjectMapEntry *Entry; // rax
  unsigned int Transform; // edi
  _OWORD v11[4]; // [rsp+20h] [rbp-48h] BYREF

  memset(v11, 0, sizeof(v11));
  v4 = v11[1];
  *(_OWORD *)a2 = v11[0];
  v5 = v11[2];
  *((_OWORD *)a2 + 1) = v4;
  v6 = v11[3];
  *((_OWORD *)a2 + 2) = v5;
  *((_OWORD *)a2 + 3) = v6;
  v7 = (struct W32_PUSH_LOCK *)(W32GetUserInputMgrSessionState() + 8);
  W32AcquirePushLockExclusiveEx(v7);
  Entry = InputObjectMap::FindEntry(a1);
  if ( Entry )
    Transform = CompositionInputObject::QueryTransform(*((CompositionInputObject **)Entry + 3), a2);
  else
    Transform = -1073741275;
  W32ReleasePushLockExclusiveEx(v7);
  return Transform;
}
