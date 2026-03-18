/*
 * XREFs of ?FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@AEBU_LUID@@@Z @ 0x14023DE9C
 * Callers:
 *     ?AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z @ 0x14023DA94 (-AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z.c)
 *     ?GetTransform@InputObjectMap@@SAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x14023E038 (-GetTransform@InputObjectMap@@SAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?RemoveMapping@InputObjectMap@@SAJAEBU_LUID@@W4RemoveRestriction@1@@Z @ 0x14023E0E0 (-RemoveMapping@InputObjectMap@@SAJAEBU_LUID@@W4RemoveRestriction@1@@Z.c)
 * Callees:
 *     <none>
 */

struct InputObjectMapEntry *__fastcall InputObjectMap::FindEntry(const struct _LUID *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  __int64 UserInputMgrSessionState; // rax
  int v5; // r11d
  __int64 v6; // r10
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v11; // [rsp+30h] [rbp+8h]

  v2 = 0LL;
  v3 = HIBYTE(a1->HighPart)
     + 37
     * (BYTE2(a1->HighPart)
      + 37
      * (BYTE1(a1->HighPart)
       + 37
       * (LOBYTE(a1->HighPart)
        + 37
        * (HIBYTE(a1->LowPart)
         + 37 * (BYTE2(a1->LowPart) + 37 * (BYTE1(a1->LowPart) + 37 * (LOBYTE(a1->LowPart) + 11623883LL)))))));
  UserInputMgrSessionState = W32GetUserInputMgrSessionState();
  v5 = *(_DWORD *)(UserInputMgrSessionState + 20) >> 5;
  v6 = -1LL << (*(_BYTE *)(UserInputMgrSessionState + 20) & 0x1F);
  v7 = v6 & v3;
  if ( !v5 )
    goto LABEL_6;
  v11 = v6 & v3;
  v8 = *(_QWORD *)(UserInputMgrSessionState + 24)
     + 8LL
     * ((37
       * (BYTE6(v11)
        + 37
        * (BYTE5(v11)
         + 37
         * (BYTE4(v11)
          + 37 * (BYTE3(v11) + 37 * (BYTE2(v11) + 37 * (BYTE1(v11) + 37 * ((unsigned __int8)v7 + 11623883)))))))
       + HIBYTE(v11)) & (unsigned int)(v5 - 1));
  do
  {
    v8 = *(_QWORD *)v8;
    if ( (v8 & 1) != 0 )
      goto LABEL_6;
  }
  while ( v7 != (v6 & *(_QWORD *)(v8 + 8)) );
LABEL_7:
  while ( v8 )
  {
    if ( *(_DWORD *)(v8 + 16) == a1->LowPart && *(_DWORD *)(v8 + 20) == a1->HighPart )
      return (struct InputObjectMapEntry *)v8;
    v9 = -1LL << (*(_DWORD *)(W32GetUserInputMgrSessionState() + 20) & 0x1F);
    while ( 1 )
    {
      v8 = *(_QWORD *)v8;
      if ( (v8 & 1) != 0 )
        break;
      if ( (v3 & v9) == (v9 & *(_QWORD *)(v8 + 8)) )
        goto LABEL_7;
    }
LABEL_6:
    v8 = 0LL;
  }
  return (struct InputObjectMapEntry *)v2;
}
