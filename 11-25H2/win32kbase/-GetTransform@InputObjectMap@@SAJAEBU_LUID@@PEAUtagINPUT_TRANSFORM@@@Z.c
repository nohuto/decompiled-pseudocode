/*
 * XREFs of ?GetTransform@InputObjectMap@@SAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x14023E038
 * Callers:
 *     ?MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z @ 0x1401AE19C (-MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z.c)
 * Callees:
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x140065C80 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@AEBU_LUID@@@Z @ 0x14023DE9C (-FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@AEBU_LUID@@@Z.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall InputObjectMap::GetTransform(const struct _LUID *a1, struct tagINPUT_TRANSFORM *a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int64 UserInputMgrSessionState; // rbx
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
  UserInputMgrSessionState = W32GetUserInputMgrSessionState();
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(UserInputMgrSessionState + 8), 0);
  Entry = InputObjectMap::FindEntry(a1);
  if ( Entry )
    Transform = CompositionInputObject::QueryTransform(*((CompositionInputObject **)Entry + 3), a2);
  else
    Transform = -1073741275;
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(UserInputMgrSessionState + 8), 0LL);
  return Transform;
}
