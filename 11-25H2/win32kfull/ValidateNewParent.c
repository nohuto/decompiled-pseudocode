/*
 * XREFs of ValidateNewParent @ 0x140061A04
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ValidateParentDepth @ 0x140061AF8 (ValidateParentDepth.c)
 *     IsTopLevelParent @ 0x140061BA4 (IsTopLevelParent.c)
 *     ProtectedContentAccessCheck @ 0x140061BD0 (ProtectedContentAccessCheck.c)
 */

__int64 __fastcall ValidateNewParent(_QWORD *a1, _QWORD *a2, int a3)
{
  int v6; // ecx
  _QWORD *i; // rax
  _QWORD *j; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx

  if ( *(char *)(a1[5] + 19LL) < 0 || *(char *)(a2[5] + 19LL) < 0 || !(unsigned int)ValidateParentDepth(a1, a2) )
    goto LABEL_2;
  if ( !a3 && !(unsigned int)ProtectedContentAccessCheck(a1) )
  {
    v6 = 5;
    goto LABEL_3;
  }
  if ( a2[3] != a1[3]
    || !(unsigned int)IsTopLevelParent(a2)
    && (v10 = a2[5], (*(_BYTE *)(v10 + 233) & 8) == 0)
    && ((v11 = a1[5], *(_DWORD *)(v10 + 236) != *(_DWORD *)(v11 + 236))
     || ((*(_BYTE *)(v10 + 232) ^ *(_BYTE *)(v11 + 232)) & 0x40) != 0) )
  {
LABEL_2:
    v6 = 87;
LABEL_3:
    UserSetLastError(v6);
    return 0LL;
  }
  for ( i = a2; i; i = (_QWORD *)i[13] )
  {
    if ( a1 == i )
      goto LABEL_2;
  }
  for ( j = (_QWORD *)a2[15]; j; j = (_QWORD *)j[15] )
  {
    if ( a1 == j )
      goto LABEL_2;
  }
  return 1LL;
}
