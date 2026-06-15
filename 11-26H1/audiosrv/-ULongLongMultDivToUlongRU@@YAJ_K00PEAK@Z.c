/*
 * XREFs of ?ULongLongMultDivToUlongRU@@YAJ_K00PEAK@Z @ 0x180162190
 * Callers:
 *     ?HnsToBlocksRU@@YAJ_KKKPEAK@Z @ 0x180162148 (-HnsToBlocksRU@@YAJ_KKKPEAK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180071B4C (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 */

__int64 __fastcall ULongLongMultDivToUlongRU(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned int *a4)
{
  int v4; // ebx
  _DWORD *v5; // r10
  unsigned __int64 v6; // r11
  __int64 v7; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v12; // [rsp+48h] [rbp+20h] BYREF

  v12 = 0LL;
  *a4 = -1;
  v4 = ULongLongMult(a1, a2, &v12);
  if ( v4 < 0 )
  {
    v7 = 45LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\packetsizeconstraintsutil.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  if ( v12 )
  {
    v9 = (v12 - 1) / v6;
    v10 = v9 + 1;
    if ( v9 + 1 < v9 )
    {
      v4 = -2147024362;
      v7 = 53LL;
      goto LABEL_3;
    }
    if ( v10 > 0xFFFFFFFF )
    {
      v4 = -2147024362;
      *v5 = -1;
      v7 = 55LL;
      goto LABEL_3;
    }
  }
  else
  {
    LODWORD(v10) = 0;
  }
  *v5 = v10;
  return 0LL;
}
