/*
 * XREFs of CmFcpManagerAddBufferIntoPublishListAndSetPublishState @ 0x140AC1AA0
 * Callers:
 *     CmFcpManagerPublishFeatureUsageData @ 0x140AC18DC (CmFcpManagerPublishFeatureUsageData.c)
 *     CmFcManagerStartRuntimePhase @ 0x140CF6E68 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmFcpManagerAddBufferIntoPublishListAndSetPublishState(__int64 a1, __int64 a2)
{
  int v2; // eax
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // r8
  bool result; // al

  v2 = *(_DWORD *)(a1 + 1816);
  v3 = (_QWORD *)(a1 + 1432);
  *(_DWORD *)(a2 + 24) = (v2 & 0xFFFFFFE3 | 4) >> 2;
  v4 = (_QWORD *)v3[1];
  v5 = (_QWORD *)*v3;
  if ( (_QWORD *)*v4 != v3 )
    __fastfail(3u);
  *(_QWORD *)(a2 + 8) = v4;
  *(_QWORD *)a2 = v3;
  *v4 = a2;
  result = v5 == v3;
  v3[1] = a2;
  return result;
}
