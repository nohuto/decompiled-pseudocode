/*
 * XREFs of ?FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@AEBU_LUID@@@Z @ 0x1402485B8
 * Callers:
 *     ?AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z @ 0x1402481D4 (-AddMapping@InputObjectMap@@SAJAEBU_LUID@@PEBUCompositionInputObject@@@Z.c)
 *     ?GetTransform@InputObjectMap@@SAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x140248740 (-GetTransform@InputObjectMap@@SAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?RemoveMapping@InputObjectMap@@SAJAEBU_LUID@@W4RemoveRestriction@1@@Z @ 0x1402487E4 (-RemoveMapping@InputObjectMap@@SAJAEBU_LUID@@W4RemoveRestriction@1@@Z.c)
 * Callees:
 *     <none>
 */

struct InputObjectMapEntry *__fastcall InputObjectMap::FindEntry(const struct _LUID *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  __int64 UserInputMgrSessionState; // rax
  int v5; // r10d
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rdx

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
  v6 = v3 & (-1LL << (*(_BYTE *)(UserInputMgrSessionState + 20) & 0x1F));
  if ( !v5 )
    goto LABEL_6;
  v7 = *(_QWORD *)(UserInputMgrSessionState + 24)
     + 8LL
     * ((v5 - 1) & (HIBYTE(v6)
                  - 877075889
                  + 442596621 * (unsigned __int8)v6
                  + 37
                  * (BYTE6(v6)
                   + 37
                   * (BYTE5(v6) + 37 * (BYTE4(v6) + 37 * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (unsigned int)BYTE1(v6))))))));
  do
  {
    v7 = *(_QWORD *)v7;
    if ( (v7 & 1) != 0 )
      goto LABEL_6;
  }
  while ( v6 != ((-1LL << (*(_BYTE *)(UserInputMgrSessionState + 20) & 0x1F)) & *(_QWORD *)(v7 + 8)) );
LABEL_7:
  while ( v7 )
  {
    if ( *(_DWORD *)(v7 + 16) == a1->LowPart && *(_DWORD *)(v7 + 20) == a1->HighPart )
      return (struct InputObjectMapEntry *)v7;
    v8 = -1LL << (*(_DWORD *)(W32GetUserInputMgrSessionState() + 20) & 0x1F);
    while ( 1 )
    {
      v7 = *(_QWORD *)v7;
      if ( (v7 & 1) != 0 )
        break;
      if ( (v3 & v8) == (v8 & *(_QWORD *)(v7 + 8)) )
        goto LABEL_7;
    }
LABEL_6:
    v7 = 0LL;
  }
  return (struct InputObjectMapEntry *)v2;
}
